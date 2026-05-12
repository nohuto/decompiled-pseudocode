/*
 * XREFs of RaidUnitSetDevicePowerCompletionRoutine @ 0x1C00160C0
 * Callers:
 *     <none>
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009010 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C000B5D0 (RaUnitReleaseRemoveLock.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C002D620 (RaidAdapterPoFxIdleComponent.c)
 *     WPP_SF_qq @ 0x1C0033760 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C00337B0 (WPP_SF_qqD.c)
 */

void __fastcall RaidUnitSetDevicePowerCompletionRoutine(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        IRP *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  volatile signed __int32 *DeviceExtension; // rbx
  int v7; // esi

  DeviceExtension = (volatile signed __int32 *)DeviceObject->DeviceExtension;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      55LL,
      &WPP_e79642d899e13d0104d95ec0ec72addd_Traceguids,
      DeviceExtension,
      Context);
  }
  if ( *(_QWORD *)(*((_QWORD *)DeviceExtension + 3) + 5088LL)
    && _InterlockedCompareExchange(DeviceExtension + 840, 0, 1) == 1 )
  {
    RaidAdapterPoFxIdleComponent(*((_QWORD *)DeviceExtension + 3), 0LL, 0LL);
  }
  *((_BYTE *)DeviceExtension + 449) &= ~1u;
  v7 = RaidCompleteRequestEx(Context, 0, IoStatus->Status);
  RaUnitReleaseRemoveLock((__int64)DeviceExtension);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      56LL,
      &WPP_e79642d899e13d0104d95ec0ec72addd_Traceguids,
      DeviceExtension,
      Context,
      v7);
  }
}
