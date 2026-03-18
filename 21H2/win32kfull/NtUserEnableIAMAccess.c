/*
 * XREFs of NtUserEnableIAMAccess @ 0x1C00F8790
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _EnableIAMThreadAccess @ 0x1C00F88D0 (_EnableIAMThreadAccess.c)
 */

__int64 __fastcall NtUserEnableIAMAccess(__int64 *a1, unsigned int a2)
{
  __int64 v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebx
  __int64 v9; // rcx
  _UNKNOWN **v11; // r8

  EnterCrit(0LL, 0LL);
  if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
    a1 = (__int64 *)MmUserProbeAddress;
  v4 = *a1;
  v5 = *(_QWORD **)(gptiCurrent + 456LL);
  v6 = v5[1];
  v7 = *(_QWORD *)(v6 + 176);
  v8 = 0;
  if ( *(_QWORD *)(gptiCurrent + 424LL) == v7 && v7 && *(_QWORD *)(v6 + 168) && v5[35] && v4 == v5[34] )
  {
    v8 = EnableIAMThreadAccess(gptiCurrent, a2);
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v4) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v4) = 0;
    }
    v11 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v4,
        (_DWORD)v11,
        29,
        4,
        2,
        29,
        (__int64)&WPP_1a1985ee69fe3ed3820bb61b1edf259e_Traceguids);
    }
    UserSetLastError(5LL, v4);
  }
  UserSessionSwitchLeaveCrit(v9);
  return v8;
}
