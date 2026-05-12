/*
 * XREFs of RaidAdapterCacheOperationalPowerRange @ 0x1C0037D78
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000F680 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidGetStorPoFxPerfState @ 0x1C0037E5C (RaidGetStorPoFxPerfState.c)
 */

char __fastcall RaidAdapterCacheOperationalPowerRange(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  __int64 v4; // r10
  unsigned int v6; // r11d
  _DWORD *i; // rax
  char result; // al
  unsigned int v9; // esi
  __int64 v10; // r11
  unsigned int v11; // edi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r10

  v3 = 0LL;
  v4 = -1LL;
  v6 = 0;
  if ( !a2 )
    return 0;
  for ( i = (_DWORD *)(a3 + 24); *(i - 1) || !*i || *(i - 2) != 3; i += 10 )
  {
    if ( ++v6 >= a2 )
      return 0;
  }
  v9 = 0;
  v10 = a3 + 40LL * v6;
  v11 = *(_DWORD *)(v10 + 24);
  if ( v11 )
  {
    do
    {
      v13 = *(_QWORD *)(RaidGetStorPoFxPerfState(v10, v9) + 8);
      v12 = v13;
      if ( v13 <= v14 )
        v13 = v14;
      v3 = v13;
      if ( v12 >= v15 )
        v12 = v15;
      ++v9;
      v4 = v12;
    }
    while ( v9 < v11 );
  }
  *(_QWORD *)(a1 + 32) = v3;
  result = 1;
  *(_QWORD *)(a1 + 40) = v4;
  return result;
}
