/*
 * XREFs of sub_1800EBCF4 @ 0x1800EBCF4
 * Callers:
 *     sub_1800EC274 @ 0x1800EC274 (sub_1800EC274.c)
 *     sub_1800EC774 @ 0x1800EC774 (sub_1800EC774.c)
 * Callees:
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_1800EB574 @ 0x1800EB574 (sub_1800EB574.c)
 */

__int64 __fastcall sub_1800EBCF4(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = a1[1];
  if ( a1[2] == v2 )
    return sub_1800EB574(a1, a1[1], a2);
  *(_QWORD *)(v2 + 16) = 0LL;
  *(_QWORD *)(v2 + 24) = 0LL;
  sub_18001CDF8((_QWORD *)v2, a2);
  *(_WORD *)(v2 + 32) = *(_WORD *)(a2 + 32);
  *(_DWORD *)(v2 + 36) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(v2 + 40) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(v2 + 44) = *(_DWORD *)(a2 + 44);
  result = *(unsigned int *)(a2 + 48);
  *(_DWORD *)(v2 + 48) = result;
  a1[1] += 56LL;
  return result;
}
