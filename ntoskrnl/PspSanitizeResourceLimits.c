/*
 * XREFs of PspSanitizeResourceLimits @ 0x1408108A4
 * Callers:
 *     PspReadUserQuotaLimits @ 0x140745544 (PspReadUserQuotaLimits.c)
 *     PsInitializeQuotaSystem @ 0x140B4988C (PsInitializeQuotaSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspSanitizeResourceLimits(unsigned int *a1, int a2)
{
  int v2; // r10d
  char *v3; // r11
  unsigned int *v5; // r8
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v9; // edx

  v2 = 0;
  v3 = PspResourceFlags;
  v5 = a1;
  do
  {
    if ( (*v3 & 2) != 0 )
    {
      v9 = *v5;
      if ( (*v5 & 0x7F) - 1 > 0x63 || v9 >= 0x80 )
      {
        if ( !a2 )
          return 3221225485LL;
        *v5 = v9 & 0xFFFFFF80 | 0x64;
      }
    }
    else if ( (*v3 & 1) != 0 && !*v5 )
    {
      *v5 = -1;
    }
    ++v2;
    v3 += 8;
    ++v5;
  }
  while ( v2 < 4 );
  v6 = *a1;
  if ( *a1 != -1 )
  {
    if ( v6 >= 0xFFF )
    {
      if ( !a2 )
        return 3221225485LL;
      *a1 = -1;
    }
    else
    {
      *a1 = v6 << 20;
    }
  }
  v7 = a1[1];
  if ( v7 == -1 )
    return 0LL;
  if ( v7 < 0xFFF )
  {
    a1[1] = v7 << 20;
    return 0LL;
  }
  if ( a2 )
  {
    a1[1] = -1;
    return 0LL;
  }
  return 3221225485LL;
}
