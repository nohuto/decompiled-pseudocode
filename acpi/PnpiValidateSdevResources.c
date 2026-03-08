/*
 * XREFs of PnpiValidateSdevResources @ 0x1C0092454
 * Callers:
 *     PnpBiosGetDeviceResourceList @ 0x1C008ED68 (PnpBiosGetDeviceResourceList.c)
 * Callees:
 *     PnpiValidateSdevMemoryResourceEntry @ 0x1C0092398 (PnpiValidateSdevMemoryResourceEntry.c)
 */

__int64 __fastcall PnpiValidateSdevResources(__int64 a1, int a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned int v4; // edi
  int v6; // r10d
  unsigned __int64 v7; // r9
  __int64 v9; // rax
  unsigned __int64 v10; // rsi
  unsigned int v11; // r15d
  __int64 v12; // rbp
  unsigned int v13; // r14d

  v3 = a1 + 36;
  v4 = 0;
  v6 = 0;
  v7 = a1 + *(unsigned int *)(a1 + 4);
  while ( 1 )
  {
    if ( v3 >= v7 )
      return (unsigned int)-1073741275;
    if ( v6 == a2 )
      break;
    v3 += *(unsigned __int16 *)(v3 + 2);
    ++v6;
  }
  if ( v3 >= v7 || !v3 )
    return (unsigned int)-1073741275;
  if ( *(_BYTE *)v3 )
  {
    return (unsigned int)-1072431094;
  }
  else if ( (*(_BYTE *)(v3 + 1) & 2) != 0 )
  {
    v9 = *(unsigned __int16 *)(v3 + 12);
    v10 = v3 + *(unsigned __int16 *)(v3 + 2);
    while ( 1 )
    {
      v3 += v9;
      if ( v3 >= v10 )
        break;
      if ( *(_BYTE *)v3 == 1 )
      {
        v11 = *(_DWORD *)(a3 + 28);
        v12 = a3 + 32;
        v13 = 0;
        if ( !v11 )
          return (unsigned int)-1073741823;
        while ( !PnpiValidateSdevMemoryResourceEntry(v3, v12) )
        {
          ++v13;
          v12 += 32LL * (unsigned int)(*(_DWORD *)(v12 + 4) - 1) + 40;
          if ( v13 >= v11 )
            return (unsigned int)-1073741823;
        }
      }
      v9 = *(unsigned __int16 *)(v3 + 2);
    }
  }
  return v4;
}
