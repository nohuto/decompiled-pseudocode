/*
 * XREFs of PsGetNextProcessEx @ 0x1406B4B20
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402056A0 (ObfReferenceObjectWithTag.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x14034B230 (ObfReferenceObject.c)
 *     PsGetNextProcess @ 0x1406CE7A0 (PsGetNextProcess.c)
 */

void *__fastcall PsGetNextProcessEx(PADAPTER_OBJECT DmaAdapter)
{
  void *NextProcess; // rax
  void *v3; // rbx

  if ( DmaAdapter )
  {
    ObfReferenceObjectWithTag(DmaAdapter, 0x6E457350u);
    HalPutDmaAdapter(DmaAdapter);
  }
  NextProcess = (void *)PsGetNextProcess(DmaAdapter);
  v3 = NextProcess;
  if ( NextProcess )
  {
    ObfReferenceObject(NextProcess);
    ObfDereferenceObjectWithTag(v3, 0x6E457350u);
  }
  return v3;
}
