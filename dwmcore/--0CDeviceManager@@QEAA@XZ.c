/*
 * XREFs of ??0CDeviceManager@@QEAA@XZ @ 0x1801031A4
 * Callers:
 *     _dynamic_initializer_for__g_DeviceManager__ @ 0x180003D70 (_dynamic_initializer_for__g_DeviceManager__.c)
 * Callees:
 *     <none>
 */

CDeviceManager *__fastcall CDeviceManager::CDeviceManager(CDeviceManager *this)
{
  CDeviceManager *result; // rax
  CDeviceManager *v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = this;
  g_DeviceManager = 0LL;
  InitializeCriticalSection(&stru_1803E7020);
  qword_1803E7048 = 0LL;
  xmmword_1803E7050 = 0LL;
  byte_1803E7060 = 0;
  LODWORD(v2) = 0;
  RtlGetDeviceFamilyInfoEnum(0LL, &v2, 0LL);
  result = (CDeviceManager *)&g_DeviceManager;
  CDeviceManager::s_bXbox = (_DWORD)v2 == 5;
  return result;
}
