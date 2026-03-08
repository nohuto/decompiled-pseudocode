/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@0@@Z @ 0x1800FE098
 * Callers:
 *     ??1CD3DDevice@@MEAA@XZ @ 0x1800EDCB4 (--1CD3DDevice@@MEAA@XZ.c)
 *     ??$_Uninitialized_move@PEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@0@@Z @ 0x1800FDFE4 (--$_Uninitialized_move@PEAV-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@.c)
 *     ?_Change_array@?$vector@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@2@_K1@Z @ 0x1800FE024 (-_Change_array@-$vector@V-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@@s.c)
 * Callees:
 *     ??1CAtlasTexture@@QEAA@XZ @ 0x1800184C8 (--1CAtlasTexture@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Destroy_range<std::allocator<std::unique_ptr<CAtlasTexture>>>(
        CAtlasTexture **a1,
        CAtlasTexture **a2)
{
  CAtlasTexture **v3; // rbx
  CAtlasTexture *v4; // rdi

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        CAtlasTexture::~CAtlasTexture(*v3);
        operator delete(v4, 0x28uLL);
      }
      ++v3;
    }
    while ( v3 != a2 );
  }
}
