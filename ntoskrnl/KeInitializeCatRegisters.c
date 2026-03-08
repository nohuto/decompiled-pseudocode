/*
 * XREFs of KeInitializeCatRegisters @ 0x14037FD5C
 * Callers:
 *     KiRestoreFeatureBits @ 0x140574114 (KiRestoreFeatureBits.c)
 *     KeInitSystem @ 0x140B42FB8 (KeInitSystem.c)
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
