/*
 * XREFs of ??_GCSharedSectionWrapperMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D45B0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 */

DirectComposition::CSharedSectionWrapperMarshaler *__fastcall DirectComposition::CSharedSectionWrapperMarshaler::`scalar deleting destructor'(
        DirectComposition::CSharedSectionWrapperMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CSharedSectionWrapperMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
