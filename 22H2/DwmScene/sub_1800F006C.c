/*
 * XREFs of sub_1800F006C @ 0x1800F006C
 * Callers:
 *     sub_1800F0038 @ 0x1800F0038 (sub_1800F0038.c)
 * Callees:
 *     sub_1800EFCBC @ 0x1800EFCBC (sub_1800EFCBC.c)
 */

float *__fastcall sub_1800F006C(__int64 a1, unsigned __int16 a2, float a3)
{
  float *result; // rax

  result = (float *)sub_1800EFCBC(a1, a2, 2);
  if ( *result != a3 )
  {
    *result = a3;
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
