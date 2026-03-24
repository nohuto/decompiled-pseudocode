/*
 * XREFs of NtUserSetWindowRgnEx @ 0x1C02031A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     xxxSetWindowRgn @ 0x1C010E240 (xxxSetWindowRgn.c)
 *     MirrorRegion @ 0x1C010E31C (MirrorRegion.c)
 *     SelectWindowRgn @ 0x1C0111AAC (SelectWindowRgn.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetWindowRgnEx(__int64 a1, __int64 a2, char a3)
{
  unsigned int v5; // edi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 CurrentProcess; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // rcx
  __int128 v21; // [rsp+20h] [rbp-28h] BYREF
  __int64 v22; // [rsp+30h] [rbp-18h]

  v21 = 0LL;
  v22 = 0LL;
  v5 = 1;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v7 = ValidateHwnd(a1);
  v9 = v7;
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
          || (v19 = *(_QWORD *)(v9 + 40), (*(_BYTE *)(v19 + 26) & 0x40) != 0)
          && v17 > 2
          && (!(unsigned int)GreOffsetRgn(
                               v17,
                               (unsigned int)-*(_DWORD *)(v19 + 88),
                               (unsigned int)-*(_DWORD *)(v19 + 92))
           || !(unsigned int)MirrorRegion(v9, v18, 0)
           || !(unsigned int)GreOffsetRgn(
                               v18,
                               *(unsigned int *)(*(_QWORD *)(v9 + 40) + 88LL),
                               *(unsigned int *)(*(_QWORD *)(v9 + 40) + 92LL))) )
        {
          v5 = 0;
          goto LABEL_18;
        }
      }
      else
      {
        v18 = 1LL;
      }
      SelectWindowRgn((struct tagWND *)v9, (HRGN)v18, 0);
      goto LABEL_18;
    }
    v5 = xxxSetWindowRgn((_QWORD *)v9, a2, a3 & 2);
  }
  else
  {
    v5 = 0;
    UserSetLastError(5LL, v14, v15);
  }
LABEL_18:
  ThreadUnlock1(v16);
LABEL_20:
  UserSessionSwitchLeaveCrit(v8);
  return v5;
}
