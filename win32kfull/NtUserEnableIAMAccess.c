/*
 * XREFs of NtUserEnableIAMAccess @ 0x1C009A0C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     _EnableIAMThreadAccess @ 0x1C009A210 (_EnableIAMThreadAccess.c)
 */

__int64 __fastcall NtUserEnableIAMAccess(__int64 *a1, unsigned int a2)
{
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r9
  int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  _UNKNOWN **v12; // r8

  EnterCrit(0LL, 0LL);
  if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
    a1 = (__int64 *)MmUserProbeAddress;
  v4 = *a1;
  v5 = *(_QWORD **)(gptiCurrent + 456LL);
  v6 = v5[1];
  v7 = *(_QWORD *)(v6 + 176);
  v8 = 0;
  if ( *(_QWORD *)(gptiCurrent + 424LL) == v7 && v7 && *(_QWORD *)(v6 + 168) )
  {
    v9 = 0;
    if ( v5[35] )
      LOBYTE(v9) = v4 == v5[34];
  }
  else
  {
    v9 = 0;
  }
  if ( v9 )
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
    v12 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v4,
        (_DWORD)v12,
        30,
        4,
        2,
        30,
        (__int64)&WPP_dad53d594ec237dec63fae8c26dffb95_Traceguids);
    }
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v10);
  return v8;
}
