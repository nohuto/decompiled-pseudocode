/*
 * XREFs of ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1C03A926C
 * Callers:
 *     DxgkInvalidateActiveVidPn @ 0x1C02FCF70 (DxgkInvalidateActiveVidPn.c)
 *     DpiAcpiProcessEventRequests @ 0x1C03A2598 (DpiAcpiProcessEventRequests.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00034C8 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0006784 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x1C000949C (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00094C0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000999C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C02027E0 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 *     ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03A79C8 (-CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall DmmInvalidateActiveVidPn(
        DXGADAPTER *this,
        __int64 a2,
        void *a3,
        __int64 a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5,
        int a6)
{
  UINT v6; // esi
  DXGK_RECOMMENDFUNCTIONALVIDPN_REASON v8; // r15d
  __int64 v10; // rax
  ADAPTER_DISPLAY **v11; // r12
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rsi
  __int64 v19; // rax
  struct DMMVIDPN *v20; // rbx
  char v21; // r14
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  DMMVIDPNTOPOLOGY *v23; // r13
  struct DMMVIDPN *v24; // rsi
  char *v25; // rsi
  __int64 v26; // rax
  int v27; // eax
  char *v28; // rax
  int v29; // eax
  __int64 v30; // [rsp+50h] [rbp-20h] BYREF
  struct DMMVIDPN *v31; // [rsp+58h] [rbp-18h] BYREF
  char *v32; // [rsp+60h] [rbp-10h]
  __int64 v33; // [rsp+68h] [rbp-8h] BYREF
  struct DMMVIDPN *v34; // [rsp+A0h] [rbp+30h] BYREF

  v6 = a4;
  v8 = (int)a2;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( !this )
  {
    WdLogSingleEntry0(1LL);
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    WdLogSingleEntry0(1LL);
  v10 = *((_QWORD *)this + 365);
  if ( !v10 )
  {
    WdLogSingleEntry1(2LL, this);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)this,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v11 = *(ADAPTER_DISPLAY ***)(v10 + 104);
  if ( v11 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v33, *(_QWORD *)(v10 + 104));
    v31 = 0LL;
    v34 = 0LL;
    v13 = VIDPN_MGR::RecommendFunctionalVidPn(v11, v8, a3, v6, &v34);
    v18 = v13;
    if ( v13 >= 0 )
    {
      auto_rc<DMMVIDPN>::reset((__int64 *)&v31, (__int64)v34);
      v20 = v31;
      v21 = 0;
      if ( v8 == DXGK_RFVR_HOTKEY )
      {
        v21 = 1;
        if ( v31 == (struct DMMVIDPN *)-96LL )
          WdLogSingleEntry0(1LL);
        v30 = 0LL;
        ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef((VIDPN_MGR *)v11);
        auto_rc<DMMVIDPN const>::reset(&v30, (__int64)ClientCommittedVidPnRef);
        if ( v30 )
        {
          v23 = (DMMVIDPNTOPOLOGY *)(v30 + 96);
          if ( v30 == -96 )
            WdLogSingleEntry0(1LL);
          if ( *((_QWORD *)v23 + 5) == *((_QWORD *)v20 + 17) )
          {
            v24 = (struct DMMVIDPN *)*((_QWORD *)v20 + 15);
            v32 = (char *)v20 + 120;
            if ( v24 == (struct DMMVIDPN *)((char *)v20 + 120) )
              goto LABEL_28;
            v25 = (char *)v24 - 8;
            if ( !v25 )
              goto LABEL_28;
            do
            {
              v26 = *((_QWORD *)v25 + 12);
              LODWORD(v34) = *(_DWORD *)(*((_QWORD *)v25 + 11) + 24LL);
              v27 = *(_DWORD *)(v26 + 24);
              a6 = v27;
              if ( (_DWORD)v34 == -1 )
              {
                WdLogSingleEntry0(1LL);
                v27 = a6;
              }
              if ( v27 == -1 )
              {
                WdLogSingleEntry0(1LL);
                v27 = a6;
              }
              if ( !DMMVIDPNTOPOLOGY::FindPath(v23, (int)v34, v27) )
                break;
              v28 = (char *)*((_QWORD *)v25 + 1);
              v25 = v28 - 8;
              if ( v28 == v32 )
                v25 = 0LL;
            }
            while ( v25 );
            if ( !v25 )
LABEL_28:
              v21 = 0;
          }
        }
        auto_rc<DMMVIDPN const>::reset(&v30, 0LL);
        if ( v21 )
          WdLogSingleEntry1(7LL, v20);
      }
      v29 = VIDPN_MGR::CommitVidPnViaSDC((VIDPN_MGR *)v11, v20, v21, a5);
      LODWORD(v18) = v29;
      if ( v29 >= 0 )
        LODWORD(v18) = 0;
      else
        WdLogSingleEntry2(2LL, v20, v29);
    }
    else
    {
      v19 = WdLogNewEntry5_WdTrace(v15, v14, v16, v17);
      *(_QWORD *)(v19 + 24) = 0LL;
      *(_QWORD *)(v19 + 32) = v18;
    }
    auto_rc<DMMVIDPN>::reset((__int64 *)&v31, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v33 + 40));
    return (unsigned int)v18;
  }
  else
  {
    WdLogSingleEntry1(2LL, this);
    return 3223192373LL;
  }
}
