/*
 * XREFs of ??0CBaseInput@@IEAA@K@Z @ 0x1C008AEA8
 * Callers:
 *     CHidInput_CreateInstance @ 0x1C008AC30 (CHidInput_CreateInstance.c)
 *     CKeyboardSensor_CreateInstance @ 0x1C008ACA0 (CKeyboardSensor_CreateInstance.c)
 *     ??0CMouseSensor@@IEAA@XZ @ 0x1C008AE50 (--0CMouseSensor@@IEAA@XZ.c)
 * Callees:
 *     ??0CRIMBase@@IEAA@K@Z @ 0x1C008AF2C (--0CRIMBase@@IEAA@K@Z.c)
 */

CBaseInput *__fastcall CBaseInput::CBaseInput(CBaseInput *this, unsigned int a2)
{
  CRIMBase::CRIMBase(this, a2);
  *(_QWORD *)this = &CBaseInput::`vftable';
  *((_QWORD *)this + 155) = 0LL;
  *((_QWORD *)this + 156) = 0LL;
  *((_DWORD *)this + 314) = 0;
  *((_QWORD *)this + 158) = 0LL;
  *((_QWORD *)this + 159) = 0LL;
  return this;
}
