/*
 * XREFs of ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C01E19B0
 * Callers:
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01E1860 (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C03AE68C (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z @ 0x1C03B1B84 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0001D80 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0001EC4 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z @ 0x1C000244C (-DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z.c)
 *     ?FindByValue@?$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z @ 0x1C0006250 (-FindByValue@-$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPN@@U?$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@QEAAEQEBVDMMVIDPN@@@Z @ 0x1C00062E0 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPN@@U-$DoubleLinkedListElementDeleter@VDMMVIDPN@@.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0007078 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C00070E4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x1C000A568 (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C000A5E4 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     DpiMiracastHandleDisplayConfigChange @ 0x1C0060070 (DpiMiracastHandleDisplayConfigChange.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C0199010 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?GetMostImportantPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ @ 0x1C01E1B34 (-GetMostImportantPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ.c)
 *     ?SetPrimaryPath@ADAPTER_DISPLAY@@QEAAXIIW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1C01E1B84 (-SetPrimaryPath@ADAPTER_DISPLAY@@QEAAXIIW4_DXGK_PRIMARY_TARGET_TYPE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CacheLastClientCommittedVidPnRef(VIDPN_MGR *this, struct DMMVIDPN *const a2)
{
  unsigned int v2; // esi
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // r10
  __int64 v7; // rbx
  __int64 v8; // r11
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // r15
  int v13; // edx
  struct DMMVIDPNPRESENTPATH *MostImportantPath; // rbx
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rbx
  _QWORD *v21; // rbx
  __int64 v22; // rax
  _QWORD *v23; // rbp
  int v24; // edi
  _QWORD *v26; // r8
  __int64 v27; // r9
  unsigned int v28; // ebx
  DMMVIDPNTOPOLOGY *v29; // rcx
  __int64 v30; // rdi
  unsigned int PathSourceFromTarget; // eax
  __int64 v32; // rax
  _QWORD *v33; // r15
  __int64 v34; // rax
  UINT cx; // r12d
  UINT cy; // r13d
  int v37; // r15d
  struct DMMVIDPNTARGETMODESET *v38; // rax
  DMMVIDPNSOURCEMODE *v39; // rbx
  __int64 v40; // rax
  unsigned int v41; // ecx
  unsigned __int64 v42; // rax
  int v43; // ecx
  __int64 v44; // [rsp+80h] [rbp+8h] BYREF
  struct DMMVIDPNTARGETMODESET *v45; // [rsp+88h] [rbp+10h] BYREF
  struct DMMVIDPNTARGETMODESET *v46; // [rsp+90h] [rbp+18h] BYREF
  __int64 v47; // [rsp+98h] [rbp+20h]

  v2 = 0;
  v44 = 0LL;
  _InterlockedAdd((volatile signed __int32 *)a2 + 8, 1u);
  auto_rc<DMMVIDPN>::reset(&v44, (__int64)a2);
  v4 = v44;
  v47 = v44;
  v5 = Set<DMMVIDPN>::FindByValue((__int64)this + 136, v44);
  v7 = v6 + 8;
  if ( !DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::ContainsByReference(v6 + 8, v5) )
  {
    WdLogSingleEntry2(2LL, v4, this);
    v2 = -1071774973;
    goto LABEL_21;
  }
  v9 = (_QWORD *)(v8 + 8);
  v10 = *(_QWORD *)(v8 + 8);
  if ( *(_QWORD *)(v10 + 8) != v8 + 8 || (v11 = *(_QWORD **)(v8 + 16), (_QWORD *)*v11 != v9) )
    __fastfail(3u);
  *v11 = v10;
  v12 = v4 + 96;
  *(_QWORD *)(v10 + 8) = v11;
  *v9 = 0LL;
  *(_QWORD *)(v8 + 16) = 0LL;
  --*(_QWORD *)(v7 + 32);
  if ( *(_QWORD *)(v4 + 136) )
  {
    v13 = *((_DWORD *)this + 138);
    if ( v13 != -1 && DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v4 + 96), v13) )
    {
      if ( !*((_QWORD *)this + 1) )
        WdLogSingleEntry0(1LL);
      v28 = *((_DWORD *)this + 138);
      v29 = (DMMVIDPNTOPOLOGY *)(v4 + 96);
      v30 = *((_QWORD *)this + 1);
      PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v29, (_QWORD *)v28, v26, v27);
      v15 = 0LL;
      v16 = v28;
      v17 = PathSourceFromTarget;
      v18 = v30;
      goto LABEL_11;
    }
    MostImportantPath = DMMVIDPNTOPOLOGY::GetMostImportantPath((DMMVIDPNTOPOLOGY *)(v4 + 96));
    if ( !MostImportantPath )
      goto LABEL_12;
    if ( !*((_QWORD *)this + 1) )
      WdLogSingleEntry0(1LL);
    v15 = 2LL;
    v16 = *(unsigned int *)(*((_QWORD *)MostImportantPath + 12) + 24LL);
    v17 = *(unsigned int *)(*((_QWORD *)MostImportantPath + 11) + 24LL);
  }
  else
  {
    if ( !*((_QWORD *)this + 1) )
      WdLogSingleEntry0(1LL);
    v16 = 0xFFFFFFFFLL;
    v15 = 3LL;
    v17 = 0xFFFFFFFFLL;
  }
  v18 = *((_QWORD *)this + 1);
LABEL_11:
  ADAPTER_DISPLAY::SetPrimaryPath(v18, v17, v16, v15);
LABEL_12:
  v19 = v12 + 24;
  v20 = *(_QWORD *)(v12 + 24);
  if ( v20 == v12 + 24 )
    v21 = 0LL;
  else
    v21 = (_QWORD *)(v20 - 8);
  v22 = *(_QWORD *)(v12 + 40);
  v23 = v21;
  if ( v22 == 1 )
  {
    if ( !v21 )
      WdLogSingleEntry0(1LL);
    v24 = 0;
    if ( *(_DWORD *)(*(_QWORD *)(v21[12] + 96LL) + 84LL) == 15 )
      v24 = 8;
  }
  else
  {
    if ( v22 != 2 )
    {
      if ( !v21 )
        goto LABEL_20;
      while ( *(_DWORD *)(*(_QWORD *)(v23[12] + 96LL) + 84LL) != 15 )
      {
        v34 = v23[1];
        v23 = (_QWORD *)(v34 - 8);
        if ( v34 == v19 )
          v23 = 0LL;
        if ( !v23 )
          goto LABEL_20;
      }
      v24 = 1;
LABEL_49:
      cx = 0;
      cy = 0;
      v37 = 0;
      if ( !v23 )
        WdLogSingleEntry0(1LL);
      v38 = DMMVIDPNTARGET::AcquireCofuncModeSetRef((DMMVIDPNTARGET *)v23[11]);
      v46 = v38;
      v39 = (DMMVIDPNSOURCEMODE *)*((_QWORD *)v38 + 18);
      if ( v39 && *((_DWORD *)v39 + 18) != 2 )
      {
        cx = DMMVIDPNSOURCEMODE::GetGraphicsInfo(*((DMMVIDPNSOURCEMODE **)v38 + 18))->PrimSurfSize.cx;
        cy = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v39)->PrimSurfSize.cy;
      }
      v45 = DMMVIDPNTARGET::AcquireCofuncModeSetRef((DMMVIDPNTARGET *)v23[12]);
      v40 = *((_QWORD *)v45 + 18);
      if ( v40 )
      {
        v41 = *(_DWORD *)(v40 + 120);
        v42 = *(_QWORD *)(v40 + 92);
        v43 = (v41 >> 3) & 0x3F;
        if ( v43 )
        {
          LODWORD(v44) = v42;
          HIDWORD(v44) = v43 * HIDWORD(v42);
          v42 = v44;
        }
        v37 = DMMVIDEOSIGNALMODE::DivideAndRound((unsigned int)v42, HIDWORD(v42));
      }
      if ( !*((_QWORD *)this + 1) )
        WdLogSingleEntry0(1LL);
      DpiMiracastHandleDisplayConfigChange(
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 216LL),
        v24,
        cx,
        cy,
        v37);
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v45, 0LL);
      auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v46, 0LL);
      goto LABEL_20;
    }
    v32 = v21[1];
    v33 = (_QWORD *)(v32 - 8);
    if ( v32 == v19 )
      v33 = 0LL;
    if ( !v33 )
      WdLogSingleEntry0(1LL);
    if ( *(_DWORD *)(*(_QWORD *)(v21[12] + 96LL) + 84LL) != 15 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v33[12] + 96LL) + 84LL) != 15 )
        goto LABEL_20;
      v23 = v33;
    }
    v24 = 2;
    if ( v21[11] != v33[11] )
      v24 = 4;
  }
  if ( v24 )
    goto LABEL_49;
LABEL_20:
  v44 = 0LL;
  auto_rc<DMMVIDPN>::reset((__int64 *)this + 16, v47);
LABEL_21:
  auto_rc<DMMVIDPN>::reset(&v44, 0LL);
  return v2;
}
