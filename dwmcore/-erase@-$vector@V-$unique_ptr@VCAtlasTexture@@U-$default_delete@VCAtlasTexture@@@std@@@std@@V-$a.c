/*
 * XREFs of ?erase@?$vector@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@std@@@std@@@2@@Z @ 0x180018428
 * Callers:
 *     ?MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z @ 0x180018348 (-MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z.c)
 * Callees:
 *     ??1CAtlasTexture@@QEAA@XZ @ 0x1800184C8 (--1CAtlasTexture@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CAtlasTexture ***__fastcall std::vector<std::unique_ptr<CAtlasTexture>>::erase(
        __int64 a1,
        CAtlasTexture ***a2,
        CAtlasTexture **a3)
{
  CAtlasTexture **v3; // r12
  CAtlasTexture **v4; // rdi
  CAtlasTexture **v8; // rsi
  CAtlasTexture *v9; // rax
  CAtlasTexture *v10; // r15
  __int64 v11; // rax
  void *v12; // rdi
  CAtlasTexture ***result; // rax

  v3 = *(CAtlasTexture ***)(a1 + 8);
  v4 = a3 + 1;
  if ( a3 + 1 != v3 )
  {
    v8 = a3;
    do
    {
      if ( v8 != v4 )
      {
        v9 = *v4;
        *v4 = 0LL;
        v10 = *v8;
        *v8 = v9;
        if ( v10 )
        {
          CAtlasTexture::~CAtlasTexture(v10);
          operator delete(v10, 0x28uLL);
        }
      }
      ++v4;
      ++v8;
    }
    while ( v4 != v3 );
  }
  v11 = *(_QWORD *)(a1 + 8);
  v12 = *(void **)(v11 - 8);
  if ( v12 )
  {
    CAtlasTexture::~CAtlasTexture(*(CAtlasTexture **)(v11 - 8));
    operator delete(v12, 0x28uLL);
  }
  *(_QWORD *)(a1 + 8) -= 8LL;
  result = a2;
  *a2 = a3;
  return result;
}
