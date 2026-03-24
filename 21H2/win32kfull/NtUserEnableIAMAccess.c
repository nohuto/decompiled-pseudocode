/*
 * XREFs of NtUserEnableIAMAccess @ 0x1C0037790
 * Callers:
 *     <none>
 * Callees:
 *     _EnableIAMThreadAccess @ 0x1C0037894 (_EnableIAMThreadAccess.c)
 *     WPP_RECORDER_SF_ @ 0x1C004DA78 (WPP_RECORDER_SF_.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 */

__int64 __fastcall NtUserEnableIAMAccess(__int64 *a1, unsigned int a2)
{
  __int64 v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebx
  __int64 v9; // rcx

  EnterCrit(0LL, 1LL);
  if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
    a1 = (__int64 *)MmUserProbeAddress;
  v4 = *a1;
  v5 = *(_QWORD **)(gptiCurrent + 456LL);
  v6 = v5[1];
  v7 = *(_QWORD *)(v6 + 176);
  v8 = 0;
  if ( *(_QWORD *)(gptiCurrent + 424LL) == v7 && v7 && *(_QWORD *)(v6 + 168) && v5[36] && v4 == v5[35] )
  {
    v8 = EnableIAMThreadAccess(gptiCurrent, a2);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_(
        (unsigned int)&WPP_RECORDER_INITIALIZED,
        v4,
        2,
        24,
        (__int64)&WPP_6c283040767a3b01506b934f69f549d7_Traceguids);
    }
    UserSetLastError(5LL);
  }
  UserSessionSwitchLeaveCrit(v9);
  return v8;
}
