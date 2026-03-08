/*
 * XREFs of _anonymous_namespace_::GetKeyboardProcessor @ 0x1C0080388
 * Callers:
 *     ?GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH11@Z @ 0x1C002F9CC (-GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH11@Z.c)
 *     xxxKeyEventEx @ 0x1C007F2E0 (xxxKeyEventEx.c)
 *     GetKeyboardInputRoutingPolicy @ 0x1C0081140 (GetKeyboardInputRoutingPolicy.c)
 *     SetKeyboardInputRoutingPolicy @ 0x1C00CD7B4 (SetKeyboardInputRoutingPolicy.c)
 *     ApplyGatheredKeyboardDeviceCount @ 0x1C00D2520 (ApplyGatheredKeyboardDeviceCount.c)
 *     NtMITSetKeyboardOverriderState @ 0x1C016BEE0 (NtMITSetKeyboardOverriderState.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall anonymous_namespace_::GetKeyboardProcessor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 3352);
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  else
    return 0LL;
}
