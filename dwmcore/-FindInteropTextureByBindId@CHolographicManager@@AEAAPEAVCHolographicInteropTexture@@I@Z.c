/*
 * XREFs of ?FindInteropTextureByBindId@CHolographicManager@@AEAAPEAVCHolographicInteropTexture@@I@Z @ 0x1802A1FA4
 * Callers:
 *     ?AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z @ 0x1802A1580 (-AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z.c)
 *     ?GetInteropTextureVisualTree@CHolographicManager@@UEAAJIPEAPEAVCVisualTree@@@Z @ 0x1802A20B0 (-GetInteropTextureVisualTree@CHolographicManager@@UEAAJIPEAPEAVCVisualTree@@@Z.c)
 * Callees:
 *     <none>
 */

struct CHolographicInteropTexture *__fastcall CHolographicManager::FindInteropTextureByBindId(
        CHolographicManager *this,
        int a2)
{
  __int64 v2; // rax
  __int64 v3; // r8

  v2 = *((_QWORD *)this + 18);
  v3 = 0LL;
  while ( v2 != *((_QWORD *)this + 19) )
  {
    if ( *(_DWORD *)(*(_QWORD *)v2 + 224LL) == a2 )
      return *(struct CHolographicInteropTexture **)v2;
    v2 += 8LL;
  }
  return (struct CHolographicInteropTexture *)v3;
}
