/*
 * XREFs of ?Free@QDC_AUTO_BUFFERS@@QEAAXXZ @ 0x1C000F450
 * Callers:
 *     DrvIsExternalMonitorActive @ 0x1C000F280 (DrvIsExternalMonitorActive.c)
 *     ?Fill@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C000F37C (-Fill@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     ?DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z @ 0x1C018E234 (-DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall QDC_AUTO_BUFFERS::Free(QDC_AUTO_BUFFERS *this)
{
  QDC_AUTO_BUFFERS *v1; // rdx

  v1 = (QDC_AUTO_BUFFERS *)*((_QWORD *)this + 55);
  if ( v1 )
  {
    if ( v1 != this )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
      *((_QWORD *)this + 55) = 0LL;
    }
  }
}
