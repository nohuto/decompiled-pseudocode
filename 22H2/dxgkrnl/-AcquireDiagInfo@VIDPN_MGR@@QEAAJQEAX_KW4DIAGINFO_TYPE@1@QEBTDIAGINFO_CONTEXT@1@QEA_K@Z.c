/*
 * XREFs of ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02DAB84
 * Callers:
 *     ?DmmCollectBlackScreenDiagInfo@@YAJPEAX_K0@Z @ 0x1C02DC4D0 (-DmmCollectBlackScreenDiagInfo@@YAJPEAX_K0@Z.c)
 *     ?DmmCollectTdrDiagInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAX_K@Z @ 0x1C02DC60C (-DmmCollectTdrDiagInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAX_K@Z.c)
 *     ?DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z @ 0x1C02DCBB0 (-DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003960 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0006454 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C0006764 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0009550 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C000AB24 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000ADEC (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x1C0045C44 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C005AEB8 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C005C2EC (-Initialize@-$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C005C3E4 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C014164C (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C02DB6A4 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 *     ?AcquireDiagVersion@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C02DC070 (-AcquireDiagVersion@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 *     ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02E1158 (-SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UCOMMITVIDPNREQUEST@V.c)
 *     ?SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02E1480 (-SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UDISPMODECHANGEREQU.c)
 *     ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C02E1724 (-UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z.c)
 *     ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C02E1A34 (-_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT.c)
 *     ?_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C02E1C24 (-_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV-$AutoBuffer@U_DMM_VIDPNSOURCEM.c)
 *     ?Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02E685C (-Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZA.c)
 *     ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02E69D8 (-SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_MONITORSET_SER.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C02E9188 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 *     ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02E9530 (-SerializeVidPns@DMMVIDPN@@SAJAEBV-$Queue@VDMMVIDPN@@@@PEAV-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZA.c)
 *     ?Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@@Z @ 0x1C02EA800 (-Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZA.c)
 *     MonitorSerializeMonitorPresentEvents @ 0x1C02F4A78 (MonitorSerializeMonitorPresentEvents.c)
 */

