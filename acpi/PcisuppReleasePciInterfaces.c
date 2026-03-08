/*
 * XREFs of PcisuppReleasePciInterfaces @ 0x1C009A0AC
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C0016C30 (ACPIBusIrpRemoveDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_qss @ 0x1C0015444 (WPP_RECORDER_SF_qss.c)
 *     ACPIInternalClearFlags @ 0x1C002E508 (ACPIInternalClearFlags.c)
 *     ACPIWakeReleasePmeRouting @ 0x1C0045FA0 (ACPIWakeReleasePmeRouting.c)
 *     PcisuppReleasePciRouting @ 0x1C009A1B4 (PcisuppReleasePciRouting.c)
 */

void __fastcall PcisuppReleasePciInterfaces(_QWORD *a1)
{
  char v2; // al
  const char *v3; // rcx
  const char *v4; // r8
  __int64 v5; // rdx

  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(&PciRouteInterfaceLock, 1u);
  if ( (a1[126] & 2) != 0 )
  {
    ACPIInternalClearFlags(a1 + 126, 2LL);
    if ( _InterlockedExchangeAdd(&PciRoutingInterfaceCount, 0xFFFFFFFF) == 1 )
    {
      PcisuppReleasePciRouting();
      ACPIWakeReleasePmeRouting();
      v2 = 0;
      v3 = byte_1C00622D0;
      v4 = byte_1C00622D0;
      if ( a1 )
      {
        v5 = a1[1];
        v2 = (char)a1;
        if ( (v5 & 0x200000000000LL) != 0 )
        {
          v3 = (const char *)a1[76];
          if ( (v5 & 0x400000000000LL) != 0 )
            v4 = (const char *)a1[77];
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          5u,
          0xAu,
          (__int64)&WPP_d83fe99678ff30ab9ed6237ab8d0cc59_Traceguids,
          v2,
          v3,
          v4);
    }
  }
  ExReleaseResourceLite(&PciRouteInterfaceLock);
  KeLeaveCriticalRegion();
}
