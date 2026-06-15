/*
 * XREFs of sub_1800F5128 @ 0x1800F5128
 * Callers:
 *     sub_1800F22A4 @ 0x1800F22A4 (sub_1800F22A4.c)
 *     sub_1800F2320 @ 0x1800F2320 (sub_1800F2320.c)
 *     sub_180138DF4 @ 0x180138DF4 (sub_180138DF4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800F5128(const wchar_t *a1, __int64 a2, const wchar_t *a3)
{
  size_t v5; // rdi
  size_t v6; // rax
  size_t v7; // r8
  unsigned int v8; // ebx

  v5 = wcsnlen(a1, 0x104uLL);
  v6 = wcsnlen(a3, 0x104uLL);
  v7 = v6;
  if ( v5 > v6 )
    v7 = v5;
  v8 = 0;
  if ( v5 >= 2 && v6 >= 2 && (a3[v6 - 1] == 42) != (a1[v5 - 1] == 42) )
  {
    if ( a1[v5 - 1] == 42 )
    {
      v7 = v5 - 1;
    }
    else if ( a3[v6 - 1] == 42 )
    {
      v7 = v6 - 1;
    }
  }
  LOBYTE(v8) = (unsigned int)o__wcsnicmp(a1, a3, v7) == 0;
  return v8;
}
