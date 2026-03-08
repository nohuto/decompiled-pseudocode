/*
 * XREFs of ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C03AAAD8
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C03ABFB8 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0002680 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C000471C (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00061EC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C0006428 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x1C0007F20 (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0007F60 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0014550 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ??8@YA_NAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@0@Z @ 0x1C006770C (--8@YA_NAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@0@Z.c)
 *     ?FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_VIDPN_SOURCE_MODE_TYPE@@@Z @ 0x1C0068644 (-FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_.c)
 *     ?FindBestMatch@DMMVIDPNTARGETMODESET@@QEBAPEBVDMMVIDPNTARGETMODE@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C00686E4 (-FindBestMatch@DMMVIDPNTARGETMODESET@@QEBAPEBVDMMVIDPNTARGETMODE@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C016D024 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C0176878 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C01832FC (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 */

__int64 __fastcall VIDPN_MGR::PinModalityOnPathInVidPnTopology(
        struct _KTHREAD **this,
        struct DMMVIDPNTOPOLOGY *const a2,
        const struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *a3)
{
  __int64 Container; // rax
  struct DMMVIDPNTOPOLOGY *v7; // r15
  __int64 v8; // r13
  int v9; // edx
  DMMVIDPNTARGET *v10; // rax
  struct DMMVIDPNTARGETMODESET *v11; // rax
  int *v12; // rsi
  DMMVIDPNSOURCEMODE **v13; // rbx
  int NumPathsFromSource; // eax
  DMMVIDPNSOURCEMODE *v15; // rdi
  const struct DMMVIDPNSOURCEMODE *v16; // rdx
  struct DMMVIDPNTOPOLOGY *v17; // r8
  struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *v19; // rax
  const struct DMMVIDPNSOURCEMODE *BestMatch; // rax
  const struct DMMVIDPNSOURCEMODE *v21; // rbp
  int v22; // eax
  DMMVIDPNTARGET *v23; // rax
  struct DMMVIDPNTARGETMODESET *v24; // rbx
  const struct DMMVIDPNTARGETMODE *v25; // rsi
  int v26; // eax
  unsigned int v27; // r8d
  int v28; // eax
  unsigned __int64 v30; // [rsp+70h] [rbp+8h] BYREF
  struct DMMVIDPNTARGETMODESET *v31; // [rsp+78h] [rbp+10h] BYREF
  __int64 v32; // [rsp+80h] [rbp+18h]

  if ( this[8] != KeGetCurrentThread() )
    WdLogSingleEntry0(1LL);
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
  v7 = (struct DMMVIDPNTOPOLOGY *)*(unsigned int *)a3;
  v8 = *((unsigned int *)a3 + 1);
  v9 = *(_DWORD *)a3;
  v32 = Container;
  v10 = (DMMVIDPNTARGET *)IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(Container + 304), v9);
  v11 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(v10);
  v30 = 0LL;
  v31 = v11;
  v12 = (int *)((char *)a3 + 368);
  v13 = (DMMVIDPNSOURCEMODE **)v11;
  NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(a2, (unsigned int)v7, &v30);
  v15 = (DMMVIDPNSOURCEMODE *)NumPathsFromSource;
  if ( NumPathsFromSource < 0 )
  {
    v16 = (const struct DMMVIDPNSOURCEMODE *)(unsigned int)v7;
    v17 = a2;
LABEL_18:
    WdLogSingleEntry3(2LL, v16, v17, v15);
    goto LABEL_19;
  }
  if ( !v30 )
    WdLogSingleEntry0(1LL);
  v15 = v13[18];
  if ( v15 )
  {
    GraphicsInfo = (struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *)DMMVIDPNSOURCEMODE::GetGraphicsInfo(v13[18]);
    if ( !operator==(GraphicsInfo, (_DWORD *)a3 + 92) )
    {
      v19 = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v15);
      WdLogSingleEntry3(2LL, v19, (char *)a3 + 368, v7);
      LODWORD(v15) = -1071774960;
LABEL_19:
      auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v31, 0LL);
      return (unsigned int)v15;
    }
  }
  else
  {
    BestMatch = DMMVIDPNSOURCEMODESET::FindBestMatch(
                  (DMMVIDPNSOURCEMODESET *)v13,
                  *v12,
                  *((_DWORD *)a3 + 93),
                  (enum _D3DDDIFORMAT)*((_DWORD *)a3 + 97),
                  (enum _D3DKMDT_VIDPN_SOURCE_MODE_TYPE)*((_DWORD *)a3 + 91));
    v21 = BestMatch;
    if ( !BestMatch )
    {
      WdLogSingleEntry3(2LL, (unsigned int)*v12, *((unsigned int *)a3 + 93), *((int *)a3 + 97));
      LODWORD(v15) = -1071774970;
      goto LABEL_19;
    }
    v22 = VIDPN_MGR::PinVidPnSourceMode(
            (VIDPN_MGR *)this,
            (struct DMMVIDPNSOURCEMODESET *const)v13,
            *((_DWORD *)BestMatch + 6),
            1);
    v15 = (DMMVIDPNSOURCEMODE *)v22;
    if ( v22 < 0 )
    {
      v17 = v7;
      v16 = v21;
      goto LABEL_18;
    }
  }
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v31, 0LL);
  v23 = (DMMVIDPNTARGET *)IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v32 + 312), v8);
  v30 = (unsigned __int64)DMMVIDPNTARGET::AcquireCofuncModeSetRef(v23);
  v24 = (struct DMMVIDPNTARGETMODESET *)v30;
  v25 = DMMVIDPNTARGETMODESET::FindBestMatch(
          (DMMVIDPNTARGETMODESET *)v30,
          (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)((char *)a3 + 408));
  if ( v25 )
  {
    v26 = *((_DWORD *)a3 + 120);
    v27 = *((_DWORD *)v25 + 6);
    *((_DWORD *)v25 + 34) = *((_DWORD *)a3 + 121);
    *((_DWORD *)v25 + 33) = v26;
    v28 = VIDPN_MGR::PinVidPnTargetMode((VIDPN_MGR *)this, v24, v27, 1);
    LODWORD(v15) = v28;
    if ( v28 >= 0 )
      LODWORD(v15) = 0;
    else
      WdLogSingleEntry3(2LL, v25, v8, v28);
  }
  else
  {
    WdLogSingleEntry4(
      2LL,
      *((unsigned int *)a3 + 105),
      *((unsigned int *)a3 + 106),
      *((unsigned int *)a3 + 107),
      *((unsigned int *)a3 + 108));
    LODWORD(v15) = -1071774970;
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v30, 0LL);
  return (unsigned int)v15;
}
