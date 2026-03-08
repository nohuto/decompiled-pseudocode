/*
 * XREFs of PfSnParametersVerify @ 0x1408457D4
 * Callers:
 *     PfSnParametersRead @ 0x140845198 (PfSnParametersRead.c)
 * Callees:
 *     towupper @ 0x1403D5C50 (towupper.c)
 */

__int64 __fastcall PfSnParametersVerify(_DWORD *a1)
{
  unsigned int v2; // esi
  int v3; // ecx
  _WORD *i; // rax
  unsigned int v5; // ebp
  wint_t *v6; // rdi
  int v7; // r8d
  _QWORD *v8; // rcx
  _DWORD *j; // rdx

  v2 = -1073741811;
  v3 = 0;
  for ( i = a1 + 12; *i; ++i )
  {
    if ( (unsigned int)++v3 >= 0x30 )
      return v2;
  }
  v5 = 0;
  v6 = (wint_t *)(a1 + 36);
  while ( *v6 )
  {
    if ( towupper(*v6) == *v6 )
    {
      ++v5;
      ++v6;
      if ( v5 < 0x80 )
        continue;
    }
    return v2;
  }
  v7 = 0;
  v8 = a1 + 4;
  for ( j = a1;
        *j <= 2u
     && *((_DWORD *)v8 - 2) <= 0x100000u
     && *((_DWORD *)v8 - 1) <= 0x4000u
     && (unsigned __int64)(*v8 + 6000000000LL) <= 0x165A0BBFFLL;
        ++j )
  {
    ++v7;
    v8 += 2;
    if ( v7 >= 2 )
    {
      if ( a1[10] <= 0x1000u && a1[11] <= 0x1000u && a1[100] < 0x20u && (unsigned int)(a1[101] - 1) <= 9 )
        return 0;
      return v2;
    }
  }
  return v2;
}
