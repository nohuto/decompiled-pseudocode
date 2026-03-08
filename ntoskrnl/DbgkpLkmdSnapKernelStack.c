/*
 * XREFs of DbgkpLkmdSnapKernelStack @ 0x14053991C
 * Callers:
 *     DbgkpLkmdSnapThreadInContext @ 0x1409381FC (DbgkpLkmdSnapThreadInContext.c)
 * Callees:
 *     KeEnumerateKernelStackSegments @ 0x1402A76A0 (KeEnumerateKernelStackSegments.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall DbgkpLkmdSnapKernelStack(__int64 a1, __int64 a2, __int64 a3, char a4, _QWORD *a5, __int64 a6)
{
  __int64 *v6; // rsi
  __int64 v10; // rdi
  _QWORD *v11; // rbx
  _QWORD v14[2]; // [rsp+48h] [rbp-B8h] BYREF
  char v15; // [rsp+58h] [rbp-A8h]
  int v16; // [rsp+59h] [rbp-A7h]
  __int16 v17; // [rsp+5Dh] [rbp-A3h]
  char v18; // [rsp+5Fh] [rbp-A1h]
  __int64 v19; // [rsp+60h] [rbp-A0h]
  _QWORD v20[8]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v21[154]; // [rsp+B0h] [rbp-50h] BYREF

  v6 = (__int64 *)(a3 + 88);
  v16 = 0;
  v17 = 0;
  v18 = 0;
  if ( a5 )
  {
    v10 = a5[19];
  }
  else
  {
    v10 = *v6;
    if ( a4 )
    {
      memset(v21, 0, sizeof(v21));
      v21[19] = v10;
      v21[20] = v10;
    }
  }
  v14[0] = a1;
  v14[1] = v10;
  v15 = a4;
  v19 = a6;
  KeEnumerateKernelStackSegments(
    a2,
    (__int64 (__fastcall *)(__int64, _OWORD *, __int64))DbgkpLkmdSnapKernelStackSegmentCallback,
    (__int64)v14);
  if ( a4 )
  {
    v11 = v21;
    if ( a5 )
      v11 = a5;
    memset(v20, 0, sizeof(v20));
    v20[7] = v11[31];
    v20[6] = v11[20];
    (*(void (__fastcall **)(__int64, _QWORD *, __int64, __int64, __int64, _QWORD))(a1 + 16448))(
      a1 + 0x4000,
      v20,
      64LL,
      5LL,
      v10 - 64,
      0LL);
    *v6 = v10 - 64;
    *(_BYTE *)(a3 + 388) = -1;
  }
  return 0LL;
}
