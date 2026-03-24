/*
 * XREFs of ?AddRef@CSystemMemoryBitmap@@$4PPPPPPPM@BCA@EAAKXZ @ 0x1800F6510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSystemMemoryBitmap::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 288));
}
