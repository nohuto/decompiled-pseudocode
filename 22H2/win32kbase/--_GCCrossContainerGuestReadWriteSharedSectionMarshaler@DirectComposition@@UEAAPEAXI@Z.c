/*
 * XREFs of ??_GCCrossContainerGuestReadWriteSharedSectionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00A6BB0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     ??1CSharedSectionBaseMarshaler@DirectComposition@@UEAA@XZ @ 0x1C00A6BF0 (--1CSharedSectionBaseMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CCrossContainerGuestReadWriteSharedSectionMarshaler *__fastcall DirectComposition::CCrossContainerGuestReadWriteSharedSectionMarshaler::`scalar deleting destructor'(
        DirectComposition::CCrossContainerGuestReadWriteSharedSectionMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CDCompMappedSharedSectionMarshaler::`vftable';
  DirectComposition::CSharedSectionBaseMarshaler::~CSharedSectionBaseMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
