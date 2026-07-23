/*
 * XREFs of PsGetNextProcessEx @ 0x140613FA0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     PsGetNextProcess @ 0x1406A5A80 (PsGetNextProcess.c)
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
