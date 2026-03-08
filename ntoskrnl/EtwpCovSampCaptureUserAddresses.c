/*
 * XREFs of EtwpCovSampCaptureUserAddresses @ 0x1408A3D6C
 * Callers:
 *     EtwpCovSampCaptureApc @ 0x140461810 (EtwpCovSampCaptureApc.c)
 *     EtwpCovSampCaptureSample @ 0x140601340 (EtwpCovSampCaptureSample.c)
 * Callees:
 *     EtwpCovSampCaptureBufferAddIP @ 0x140461944 (EtwpCovSampCaptureBufferAddIP.c)
 *     EtwpCovSampCaptureBufferGet @ 0x14046197C (EtwpCovSampCaptureBufferGet.c)
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x1408A3ADC (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 *     EtwpCovSampCaptureUserStack @ 0x1408A3DD6 (EtwpCovSampCaptureUserStack.c)
 */

__int64 __fastcall EtwpCovSampCaptureUserAddresses(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rdi

  v4 = EtwpCovSampCaptureBufferGet(a1);
  v5 = 0;
  v6 = v4;
  if ( v4 )
  {
    EtwpCovSampCaptureBufferAddIP(v4, a2);
    EtwpCovSampCaptureUserStack();
    EtwpCovSampCaptureBufferMapAddressesAndQueue(a1, v6);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
