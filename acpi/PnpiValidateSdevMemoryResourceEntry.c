/*
 * XREFs of PnpiValidateSdevMemoryResourceEntry @ 0x1C0092398
 * Callers:
 *     PnpiValidateSdevResources @ 0x1C0092454 (PnpiValidateSdevResources.c)
 * Callees:
 *     <none>
 */

char __fastcall PnpiValidateSdevMemoryResourceEntry(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // r8d
  __int64 v6; // rcx
  char v7; // al
  __int64 v8; // r9
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx

  v2 = *(_DWORD *)(a2 + 4);
  v3 = 0;
  if ( !v2 )
    return 0;
  while ( 1 )
  {
    v6 = a2 + 32LL * v3;
    v7 = *(_BYTE *)(v6 + 9);
    if ( v7 == 3 || v7 == 7 && (*(_WORD *)(v6 + 12) & 0xE00) != 0 )
    {
      v8 = *(_QWORD *)(v6 + 32);
      v9 = *(unsigned int *)(v6 + 16);
      v10 = *(_QWORD *)(a1 + 8);
      if ( v10 >= *(_QWORD *)(a2 + 32LL * v3 + 24) )
      {
        v11 = *(_QWORD *)(a1 + 16);
        if ( v11 + v10 <= v8 + 1 && v11 <= v9 )
          break;
      }
    }
    if ( ++v3 >= v2 )
      return 0;
  }
  return 1;
}
