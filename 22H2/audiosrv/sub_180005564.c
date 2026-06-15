/*
 * XREFs of sub_180005564 @ 0x180005564
 * Callers:
 *     sub_180004B00 @ 0x180004B00 (sub_180004B00.c)
 *     sub_1800CFDDC @ 0x1800CFDDC (sub_1800CFDDC.c)
 *     sub_1800CFF50 @ 0x1800CFF50 (sub_1800CFF50.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 __fastcall sub_180005564(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !a2 )
    sub_1800B8610(2147500037LL);
  if ( a3 )
    *(_QWORD *)(a3 + 88) = *(_QWORD *)(a2 + 88);
  else
    *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)(*(_DWORD *)(a2 + 96) % *(_DWORD *)(a1 + 16))) = *(_QWORD *)(a2 + 88);
  return sub_180006430(a1, a2);
}
