/*
 * XREFs of ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18007A040
 * Callers:
 *     <none>
 * Callees:
 *     ?clear_region@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180043738 (-clear_region@-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18007A380 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x18007A6A4 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x18007A8C0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18008A3EC (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800A81C0 (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x1800A8784 (-EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800DB32C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800DBA68 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x18012F91A (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 *     ?HasProtectedContent@CVisual@@QEBA_NXZ @ 0x1801D2D3C (-HasProtectedContent@CVisual@@QEBA_NXZ.c)
 *     ?CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z @ 0x18021A444 (-CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z.c)
 *     ?DxFlipConsumedTelemetry@CWindowNode@@AEBAXPEAVCDrawingContext@@PEAVCCompositionSurfaceBitmap@@@Z @ 0x180252EA8 (-DxFlipConsumedTelemetry@CWindowNode@@AEBAXPEAVCDrawingContext@@PEAVCCompositionSurfaceBitmap@@@.c)
 *     ?GetMonitorTargetId@CDrawingContext@@QEBA_NPEAUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1802530AC (-GetMonitorTargetId@CDrawingContext@@QEBA_NPEAUtagCOMPOSITION_TARGET_ID@@@Z.c)
 *     ?RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x18025339C (-RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     McTemplateU0xxxqqqn_EventWriteTransfer @ 0x1802536CC (McTemplateU0xxxqqqn_EventWriteTransfer.c)
 */

