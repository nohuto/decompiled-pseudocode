/*
 * XREFs of ?TryBufferHasSameContent@UmfdAllocation@@CA_NPEAX0I@Z @ 0x1C00E6770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall UmfdAllocation::TryBufferHasSameContent(void *a1, void *a2, unsigned int a3)
{
  return RtlCompareMemory(a1, a2, a3) == a3;
}
