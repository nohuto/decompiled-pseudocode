/*
 * XREFs of KeInitializeCatRegisters @ 0x1403874E8
 * Callers:
 *     KiRestoreFeatureBits @ 0x140576730 (KiRestoreFeatureBits.c)
 *     KeInitSystem @ 0x140B53548 (KeInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 KeInitializeCatRegisters()
{
  __int64 result; // rax

  if ( KiCacheIsoBitmap )
  {
    if ( _bittest64(&KeFeatureBits, 0x2Cu) )
    {
      result = (unsigned int)KiCacheIsoBitmap;
      __writemsr(0xC91u, (unsigned int)KiCacheIsoBitmap);
    }
  }
  return result;
}
