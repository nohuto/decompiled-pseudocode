/*
 * XREFs of ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1C02DDD04
 * Callers:
 *     DxgkInvalidateActiveVidPn @ 0x1C025F730 (DxgkInvalidateActiveVidPn.c)
 *     DpiAcpiProcessEventRequests @ 0x1C02D6A7C (DpiAcpiProcessEventRequests.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003960 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C0006764 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00074F0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0009550 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000ADEC (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02DC128 (-CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C02E06D8 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 */

__int64 __fastcall DmmInvalidateActiveVidPn(
        DXGADAPTER *this,
        __int64 a2,
        void *a3,
        unsigned int a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5,
        int a6)
{
  enum _DXGK_RECOMMENDFUNCTIONALVIDPN_REASON v8; // r15d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rsi
  VIDPN_MGR *v21; // rsi
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  struct DMMVIDPN *v30; // rbx
  char v31; // r14
  char *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  DMMVIDPNTOPOLOGY *v38; // r15
  __int64 v39; // rax
  char *v40; // r12
  char *v41; // rdi
  char *v42; // rdi
  __int64 v43; // rcx
  __int64 v44; // rax
  int v45; // r13d
  __int64 v46; // rax
  __int64 v47; // rax
  char *v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // [rsp+30h] [rbp-20h] BYREF
  struct DMMVIDPN *v57; // [rsp+38h] [rbp-18h] BYREF
  __int64 v58; // [rsp+40h] [rbp-10h] BYREF
  struct DMMVIDPN *v59; // [rsp+80h] [rbp+30h] BYREF

  v8 = (int)a2;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  if ( !this )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v12);
    v15 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v15 + 24) = 0LL;
LABEL_3:
    WdLogEvent5_WdError(v15);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v18, v17);
    WdLogEvent5_WdAssertion(v19);
  }
  v20 = *((_QWORD *)this + 337);
  if ( !v20 )
  {
    v15 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v15 + 24) = this;
    goto LABEL_3;
  }
  v21 = *(VIDPN_MGR **)(v20 + 88);
  if ( v21 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v58, (__int64)v21);
    v59 = 0LL;
    v57 = 0LL;
    v23 = VIDPN_MGR::RecommendFunctionalVidPn(v21, v8, a3, a4, &v57);
    v26 = v23;
    if ( v23 >= 0 )
    {
      auto_rc<DMMVIDPN>::reset((__int64 *)&v59, (__int64)v57);
      v30 = v59;
      v31 = 0;
      if ( v8 == DXGK_RFVR_HOTKEY )
      {
        v32 = (char *)v59 + 96;
        v31 = 1;
        if ( v59 == (struct DMMVIDPN *)-96LL )
        {
          v33 = WdLogNewEntry5_WdAssertion(v29, v28);
          WdLogEvent5_WdAssertion(v33);
        }
        v34 = *((_QWORD *)v21 + 11);
        v56 = 0LL;
        if ( v34 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v34 + 32));
          v35 = *((_QWORD *)v21 + 11);
          v30 = v59;
        }
        else
        {
          v35 = 0LL;
        }
        auto_rc<DMMVIDPN const>::reset(&v56, v35);
        if ( v56 )
        {
          v38 = (DMMVIDPNTOPOLOGY *)(v56 + 96);
          if ( v56 == -96 )
          {
            v39 = WdLogNewEntry5_WdAssertion(v37, v36);
            WdLogEvent5_WdAssertion(v39);
          }
          if ( *((_QWORD *)v38 + 5) == *((_QWORD *)v32 + 5) )
          {
            v40 = v32 + 24;
            v41 = (char *)*((_QWORD *)v32 + 3);
            if ( v41 == v40 )
              goto LABEL_33;
            v42 = v41 - 8;
            if ( !v42 )
              goto LABEL_33;
            do
            {
              v43 = *(unsigned int *)(*((_QWORD *)v42 + 11) + 24LL);
              v44 = *((_QWORD *)v42 + 12);
              a6 = v43;
              v45 = *(_DWORD *)(v44 + 24);
              if ( (_DWORD)v43 == -1 )
              {
                v46 = WdLogNewEntry5_WdAssertion(v43, v36);
                WdLogEvent5_WdAssertion(v46);
              }
              if ( v45 == -1 )
              {
                v47 = WdLogNewEntry5_WdAssertion(v43, v36);
                WdLogEvent5_WdAssertion(v47);
              }
              if ( !DMMVIDPNTOPOLOGY::FindPath(v38, a6, v45) )
                break;
              v48 = (char *)*((_QWORD *)v42 + 1);
              v42 = v48 - 8;
              if ( v48 == v40 )
                v42 = 0LL;
            }
            while ( v42 );
            v30 = v59;
            if ( !v42 )
LABEL_33:
              v31 = 0;
          }
        }
        auto_rc<DMMVIDPN const>::reset(&v56, 0LL);
        if ( v31 )
        {
          v50 = WdLogNewEntry5_WdDmmEvent(v49);
          *(_QWORD *)(v50 + 24) = v30;
          WdLogEvent5_WdDmmEvent(v50);
        }
      }
      v51 = VIDPN_MGR::CommitVidPnViaSDC((DXGADAPTER ***)v21, v30, v31, a5);
      v26 = v51;
      if ( v51 >= 0 )
      {
        LODWORD(v26) = 0;
      }
      else
      {
        v54 = WdLogNewEntry5_WdError(v53, v52);
        *(_QWORD *)(v54 + 24) = v30;
        *(_QWORD *)(v54 + 32) = v26;
        WdLogEvent5_WdError(v54);
      }
    }
    else
    {
      v27 = WdLogNewEntry5_WdTrace(v25, v24);
      *(_QWORD *)(v27 + 24) = 0LL;
      *(_QWORD *)(v27 + 32) = v26;
    }
    auto_rc<DMMVIDPN>::reset((__int64 *)&v59, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v58 + 40), v55);
    return (unsigned int)v26;
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v22 + 24) = this;
    WdLogEvent5_WdError(v22);
    return 3223192373LL;
  }
}
