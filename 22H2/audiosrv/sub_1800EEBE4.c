/*
 * XREFs of sub_1800EEBE4 @ 0x1800EEBE4
 * Callers:
 *     sub_1800B7E08 @ 0x1800B7E08 (sub_1800B7E08.c)
 *     sub_1800EEBE4 @ 0x1800EEBE4 (sub_1800EEBE4.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_1800EEBE4 @ 0x1800EEBE4 (sub_1800EEBE4.c)
 */

__int64 __fastcall sub_1800EEBE4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rbx
  __int64 v6; // rcx
  __int64 result; // rax

  for ( i = a3; !*(_BYTE *)(i + 25); result = sub_1800472E0(v6, 0x30uLL) )
  {
    sub_1800EEBE4(a1, a2, *(_QWORD *)(i + 16));
    v6 = i;
    i = *(_QWORD *)i;
  }
  return result;
}
