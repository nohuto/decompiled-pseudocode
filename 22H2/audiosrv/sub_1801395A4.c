/*
 * XREFs of sub_1801395A4 @ 0x1801395A4
 * Callers:
 *     sub_18013A0F0 @ 0x18013A0F0 (sub_18013A0F0.c)
 *     sub_18013A2E0 @ 0x18013A2E0 (sub_18013A2E0.c)
 * Callees:
 *     sub_18005248C @ 0x18005248C (sub_18005248C.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800CF858 @ 0x1800CF858 (sub_1800CF858.c)
 *     sub_180139FC0 @ 0x180139FC0 (sub_180139FC0.c)
 */

__int64 __fastcall sub_1801395A4(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdx
  __int64 result; // rax
  unsigned int v5; // eax

  if ( !a2 )
    sub_1800B8610(-2147467259);
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = a2;
  v3 = *(_QWORD *)(a1 + 8) - 1LL;
  result = v3;
  *(_QWORD *)(a1 + 8) = v3;
  if ( v3 < *(_QWORD *)(a1 + 40) && !*(_DWORD *)(a1 + 48) )
  {
    v5 = sub_1800CF858(a1, v3);
    sub_180139FC0(a1, v5);
    result = *(_QWORD *)(a1 + 8);
  }
  if ( !result )
    return sub_18005248C(a1);
  return result;
}
