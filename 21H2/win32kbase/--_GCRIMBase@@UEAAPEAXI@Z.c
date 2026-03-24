/*
 * XREFs of ??_GCRIMBase@@UEAAPEAXI@Z @ 0x1C01A3970
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     ??1CRIMBase@@UEAA@XZ @ 0x1C008AEF4 (--1CRIMBase@@UEAA@XZ.c)
 */

CRIMBase *__fastcall CRIMBase::`scalar deleting destructor'(CRIMBase *this, char a2)
{
  CRIMBase::~CRIMBase(this);
  if ( (a2 & 1) != 0 && this )
    Win32FreePool((__int64)this);
  return this;
}
