/*
 * XREFs of MmFreeAccessPfnBuffer @ 0x1402F55AC
 * Callers:
 *     MiReturnCcAccessLog @ 0x1402F4D30 (MiReturnCcAccessLog.c)
 *     MiQueuePageAccessLog @ 0x1402F54F0 (MiQueuePageAccessLog.c)
 *     PfpReturnAccessBuffer @ 0x1402F55F4 (PfpReturnAccessBuffer.c)
 *     PfpFlushBuffers @ 0x14074B520 (PfpFlushBuffers.c)
 *     PfTAccessTracingCleanup @ 0x140A874E0 (PfTAccessTracingCleanup.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8BC0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall MmFreeAccessPfnBuffer(_QWORD *P, char a2)
{
  void *v3; // rcx

  if ( !*((_DWORD *)P + 2) )
  {
    v3 = (void *)P[7];
    if ( (unsigned __int64)v3 > 1 )
    {
      if ( a2 )
        ObDereferenceObjectDeferDeleteWithTag(v3, 0x746C6644u);
      else
        ObfDereferenceObject(v3);
    }
  }
  ExFreePoolWithTag(P, 0);
}
