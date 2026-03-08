/*
 * XREFs of HalpInterruptControllerInUse @ 0x14051829C
 * Callers:
 *     HalpInterruptReinitialize @ 0x140A923CC (HalpInterruptReinitialize.c)
 * Callees:
 *     <none>
 */

char __fastcall HalpInterruptControllerInUse(__int64 a1)
{
  __int64 *v1; // r8
  __int64 *v2; // rdx
  __int64 *v3; // rcx
  unsigned int v4; // r9d
  int v5; // r10d
  unsigned int v6; // r10d

  v1 = (__int64 *)(a1 + 264);
  v2 = *(__int64 **)(a1 + 264);
  do
  {
LABEL_5:
    if ( v2 == v1 )
      return 0;
    v3 = v2;
    v4 = 0;
    v5 = *((_DWORD *)v2 + 6);
    v2 = (__int64 *)*v2;
    v6 = v5 - *((_DWORD *)v3 + 5);
  }
  while ( !v6 );
  while ( (*(_DWORD *)(56LL * v4 + v3[5] + 12) & 0x10) == 0 )
  {
    if ( ++v4 >= v6 )
      goto LABEL_5;
  }
  return 1;
}
