/*
 * XREFs of ?CreateRenderTask@CShapeDrawingContext@@QEAAJPEAPEAVCShapeRenderTask@@@Z @ 0x18001F160
 * Callers:
 *     ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x1800843E8 (-CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@$$V@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@QEAAPEAVCShapeRenderTask@@QEAV2@@Z @ 0x180084918 (--$_Emplace_reallocate@$$V@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRenderTask@@@std@@@st.c)
 */

__int64 __fastcall CShapeDrawingContext::CreateRenderTask(CShapeDrawingContext *this, struct CShapeRenderTask **a2)
{
  char *v4; // rcx
  _DWORD *v5; // rdx

  v4 = (char *)this + 504;
  v5 = (_DWORD *)*((_QWORD *)v4 + 1);
  if ( v5 == *((_DWORD **)v4 + 2) )
  {
    std::vector<CShapeRenderTask>::_Emplace_reallocate<>();
  }
  else
  {
    *v5 = 0;
    *((_QWORD *)v4 + 1) += 56LL;
  }
  *a2 = (struct CShapeRenderTask *)(*((_QWORD *)this + 64) - 56LL);
  return 0LL;
}
