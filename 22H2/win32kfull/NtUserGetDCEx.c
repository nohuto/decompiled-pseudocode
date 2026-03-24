/*
 * XREFs of NtUserGetDCEx @ 0x1C0114AB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtUserGetDCEx(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  _QWORD *v9; // rsi
  __int64 DCEx; // rdi
  int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rcx

  EnterSharedCrit(0LL, 1LL);
  if ( a2 && !(unsigned int)GreIsValidRegion(a2) || a2 == ghrgnGDC || (a3 & 0xFFDAF800) != 0 )
  {
    v13 = 87LL;
    goto LABEL_22;
  }
  if ( !a1 )
  {
    v9 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL) + 24LL);
    if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 488) & 0x20000000) != 0 )
      v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 424) + 768LL)
                      + 24LL) & 1;
    else
      v11 = 0;
    if ( !v11 )
      goto LABEL_17;
    v12 = v9 ? *v9 : 0LL;
    if ( ValidateHwnd(v12) )
      goto LABEL_17;
    v13 = 5LL;
LABEL_22:
    DCEx = 0LL;
    UserSetLastError(v13, v6, v7);
    goto LABEL_23;
  }
  v9 = (_QWORD *)ValidateHwnd(a1);
  if ( !v9 )
  {
    DCEx = 0LL;
    goto LABEL_23;
  }
LABEL_17:
  DCEx = 0LL;
  if ( !a2 || (unsigned int)GreLockRegion(a2) )
  {
    DCEx = _GetDCEx(v9, a2, a3);
    if ( a2 )
      GreUnlockRegion(a2);
  }
LABEL_23:
  UserSessionSwitchLeaveCrit(v8);
  return DCEx;
}
