/*
 * XREFs of ?TryDrawSuperWetLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C9630
 * Callers:
 *     ?TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C9B00 (-TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@.c)
 * Callees:
 *     ??1?$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000DA7C (--1-$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800889B4 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?reset@?$com_ptr_t@VCBrushRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E707C (-reset@-$com_ptr_t@VCBrushRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180129D14 (McTemplateU0q_EventWriteTransfer.c)
 *     ?TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z @ 0x18012A432 (-TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z.c)
 *     McTemplateU0p_EventWriteTransfer @ 0x18019F364 (McTemplateU0p_EventWriteTransfer.c)
 *     TryFillRenderState @ 0x1801C9918 (TryFillRenderState.c)
 *     ?UpdateRenderStateClip@CSuperWetInkManager@@CA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAUD2D_RECT_U@@@Z @ 0x1801CA040 (-UpdateRenderStateClip@CSuperWetInkManager@@CA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoi.c)
 *     ?GetSuperWetInkClip@CTreeData@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1801D43DC (-GetSuperWetInkClip@CTreeData@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 */

__int64 __fastcall CSuperWetInkManager::TryDrawSuperWetLocal(
        CSuperWetInkManager *this,
        struct CSuperWetSource *a2,
        const struct CVisualTree **a3,
        __int64 a4,
        bool *a5)
{
  struct CSuperWetInkManager::SuperWetStroke *v7; // rax
  __int64 v8; // rcx
  const struct CVisualTree *v9; // rdx
  const struct CVisualTree *v10; // rcx
  CVisual *v11; // rax
  __int64 **TreeData; // rax
  __m128 v13; // xmm3
  unsigned __int32 v14; // xmm0_4
  unsigned __int32 v15; // xmm1_4
  __int64 v16; // rcx
  __int64 v18; // rax
  __int64 (__fastcall *v19)(struct CSuperWetSource *, const struct CVisualTree *, __int128 *, __int64 *); // rbx
  int v20; // eax
  unsigned int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // [rsp+30h] [rbp-51h] BYREF
  _DWORD v24[6]; // [rsp+38h] [rbp-49h] BYREF
  _DWORD v25[4]; // [rsp+50h] [rbp-31h] BYREF
  __int128 v26; // [rsp+60h] [rbp-21h] BYREF
  __int128 v27; // [rsp+70h] [rbp-11h] BYREF
  int v28; // [rsp+80h] [rbp-1h]
  int v29; // [rsp+84h] [rbp+3h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]

  *a5 = 0;
  v7 = CSuperWetInkManager::TryLookupDataForSource(this, a2);
  if ( !v7 || *(_QWORD *)(*(_QWORD *)v8 + 496LL) - *((_QWORD *)v7 + 11) >= 0xAuLL )
    return 0LL;
  TryFillRenderState((CDrawingContext *)a3);
  v28 = 0;
  v29 = 0;
  v9 = a3[4];
  v27 = *(_OWORD *)&_xmm;
  v10 = (const struct CVisualTree *)((char *)v9 + *(int *)(*((_QWORD *)v9 + 1) + 16LL) + 8);
  (**(void (__fastcall ***)(const struct CVisualTree *, _DWORD *))v10)(v10, v24);
  v24[2] = 0;
  v24[3] = 0;
  v24[4] = v24[0];
  v24[5] = v24[1];
  v11 = (CVisual *)(*((__int64 (__fastcall **)(char *))a3[3] + 4))((char *)a3 + 24);
  TreeData = CVisual::FindTreeData(v11, a3[1007]);
  if ( TreeData )
  {
    v13 = (__m128)_mm_loadu_si128((const __m128i *)CTreeData::GetSuperWetInkClip(TreeData, v25));
    v14 = _mm_shuffle_ps(v13, v13, 85).m128_u32[0];
    v15 = _mm_shuffle_ps(v13, v13, 170).m128_u32[0];
  }
  else
  {
    v14 = _mm_shuffle_ps(
            (__m128)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite,
            (__m128)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite,
            85).m128_u32[0];
    v13 = (__m128)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v15 = _mm_shuffle_ps(
            (__m128)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite,
            (__m128)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite,
            170).m128_u32[0];
  }
  v25[0] = v13.m128_i32[0];
  v25[1] = v14;
  v25[2] = v15;
  v25[3] = _mm_shuffle_ps(v13, v13, 255).m128_u32[0];
  if ( !(unsigned __int8)CSuperWetInkManager::UpdateRenderStateClip((struct MilRectF *)v25) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0p_EventWriteTransfer(v16, &EVTDESC_COMPUTESCRIBBLE_DRAWSKIPPED, (__int64)a2);
    *a5 = 1;
    return 0LL;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(struct CSuperWetSource *, const struct CVisualTree *, __int128 *, _QWORD))(*(_QWORD *)a2 + 288LL))(
          a2,
          a3[5],
          &v27,
          0LL) )
    return 0LL;
  v18 = *(_QWORD *)a2;
  v23 = 0LL;
  v19 = *(__int64 (__fastcall **)(struct CSuperWetSource *, const struct CVisualTree *, __int128 *, __int64 *))(v18 + 296);
  wil::com_ptr_t<CBrushRenderingGraph,wil::err_returncode_policy>::reset(&v23);
  v20 = v19(a2, a3[5], &v27, &v23);
  v21 = v20;
  if ( v20 >= 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v23 + 72LL))(v23) )
    {
      v26 = 0LL;
      v20 = (*(__int64 (__fastcall **)(__int64, const struct CVisualTree **, __int128 *))(*(_QWORD *)v23 + 80LL))(
              v23,
              a3,
              &v26);
      v21 = v20;
      if ( v20 < 0 )
      {
        v22 = 618LL;
        goto LABEL_19;
      }
      if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a3[1007] + 184LL))(a3[1007]) )
        *(_OWORD *)((char *)a2 + 72) = v26;
      *a5 = 1;
    }
    else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    {
      McTemplateU0q_EventWriteTransfer(
        (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (__int64)&EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
        19LL);
    }
    v21 = 0;
    goto LABEL_24;
  }
  v22 = 606LL;
LABEL_19:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v22,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
    (const char *)(unsigned int)v20);
LABEL_24:
  wil::com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>::~com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>(&v23);
  return v21;
}
