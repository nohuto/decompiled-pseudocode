/*
 * XREFs of ?DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAU_D3DKMDT_2DREGION@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C03A8554
 * Callers:
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_DXGK_DISPLAYMODE_INFO@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C01E5A2C (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 *     DxgkOpmGetRedirectionInfo @ 0x1C02BDBDC (DxgkOpmGetRedirectionInfo.c)
 *     ?GetCurrentTvStandard@@YAIPEAVDXGADAPTER@@I@Z @ 0x1C0391AC8 (-GetCurrentTvStandard@@YAIPEAVDXGADAPTER@@I@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00034C8 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00061EC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x1C0007F20 (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0007F60 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0007F94 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x1C000949C (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00094C0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C0172AAC (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall DmmGetClientVidPnTargetModeInfo(
        DXGADAPTER *a1,
        unsigned int a2,
        enum _D3DKMDT_VIDEO_SIGNAL_STANDARD *a3,
        unsigned int *a4,
        unsigned __int8 *a5,
        VIDPN_MGR *a6,
        struct _D3DKMDT_2DREGION *a7,
        struct _D3DDDI_RATIONAL *a8)
{
  unsigned int v8; // edi
  __int64 v9; // r12
  unsigned __int8 *v11; // r15
  _DWORD *v12; // rbp
  struct _D3DKMDT_2DREGION *v13; // rsi
  struct _D3DDDI_RATIONAL *v14; // r14
  char v16; // r13
  __int64 v17; // rax
  __int64 v18; // rax
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  int v20; // edx
  __int64 v21; // r8
  DMMVIDPNTARGET *v22; // r10
  struct DMMVIDPNTARGETMODESET *v23; // rbx
  __int64 v24; // rdx

  v8 = 0;
  v9 = a2;
  if ( a3 )
    *a3 = D3DKMDT_VSS_UNINITIALIZED;
  if ( a4 )
    *a4 = 0;
  v11 = a5;
  if ( a5 )
    *a5 = 0;
  v12 = a6;
  if ( a6 )
    *(_DWORD *)a6 = 0;
  v13 = a7;
  if ( a7 )
    *a7 = 0LL;
  v14 = a8;
  if ( a8 )
    *a8 = 0LL;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
  v16 = 1;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    WdLogSingleEntry0(1LL);
  v17 = *((_QWORD *)a1 + 365);
  if ( !v17 )
  {
    WdLogSingleEntry1(2LL, a1);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v18 = *(_QWORD *)(v17 + 104);
  a6 = (VIDPN_MGR *)v18;
  if ( v18 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&a8, v18);
    a5 = 0LL;
    ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(a6);
    auto_rc<DMMVIDPN const>::reset((__int64 *)&a5, (__int64)ClientCommittedVidPnRef);
    if ( a5 )
    {
      if ( IndexedSet<DMMVIDPNTARGET>::FindById(*((_QWORD *)a5 + 39), v9) )
      {
        if ( DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v21 + 96), v20) )
        {
          v23 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(v22);
          a7 = (struct _D3DKMDT_2DREGION *)v23;
          if ( !*((_QWORD *)v23 + 18) )
            WdLogSingleEntry0(1LL);
          v24 = *((_QWORD *)v23 + 18);
          a6 = *(VIDPN_MGR **)(v24 + 152);
          if ( a3 )
            *a3 = *(enum _D3DKMDT_VIDEO_SIGNAL_STANDARD *)(v24 + 72);
          if ( a4 )
            *a4 = DmmMapVSyncFromRationalToInteger(
                    (const struct _D3DDDI_RATIONAL *)&a6,
                    (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)(*((_QWORD *)v23 + 18) + 120LL) << 29) >> 29),
                    0LL);
          if ( v11 )
          {
            if ( (int)(*(_DWORD *)(*((_QWORD *)v23 + 18) + 120LL) << 29) >> 29 != 2
              && (int)(*(_DWORD *)(*((_QWORD *)v23 + 18) + 120LL) << 29) >> 29 != 3 )
            {
              v16 = 0;
            }
            *v11 = v16;
          }
          if ( v12 )
            *v12 = (int)(*(_DWORD *)(*((_QWORD *)v23 + 18) + 120LL) << 29) >> 29;
          if ( v13 )
            *v13 = *(struct _D3DKMDT_2DREGION *)(*((_QWORD *)v23 + 18) + 84LL);
          if ( v14 )
            *v14 = *(struct _D3DDDI_RATIONAL *)(*((_QWORD *)v23 + 18) + 152LL);
          auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&a7, 0LL);
        }
        else
        {
          WdLogSingleEntry1(2LL, v9);
          v8 = -1071774912;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, v9);
        v8 = -1071774971;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, a1);
      v8 = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset((__int64 *)&a5, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)&a8[5]);
    return v8;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
}
