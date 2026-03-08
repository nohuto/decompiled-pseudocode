/*
 * XREFs of ?DetermineIdealAtlasSize@CAtlasManager@@CAII@Z @ 0x1800FA984
 * Callers:
 *     ?AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z @ 0x1800B7594 (-AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z.c)
 *     ?CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z @ 0x1800FA91C (-CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAtlasManager::DetermineIdealAtlasSize(int a1)
{
  __int64 result; // rax
  unsigned int v2; // edx
  unsigned int v3; // ecx

  result = 8LL;
  if ( (unsigned int)(a1 + 1) >= 8 )
  {
    v2 = a1 + 2;
    v3 = 0x80000000;
    if ( v2 <= 0x400 )
      v3 = 1024;
    while ( (v3 & v2) == 0 )
      v3 >>= 1;
    result = 2 * v3;
    if ( v2 == v3 )
      result = v3;
    if ( (unsigned int)result >= 0x800 )
      return 2048LL;
  }
  return result;
}
