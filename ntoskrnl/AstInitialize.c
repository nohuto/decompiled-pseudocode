/*
 * XREFs of AstInitialize @ 0x140B716E4
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlGetNtProductType @ 0x140303E90 (RtlGetNtProductType.c)
 *     AstInitializeBloomFilter @ 0x14085F9F8 (AstInitializeBloomFilter.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall AstInitialize(__int64 a1, __int64 a2)
{
  __int64 Pool2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  if ( !RtlGetNtProductType(&v6, a2) || v6 != 1 )
  {
    AstIsActive = 0;
    return 0LL;
  }
  AstIsActive = 1;
  Pool2 = ExAllocatePool2(256LL, 0x1000uLL, 0x6E446341u);
  if ( Pool2 )
  {
    AstInitializeBloomFilter(v4, v3, Pool2);
    return 0LL;
  }
  return 3221225495LL;
}
