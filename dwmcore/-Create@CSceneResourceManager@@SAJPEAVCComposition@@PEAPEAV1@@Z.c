/*
 * XREFs of ?Create@CSceneResourceManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800AF47C
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800AE4F0 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180038C50 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CSceneResourceManager@@AEAA@PEAVCComposition@@@Z @ 0x1800AF6D8 (--0CSceneResourceManager@@AEAA@PEAVCComposition@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CSceneResourceManager::Create(struct CComposition *a1, struct CSceneResourceManager **a2)
{
  CSceneResourceManager *v4; // rax
  unsigned int v5; // ecx
  struct CSceneResourceManager *v6; // rax
  unsigned int v7; // ebx

  v4 = (CSceneResourceManager *)DefaultHeap::AllocClear(0x58uLL);
  if ( v4 && (v6 = CSceneResourceManager::CSceneResourceManager(v4, a1)) != 0LL )
  {
    *a2 = v6;
    return 0;
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024882, 0x18u, 0LL);
  }
  return v7;
}
