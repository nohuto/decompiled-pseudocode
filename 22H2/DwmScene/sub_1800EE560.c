/*
 * XREFs of sub_1800EE560 @ 0x1800EE560
 * Callers:
 *     sub_1800F0588 @ 0x1800F0588 (sub_1800F0588.c)
 * Callees:
 *     sub_1800EFCBC @ 0x1800EFCBC (sub_1800EFCBC.c)
 */

__int64 __fastcall sub_1800EE560(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_1800EFCBC(a1, a2, 5LL);
  if ( *(_QWORD *)result != *(_QWORD *)a3 || *(_QWORD *)(result + 8) != *(_QWORD *)(a3 + 8) )
  {
    *(_OWORD *)result = *(_OWORD *)a3;
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
