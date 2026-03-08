/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase6 @ 0x1C0020FD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqss @ 0x1C000A374 (WPP_RECORDER_SF_qqss.c)
 *     ACPIDeviceCompletePhase3Common @ 0x1C001C4F4 (ACPIDeviceCompletePhase3Common.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase6(__int64 a1)
{
  __int64 v1; // rdi
  const char *v2; // rax
  char v3; // r8
  const char *v5; // rdx
  __int64 v6; // rcx
  POWER_STATE v7; // ebx
  struct _DEVICE_OBJECT *v8; // rdi

  v1 = *(_QWORD *)(a1 + 40);
  v2 = (const char *)&unk_1C00622D0;
  v3 = 0;
  v5 = (const char *)&unk_1C00622D0;
  if ( v1 )
  {
    v6 = *(_QWORD *)(v1 + 8);
    v3 = v1;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v2 = *(const char **)(v1 + 608);
      if ( (v6 & 0x400000000000LL) != 0 )
        v5 = *(const char **)(v1 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x53u,
      (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
      a1,
      v3,
      v2,
      v5);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v7.SystemState = *(_SYSTEM_POWER_STATE *)(v1 + 544);
  *(POWER_STATE *)(v1 + 384) = v7;
  v8 = *(struct _DEVICE_OBJECT **)(v1 + 768);
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  if ( v8 )
    PoSetPowerState(v8, DevicePowerState, v7);
  *(_DWORD *)(a1 + 256) = 0;
  ACPIDeviceCompletePhase3Common((volatile signed __int32 *)(a1 + 208), 0);
  return 0LL;
}
