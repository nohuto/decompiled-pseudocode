/*
 * XREFs of ??_GCHidInput@@UEAAPEAXI@Z @ 0x1C008BCB0
 * Callers:
 *     CHidInput_Destroy @ 0x1C008BC20 (CHidInput_Destroy.c)
 *     CKeyboardSensor_Destroy @ 0x1C008BC50 (CKeyboardSensor_Destroy.c)
 *     CMouseSensor_Destroy @ 0x1C008BC80 (CMouseSensor_Destroy.c)
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     ??1CRIMBase@@UEAA@XZ @ 0x1C008BD94 (--1CRIMBase@@UEAA@XZ.c)
 */

CHidInput *__fastcall CHidInput::`scalar deleting destructor'(CHidInput *this, char a2)
{
  *(_QWORD *)this = &CBaseInput::`vftable';
  CRIMBase::~CRIMBase(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
