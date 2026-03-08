/*
 * XREFs of ?CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1C0159CA0
 * Callers:
 *     CleanupPowerRequestList @ 0x1C00B39B0 (CleanupPowerRequestList.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     EtwTraceCompletePowerRequest @ 0x1C00B561C (EtwTraceCompletePowerRequest.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C00EE6B4 (McTemplateK0pq_EtwWriteTransfer.c)
 */

void __fastcall CancelPowerRequest(struct tagPOWERREQUEST *a1, __int64 a2, __int64 a3)
{
  int v4; // [rsp+20h] [rbp-18h]

  *((_DWORD *)a1 + 10) = -1073741823;
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
  {
    v4 = -1073741536;
    McTemplateK0pq_EtwWriteTransfer((__int64)a1, &CanceledPowerRequest, a3, a1, v4);
  }
  if ( *((_QWORD *)a1 + 8) )
  {
    EtwTraceCompletePowerRequest((__int64)a1, *((_DWORD *)a1 + 10), a3);
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)a1);
  }
  else
  {
    KeSetEvent((PRKEVENT)((char *)a1 + 16), 1, 0);
  }
}
