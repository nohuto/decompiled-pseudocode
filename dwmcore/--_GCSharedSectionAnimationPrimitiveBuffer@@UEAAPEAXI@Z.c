/*
 * XREFs of ??_GCSharedSectionAnimationPrimitiveBuffer@@UEAAPEAXI@Z @ 0x1800F2700
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSharedSectionAnimationPrimitiveBuffer@@UEAA@XZ @ 0x1800F273C (--1CSharedSectionAnimationPrimitiveBuffer@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CSharedSectionAnimationPrimitiveBuffer *__fastcall CSharedSectionAnimationPrimitiveBuffer::`scalar deleting destructor'(
        CSharedSectionAnimationPrimitiveBuffer *this,
        char a2)
{
  CSharedSectionAnimationPrimitiveBuffer::~CSharedSectionAnimationPrimitiveBuffer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x20uLL);
  return this;
}
