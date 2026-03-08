/*
 * XREFs of NtUserSetWindowRgnEx @ 0x1C01DE310
 * Callers:
 *     <none>
 * Callees:
 *     SelectWindowRgn @ 0x1C00275FC (SelectWindowRgn.c)
 *     MirrorRegion @ 0x1C002779C (MirrorRegion.c)
 *     xxxSetWindowRgn @ 0x1C0028E44 (xxxSetWindowRgn.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetWindowRgnEx(__int64 a1, __int64 a2, char a3)
{
  unsigned int v5; // edi
  __int64 v7; // rax
  __int64 v8; // rcx
  struct tagWND *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 CurrentProcess; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // rcx
  __int128 v21; // [rsp+20h] [rbp-28h] BYREF
  __int64 v22; // [rsp+30h] [rbp-18h]

  v21 = 0LL;
  v22 = 0LL;
  v5 = 1;
  EnterCrit(0LL, 1LL);
  v7 = ValidateHwnd(a1);
  v9 = (struct tagWND *)v7;
  if ( !v7 || (v8 = (*(_WORD *)(*(_QWORD *)(v7 + 40) + 42LL) & 0x2FFFu) - 669, (v8 & 0xFFFFFFFD) == 0) )
  {
    v5 = 0;
    goto LABEL_20;
  }
  *(_QWORD *)&v21 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v21;
  *((_QWORD *)&v21 + 1) = v7;
  HMLockObject(v7);
  CurrentProcess = PsGetCurrentProcess(v11, v10, v12);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    if ( (a3 & 4) != 0 )
    {
      if ( a2 )
      {
        v17 = UserValidateCopyRgn(a2);
        v18 = v17;
        if ( !v17
          || (v19 = *((_QWORD *)v9 + 5), (*(_BYTE *)(v19 + 26) & 0x40) != 0)
          && v17 > 2
          && (!(unsigned int)GreOffsetRgn(
                               v17,
                               (unsigned int)-*(_DWORD *)(v19 + 88),
                               (unsigned int)-*(_DWORD *)(v19 + 92))
           || !(unsigned int)MirrorRegion((__int64)v9, v18, 0)
           || !(unsigned int)GreOffsetRgn(
                               v18,
                               *(unsigned int *)(*((_QWORD *)v9 + 5) + 88LL),
                               *(unsigned int *)(*((_QWORD *)v9 + 5) + 92LL))) )
        {
          v5 = 0;
          goto LABEL_18;
        }
      }
      else
      {
        v18 = 1LL;
      }
      SelectWindowRgn(v9, v18, 0);
      goto LABEL_18;
    }
    v5 = xxxSetWindowRgn((__int64)v9, a2, a3 & 2);
  }
  else
  {
    v5 = 0;
    UserSetLastError(5);
  }
LABEL_18:
  ThreadUnlock1(v15, v14, v16);
LABEL_20:
  UserSessionSwitchLeaveCrit(v8);
  return v5;
}
