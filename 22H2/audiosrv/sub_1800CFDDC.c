/*
 * XREFs of sub_1800CFDDC @ 0x1800CFDDC
 * Callers:
 *     sub_18007A4D0 @ 0x18007A4D0 (sub_18007A4D0.c)
 *     sub_18009218B @ 0x18009218B (sub_18009218B.c)
 *     sub_1800CDBA8 @ 0x1800CDBA8 (sub_1800CDBA8.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 __fastcall sub_1800CFDDC(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 i; // rax

  v3 = 0LL;
  if ( !a2 )
    sub_1800B8610(-2147467259);
  v4 = (unsigned int)(*(_DWORD *)(a2 + 96) % *(_DWORD *)(a1 + 16));
  if ( a2 != *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)v4) )
  {
    v3 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v4);
    for ( i = *(_QWORD *)(v3 + 88); i != a2; i = *(_QWORD *)(i + 88) )
      v3 = i;
  }
  return sub_180005564(a1, a2, v3);
}
