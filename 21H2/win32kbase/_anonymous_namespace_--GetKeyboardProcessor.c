/*
 * XREFs of _anonymous_namespace_::GetKeyboardProcessor @ 0x1C003E734
 * Callers:
 *     xxxKeyEventEx @ 0x1C003D9F0 (xxxKeyEventEx.c)
 *     GetKeyboardInputRoutingPolicy @ 0x1C003ED30 (GetKeyboardInputRoutingPolicy.c)
 *     ?GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH111@Z @ 0x1C004A5F0 (-GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH111@Z.c)
 *     SetKeyboardInputRoutingPolicy @ 0x1C00C2C34 (SetKeyboardInputRoutingPolicy.c)
 *     ApplyGatheredKeyboardDeviceCount @ 0x1C00C55D0 (ApplyGatheredKeyboardDeviceCount.c)
 *     NtMITSetKeyboardOverriderState @ 0x1C0155B50 (NtMITSetKeyboardOverriderState.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 anonymous_namespace_::GetKeyboardProcessor()
{
  if ( qword_1C0288048 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_1C0288048 + 8LL))(qword_1C0288048);
  else
    return 0LL;
}
