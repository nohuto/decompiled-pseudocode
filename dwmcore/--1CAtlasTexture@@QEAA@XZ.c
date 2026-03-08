/*
 * XREFs of ??1CAtlasTexture@@QEAA@XZ @ 0x1800184C8
 * Callers:
 *     ?MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z @ 0x180018348 (-MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z.c)
 *     ?erase@?$vector@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@std@@@std@@@2@@Z @ 0x180018428 (-erase@-$vector@V-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@@std@@V-$a.c)
 *     ?Create@CAtlasTexture@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z @ 0x180024034 (-Create@CAtlasTexture@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z.c)
 *     ?AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z @ 0x1800B7594 (-AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z.c)
 *     ?CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z @ 0x1800FA91C (-CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@0@@Z @ 0x1800FE098 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@.c)
 * Callees:
 *     ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x180018550 (-DestroyResources@CAtlasTexture@@AEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 */

void __fastcall CAtlasTexture::~CAtlasTexture(CAtlasTexture *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CAtlasTexture::`vftable';
  CAtlasTexture::DestroyResources(this);
  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
    operator delete(v2);
  Microsoft::WRL::ComPtr<IRenderTargetBitmap>::InternalRelease((char *)this + 8);
}
