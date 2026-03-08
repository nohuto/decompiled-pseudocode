/*
 * XREFs of ?Append@CPayloadedAnimationPrimitiveBuffer@@UEAAJ_KPEBUDwmAnimationPrimitive@@@Z @ 0x180260D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPayloadedAnimationPrimitiveBuffer::Append(
        CPayloadedAnimationPrimitiveBuffer *this,
        unsigned int a2,
        const struct DwmAnimationPrimitive *a3)
{
  return DynArray<DwmAnimationPrimitive,0>::AddMultipleAndSet((__int64)this + 16, a3, a2);
}
