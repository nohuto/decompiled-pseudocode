/*
 * XREFs of ?Free@QDC_AUTO_BUFFERS@@QEAAXXZ @ 0x1C00BEA80
 * Callers:
 *     DrvIsExternalMonitorActive @ 0x1C00BE8B0 (DrvIsExternalMonitorActive.c)
 *     ?Fill@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00BE9AC (-Fill@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     ?DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z @ 0x1C01614AC (-DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall QDC_AUTO_BUFFERS::Free(QDC_AUTO_BUFFERS *this)
{
  char *v1; // rdx

  v1 = (char *)*((_QWORD *)this + 55);
  if ( v1 )
  {
    if ( v1 != (char *)this )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
      *((_QWORD *)this + 55) = 0LL;
    }
  }
}
