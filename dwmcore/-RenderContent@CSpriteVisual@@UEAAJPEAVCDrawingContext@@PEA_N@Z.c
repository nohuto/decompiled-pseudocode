/*
 * XREFs of ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18007A2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetContentAsBrushNoRef@CVisual@@QEBA_NPEAPEAVCBrush@@@Z @ 0x18004AFA4 (-GetContentAsBrushNoRef@CVisual@@QEBA_NPEAPEAVCBrush@@@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18007A380 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetDropShadow@CSpriteVisual@@IEBAPEAVCDropShadow@@XZ @ 0x18012F6FA (-GetDropShadow@CSpriteVisual@@IEBAPEAVCDropShadow@@XZ.c)
 *     ?HasProtectedContent@CVisual@@QEBA_NXZ @ 0x1801D2D3C (-HasProtectedContent@CVisual@@QEBA_NXZ.c)
 *     ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18020E5EC (-RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?SetOcclusionRect@CDropShadow@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x180227368 (-SetOcclusionRect@CDropShadow@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 */

__int64 __fastcall CSpriteVisual::RenderContent(CSpriteVisual *this, struct CDrawingContext *a2, bool *a3)
{
  unsigned int v6; // edi
  int v7; // eax
  unsigned int v8; // ecx
  int v10; // eax
  float v11; // xmm1_4
  CDropShadow *DropShadow; // rax
  struct CContent *v13; // rax
  unsigned int v14; // r9d
  const struct D2D_SIZE_F *v15; // r10
  struct D2D_RECT_F v16; // [rsp+30h] [rbp-38h] BYREF

  v6 = 0;
  if ( CVisual::HasProtectedContent(this) )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 2) + 1274LL) )
    {
      *a3 = 1;
      return v6;
    }
    *((_BYTE *)a2 + 8092) = 1;
  }
  if ( (**((_DWORD **)this + 29) & 0x10000) != 0 )
  {
    *(_QWORD *)&v16.left = 0LL;
    if ( CVisual::GetContentAsBrushNoRef(this, (struct CBrush **)&v16) )
    {
      v10 = *((_DWORD *)a2 + 812);
      if ( v10 )
        v11 = *(float *)(*((_QWORD *)a2 + 408) + 4LL * (unsigned int)(v10 - 1));
      else
        v11 = *(float *)&FLOAT_1_0;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v11 - 1.0) & _xmm) >= 0.0000011920929
        || !(*(unsigned __int8 (__fastcall **)(_QWORD, char *, struct D2D_RECT_F *))(**(_QWORD **)&v16.left + 296LL))(
              *(_QWORD *)&v16.left,
              (char *)this + 140,
              &v16) )
      {
        v16 = 0LL;
      }
      DropShadow = CSpriteVisual::GetDropShadow(this);
      CDropShadow::SetOcclusionRect(DropShadow, &v16);
    }
    v13 = CSpriteVisual::GetDropShadow(this);
    CVisual::RenderContentWorker(this, v13, 1u, v14, a2, v15);
  }
  v7 = CVisual::RenderContent(this, a2, a3);
  v6 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xB9u, 0LL);
  return v6;
}
