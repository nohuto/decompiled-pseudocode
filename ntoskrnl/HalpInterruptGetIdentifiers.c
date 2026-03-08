/*
 * XREFs of HalpInterruptGetIdentifiers @ 0x140379900
 * Callers:
 *     HalpNumaQueryProcessorNode @ 0x140377F90 (HalpNumaQueryProcessorNode.c)
 *     HalpConnectThermalInterrupt @ 0x140378B60 (HalpConnectThermalInterrupt.c)
 *     HalpNumaSwapP0NodeToFront @ 0x14039F678 (HalpNumaSwapP0NodeToFront.c)
 *     HalpMcLoadMicrocodeWorker @ 0x140519630 (HalpMcLoadMicrocodeWorker.c)
 *     Amd64InitializeCacheStatus @ 0x140527134 (Amd64InitializeCacheStatus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpInterruptGetIdentifiers(int a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v3; // r11d
  int v4; // r10d
  ULONG_PTR v5; // r9
  unsigned int v6; // r9d
  _BYTE *v7; // rcx
  int v9; // eax

  v3 = 0;
  v4 = a1;
  if ( (_DWORD)HalpInterruptProcessorCount )
  {
    v5 = HalpInterruptProcessorState + 13;
    while ( 1 )
    {
      if ( !*(_BYTE *)(v5 + 43) )
      {
        if ( *(_BYTE *)v5 )
        {
          --v4;
          if ( *(_DWORD *)(v5 + 7) == a1 )
            break;
        }
      }
      ++v3;
      v5 += 64LL;
      if ( v3 >= (unsigned int)HalpInterruptProcessorCount )
        goto LABEL_7;
    }
    if ( a2 )
      *a2 = *(_DWORD *)(v5 - 13);
    if ( a3 )
    {
      v9 = *(_DWORD *)(v5 - 9);
LABEL_25:
      *a3 = v9;
    }
    return 0LL;
  }
  else
  {
LABEL_7:
    v6 = 0;
    if ( (_DWORD)HalpInterruptProcessorCount )
    {
      v7 = (_BYTE *)(HalpInterruptProcessorState + 12);
      do
      {
        if ( !v7[1] && !*v7 && !v7[44] )
        {
          if ( !v4 )
          {
            if ( a2 )
              *a2 = *((_DWORD *)v7 - 3);
            if ( a3 )
            {
              v9 = *((_DWORD *)v7 - 2);
              goto LABEL_25;
            }
            return 0LL;
          }
          --v4;
        }
        ++v6;
        v7 += 64;
      }
      while ( v6 < (unsigned int)HalpInterruptProcessorCount );
    }
    return 3221226021LL;
  }
}
