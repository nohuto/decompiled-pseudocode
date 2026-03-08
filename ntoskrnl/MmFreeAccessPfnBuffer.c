/*
 * XREFs of MmFreeAccessPfnBuffer @ 0x14035B5FC
 * Callers:
 *     MiReturnCcAccessLog @ 0x1402DC41C (MiReturnCcAccessLog.c)
 *     MiQueuePageAccessLog @ 0x14035B540 (MiQueuePageAccessLog.c)
 *     PfpReturnAccessBuffer @ 0x14035B644 (PfpReturnAccessBuffer.c)
 *     PfpFlushBuffers @ 0x1407E5E50 (PfpFlushBuffers.c)
 *     PfTAccessTracingCleanup @ 0x140A844E0 (PfTAccessTracingCleanup.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140283390 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
