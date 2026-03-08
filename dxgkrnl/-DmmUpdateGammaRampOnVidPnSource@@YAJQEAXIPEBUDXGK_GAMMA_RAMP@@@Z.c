/*
 * XREFs of ?DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C0179FB8
 * Callers:
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0179B90 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTSOURCE@@@@QEBAPEAVDMMVIDEOPRESENTSOURCE@@I@Z @ 0x1C0003444 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTSOURCE@@@@QEBAPEAVDMMVIDEOPRESENTSOURCE@@I@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00034C8 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0006784 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x1C000949C (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00094C0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0179EC4 (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C017ABB4 (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C01830A8 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmUpdateGammaRampOnVidPnSource(DXGADAPTER *a1, unsigned int a2, const struct DXGK_GAMMA_RAMP *a3)
{
  unsigned int v3; // edi
  __int64 v4; // r14
  __int64 v6; // rsi
  __int64 v7; // r15
  VIDPN_MGR *v8; // r15
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r13
  ReferenceCounted *v12; // rcx
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  DMMVIDPNTOPOLOGY *v14; // rbp
  unsigned __int64 i; // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  DMMVIDPNPRESENTPATH *Path; // r15
  int updated; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v28; // rax
  __int64 v29; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v30; // [rsp+90h] [rbp+8h] BYREF
  __int64 v31; // [rsp+A8h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a2;
  v6 = (__int64)a1;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    WdLogSingleEntry0(1LL);
  v7 = *(_QWORD *)(v6 + 2920);
  if ( !v7 )
  {
    WdLogSingleEntry1(2LL, v6);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      v6,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v8 = *(VIDPN_MGR **)(v7 + 104);
  if ( v8 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v29, (__int64)v8);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v8 + 14) + 72LL));
    v9 = *((_QWORD *)v8 + 14);
    v10 = IndexedSet<DMMVIDEOPRESENTSOURCE>::FindById(v9, v4);
    v11 = v10;
    if ( v10 )
    {
      if ( a3 )
        _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
      v12 = *(ReferenceCounted **)(v10 + 128);
      if ( v12 )
        ReferenceCounted::Release(v12);
      *(_QWORD *)(v11 + 128) = a3;
      if ( v9 )
        ReferenceCounted::Release((ReferenceCounted *)(v9 + 64));
      v31 = 0LL;
      ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v8);
      auto_rc<DMMVIDPN const>::reset(&v31, (__int64)ClientCommittedVidPnRef);
      if ( v31 )
      {
        v14 = (DMMVIDPNTOPOLOGY *)(v31 + 96);
        for ( i = 0LL; ; ++i )
        {
          v30 = -1;
          v16 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v14, v4, i, &v30);
          v6 = v16;
          if ( v16 < 0 )
            break;
          if ( v30 == -1 )
          {
            auto_rc<DMMVIDPN const>::reset(&v31, 0LL);
            goto LABEL_23;
          }
          Path = DMMVIDPNTOPOLOGY::FindPath(v14, v4, v30);
          if ( !Path )
            WdLogSingleEntry0(1LL);
          updated = DMMVIDPNPRESENTPATH::UpdateGammaRamp(Path);
          LODWORD(v6) = updated;
          if ( updated < 0 )
          {
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v24, v23, v25, v26) + 24) = updated;
            goto LABEL_32;
          }
          LODWORD(v6) = DMMVIDPNPRESENTPATH::SetDriverGammaRamp(Path, 0LL);
          if ( (int)v6 < 0 )
            goto LABEL_32;
        }
        v28 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v17, v19, v20);
        v28[3] = i;
        v28[4] = v4;
        v28[5] = v14;
        v28[6] = v6;
      }
      else
      {
        WdLogSingleEntry1(2LL, v6);
        LODWORD(v6) = -1071774884;
      }
LABEL_32:
      auto_rc<DMMVIDPN const>::reset(&v31, 0LL);
      v3 = v6;
    }
    else
    {
      WdLogSingleEntry1(2LL, v4);
      if ( v9 )
        ReferenceCounted::Release((ReferenceCounted *)(v9 + 64));
      v3 = -1071774972;
    }
LABEL_23:
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v29 + 40));
    return v3;
  }
  else
  {
    WdLogSingleEntry1(2LL, v6);
    return 3223192373LL;
  }
}
