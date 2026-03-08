/*
 * XREFs of KiIsFlushEntire @ 0x140457F9C
 * Callers:
 *     KiPreprocessFlushTb @ 0x140212038 (KiPreprocessFlushTb.c)
 *     KeFlushTb @ 0x140323CB0 (KeFlushTb.c)
 *     KeFlushCurrentTbOnly @ 0x1403876F4 (KeFlushCurrentTbOnly.c)
 *     KeFlushEntireTb @ 0x1403AD590 (KeFlushEntireTb.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsFlushEntire(int a1)
{
  int v1; // ecx

  if ( KiFlushPcid )
    return 0;
  if ( !KiKvaShadow )
  {
    if ( a1 )
    {
      v1 = a1 - 1;
      if ( !v1 )
        return 0;
      return v1 != 1;
    }
    return 1;
  }
  if ( !a1 )
    return 0;
  v1 = a1 - 1;
  if ( !v1 )
    return 1;
  return v1 != 1;
}
