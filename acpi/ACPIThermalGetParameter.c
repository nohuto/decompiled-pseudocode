/*
 * XREFs of ACPIThermalGetParameter @ 0x1C00959A4
 * Callers:
 *     ACPIThermalWorker @ 0x1C00962E0 (ACPIThermalWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     ACPIGet @ 0x1C0029384 (ACPIGet.c)
 *     OSReadRegValue @ 0x1C008E6A0 (OSReadRegValue.c)
 */

__int64 __fastcall ACPIThermalGetParameter(__int64 a1, void *a2, unsigned int a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v8; // rcx
  unsigned int v9; // [rsp+50h] [rbp-48h] BYREF
  __int64 v10; // [rsp+58h] [rbp-40h] BYREF
  unsigned int v11; // [rsp+60h] [rbp-38h] BYREF
  char v12; // [rsp+64h] [rbp-34h]

  v10 = 0LL;
  if ( a2
    && (v11 = a3, v12 = 0, v9 = 4, result = OSReadRegValue((PCSZ)&v11, a2, &v10, &v9), (int)result >= 0)
    && v9 == 4 )
  {
    v8 = v10;
  }
  else
  {
    result = ACPIGet(a1, a3, 268697602, 0LL, 0, 0LL, 0LL, (__int64)&v10, 0LL);
    v8 = v10;
    if ( (int)result < 0 )
      v8 = 0LL;
  }
  *a4 = v8;
  return result;
}
