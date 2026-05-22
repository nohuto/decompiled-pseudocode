/*
 * XREFs of ??0HidLampMultiUpdateReportBuilder@@AEAA@XZ @ 0x1800A9638
 * Callers:
 *     ?CreateAndInitialize@HidLampMultiUpdateReportBuilder@@SAJPEAVHidLampArrayDevice@@IPEAPEAV1@@Z @ 0x1800A97C0 (-CreateAndInitialize@HidLampMultiUpdateReportBuilder@@SAJPEAVHidLampArrayDevice@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ??1LampMultiUpdateDeviceReport@@QEAA@XZ @ 0x1800A970C (--1LampMultiUpdateDeviceReport@@QEAA@XZ.c)
 */

HidLampMultiUpdateReportBuilder *__fastcall HidLampMultiUpdateReportBuilder::HidLampMultiUpdateReportBuilder(
        HidLampMultiUpdateReportBuilder *this)
{
  HidLampMultiUpdateReportBuilder *result; // rax
  _QWORD v3[7]; // [rsp+20h] [rbp-38h] BYREF

  *(_QWORD *)this = &RefCountedObject::`vftable';
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &HidLampMultiUpdateReportBuilder::`vftable';
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 6) = 0;
  v3[0] = 0LL;
  *((_DWORD *)this + 7) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  memset(&v3[1], 0, 40);
  LampMultiUpdateDeviceReport::~LampMultiUpdateDeviceReport((LampMultiUpdateDeviceReport *)v3);
  result = this;
  *((_QWORD *)this + 9) = 0LL;
  return result;
}