__int64 __fastcall CWindowNode::RenderContent(const struct CShape **this, struct _LIST_ENTRY **a2, bool *a3)
{
  struct _LIST_ENTRY *v6; // rax
  struct _LIST_ENTRY *v7; // rdi
  struct _LIST_ENTRY *v8; // r12
  struct CWindowOcclusionInfo *v9; // r14
  __int64 *p_Blink; // rbx
  __int64 *v11; // r12
  __int64 i; // rax
  struct CWindowOcclusionInfo *v13; // r8
  __int64 v14; // rax
  unsigned __int64 v15; // rbx
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // edi
  unsigned int Flink; // ecx
  int v22; // ecx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *j; // rcx
  __int64 v26; // rdi
  __int64 v27; // rcx
  bool v28; // zf
  __int64 v29; // rdi
  int v30; // edx
  __int128 *v31; // rcx
  __int128 v32; // xmm0
  unsigned int v33; // edx
  unsigned int v34; // r8d
  __int64 v35; // rcx
  __int64 v36; // r12
  int v37; // r8d
  __int64 v38; // rdx
  struct IBitmapResource *v39; // r9
  struct CCompositionSurfaceBitmap *v40; // rbx
  int v41; // edi
  const struct CShape *v42; // rcx
  struct IBitmapResource *v43; // r9
  unsigned int v44; // ecx
  unsigned int v45; // [rsp+20h] [rbp-49h]
  int v46; // [rsp+50h] [rbp-19h] BYREF
  int v47; // [rsp+58h] [rbp-11h]
  int v48; // [rsp+60h] [rbp-9h]
  int v49; // [rsp+64h] [rbp-5h]
  int v50; // [rsp+68h] [rbp-1h]
  __int128 v51; // [rsp+70h] [rbp+7h] BYREF

  if ( CVisual::HasProtectedContent((CVisual *)this) )
  {
    if ( *((_BYTE *)this[2] + 1274) )
    {
      v18 = CWindowNode::RenderBlackContent((CWindowNode *)this, (struct CDrawingContext *)a2);
      v20 = v18;
      if ( v18 >= 0 )
      {
        *a3 = 1;
        return v20;
      }
      v45 = 1260;
      goto LABEL_83;
    }
    *((_BYTE *)a2 + 8092) = 1;
  }
  v6 = a2[25];
  v7 = v6 + 118;
  if ( !v6 )
    v7 = (struct _LIST_ENTRY *)&CBackdropVisualImageKey::sc_NoBVIKey;
  v8 = a2[1007];
  v9 = 0LL;
  if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v8->Flink[11].Blink)(v8) )
  {
    p_Blink = (__int64 *)(this + 42);
LABEL_6:
    if ( p_Blink )
    {
      v11 = p_Blink + 25;
      for ( i = p_Blink[25]; i != p_Blink[26]; i += 8LL )
      {
        v13 = *(struct CWindowOcclusionInfo **)i;
        if ( *(struct _LIST_ENTRY **)(*(_QWORD *)i + 8LL) == v7->Flink
          && (struct _LIST_ENTRY *)*((_QWORD *)v13 + 2) == v7->Blink )
        {
          v9 = *(struct CWindowOcclusionInfo **)i;
          if ( v13 )
            *((_BYTE *)v13 + 25) = 10;
          break;
        }
      }
      v14 = *(_QWORD *)(*(_QWORD *)(p_Blink[33] + 16) + 496LL);
      if ( p_Blink[30] != v14 )
      {
        p_Blink[30] = v14;
        v26 = *v11;
        while ( v26 != p_Blink[26] )
        {
          v27 = *(_QWORD *)v26;
          if ( *(_QWORD *)(*(_QWORD *)v26 + 8LL) == CBackdropVisualImageKey::sc_NoBVIKey
            && *(_QWORD *)(v27 + 16) == qword_1803E6E90
            || (v28 = *(_BYTE *)(v27 + 25) == 1, --*(_BYTE *)(v27 + 25), !v28) )
          {
            v26 += 8LL;
          }
          else
          {
            v29 = (v26 - *v11) >> 3;
            detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::clear_region(
              p_Blink + 25,
              v29,
              1LL);
            v26 = *v11 + 8 * v29;
          }
        }
      }
    }
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)this);
    if ( TreeDataListHead )
    {
      for ( j = TreeDataListHead->Flink; j != TreeDataListHead; j = j->Flink )
      {
        p_Blink = (__int64 *)&j[-23].Blink;
        if ( j[2].Flink == v8 )
          goto LABEL_6;
      }
    }
  }
  if ( !*((_BYTE *)this + 895) || *((_BYTE *)this + 890) )
    goto LABEL_28;
  v15 = (unsigned __int64)this[97];
  if ( (v15 & 2) != 0 )
  {
    v17 = v15 & 0xFFFFFFFFFFFFFFFCuLL;
    v16 = *(_QWORD *)v17;
  }
  else
  {
    v16 = (unsigned __int64)this[97] & 1;
    v17 = v15 & 0xFFFFFFFFFFFFFFFCuLL;
  }
  if ( v16 )
  {
    if ( v16 != 1 )
      v17 = *(_QWORD *)(v17 + 16);
  }
  else
  {
    v17 = 0LL;
  }
  v18 = CWindowNode::EnsureEffectiveSpriteClip((CWindowNode *)this);
  v20 = v18;
  if ( v18 < 0 )
  {
    v45 = 1278;
    goto LABEL_83;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0
    && CDrawingContext::GetMonitorTargetId((CDrawingContext *)a2, (struct tagCOMPOSITION_TARGET_ID *)&v46)
    && !(unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(v17 + 336) )
  {
    v32 = *v31;
    *((_DWORD *)v31 + 3) = 0;
    *((_DWORD *)v31 + 2) = 0;
    *((_DWORD *)v31 + 1) = 0;
    *(_DWORD *)v31 = 0;
    v51 = v32;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0xxxqqqn_EventWriteTransfer(v47, v30, (unsigned int)this[88], v46, v47, v48, v49, v50);
  }
  Flink = (unsigned int)a2[5][58].Flink;
  if ( *(_DWORD *)(v17 + 424) <= Flink && *(_DWORD *)(v17 + 428) <= Flink
    || *(_QWORD *)(v17 + 448) == *(_QWORD *)(v17 + 456)
    && (!*(_QWORD *)(v17 + 352)
     || !CGdiSpriteBitmap::EnsureBitmapRealization((CGdiSpriteBitmap *)v17)
     || (int)CGdiSpriteBitmap::CreateSectionBitmapSubRects((CGdiSpriteBitmap *)v17, v33, v34) < 0) )
  {
    if ( v9 )
      v22 = *((_DWORD *)v9 + 10);
    else
      v22 = 0;
    v18 = CWindowNode::RenderImage(
            (CWindowNode *)this,
            (struct CDrawingContext *)a2,
            v9,
            (struct IBitmapResource *)(v17 + 96),
            this[110],
            1,
            v22);
    v20 = v18;
    if ( v18 >= 0 )
      goto LABEL_28;
    v45 = 1290;
LABEL_83:
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, v45, 0LL);
    return v20;
  }
  v35 = *(_QWORD *)(v17 + 448);
  v36 = 0LL;
  if ( (*(_QWORD *)(v17 + 456) - v35) >> 3 )
  {
    while ( 1 )
    {
      v37 = v9 ? *((_DWORD *)v9 + 10) : 0;
      v38 = *(_QWORD *)(v35 + 8 * v36);
      v39 = v38 ? (struct IBitmapResource *)(*(int *)(*(_QWORD *)(v38 + 64) + 8LL) + v38 + 64) : 0LL;
      v18 = CWindowNode::RenderImage((CWindowNode *)this, (struct CDrawingContext *)a2, v9, v39, this[110], 1, v37);
      v20 = v18;
      if ( v18 < 0 )
        break;
      v35 = *(_QWORD *)(v17 + 448);
      if ( ++v36 >= (unsigned __int64)((*(_QWORD *)(v17 + 456) - v35) >> 3) )
        goto LABEL_28;
    }
    v45 = 1301;
    goto LABEL_83;
  }
LABEL_28:
  if ( *((_BYTE *)this + 896) )
  {
    v40 = (struct CCompositionSurfaceBitmap *)CPtrArrayBase::operator[](this + 98, 0LL);
    CWindowNode::DxFlipConsumedTelemetry((CWindowNode *)this, (struct CDrawingContext *)a2, v40);
    v41 = v9 ? *((_DWORD *)v9 + 12) : 0;
    v42 = *(const struct CShape **)CWindowNode::GetDxClipShape(this, &v51);
    v43 = v40 ? (struct CCompositionSurfaceBitmap *)((char *)v40 + 72) : 0LL;
    v20 = CWindowNode::RenderImage((CWindowNode *)this, (struct CDrawingContext *)a2, v9, v43, v42, 0, v41);
    CShapePtr::Release((CShapePtr *)&v51);
    if ( (v20 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v20, 0x526u, 0LL);
      return v20;
    }
  }
  v18 = CVisual::RenderContent((CVisual *)this, (struct CDrawingContext *)a2, a3);
  v20 = v18;
  if ( v18 < 0 )
  {
    v45 = 1321;
    goto LABEL_83;
  }
  return v20;
}
