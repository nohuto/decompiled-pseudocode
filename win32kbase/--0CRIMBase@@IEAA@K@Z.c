/*
 * XREFs of ??0CRIMBase@@IEAA@K@Z @ 0x1C0096848
 * Callers:
 *     ??0CBaseInput@@IEAA@KKW4_InputSensorName@@@Z @ 0x1C0096768 (--0CBaseInput@@IEAA@KKW4_InputSensorName@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C00968E4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

CRIMBase *__fastcall CRIMBase::CRIMBase(CRIMBase *this, int a2)
{
  char *v3; // rbx

  *(_QWORD *)this = &CRIMBase::`vftable';
  *((_QWORD *)this + 1) = -1LL;
  *((_QWORD *)this + 2) = 0LL;
  v3 = (char *)this + 168;
  *((_DWORD *)this + 6) = 0;
  *((_OWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 36) = a2;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 6) = -1LL;
  *((_DWORD *)this + 14) = 64;
  memset((char *)this + 168, 0, 0x480uLL);
  `vector constructor iterator'(
    v3,
    0x40uLL,
    0x12uLL,
    (void *(*)(void *))CRIMBase::SensorDispatcherObject::SensorDispatcherObject);
  return this;
}
