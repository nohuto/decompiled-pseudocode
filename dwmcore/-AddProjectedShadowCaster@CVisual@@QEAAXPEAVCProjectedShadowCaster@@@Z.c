/*
 * XREFs of ?AddProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x180008DAC
 * Callers:
 *     ?SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z @ 0x180008E5C (-SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x18000977C (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ?SetProjectedShadowCasters@CVisual@@QEAAXPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@@Z @ 0x18000A22C (-SetProjectedShadowCasters@CVisual@@QEAAXPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@P.c)
 *     ?AddProjectedShadowCasterVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x18000A274 (-AddProjectedShadowCasterVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVCProjectedShadowCaster@@@?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@QEAAPEAPEAVCProjectedShadowCaster@@QEAPEAV2@AEBQEAV2@@Z @ 0x18001D0D4 (--$_Emplace_reallocate@AEBQEAVCProjectedShadowCaster@@@-$vector@PEAVCProjectedShadowCaster@@V-$a.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 */

void __fastcall CVisual::AddProjectedShadowCaster(CComposition **this, struct CProjectedShadowCaster *a2)
{
  _QWORD *v4; // rax
  __int64 ProjectedShadowCasters; // rax
  _QWORD *v6; // rdi
  _QWORD *v7; // rdx
  struct CProjectedShadowCaster *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  if ( (*(_DWORD *)this[29] & 0x40000) == 0 )
  {
    v4 = operator new(0x18uLL);
    if ( v4 )
    {
      *v4 = 0LL;
      v4[1] = 0LL;
      v4[2] = 0LL;
    }
    else
    {
      v4 = 0LL;
    }
    CVisual::SetProjectedShadowCasters(this, v4);
  }
  ProjectedShadowCasters = CVisual::GetProjectedShadowCasters(this);
  v6 = (_QWORD *)ProjectedShadowCasters;
  v7 = *(_QWORD **)(ProjectedShadowCasters + 8);
  if ( v7 == *(_QWORD **)(ProjectedShadowCasters + 16) )
  {
    std::vector<CProjectedShadowCaster *>::_Emplace_reallocate<CProjectedShadowCaster * const &>(
      ProjectedShadowCasters,
      v7,
      &v8);
  }
  else
  {
    *v7 = a2;
    *(_QWORD *)(ProjectedShadowCasters + 8) += 8LL;
  }
  if ( ((v6[1] - *v6) & 0xFFFFFFFFFFFFFFF8uLL) == 8 )
    CComposition::AddProjectedShadowCasterVisual(this[2], (struct CVisual *)this);
}
