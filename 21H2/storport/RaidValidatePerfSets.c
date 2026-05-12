/*
 * XREFs of RaidValidatePerfSets @ 0x1C004002C
 * Callers:
 *     RaidRegisterPerfStates @ 0x1C003F758 (RaidRegisterPerfStates.c)
 * Callees:
 *     RaidGetStorPoFxPerfState @ 0x1C0037E7C (RaidGetStorPoFxPerfState.c)
 */

char __fastcall RaidValidatePerfSets(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r10d
  int v3; // ebx
  __int64 i; // r9
  _DWORD *v5; // rsi
  unsigned int v6; // edi
  unsigned int j; // r11d
  _DWORD *StorPoFxPerfState; // rax
  int v9; // r11d

  v2 = a2;
  if ( a2 < 4 )
  {
    v3 = 0;
    if ( !a2 )
      return 1;
    for ( i = a1 + 20; ; i += 40LL )
    {
      v5 = (_DWORD *)(i - 20);
      if ( i == 20 || *v5 != 1 || *(_DWORD *)(i - 16) < 0x28u )
        break;
      if ( *(_DWORD *)i )
      {
        if ( *(_DWORD *)i != 1 || *(_QWORD *)(i + 4) > *(_QWORD *)(i + 12) )
          return 0;
      }
      else
      {
        v6 = *(_DWORD *)(i + 4);
        if ( v6 - 1 > 7 )
          return 0;
        for ( j = 0; j < v6; j = v9 + 1 )
        {
          StorPoFxPerfState = (_DWORD *)RaidGetStorPoFxPerfState(v5, j);
          if ( *StorPoFxPerfState != 1 || StorPoFxPerfState[1] < 0x18u )
            return 0;
        }
      }
      if ( ++v3 >= v2 )
        return 1;
    }
  }
  return 0;
}
