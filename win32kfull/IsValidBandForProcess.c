/*
 * XREFs of IsValidBandForProcess @ 0x1C009BB4C
 * Callers:
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1C0099DE8 (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsValidBandForProcess(__int64 a1, int a2, __int64 a3)
{
  int v6; // eax
  unsigned int v7; // edx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx

  v6 = IsImmersiveBroker(a1);
  v7 = 0;
  if ( v6 )
    return 1LL;
  if ( (*(_BYTE *)(a1 + 812) & 0x30) == 0x10 )
  {
    if ( a2 > 9 )
    {
      v15 = a2 - 10;
      if ( !v15 )
        return 1LL;
      v16 = v15 - 1;
      if ( !v16 )
        return 1LL;
      v17 = v16 - 2;
      if ( !v17 )
        return 1LL;
      v18 = v17 - 2;
      if ( !v18 )
        return 1LL;
      v19 = v18 - 2;
      if ( !v19 )
        return 1LL;
      return v19 == 1;
    }
    else
    {
      if ( a2 == 9 )
        return 1LL;
      v9 = a2 - 1;
      if ( !v9 )
        return 1LL;
      v10 = v9 - 2;
      if ( !v10 )
        return 1LL;
      v11 = v10 - 1;
      if ( !v11 )
        return 1LL;
      v12 = v11 - 1;
      if ( !v12 )
        return 1LL;
      v13 = v12 - 1;
      if ( !v13 )
        return 1LL;
      return v13 == 2;
    }
  }
  if ( a2 == 1 )
    return 1LL;
  if ( (*(_DWORD *)(a1 + 812) & 2) == 0 && (!a3 || *(_DWORD *)(*(_QWORD *)(a3 + 40) + 236LL) != 2) )
    return 0LL;
  LOBYTE(v7) = a2 == 2;
  return v7;
}
