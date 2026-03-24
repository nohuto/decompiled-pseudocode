/*
 * XREFs of EnableDisableRegionSpacesForDevice @ 0x1C005C920
 * Callers:
 *     ACPIDispatchIrp @ 0x1C0001010 (ACPIDispatchIrp.c)
 *     OSNotifyCreateOperationRegionWorker @ 0x1C0058A70 (OSNotifyCreateOperationRegionWorker.c)
 *     ACPIBusIrpCancelRemoveOrStopDevice @ 0x1C00ADC20 (ACPIBusIrpCancelRemoveOrStopDevice.c)
 *     ACPIBusIrpQueryRemoveOrStopDevice @ 0x1C00ADEC0 (ACPIBusIrpQueryRemoveOrStopDevice.c)
 *     ACPIBusIrpStopDevice @ 0x1C00AE050 (ACPIBusIrpStopDevice.c)
 * Callees:
 *     EnableDisableDeviceRegionSpace @ 0x1C005C880 (EnableDisableDeviceRegionSpace.c)
 *     WPP_RECORDER_SF_sdqD @ 0x1C005CD3C (WPP_RECORDER_SF_sdqD.c)
 */

__int64 __fastcall EnableDisableRegionSpacesForDevice(__int64 a1, char a2)
{
  unsigned int v2; // ebp
  __int64 result; // rax
  __int64 i; // rbx
  unsigned int v7; // edi
  unsigned int v8; // eax
  int v9; // edx
  int v10; // r8d
  int v11; // r14d

  v2 = 0;
  result = *(_DWORD *)(a1 + 628) & (unsigned int)AcpiRegisteredOpRegionMask;
  if ( (*(_DWORD *)(a1 + 628) & AcpiRegisteredOpRegionMask) != 0 )
  {
    ExAcquireFastMutex(&AcpiOpRegionLock);
    for ( i = AcpiOpRegionHandlerList; (__int64 *)i != &AcpiOpRegionHandlerList; i = *(_QWORD *)i )
    {
      v7 = *(_DWORD *)(i + 36);
      if ( v7 - 8 <= 1 )
      {
        v8 = v7 < 0x1F ? 1 << v7 : 0x80000000;
        if ( (v8 & *(_DWORD *)(a1 + 628)) != 0 )
        {
          v11 = EnableDisableDeviceRegionSpace(a1, v7, a2);
          if ( v11 < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_sdqD(WPP_GLOBAL_Control->DeviceExtension, v9, v10, 13);
            v2 = v11;
          }
        }
      }
    }
    ExReleaseFastMutex(&AcpiOpRegionLock);
    return v2;
  }
  return result;
}
