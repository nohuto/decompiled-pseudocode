/*
 * XREFs of ?RecordCompositionMode@CFlipExSwapchainStatistics@@UEAA_N_NW4BufferCompositionMode@@0@Z @ 0x180017BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CFlipExSwapchainStatistics::RecordCompositionMode(__int64 a1, char a2, int a3, char a4)
{
  int v4; // eax

  v4 = 0;
  if ( !a2 )
    return 0;
  if ( !a4 )
    v4 = a3;
  if ( v4 == *(_DWORD *)(a1 + 24) )
    return 0;
  *(_DWORD *)(a1 + 24) = v4;
  return 1;
}
