/*
 * XREFs of NtUserSetWindowRgnEx @ 0x1C01DD2E0
 * Callers:
 *     <none>
 * Callees:
 *     MirrorRegion @ 0x1C002561C (MirrorRegion.c)
 *     xxxSetWindowRgn @ 0x1C002656C (xxxSetWindowRgn.c)
 *     SelectWindowRgn @ 0x1C0077C08 (SelectWindowRgn.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetWindowRgnEx(__int64 a1, __int64 a2, char a3)
{
  unsigned int v5; // edi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct tagWND *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 CurrentProcess; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rbx
  __int64 v22; // rcx
  __int128 v24; // [rsp+20h] [rbp-28h] BYREF
  __int64 v25; // [rsp+30h] [rbp-18h]

  v24 = 0LL;
  v25 = 0LL;
  v5 = 1;
  EnterCrit(0LL, 1LL);
  v7 = ValidateHwnd(a1);
  v12 = (struct tagWND *)v7;
  if ( !v7 || (v9 = (*(_WORD *)(*(_QWORD *)(v7 + 40) + 42LL) & 0x2FFFu) - 669, (v9 & 0xFFFFFFFD) == 0) )
  {
    v5 = 0;
    goto LABEL_20;
  }
  *(_QWORD *)&v24 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v24;
  *((_QWORD *)&v24 + 1) = v7;
  HMLockObject(v7);
  CurrentProcess = PsGetCurrentProcess(v14, v13, v15);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    if ( (a3 & 4) != 0 )
    {
      if ( a2 )
      {
        v20 = UserValidateCopyRgn(a2);
        v21 = v20;
        if ( !v20
          || (v22 = *((_QWORD *)v12 + 5), (*(_BYTE *)(v22 + 26) & 0x40) != 0)
          && v20 > 2
          && (!(unsigned int)GreOffsetRgn(
                               v20,
                               (unsigned int)-*(_DWORD *)(v22 + 88),
                               (unsigned int)-*(_DWORD *)(v22 + 92))
           || !(unsigned int)MirrorRegion((__int64)v12, v21, 0)
           || !(unsigned int)GreOffsetRgn(
                               v21,
                               *(unsigned int *)(*((_QWORD *)v12 + 5) + 88LL),
                               *(unsigned int *)(*((_QWORD *)v12 + 5) + 92LL))) )
        {
          v5 = 0;
          goto LABEL_18;
        }
      }
      else
      {
        v21 = 1LL;
      }
      SelectWindowRgn(v12, v21, 0);
      goto LABEL_18;
    }
    v5 = xxxSetWindowRgn((__int64)v12, a2, a3 & 2);
  }
  else
  {
    v5 = 0;
    UserSetLastError(5);
  }
LABEL_18:
  ThreadUnlock1(v18, v17, v19);
LABEL_20:
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v5;
}
