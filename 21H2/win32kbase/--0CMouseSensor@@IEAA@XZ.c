/*
 * XREFs of ??0CMouseSensor@@IEAA@XZ @ 0x1C005C8DC
 * Callers:
 *     ?CreateInstance@CMouseSensor@@SAJPEAPEAV1@@Z @ 0x1C005C858 (-CreateInstance@CMouseSensor@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CBaseInput@@IEAA@KKW4_InputSensorName@@@Z @ 0x1C005CDE8 (--0CBaseInput@@IEAA@KKW4_InputSensorName@@@Z.c)
 */

CMouseSensor *__fastcall CMouseSensor::CMouseSensor(CMouseSensor *this)
{
  CBaseInput::CBaseInput(this, 1LL, 0LL, 0LL);
  *(_QWORD *)this = &CMouseSensor::`vftable';
  *((_QWORD *)this + 166) = 0LL;
  *((_QWORD *)this + 219) = 0LL;
  *((_QWORD *)this + 220) = 0LL;
  *((_BYTE *)this + 1768) = 0;
  *((_QWORD *)this + 222) = 0LL;
  *((_QWORD *)this + 223) = 0LL;
  return this;
}
