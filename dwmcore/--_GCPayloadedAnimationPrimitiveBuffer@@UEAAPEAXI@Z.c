/*
 * XREFs of ??_GCPayloadedAnimationPrimitiveBuffer@@UEAAPEAXI@Z @ 0x180260C30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180097680 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CPayloadedAnimationPrimitiveBuffer *__fastcall CPayloadedAnimationPrimitiveBuffer::`scalar deleting destructor'(
        CPayloadedAnimationPrimitiveBuffer *this,
        char a2)
{
  *(_QWORD *)this = &CPayloadedAnimationPrimitiveBuffer::`vftable';
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 16);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
