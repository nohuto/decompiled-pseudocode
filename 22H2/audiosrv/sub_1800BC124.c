/*
 * XREFs of sub_1800BC124 @ 0x1800BC124
 * Callers:
 *     sub_1800BBE40 @ 0x1800BBE40 (sub_1800BBE40.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 */

bool sub_1800BC124()
{
  DWORD pcbData[4]; // [rsp+40h] [rbp-238h] BYREF
  _BYTE pvData[528]; // [rsp+50h] [rbp-228h] BYREF

  memset(pvData, 0, 0x208uLL);
  pcbData[0] = 520;
  return RegGetValueW(
           HKEY_LOCAL_MACHINE,
           L"SOFTWARE\\Microsoft\\Virtual Machine\\Guest\\Parameters",
           L"PhysicalHostName",
           2u,
           0LL,
           pvData,
           pcbData) == 0;
}
