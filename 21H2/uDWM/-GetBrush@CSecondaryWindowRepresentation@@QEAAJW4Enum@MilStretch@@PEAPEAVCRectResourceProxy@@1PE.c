/*
 * XREFs of ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PEAPEAVCDoubleResourceProxy@@PEAPEAVCSizeResourceProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18000E478
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x18000C170 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180011E14 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800B963C (-EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBrush@CTransitionWindowSnapshot@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAM@Z @ 0x1800083A0 (-GetBrush@CTransitionWindowSnapshot@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisual.c)
 *     ?CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCCachedVisualImageProxy@@PEAVCRectResourceProxy@@PEAVCDoubleResourceProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18000E880 (-CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCCachedVisualImag.c)
 *     ?Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@PEBVCRectResourceProxy@@PEBVCSizeResourceProxy@@PEAVCVisualProxy@@W4Enum@MilBrushMappingMode@@@Z @ 0x180010A18 (-Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@PEBVCRectResourceProxy@@PEBVCS.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180015748 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z @ 0x180026F70 (--$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     ??$CreateProxy@VCRectResourceProxy@@@CCompositor@@IEAAJPEAPEAVCRectResourceProxy@@@Z @ 0x18003DB70 (--$CreateProxy@VCRectResourceProxy@@@CCompositor@@IEAAJPEAPEAVCRectResourceProxy@@@Z.c)
 *     ??$CreateProxy@VCSizeResourceProxy@@@CCompositor@@IEAAJPEAPEAVCSizeResourceProxy@@@Z @ 0x18003E318 (--$CreateProxy@VCSizeResourceProxy@@@CCompositor@@IEAAJPEAPEAVCSizeResourceProxy@@@Z.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::GetBrush(
        __int64 a1,
        __int64 a2,
        volatile signed __int32 **a3,
        CBaseObject **a4,
        __int64 a5,
        CBaseObject **a6,
        CBaseObject **a7,
        CBaseObject **a8)
{
  CBaseObject **v9; // rdi
  CBaseObject **v11; // r13
  volatile signed __int32 *v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  CBaseObject *v15; // rax
  int v16; // eax
  CBaseObject *v17; // rax
  int v18; // eax
  CTransitionWindowSnapshot *v19; // rcx
  CBaseObject *v20; // rax
  int v21; // eax
  int v22; // r13d
  CWindowData *v23; // rdx
  __int64 v24; // rbx
  CWindowData *v25; // rdi
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // eax
  CBaseObject *v31; // rcx
  CBaseObject *v32; // rcx
  CBaseObject *v33; // rcx
  CBaseObject *v34; // rcx
  CBaseObject *v35; // rcx
  int Brush; // eax
  CBaseObject *v38; // [rsp+40h] [rbp-59h] BYREF
  CBaseObject *v39; // [rsp+48h] [rbp-51h] BYREF
  CBaseObject *v40; // [rsp+50h] [rbp-49h] BYREF
  CBaseObject *v41; // [rsp+58h] [rbp-41h] BYREF
  CBaseObject *v42; // [rsp+60h] [rbp-39h] BYREF
  CBaseObject **v43; // [rsp+68h] [rbp-31h]
  CBaseObject **v44; // [rsp+70h] [rbp-29h]
  __int128 v45; // [rsp+78h] [rbp-21h] BYREF
  __int128 v46; // [rsp+88h] [rbp-11h] BYREF

  v42 = 0LL;
  v39 = 0LL;
  v9 = (CBaseObject **)a3;
  v40 = 0LL;
  v41 = 0LL;
  v38 = 0LL;
  v11 = a8;
  v43 = (CBaseObject **)a3;
  v44 = a8;
  if ( a3 )
  {
    v12 = *a3;
    v39 = (CBaseObject *)v12;
    if ( v12 )
    {
      _InterlockedIncrement(v12 + 2);
    }
    else
    {
      v13 = CCompositor::CreateProxy<CRectResourceProxy>(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
              &v39);
      v14 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x38Fu);
        goto LABEL_54;
      }
    }
  }
  if ( a4 )
  {
    v15 = *a4;
    v40 = v15;
    if ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v15 + 2);
    }
    else
    {
      v16 = CCompositor::CreateProxy<CRectResourceProxy>(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
              &v40);
      v14 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x399u);
        goto LABEL_54;
      }
    }
  }
  if ( a6 )
  {
    v17 = *a6;
    v41 = v17;
    if ( v17 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v17 + 2);
    }
    else
    {
      v18 = CCompositor::CreateProxy<CSizeResourceProxy>(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
              &v41);
      v14 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x3ADu);
        goto LABEL_54;
      }
    }
  }
  v19 = *(CTransitionWindowSnapshot **)(a1 + 408);
  if ( v19 )
  {
    Brush = CTransitionWindowSnapshot::GetBrush(v19, &v42, &v38, (float *)(a1 + 368));
    v14 = Brush;
    if ( Brush >= 0 )
      goto LABEL_27;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Brush, 0x3B4u);
    goto LABEL_52;
  }
  if ( a7 && (v20 = *a7) != 0LL )
  {
    v38 = *a7;
    _InterlockedIncrement((volatile signed __int32 *)v20 + 2);
  }
  else
  {
    v21 = CCompositor::CreateProxy<CCachedVisualImageProxy>(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
            &v38);
    v14 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x3BEu);
      goto LABEL_54;
    }
  }
  v45 = 0LL;
  if ( v39 )
  {
    v22 = 0;
    v45 = 0LL;
  }
  else
  {
    v22 = 1;
    v45 = _xmm;
  }
  v23 = 0LL;
  v24 = *(_QWORD *)(a1 + 48);
  v25 = *(CWindowData **)(a1 + 64);
  if ( *(_DWORD *)(a1 + 72) == 1 )
    goto LABEL_63;
  if ( *(_DWORD *)(a1 + 72) != 2 )
  {
    if ( *(_DWORD *)(a1 + 72) != 3 )
      goto LABEL_20;
    if ( !CWindowData::IsImmersiveWindow(*(CWindowData **)(a1 + 64)) )
    {
      v23 = *(CWindowData **)(*((_QWORD *)v25 + 53) + 80LL);
      goto LABEL_20;
    }
    goto LABEL_63;
  }
  v26 = *((_QWORD *)v25 + 52);
  if ( !v26 )
  {
LABEL_63:
    v23 = v25;
    goto LABEL_20;
  }
  v23 = *(CWindowData **)(v26 + 32);
LABEL_20:
  if ( (!CWindowData::IsImmersiveWindow(v23) || *(_DWORD *)(a1 + 72) != 3) && !v24 && *(_DWORD *)(a1 + 72) == 3 )
    CWindowData::IsImmersiveWindow(*(CWindowData **)(a1 + 64));
  v46 = 0LL;
  v27 = CCachedVisualImageProxy::Update(v38, &v45, &v46, v39, v41);
  v14 = v27;
  if ( v27 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0x3F1u);
    goto LABEL_54;
  }
  v30 = CSecondaryWindowRepresentation::CreateBrushForCVI(v29, v28, v38, v40, 0LL, &v42, v22);
  v14 = v30;
  if ( v30 >= 0 )
  {
    v9 = v43;
    v11 = v44;
LABEL_27:
    if ( v11 )
    {
      if ( *v11 )
        CBaseObject::Release(*v11);
      v31 = v42;
      *v11 = v42;
      if ( v31 )
        _InterlockedIncrement((volatile signed __int32 *)v31 + 2);
    }
    if ( v9 )
    {
      if ( *v9 )
        CBaseObject::Release(*v9);
      v32 = v39;
      *v9 = v39;
      if ( v32 )
        _InterlockedIncrement((volatile signed __int32 *)v32 + 2);
    }
    if ( a4 )
    {
      if ( *a4 )
        CBaseObject::Release(*a4);
      v33 = v40;
      *a4 = v40;
      if ( v33 )
        _InterlockedIncrement((volatile signed __int32 *)v33 + 2);
    }
    if ( a6 )
    {
      if ( *a6 )
        CBaseObject::Release(*a6);
      v34 = v41;
      *a6 = v41;
      if ( v34 )
        _InterlockedIncrement((volatile signed __int32 *)v34 + 2);
    }
    if ( a7 )
    {
      if ( *a7 )
        CBaseObject::Release(*a7);
      v35 = v38;
      *a7 = v38;
      if ( v35 )
        _InterlockedIncrement((volatile signed __int32 *)v35 + 2);
    }
    goto LABEL_52;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v30, 0x3F3u);
LABEL_52:
  if ( v42 )
    CBaseObject::Release(v42);
LABEL_54:
  if ( v39 )
    CBaseObject::Release(v39);
  if ( v40 )
    CBaseObject::Release(v40);
  if ( v41 )
    CBaseObject::Release(v41);
  if ( v38 )
    CBaseObject::Release(v38);
  return v14;
}
