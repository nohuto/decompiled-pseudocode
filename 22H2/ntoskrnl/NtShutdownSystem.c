/*
 * XREFs of NtShutdownSystem @ 0x1405B2800
 * Callers:
 *     <none>
 * Callees:
 *     ExRebootSystemForRecovery @ 0x1405B2554 (ExRebootSystemForRecovery.c)
 *     SeSinglePrivilegeCheck @ 0x140627A60 (SeSinglePrivilegeCheck.c)
 *     NtSetSystemPowerState @ 0x140999120 (NtSetSystemPowerState.c)
 */

NTSTATUS __cdecl NtShutdownSystem(SHUTDOWN_ACTION Action)
{
  __int32 v1; // ecx
  __int32 v2; // ecx
  KPROCESSOR_MODE PreviousMode; // dl
  POWER_ACTION v5; // ecx

  if ( Action == ShutdownNoReboot )
  {
    v5 = PowerActionShutdown;
    return NtSetSystemPowerState(v5, PowerSystemSleeping3, 0xC0000004);
  }
  v1 = Action - 1;
  if ( !v1 )
  {
    v5 = PowerActionShutdownReset;
    return NtSetSystemPowerState(v5, PowerSystemSleeping3, 0xC0000004);
  }
  v2 = v1 - 1;
  if ( !v2 )
  {
    v5 = PowerActionShutdownOff;
    return NtSetSystemPowerState(v5, PowerSystemSleeping3, 0xC0000004);
  }
  if ( v2 != 1 )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
    return -1073741727;
  ExRebootSystemForRecovery(0);
  return -1073741823;
}
