/*
 * XREFs of ?GetCount@CSharedSectionAnimationPrimitiveBuffer@@UEAA_KXZ @ 0x1800E0820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CSharedSectionAnimationPrimitiveBuffer::GetCount(
        CSharedSectionAnimationPrimitiveBuffer *this)
{
  return (unsigned __int64)*((unsigned int *)this + 6) >> 5;
}