__int64 __fastcall VIDPN_MGR::AcquireDiagInfo(unsigned __int64 a1, void *a2, size_t a3, int a4, int *a5, size_t *a6)
{
  __int64 v6; // r14
  void *v8; // r13
  struct VIDPN_MGR *v9; // rdi
  __int64 v10; // rax
  size_t *v12; // r15
  __int64 v13; // rax
  _QWORD *v14; // r15
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rbx
  int v20; // eax
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // r14
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  _QWORD *v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  _QWORD *v42; // rax
  unsigned __int8 *v43; // rdx
  __int64 v44; // rax
  DXGFASTMUTEX **v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rcx
  unsigned __int64 v51; // rbx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rbx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rbx
  __int64 v68; // rax
  __int64 v69; // rax
  int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rcx
  _QWORD *v75; // r14
  __int64 v76; // rax
  __int64 v77; // rax
  int v78; // eax
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rbx
  __int64 v82; // r15
  __int64 v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rbx
  __int64 v87; // rax
  __int64 v88; // rax
  int v89; // eax
  __int64 v90; // rdx
  __int64 v91; // rcx
  int v92; // eax
  __int64 v93; // rdx
  __int64 v94; // rcx
  _QWORD *v95; // rbx
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rcx
  __int64 v102; // rax
  int v103; // eax
  SIZE_T v104; // rsi
  __int64 v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rcx
  void *v108; // rbx
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // rbx
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rcx
  __int64 v115; // rax
  int v116; // eax
  __int64 v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // rax
  __int64 v121; // rax
  int v122; // eax
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // rdx
  __int64 v126; // rcx
  _QWORD *v127; // rbx
  __int64 v128; // rax
  __int64 v129; // rax
  size_t v130; // rbx
  size_t v131; // r8
  _QWORD *v132; // rax
  __int64 v133; // [rsp+38h] [rbp-49h] BYREF
  __int64 v134; // [rsp+40h] [rbp-41h] BYREF
  __int64 v135; // [rsp+48h] [rbp-39h] BYREF
  __int128 v136; // [rsp+50h] [rbp-31h]
  void **v137; // [rsp+60h] [rbp-21h]
  void *Src; // [rsp+68h] [rbp-19h]
  unsigned __int64 v139; // [rsp+70h] [rbp-11h]
  int v140; // [rsp+78h] [rbp-9h]
  SIZE_T v141; // [rsp+80h] [rbp-1h] BYREF
  __int64 v142; // [rsp+88h] [rbp+7h] BYREF
  __int64 v143; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v144; // [rsp+98h] [rbp+17h] BYREF
  void *v145; // [rsp+E0h] [rbp+5Fh] BYREF

  v145 = a2;
  v6 = a4;
  v8 = a2;
  v9 = (struct VIDPN_MGR *)a1;
  if ( a2 )
  {
    if ( a3 )
    {
      memset(a2, 0, a3);
      goto LABEL_7;
    }
LABEL_5:
    v10 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v10 + 24) = v8;
    *(_QWORD *)(v10 + 32) = a3;
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
  if ( a3 )
    goto LABEL_5;
LABEL_7:
  v12 = a6;
  if ( a6 )
    *a6 = 0LL;
  Src = 0LL;
  v135 = (__int64)&DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v137 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v139 = 0LL;
  v140 = 3;
  v136 = 0LL;
  if ( (int)v6 <= 7 )
  {
    if ( (_DWORD)v6 == 7 )
    {
      if ( a5 )
      {
        v32 = WdLogNewEntry5_WdAssertion(a1, a2);
        WdLogEvent5_WdAssertion(v32);
      }
      v14 = (_QWORD *)((char *)v9 + 288);
      v15 = VIDPN_MGR::DISPMODECHANGEREQUEST::SerializeModeChangeRequests((char *)v9 + 288, &v135);
LABEL_42:
      v21 = v15;
      if ( v15 < 0 )
      {
        v35 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
        v35[3] = v14;
        v36 = *((_QWORD *)v9 + 1);
        if ( !v36 )
        {
          v37 = WdLogNewEntry5_WdAssertion(v34, v33);
          WdLogEvent5_WdAssertion(v37);
          v36 = *((_QWORD *)v9 + 1);
        }
        v35[4] = *(_QWORD *)(v36 + 16);
        v35[5] = v21;
        goto LABEL_75;
      }
      goto LABEL_134;
    }
    if ( (_DWORD)v6 != 1 )
    {
      if ( (_DWORD)v6 == 2 )
      {
        if ( a5 )
        {
          v29 = WdLogNewEntry5_WdAssertion((unsigned int)(v6 - 2), a2);
          WdLogEvent5_WdAssertion(v29);
        }
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v9 + 9) + 72LL));
        v19 = *((_QWORD *)v9 + 9);
        v20 = DMMVIDEOPRESENTSOURCESET::Serialize(v19, &v135);
        goto LABEL_23;
      }
      if ( (_DWORD)v6 == 3 )
      {
        if ( a5 )
        {
          v28 = WdLogNewEntry5_WdAssertion((unsigned int)(v6 - 3), a2);
          WdLogEvent5_WdAssertion(v28);
        }
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v9 + 10) + 72LL));
        v19 = *((_QWORD *)v9 + 10);
        v20 = DMMVIDEOPRESENTTARGETSET::Serialize((DMMVIDEOPRESENTTARGETSET *)v19);
        goto LABEL_23;
      }
      a1 = (unsigned int)(v6 - 4);
      if ( (_DWORD)v6 != 4 )
      {
        a1 = (unsigned int)(v6 - 5);
        if ( (_DWORD)v6 != 5 )
        {
          if ( (_DWORD)v6 == 6 )
          {
            if ( a5 )
            {
              v13 = WdLogNewEntry5_WdAssertion(a1, a2);
              WdLogEvent5_WdAssertion(v13);
            }
            v14 = (_QWORD *)((char *)v9 + 152);
            v15 = VIDPN_MGR::COMMITVIDPNREQUEST::SerializeCommitVidPnRequests((char *)v9 + 152, &v135);
            goto LABEL_42;
          }
LABEL_108:
          v99 = WdLogNewEntry5_WdError(a1, a2);
          *(_QWORD *)(v99 + 24) = v6;
          WdLogEvent5_WdError(v99);
          LODWORD(v21) = -1073741811;
          goto LABEL_144;
        }
        if ( a5 )
        {
          v18 = WdLogNewEntry5_WdAssertion(a1, a2);
          WdLogEvent5_WdAssertion(v18);
        }
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v9 + 10) + 72LL));
        v19 = *((_QWORD *)v9 + 10);
        v20 = DMMVIDEOPRESENTTARGETSET::SerializeConnectedMonitors(v19, &v135);
