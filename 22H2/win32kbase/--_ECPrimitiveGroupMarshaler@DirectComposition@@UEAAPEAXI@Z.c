/*
 * XREFs of ??_ECPrimitiveGroupMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C009F400
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 */

DirectComposition::CPrimitiveGroupMarshaler *__fastcall DirectComposition::CPrimitiveGroupMarshaler::`vector deleting destructor'(
        DirectComposition::CPrimitiveGroupMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CPrimitiveGroupLayerClipMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
