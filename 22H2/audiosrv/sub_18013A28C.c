/*
 * XREFs of sub_18013A28C @ 0x18013A28C
 * Callers:
 *     sub_18013A4A9 @ 0x18013A4A9 (sub_18013A4A9.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 __fastcall sub_18013A28C(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 i; // rax

  v3 = 0LL;
  if ( !a2 )
    sub_1800B8610(-2147467259);
  v4 = (unsigned int)(*(_DWORD *)(a2 + 24) % *(_DWORD *)(a1 + 16));
  if ( a2 != *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)v4) )
  {
    v3 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v4);
    for ( i = *(_QWORD *)(v3 + 16); i != a2; i = *(_QWORD *)(i + 16) )
      v3 = i;
  }
  return sub_18013A334(a1, a2, v3);
}