LABEL_23:
        v21 = v20;
        if ( v20 < 0 )
        {
          v24 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
          v24[3] = v19;
          v25 = *((_QWORD *)v9 + 1);
          if ( !v25 )
          {
            v26 = WdLogNewEntry5_WdAssertion(v23, v22);
            WdLogEvent5_WdAssertion(v26);
            v25 = *((_QWORD *)v9 + 1);
          }
          v24[4] = *(_QWORD *)(v25 + 16);
          v24[5] = v21;
          WdLogEvent5_WdError(v24);
          if ( v19 )
            ReferenceCounted::Release((ReferenceCounted *)(v19 + 64), v27);
          goto LABEL_144;
        }
        if ( v19 )
          ReferenceCounted::Release((ReferenceCounted *)(v19 + 64), v16);
        goto LABEL_135;
      }
      goto LABEL_76;
    }
    if ( a5 )
    {
      v30 = WdLogNewEntry5_WdAssertion((unsigned int)(v6 - 1), a2);
      WdLogEvent5_WdAssertion(v30);
    }
    v31 = VIDPN_MGR::AcquireDiagSummary(v9, &v135);
    goto LABEL_70;
  }
  if ( (_DWORD)v6 == 8 )
  {
    if ( a5 )
    {
      v121 = WdLogNewEntry5_WdAssertion(a1, a2);
      WdLogEvent5_WdAssertion(v121);
    }
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v144, (__int64)v9);
    v122 = DMMVIDPN::SerializeVidPns((char *)v9 + 216, &v135);
    v21 = v122;
    if ( v122 < 0 )
    {
      v127 = (_QWORD *)WdLogNewEntry5_WdError(v124, v123);
      v127[3] = (char *)v9 + 216;
      v128 = *((_QWORD *)v9 + 1);
      if ( !v128 )
      {
        v129 = WdLogNewEntry5_WdAssertion(v126, v125);
        WdLogEvent5_WdAssertion(v129);
        v128 = *((_QWORD *)v9 + 1);
      }
      v127[4] = *(_QWORD *)(v128 + 16);
      v127[5] = v21;
      WdLogEvent5_WdError(v127);
      v50 = v144;
      goto LABEL_106;
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v144 + 40), v123);
    goto LABEL_134;
  }
  if ( (_DWORD)v6 == 9 )
  {
    if ( a5 )
    {
      v100 = WdLogNewEntry5_WdAssertion(a1, a2);
      WdLogEvent5_WdAssertion(v100);
    }
    v101 = *((_QWORD *)v9 + 1);
    v141 = 0LL;
    if ( !v101 )
    {
      v102 = WdLogNewEntry5_WdAssertion(0LL, a2);
      WdLogEvent5_WdAssertion(v102);
      v101 = *((_QWORD *)v9 + 1);
    }
    v103 = MonitorSerializeMonitorPresentEvents(*(_QWORD *)(v101 + 16), &v141, 0LL);
    v17 = 0x80000000LL;
    v21 = v103;
    if ( (int)(v103 + 0x80000000) < 0 || v103 == -1073741789 )
    {
      v104 = v141;
      if ( !v141 )
      {
        v105 = WdLogNewEntry5_WdAssertion(0x80000000LL, v16);
        WdLogEvent5_WdAssertion(v105);
      }
      DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize((__int64)&v135, v104);
      v108 = Src;
      if ( !Src )
      {
        v111 = WdLogNewEntry5_WdError(v107, v106);
        *(_QWORD *)(v111 + 24) = v104;
        v112 = *((_QWORD *)v9 + 1);
        if ( !v112 )
        {
          v113 = WdLogNewEntry5_WdAssertion(v110, v109);
          WdLogEvent5_WdAssertion(v113);
          v112 = *((_QWORD *)v9 + 1);
        }
        *(_QWORD *)(v111 + 32) = *(_QWORD *)(v112 + 16);
        WdLogEvent5_WdError(v111);
        LODWORD(v21) = -1073741801;
        goto LABEL_144;
      }
      v114 = *((_QWORD *)v9 + 1);
      if ( !v114 )
      {
        v115 = WdLogNewEntry5_WdAssertion(0LL, v106);
        WdLogEvent5_WdAssertion(v115);
        v114 = *((_QWORD *)v9 + 1);
      }
      v116 = MonitorSerializeMonitorPresentEvents(*(_QWORD *)(v114 + 16), &v141, v108);
      v21 = v116;
      if ( v116 >= 0 )
        goto LABEL_135;
    }
    v117 = WdLogNewEntry5_WdError(v17, v16);
    v119 = *((_QWORD *)v9 + 1);
    v35 = (_QWORD *)v117;
    if ( !v119 )
    {
      v120 = WdLogNewEntry5_WdAssertion(0LL, v118);
      WdLogEvent5_WdAssertion(v120);
      v119 = *((_QWORD *)v9 + 1);
    }
    v35[3] = *(_QWORD *)(v119 + 16);
    goto LABEL_74;
  }
  if ( (int)v6 <= 11 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v143, (__int64)v9);
    v134 = 0LL;
    v78 = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v9, &v134);
    v21 = v78;
    if ( v78 < 0 )
    {
      v80 = WdLogNewEntry5_WdDmmEvent(v79);
      *(_QWORD *)(v80 + 24) = v21;
      WdLogEvent5_WdDmmEvent(v80);
LABEL_105:
      auto_rc<DMMVIDPN>::reset(&v134, 0LL);
      v50 = v143;
      goto LABEL_106;
    }
    v81 = v134;
    v82 = (unsigned int)*a5;
    if ( !DMMVIDPNTOPOLOGY::IsSourceInTopology((DMMVIDPNTOPOLOGY *)(v134 + 96), *a5) )
    {
      v86 = WdLogNewEntry5_WdDmmEvent(v83);
      v87 = *((_QWORD *)v9 + 1);
      if ( !v87 )
      {
        v88 = WdLogNewEntry5_WdAssertion(v85, v84);
        WdLogEvent5_WdAssertion(v88);
        v87 = *((_QWORD *)v9 + 1);
      }
      *(_QWORD *)(v86 + 24) = *(_QWORD *)(v87 + 16);
      WdLogEvent5_WdDmmEvent(v86);
      LODWORD(v21) = -1071774919;
      goto LABEL_105;
    }
    v89 = VIDPN_MGR::UnpinPathModalityFromSource(v9, (struct DMMVIDPNTOPOLOGY *const)(v81 + 96), v82);
    v21 = v89;
    if ( v89 < 0
      || ((_DWORD)v6 == 10
        ? (v92 = VIDPN_MGR::_SerializeVidPnSourceModeSet(v9, v81, (unsigned int)v82, &v135))
        : (v92 = VIDPN_MGR::_SerializePinnedSourceCofuncPathsModalityFromSource(v9, (__int64)&v135)),
          v21 = v92,
          v92 < 0) )
    {
      v95 = (_QWORD *)WdLogNewEntry5_WdError(v91, v90);
      v95[3] = v82;
      v96 = *((_QWORD *)v9 + 1);
      if ( !v96 )
      {
        v97 = WdLogNewEntry5_WdAssertion(v94, v93);
        WdLogEvent5_WdAssertion(v97);
        v96 = *((_QWORD *)v9 + 1);
      }
      v95[4] = *(_QWORD *)(v96 + 16);
      v95[5] = v21;
      WdLogEvent5_WdError(v95);
      goto LABEL_105;
    }
    auto_rc<DMMVIDPN>::reset(&v134, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v143 + 40), v98);
    v8 = v145;
