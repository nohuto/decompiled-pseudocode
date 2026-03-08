/*
 * XREFs of ACPIDevicePowerProcessPhase2SystemSubPhase3 @ 0x1C001FB40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C001B508 (WPP_RECORDER_SF_qD.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C001C540 (ACPIDeviceCompleteGenericPhase.c)
 *     ACPIWakeRestoreEnables @ 0x1C0046004 (ACPIWakeRestoreEnables.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase2SystemSubPhase3(__int64 a1)
{
  int v1; // esi
  int v3; // ebx
  int v4; // ebp
  __int64 v5; // rcx
  int v6; // eax
  __int64 result; // rax

  v1 = 0;
  *(_DWORD *)(a1 + 212) = 6;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      WPP_GLOBAL_Control->DeviceExtension,
      4,
      10,
      65,
      (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
      a1,
      6);
  v3 = *(_DWORD *)(a1 + 104);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v4 = AcpiMostRecentSleepState;
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  if ( v3 != 1 || v4 != 5 )
    goto LABEL_8;
  v6 = ACPIWakeRestoreEnables(v5, a1);
  v1 = v6;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      WPP_GLOBAL_Control->DeviceExtension,
      4,
      10,
      66,
      (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
      a1,
      v6);
  result = 259LL;
  if ( v1 != 259 )
  {
LABEL_8:
    ACPIDeviceCompleteGenericPhase(0LL, v1, 0LL, a1);
    return 0LL;
  }
  return result;
}
