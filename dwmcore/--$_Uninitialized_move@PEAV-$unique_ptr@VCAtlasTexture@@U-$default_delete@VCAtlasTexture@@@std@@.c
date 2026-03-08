/*
 * XREFs of ??$_Uninitialized_move@PEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@0@@Z @ 0x1800FDFE4
 * Callers:
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@?$vector@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800FDEF4 (--$_Emplace_reallocate@V-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@@st.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@0@@Z @ 0x1800FE098 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@.c)
 */

_QWORD *__fastcall std::_Uninitialized_move<std::unique_ptr<CAtlasTexture> *,std::allocator<std::unique_ptr<CAtlasTexture>>>(
        __int64 *a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 v5; // r8

  while ( a1 != a2 )
  {
    v5 = *a1;
    *a1 = 0LL;
    *a3++ = v5;
    ++a1;
  }
  std::_Destroy_range<std::allocator<std::unique_ptr<CAtlasTexture>>>(a3, a3);
  return a3;
}
