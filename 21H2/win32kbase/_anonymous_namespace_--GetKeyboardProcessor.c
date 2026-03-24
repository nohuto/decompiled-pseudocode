/*
 * XREFs of _anonymous_namespace_::GetKeyboardProcessor @ 0x1C004CC74
 * Callers:
 *     GetKeyboardInputRoutingPolicy @ 0x1C004BFB0 (GetKeyboardInputRoutingPolicy.c)
 *     xxxKeyEventEx @ 0x1C004BFD0 (xxxKeyEventEx.c)
 *     SetKeyboardInputRoutingPolicy @ 0x1C00B6050 (SetKeyboardInputRoutingPolicy.c)
 *     ApplyGatheredKeyboardDeviceCount @ 0x1C00B7F50 (ApplyGatheredKeyboardDeviceCount.c)
 *     ?GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH111@Z @ 0x1C00B87C8 (-GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH111@Z.c)
 *     NtMITSetKeyboardOverriderState @ 0x1C012B6C0 (NtMITSetKeyboardOverriderState.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 anonymous_namespace_::GetKeyboardProcessor()
{
  if ( qword_1C0246048 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_1C0246048 + 8LL))(qword_1C0246048);
  else
    return 0LL;
}
