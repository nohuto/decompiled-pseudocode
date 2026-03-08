/*
 * XREFs of ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIVailRenderTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1801C9388
 * Callers:
 *     ?Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801E8350 (-Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000DA7C (--1-$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@VCBrushRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E707C (-reset@-$com_ptr_t@VCBrushRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180129D14 (McTemplateU0q_EventWriteTransfer.c)
 *     ?DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ @ 0x1801C8A90 (-DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ.c)
 *     ?RegisterStrokeOnHost@CSuperWetInkManager@@AEAAJPEAUVailSuperWetStroke@1@PEA_N@Z @ 0x1801C9170 (-RegisterStrokeOnHost@CSuperWetInkManager@@AEAAJPEAUVailSuperWetStroke@1@PEA_N@Z.c)
 *     ?TryLookupVailDataForSource@CSuperWetInkManager@@AEAAPEAUVailSuperWetStroke@1@PEAVCSuperWetSource@@@Z @ 0x1801C9A34 (-TryLookupVailDataForSource@CSuperWetInkManager@@AEAAPEAUVailSuperWetStroke@1@PEAVCSuperWetSourc.c)
 *     ?UpdateRenderStateClip@CSuperWetInkManager@@CA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAUD2D_RECT_U@@@Z @ 0x1801CA040 (-UpdateRenderStateClip@CSuperWetInkManager@@CA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoi.c)
 */

__int64 __fastcall CSuperWetInkManager::ScheduleScribblesForRenderTarget(
        struct ID3D12Device *this,
        __int64 a2,
        __int64 a3,
        _BYTE *a4)
{
  unsigned int v5; // ebp
  struct CSuperWetSource *lpVtbl; // rdx
  __int64 v8; // rcx
  struct CSuperWetInkManager::VailSuperWetStroke *v9; // r14
  __int64 v10; // r9
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdi
  int (__fastcall *v15)(__int64, _QWORD, char *, __int64 *); // rbx
  __int64 v16; // rsi
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, _QWORD, __int64); // rdi
  unsigned int v19; // eax
  int v20; // eax
  int v21; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  bool v23; // [rsp+60h] [rbp+8h] BYREF
  __int64 v24; // [rsp+78h] [rbp+20h] BYREF

  v5 = 0;
  lpVtbl = (struct CSuperWetSource *)this[1].lpVtbl;
  *a4 = 0;
  if ( !lpVtbl )
    return 0LL;
  v9 = CSuperWetInkManager::TryLookupVailDataForSource((CSuperWetInkManager *)this, lpVtbl);
  if ( *((_QWORD *)v9 + 1) != v10 )
    return 0LL;
  if ( *(_QWORD *)(*(_QWORD *)v8 + 496LL) - *((_QWORD *)v9 + 13) >= 0xAuLL )
  {
    CSuperWetInkManager::DeactivateCurrentSource((struct CSuperWetSource **)this);
    return 0LL;
  }
  if ( !*((_BYTE *)v9 + 112) )
  {
    v12 = CSuperWetInkManager::RegisterStrokeOnHost(this, v9, &v23);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x369,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
        (const char *)(unsigned int)v12);
      return v13;
    }
    if ( !v23 )
      return 0LL;
  }
  if ( !(unsigned __int8)CSuperWetInkManager::UpdateRenderStateClip((struct CSuperWetInkManager::VailSuperWetStroke *)((char *)v9 + 88)) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0q_EventWriteTransfer(
        (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (__int64)&EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
        17LL);
    return 0LL;
  }
  v24 = 0LL;
  v14 = *(_QWORD *)v9;
  v15 = *(int (__fastcall **)(__int64, _QWORD, char *, __int64 *))(**(_QWORD **)v9 + 296LL);
  wil::com_ptr_t<CBrushRenderingGraph,wil::err_returncode_policy>::reset(&v24);
  if ( v15(v14, *((_QWORD *)v9 + 2), (char *)v9 + 32, &v24) >= 0 )
  {
    v16 = *(_QWORD *)v9;
    v17 = v24;
    v18 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(**(_QWORD **)v9 + 304LL);
    v19 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v9 + 1) + 8LL))(*((_QWORD *)v9 + 1));
    v20 = v18(v16, v19, v17);
    v21 = v20;
    if ( v20 >= 0 )
    {
      *a4 = 1;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x38D,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
        (const char *)(unsigned int)v20);
      v5 = v21;
    }
  }
  else
  {
    CSuperWetInkManager::DeactivateCurrentSource((struct CSuperWetSource **)this);
  }
  wil::com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>::~com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>(&v24);
  return v5;
}
