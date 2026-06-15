/*
 * XREFs of sub_180132028 @ 0x180132028
 * Callers:
 *     sub_18012FC64 @ 0x18012FC64 (sub_18012FC64.c)
 * Callees:
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     sub_180131F94 @ 0x180131F94 (sub_180131F94.c)
 *     sub_180132378 @ 0x180132378 (sub_180132378.c)
 */

LPVOID __fastcall sub_180132028(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // [rsp+70h] [rbp+8h] BYREF

  v5 = a1;
  if ( byte_18019FBA1 )
    return sub_180055F40(0xE8uLL);
  v5 = 0LL;
  if ( a2 && (unsigned int)RtlAllocateMemoryBlockLookaside(a2, 232LL, &v5) == -1073741670 )
  {
    sub_180131F94(a2, 0x100000LL);
    RtlAllocateMemoryBlockLookaside(a2, 232LL, &v5);
  }
  if ( (byte_18019F981 & 4) != 0 )
    sub_180132378(a1, a2, a3, 6, a2, 232, 0, 0);
  return (LPVOID)v5;
}
