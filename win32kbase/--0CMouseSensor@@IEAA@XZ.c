/*
 * XREFs of ??0CMouseSensor@@IEAA@XZ @ 0x1C0096430
 * Callers:
 *     ?CreateInstance@CMouseSensor@@SAJPEAPEAV1@@Z @ 0x1C009622C (-CreateInstance@CMouseSensor@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CBaseInput@@IEAA@KKW4_InputSensorName@@@Z @ 0x1C0096768 (--0CBaseInput@@IEAA@KKW4_InputSensorName@@@Z.c)
 */

CMouseSensor *__fastcall CMouseSensor::CMouseSensor(CMouseSensor *this)
{
  CMouseSensor *result; // rax

  CBaseInput::CBaseInput(this, 1LL, 0LL);
  *(_QWORD *)this = &CMouseSensor::`vftable';
  *((_QWORD *)this + 177) = 0LL;
  *((_QWORD *)this + 230) = 0LL;
  *((_QWORD *)this + 231) = 0LL;
  *((_BYTE *)this + 1856) = 0;
  *((_QWORD *)this + 233) = 0LL;
  *((_QWORD *)this + 234) = 0LL;
  *((_BYTE *)this + 1880) = 0;
  *((_QWORD *)this + 236) = L"RawMouseThrottleEnabled";
  *((_QWORD *)this + 239) = L"RawMouseThrottleForced";
  *((_QWORD *)this + 242) = L"RawMouseThrottleDuration";
  *((_QWORD *)this + 245) = L"RawMouseThrottleLeeway";
  result = this;
  *((_QWORD *)this + 237) = 1LL;
  *((_QWORD *)this + 238) = 1LL;
  *((_QWORD *)this + 240) = 0LL;
  *((_QWORD *)this + 241) = 1LL;
  *((_DWORD *)this + 486) = 8;
  *((_DWORD *)this + 487) = 1;
  *((_QWORD *)this + 244) = 20LL;
  *((_QWORD *)this + 246) = 2LL;
  *((_QWORD *)this + 247) = 5LL;
  *((_DWORD *)this + 496) = 50;
  *((_QWORD *)this + 249) = 0LL;
  *((_QWORD *)this + 250) = 0LL;
  return result;
}
