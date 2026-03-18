/*
 * XREFs of PspDereferenceQuota @ 0x1409AD164
 * Callers:
 *     PspProcessDelete @ 0x1407E0F30 (PspProcessDelete.c)
 * Callees:
 *     PspDereferenceQuotaBlock @ 0x140724E14 (PspDereferenceQuotaBlock.c)
 */

void __fastcall PspDereferenceQuota(volatile signed __int32 *a1)
{
  _InterlockedDecrement(a1 + 129);
  PspDereferenceQuotaBlock(a1);
}
