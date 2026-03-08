/*
 * XREFs of EtwpCovSampAcquireSamplerRundown @ 0x1408A3A8C
 * Callers:
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x1408A3ADC (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 *     EtwpCovSampCaptureBufferProcess @ 0x1408A3BF4 (EtwpCovSampCaptureBufferProcess.c)
 *     EtwpCovSampImageNotify @ 0x1408A4E40 (EtwpCovSampImageNotify.c)
 *     EtwpCoverageSamplerQuery @ 0x1408A55B8 (EtwpCoverageSamplerQuery.c)
 *     EtwpCovSampSampleBufferProcess @ 0x1409EFD64 (EtwpCovSampSampleBufferProcess.c)
 *     EtwpCoverageSamplerUnloadImage @ 0x1409F0BAC (EtwpCoverageSamplerUnloadImage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 */

__int64 __fastcall EtwpCovSampAcquireSamplerRundown(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0(&stru_140C31880) )
  {
    *a1 = qword_140C31878;
    return 0LL;
  }
  else
  {
    KeLeaveCriticalRegion();
    return 3221225865LL;
  }
}
