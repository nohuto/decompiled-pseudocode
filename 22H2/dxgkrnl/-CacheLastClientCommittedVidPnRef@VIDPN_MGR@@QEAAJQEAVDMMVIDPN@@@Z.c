/*
 * XREFs of ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C0167EA8
 * Callers:
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z @ 0x1C00DDB84 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z.c)
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E6FD8 (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C02DECF4 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 * Callees:
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0009364 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0009724 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C00098DC (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000A974 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000ADEC (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?FindByValue@?$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z @ 0x1C000B060 (-FindByValue@-$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPN@@U?$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@QEAAEQEBVDMMVIDPN@@@Z @ 0x1C000B0F0 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPN@@U-$DoubleLinkedListElementDeleter@VDMMVIDPN@@.c)
 *     ?DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z @ 0x1C001A0FC (-DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z.c)
 *     DpiMiracastHandleDisplayConfigChange @ 0x1C0053570 (DpiMiracastHandleDisplayConfigChange.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C011BED4 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C0144C30 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 *     ?SetPrimaryPath@ADAPTER_DISPLAY@@QEAAXIIW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1C0168010 (-SetPrimaryPath@ADAPTER_DISPLAY@@QEAAXIIW4_DXGK_PRIMARY_TARGET_TYPE@@@Z.c)
 *     ?GetMostImportantPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ @ 0x1C0168160 (-GetMostImportantPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ.c)
 */

__int64 __fastcall VIDPN_MGR::CacheLastClientCommittedVidPnRef(VIDPN_MGR *this, struct DMMVIDPN *const a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r11
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rax
  DMMVIDPNTOPOLOGY *v12; // rsi
  unsigned int v13; // edi
  struct DMMVIDPNPRESENTPATH *MostImportantPath; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // r14d
  __int64 v19; // r9
  __int64 PathSourceFromTarget; // rdx
  __int64 v21; // r8
  _QWORD *v22; // rdx
  _QWORD *v23; // rdi
  _QWORD *v24; // rdi
  __int64 v25; // rax
  _QWORD *v26; // r14
  int v27; // esi
  __int64 v28; // rcx
  __int64 v29; // r14
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r14
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rax
  _QWORD *v39; // r13
  __int64 v40; // rax
  _QWORD *v41; // rax
  UINT cx; // r12d
  UINT cy; // r13d
  __int64 v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rdi
  DMMVIDPNSOURCEMODE *v48; // rdi
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rcx
  int v53; // edi
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // [rsp+30h] [rbp-18h] BYREF
  __int64 v58; // [rsp+38h] [rbp-10h] BYREF
  __int64 v59; // [rsp+90h] [rbp+48h]
  __int64 v60; // [rsp+98h] [rbp+50h] BYREF
  struct _D3DDDI_RATIONAL v61; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v62; // [rsp+A8h] [rbp+60h]

  v2 = 0;
  v60 = 0LL;
  _InterlockedIncrement((volatile signed __int32 *)a2 + 8);
  auto_rc<DMMVIDPN>::reset(&v60, (__int64)a2);
  v4 = v60;
  v59 = v60;
  v5 = Set<DMMVIDPN>::FindByValue((__int64)this + 96, v60);
  if ( !DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::ContainsByReference(
          (__int64)this + 104,
          v5) )
  {
    v56 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v56 + 24) = v4;
    *(_QWORD *)(v56 + 32) = this;
    WdLogEvent5_WdError(v56);
    v2 = -1071774973;
    goto LABEL_22;
  }
  v9 = (_QWORD *)(v8 + 8);
  v10 = *(_QWORD *)(v8 + 8);
  if ( *(_QWORD *)(v10 + 8) != v8 + 8 || (v11 = *(_QWORD **)(v8 + 16), (_QWORD *)*v11 != v9) )
    __fastfail(3u);
  *v11 = v10;
  *(_QWORD *)(v10 + 8) = v11;
  v12 = (DMMVIDPNTOPOLOGY *)(v4 + 96);
  *v9 = 0LL;
  *(_QWORD *)(v8 + 16) = 0LL;
  --*((_QWORD *)this + 17);
  if ( *((_QWORD *)v12 + 5) )
  {
    v13 = *((_DWORD *)this + 124);
    if ( v13 == -1 || !DMMVIDPNTOPOLOGY::IsTargetInTopology(v12, v13) )
    {
      MostImportantPath = DMMVIDPNTOPOLOGY::GetMostImportantPath(v12);
      if ( !MostImportantPath )
        goto LABEL_12;
      v13 = *(_DWORD *)(*((_QWORD *)MostImportantPath + 12) + 24LL);
      v17 = *((_QWORD *)this + 1);
      v18 = *(_DWORD *)(*((_QWORD *)MostImportantPath + 11) + 24LL);
      if ( !v17 )
      {
        v36 = WdLogNewEntry5_WdAssertion(0LL, v15);
        WdLogEvent5_WdAssertion(v36);
        v17 = *((_QWORD *)this + 1);
      }
      v19 = 2LL;
      PathSourceFromTarget = v18;
    }
    else
    {
      v34 = *((_QWORD *)this + 1);
      if ( !v34 )
      {
        v35 = WdLogNewEntry5_WdAssertion(v33, v32);
        WdLogEvent5_WdAssertion(v35);
        v34 = *((_QWORD *)this + 1);
        v13 = *((_DWORD *)this + 124);
      }
      PathSourceFromTarget = (unsigned int)DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v12, v13);
      v19 = 0LL;
      v17 = v34;
    }
    v21 = v13;
  }
  else
  {
    v17 = *((_QWORD *)this + 1);
    if ( !v17 )
    {
      v31 = WdLogNewEntry5_WdAssertion(0LL, v10);
      WdLogEvent5_WdAssertion(v31);
      v17 = *((_QWORD *)this + 1);
    }
    v21 = 0xFFFFFFFFLL;
    v19 = 3LL;
    PathSourceFromTarget = 0xFFFFFFFFLL;
  }
  ADAPTER_DISPLAY::SetPrimaryPath(v17, PathSourceFromTarget, v21, v19);