LABEL_134:
    v12 = a6;
    goto LABEL_135;
  }
  if ( (_DWORD)v6 == 12 )
  {
LABEL_76:
    if ( a5 )
    {
      v58 = WdLogNewEntry5_WdAssertion(a1, a2);
      WdLogEvent5_WdAssertion(v58);
    }
    v59 = *((_QWORD *)v9 + 11);
    v133 = 0LL;
    if ( v59 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v59 + 32));
      v60 = *((_QWORD *)v9 + 11);
    }
    else
    {
      v60 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v133, v60);
    v64 = v133;
    if ( !v133 )
    {
      v67 = WdLogNewEntry5_WdWarning(v62, v61, v63);
      v68 = *((_QWORD *)v9 + 1);
      if ( !v68 )
      {
        v69 = WdLogNewEntry5_WdAssertion(v66, v65);
        WdLogEvent5_WdAssertion(v69);
        v68 = *((_QWORD *)v9 + 1);
      }
      *(_QWORD *)(v67 + 24) = *(_QWORD *)(v68 + 16);
      WdLogEvent5_WdWarning(v67);
      LODWORD(v21) = -1071774884;
LABEL_89:
      auto_rc<DMMVIDPN const>::reset(&v133, 0LL);
      goto LABEL_144;
    }
    v70 = DMMVIDPN::Serialize(v133, &v135);
    v21 = v70;
    if ( v70 < 0 )
    {
      v75 = (_QWORD *)WdLogNewEntry5_WdError(v72, v71);
      v75[3] = v64;
      v76 = *((_QWORD *)v9 + 1);
      if ( !v76 )
      {
        v77 = WdLogNewEntry5_WdAssertion(v74, v73);
        WdLogEvent5_WdAssertion(v77);
        v76 = *((_QWORD *)v9 + 1);
      }
      v75[4] = *(_QWORD *)(v76 + 16);
      v75[5] = v21;
      WdLogEvent5_WdError(v75);
      goto LABEL_89;
    }
    auto_rc<DMMVIDPN const>::reset(&v133, 0LL);
