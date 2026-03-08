/*
 * XREFs of HalpMcaInitializeErrorSection @ 0x140501288
 * Callers:
 *     HalpMcaPopulateErrorData @ 0x14050135C (HalpMcaPopulateErrorData.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x14037D1B4 (HalpGetCpuVendor.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall HalpMcaInitializeErrorSection(__int64 a1, __int64 a2)
{
  char CpuVendor; // cl
  int v5; // eax
  void (__fastcall *v6)(__int64, __int64, __int128 *, char *, char *, char *); // rax
  __int64 result; // rax
  __int128 v8; // [rsp+40h] [rbp-28h] BYREF

  memset((void *)(a1 + 4), 0, 0x120uLL);
  *(_DWORD *)a1 = 3;
  CpuVendor = HalpGetCpuVendor();
  if ( CpuVendor == 2 )
  {
    *(_DWORD *)(a1 + 4) = 1;
  }
  else
  {
    v5 = 0;
    if ( CpuVendor == 1 )
      v5 = 2;
    *(_DWORD *)(a1 + 4) = v5;
  }
  *(_QWORD *)(a1 + 8) = MEMORY[0xFFFFF78000000014];
  v6 = (void (__fastcall *)(__int64, __int64, __int128 *, char *, char *, char *))HalpWheaCpuid;
  *(_DWORD *)(a1 + 16) = a2;
  v8 = 0LL;
  v6(a2, 1LL, &v8, (char *)&v8 + 4, (char *)&v8 + 8, (char *)&v8 + 12);
  result = HIBYTE(DWORD1(v8));
  *(_DWORD *)(a1 + 68) = result;
  return result;
}
