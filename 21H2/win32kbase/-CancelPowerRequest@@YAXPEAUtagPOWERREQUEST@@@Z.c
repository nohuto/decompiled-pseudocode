/*
 * XREFs of ?CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1C0146AA0
 * Callers:
 *     CleanupPowerRequestList @ 0x1C007E690 (CleanupPowerRequestList.c)
 * Callees:
 *     EtwTraceCompletePowerRequest @ 0x1C007C790 (EtwTraceCompletePowerRequest.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C015051C (McTemplateK0pq_EtwWriteTransfer.c)
 */

void __fastcall CancelPowerRequest(struct tagPOWERREQUEST *a1, __int64 a2, __int64 a3)
{
  *((_DWORD *)a1 + 14) = -1073741823;
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0pq_EtwWriteTransfer(a1, &CanceledPowerRequest, a3, a1, -1073741536);
  if ( *((_QWORD *)a1 + 8) )
  {
    EtwTraceCompletePowerRequest((__int64)a1, *((_DWORD *)a1 + 14), a3);
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)a1);
  }
  else
  {
    KeSetEvent((PRKEVENT)((char *)a1 + 16), 1, 0);
  }
}