LABEL_135:
    v130 = v139;
    if ( v8 )
    {
      v131 = v139;
      if ( a3 < v139 )
        v131 = a3;
      memmove(v8, Src, v131);
    }
    if ( v12 )
      *v12 = v130;
    if ( v130 <= a3 )
    {
      LODWORD(v21) = 0;
    }
    else
    {
      v132 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16);
      LODWORD(v21) = -2147483643;
      v132[3] = a3;
      v132[4] = v6;
      v132[5] = v139;
    }
    goto LABEL_144;
  }
  if ( (_DWORD)v6 != 13 )
  {
    if ( (_DWORD)v6 != 14 )
      goto LABEL_108;
    if ( a5 )
    {
      v38 = WdLogNewEntry5_WdAssertion(a1, a2);
      WdLogEvent5_WdAssertion(v38);
    }
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v142, (__int64)v9);
    LODWORD(v145) = 0x8000;
    v39 = DMM::AutoBuffer<unsigned char>::Initialize((__int64)&v135, 0x8000uLL, 0LL, PagedPool);
    v21 = v39;
    if ( v39 >= 0 )
    {
      v43 = (unsigned __int8 *)Src;
      if ( !Src )
      {
        v44 = WdLogNewEntry5_WdAssertion(v41, 0LL);
        WdLogEvent5_WdAssertion(v44);
        v43 = (unsigned __int8 *)Src;
      }
      v45 = (DXGFASTMUTEX **)*((_QWORD *)v9 + 63);
      if ( !v45 )
      {
        v46 = WdLogNewEntry5_WdError(0LL, v43);
        *(_QWORD *)(v46 + 24) = Src;
        *(_QWORD *)(v46 + 32) = v9;
        WdLogEvent5_WdError(v46);
        LODWORD(v21) = -1073741436;
LABEL_63:
        v50 = v142;
LABEL_106:
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v50 + 40), v47);
        goto LABEL_144;
      }
      LODWORD(v21) = DXGDIAGNOSTICS::ReadDiagnostics(v45, v43, (unsigned int *)&v145, -1);
      if ( (int)v21 >= 0 )
      {
        v51 = (unsigned int)v145;
        if ( (unsigned int)v145 > v139 )
        {
          v52 = WdLogNewEntry5_WdAssertion(v49, v48);
          WdLogEvent5_WdAssertion(v52);
        }
        v139 = v51;
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v142 + 40), v48);
        goto LABEL_135;
      }
      v42 = (_QWORD *)WdLogNewEntry5_WdError(v49, v48);
      v42[3] = Src;
    }
    else
    {
      v42 = (_QWORD *)WdLogNewEntry5_WdError(v41, v40);
      v42[3] = 0x8000LL;
      v42[5] = v21;
    }
    v42[4] = v9;
    WdLogEvent5_WdError(v42);
    goto LABEL_63;
  }
  if ( a5 )
  {
    v53 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v53);
  }
  v31 = VIDPN_MGR::AcquireDiagVersion(a1, &v135);
LABEL_70:
  v21 = v31;
  if ( v31 >= 0 )
    goto LABEL_135;
  v35 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
  v56 = *((_QWORD *)v9 + 1);
  if ( !v56 )
  {
    v57 = WdLogNewEntry5_WdAssertion(v55, v54);
    WdLogEvent5_WdAssertion(v57);
    v56 = *((_QWORD *)v9 + 1);
  }
  v35[3] = *(_QWORD *)(v56 + 16);
LABEL_74:
  v35[4] = v21;
LABEL_75:
  WdLogEvent5_WdError(v35);
LABEL_144:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v135);
  return (unsigned int)v21;
}