LABEL_12:
  v22 = (_QWORD *)((char *)v12 + 24);
  v23 = (_QWORD *)*((_QWORD *)v12 + 3);
  if ( v23 == (_QWORD *)((char *)v12 + 24) )
    v24 = 0LL;
  else
    v24 = v23 - 1;
  v25 = *((_QWORD *)v12 + 5);
  v26 = v24;
  if ( v25 == 1 )
  {
    if ( !v24 )
    {
      v37 = WdLogNewEntry5_WdAssertion(v16, v22);
      WdLogEvent5_WdAssertion(v37);
    }
    v27 = 0;
    v28 = *(_QWORD *)(v24[12] + 96LL);
    if ( *(_DWORD *)(v28 + 84) == 15 )
      v27 = 8;
  }
  else if ( v25 == 2 )
  {
    v38 = (_QWORD *)v24[1];
    v39 = v38 - 1;
    if ( v38 == v22 )
      v39 = 0LL;
    if ( !v39 )
    {
      v40 = WdLogNewEntry5_WdAssertion(v16, v22);
      WdLogEvent5_WdAssertion(v40);
    }
    if ( *(_DWORD *)(*(_QWORD *)(v24[12] + 96LL) + 84LL) != 15 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v39[12] + 96LL) + 84LL) != 15 )
        goto LABEL_20;
      v26 = v39;
    }
    v27 = 2;
    v28 = 4LL;
    if ( v24[11] != v39[11] )
      v27 = 4;
  }
  else
  {
    if ( !v24 )
      goto LABEL_20;
    while ( 1 )
    {
      v28 = *(_QWORD *)(v26[12] + 96LL);
      if ( *(_DWORD *)(v28 + 84) == 15 )
        break;
      v41 = (_QWORD *)v26[1];
      v26 = v41 - 1;
      if ( v41 == v22 )
        v26 = 0LL;
      if ( !v26 )
        goto LABEL_20;
    }
    v27 = 1;
  }
  if ( v27 )
  {
    LODWORD(v62) = 0;
    cx = 0;
    cy = 0;
    if ( !v26 )
    {
      v44 = WdLogNewEntry5_WdAssertion(v28, v22);
      WdLogEvent5_WdAssertion(v44);
    }
    v45 = v26[11];
    v46 = *(_QWORD *)(v45 + 104);
    if ( v46 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v46 + 96));
      v47 = *(_QWORD *)(v45 + 104);
      v59 = v60;
    }
    else
    {
      v47 = 0LL;
    }
    v58 = v47;
    v48 = *(DMMVIDPNSOURCEMODE **)(v47 + 144);
    if ( v48 && *((_DWORD *)v48 + 18) != 2 )
    {
      cx = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v48)->PrimSurfSize.cx;
      cy = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v48)->PrimSurfSize.cy;
    }
    v49 = v26[12];
    v50 = *(_QWORD *)(v49 + 104);
    if ( v50 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v50 + 96));
      v51 = *(_QWORD *)(v49 + 104);
      v29 = v60;
    }
    else
    {
      v29 = v59;
      v51 = 0LL;
    }
    v52 = *(_QWORD *)(v51 + 144);
    v57 = v51;
    if ( v52 )
    {
      v61 = *(struct _D3DDDI_RATIONAL *)(v52 + 92);
      DmmCalculatePresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v52 + 72), &v61);
      v53 = DMMVIDEOSIGNALMODE::DivideAndRound(v61.Numerator, v61.Denominator);
    }
    else
    {
      v53 = v62;
    }
    v54 = *((_QWORD *)this + 1);
    if ( !v54 )
    {
      v55 = WdLogNewEntry5_WdAssertion(0LL, v22);
      WdLogEvent5_WdAssertion(v55);
      v54 = *((_QWORD *)this + 1);
    }
    DpiMiracastHandleDisplayConfigChange(*(_QWORD *)(*(_QWORD *)(v54 + 16) + 216LL), v27, cx, cy, v53);
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v57, 0LL);
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v58, 0LL);
    goto LABEL_21;
  }
LABEL_20:
  v29 = v59;
LABEL_21:
  v60 = 0LL;
  auto_rc<DMMVIDPN>::reset((__int64 *)this + 11, v29);
LABEL_22:
  auto_rc<DMMVIDPN>::reset(&v60, 0LL);
  return v2;
}
