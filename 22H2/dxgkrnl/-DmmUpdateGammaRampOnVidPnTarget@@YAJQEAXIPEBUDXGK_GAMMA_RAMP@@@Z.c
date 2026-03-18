/*
 * XREFs of ?DmmUpdateGammaRampOnVidPnTarget@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C01990D8
 * Callers:
 *     ?UpdateGammaRampOnVidPnTarget@KernelDriver@@UEAAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C0198E70 (-UpdateGammaRampOnVidPnTarget@KernelDriver@@UEAAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C0005DCC (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0006D74 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x1C0007298 (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00072BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0008100 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000AFB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C0198E9C (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C0199010 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

__int64 __fastcall DmmUpdateGammaRampOnVidPnTarget(DXGADAPTER *a1, unsigned int a2, const struct DXGK_GAMMA_RAMP *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rsi
  __int64 v7; // rax
  VIDPN_MGR *v8; // rbp
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  _QWORD *v10; // r8
  __int64 v11; // r9
  DMMVIDPNTOPOLOGY *v12; // rdi
  int PathSourceFromTarget; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  DMMVIDPNPRESENTPATH *Path; // rdi
  __int64 v20; // [rsp+70h] [rbp+8h] BYREF
  __int64 v21; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a2;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    WdLogSingleEntry0(1LL);
  v7 = *((_QWORD *)a1 + 365);
  if ( !v7 )
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
  v8 = *(VIDPN_MGR **)(v7 + 104);
  if ( v8 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v21, *(_QWORD *)(v7 + 104));
    v20 = 0LL;
    ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v8);
    auto_rc<DMMVIDPN const>::reset(&v20, (__int64)ClientCommittedVidPnRef);
    if ( v20 )
    {
      v12 = (DMMVIDPNTOPOLOGY *)(v20 + 96);
      PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(
                               (DMMVIDPNTOPOLOGY *)(v20 + 96),
                               (_QWORD *)(unsigned int)v4,
                               v10,
                               v11);
      if ( PathSourceFromTarget == -1 )
      {
        v3 = -1071774919;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v15, v14, v16, v17) + 24) = v4;
      }
      else
      {
        Path = DMMVIDPNTOPOLOGY::FindPath(v12, PathSourceFromTarget, v4);
        if ( !Path )
          WdLogSingleEntry0(1LL);
        DMMVIDPNPRESENTPATH::SetDriverGammaRamp(Path, a3);
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, a1);
      v3 = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v20, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v21 + 40));
    return v3;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
}
