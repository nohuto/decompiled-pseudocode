/*
 * XREFs of RtlUnwind @ 0x140329E00
 * Callers:
 *     _local_unwind @ 0x1403D1490 (_local_unwind.c)
 * Callees:
 *     RtlUnwindEx @ 0x14033EA40 (RtlUnwindEx.c)
 *     RtlGetExtendedContextLength2 @ 0x14033F5D0 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x14033FFD0 (RtlInitializeExtendedContext2.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140407B20 (_alloca_probe.c)
 */

__int64 __fastcall RtlUnwind(int a1, int a2, int a3, int a4)
{
  unsigned __int64 v8; // r10
  void *v9; // rsp
  unsigned int v11; // [rsp+30h] [rbp+0h] BYREF

  v11 = 0;
  RtlGetExtendedContextLength2(1048587LL, &v11, 0LL);
  v8 = v11 + 15LL;
  if ( v8 <= v11 )
    v8 = 0xFFFFFFFFFFFFFF0LL;
  v9 = alloca(v8 & 0xFFFFFFFFFFFFFFF0uLL);
  RtlInitializeExtendedContext2(&v11, 1048587LL, &v11, 0LL);
  return RtlUnwindEx(a1, a2, a3, a4, (__int64)&v11, 0LL);
}
