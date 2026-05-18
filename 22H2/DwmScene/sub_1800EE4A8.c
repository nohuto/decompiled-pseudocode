/*
 * XREFs of sub_1800EE4A8 @ 0x1800EE4A8
 * Callers:
 *     sub_1800EFEA8 @ 0x1800EFEA8 (sub_1800EFEA8.c)
 * Callees:
 *     sub_1800EFCBC @ 0x1800EFCBC (sub_1800EFCBC.c)
 */

__int64 __fastcall sub_1800EE4A8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_1800EFCBC(a1, a2, 6LL);
  if ( *(_QWORD *)result != *(_QWORD *)a3 || *(_QWORD *)(result + 8) != *(_QWORD *)(a3 + 8) )
  {
    *(_OWORD *)result = *(_OWORD *)a3;
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
