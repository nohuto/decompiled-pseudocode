/*
 * XREFs of _anonymous_namespace_::GetKeyboardProcessor @ 0x1C004DC74
 * Callers:
 *     GetKeyboardInputRoutingPolicy @ 0x1C004CFB0 (GetKeyboardInputRoutingPolicy.c)
 *     xxxKeyEventEx @ 0x1C004CFD0 (xxxKeyEventEx.c)
 *     SetKeyboardInputRoutingPolicy @ 0x1C00B6390 (SetKeyboardInputRoutingPolicy.c)
 *     ApplyGatheredKeyboardDeviceCount @ 0x1C00B8270 (ApplyGatheredKeyboardDeviceCount.c)
 *     ?GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH111@Z @ 0x1C00B8AC8 (-GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH111@Z.c)
 *     NtMITSetKeyboardOverriderState @ 0x1C012B990 (NtMITSetKeyboardOverriderState.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 anonymous_namespace_::GetKeyboardProcessor()
{
  if ( qword_1C0245048 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_1C0245048 + 8LL))(qword_1C0245048);
  else
    return 0LL;
}
