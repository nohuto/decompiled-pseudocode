/*
 * XREFs of ACPIUnload @ 0x1C00247F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000ABD8 (WPP_RECORDER_SF_.c)
 *     wil_UninitializeFeatureStaging @ 0x1C007A300 (wil_UninitializeFeatureStaging.c)
 *     WppCleanupKm @ 0x1C007C0F0 (WppCleanupKm.c)
 */

__int64 __fastcall ACPIUnload(__int64 a1)
{
  int v2; // edx

  wil_UninitializeFeatureStaging();
  KeSetEvent(&ACPITerminateEvent, 0, 0);
  KeWaitForSingleObject(ACPIThread, Executive, 0, 0, 0LL);
  ObfDereferenceObject(ACPIThread);
  IoDeleteSymbolicLink(&ACPISymbolicLinkName);
  ExDeleteNPagedLookasideList(&BuildRequestLookAsideList);
  ExDeleteNPagedLookasideList(&RequestLookAsideList);
  ExDeleteNPagedLookasideList(&DeviceExtensionLookAsideList);
  ExDeleteNPagedLookasideList(&ObjectDataLookAsideList);
  ExDeleteNPagedLookasideList(&XswContextLookAsideList);
  ExDeleteNPagedLookasideList(&WakeInterruptLookAsideList);
  ExDeleteNPagedLookasideList(&NotificationContextLookAsideList);
  if ( AcpiRegistryPath.Buffer )
    ExFreePoolWithTag(AcpiRegistryPath.Buffer, 0);
  if ( *((_QWORD *)&AcpiProcessorString + 1) )
    ExFreePoolWithTag(*((PVOID *)&AcpiProcessorString + 1), 0);
  if ( E820Info )
    ExFreePoolWithTag(E820Info, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v2,
      6,
      18,
      (__int64)&WPP_6f88517ea7123f8ddbeafbeda42a4256_Traceguids);
  }
  return WppCleanupKm(a1);
}
