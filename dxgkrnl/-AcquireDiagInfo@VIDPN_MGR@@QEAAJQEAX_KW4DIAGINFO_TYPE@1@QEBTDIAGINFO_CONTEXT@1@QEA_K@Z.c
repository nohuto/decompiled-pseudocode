/*
 * XREFs of ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C03A61F8
 * Callers:
 *     ?DmmCollectBlackScreenDiagInfo@@YAJPEAX_K0@Z @ 0x1C03A7C8C (-DmmCollectBlackScreenDiagInfo@@YAJPEAX_K0@Z.c)
 *     ?DmmCollectTdrDiagInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAX_K@Z @ 0x1C03A7DA4 (-DmmCollectTdrDiagInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAX_K@Z.c)
 *     ?DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z @ 0x1C03A82C8 (-DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00034C8 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C00062B4 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x1C000949C (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00094C0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000999C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x1C004FF30 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C0067050 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x1C0068974 (-Initialize@-$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x1C0068A3C (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01B3BC0 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C03A6C1C (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 *     ?AcquireDiagVersion@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C03A747C (-AcquireDiagVersion@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 *     ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C03AB6E0 (-SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UCOMMITVIDPNREQUEST@V.c)
 *     ?SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C03AB9B0 (-SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UDISPMODECHANGEREQU.c)
 *     ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C03ABB4C (-UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z.c)
 *     ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C03ABC4C (-_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT.c)
 *     ?_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C03ABDD4 (-_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV-$AutoBuffer@U_DMM_VIDPNSOURCEM.c)
 *     ?Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZATION@@@DMM@@@Z @ 0x1C03AEC7C (-Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZA.c)
 *     ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C03AEDC4 (-SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_MONITORSET_SER.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C03B4680 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 *     ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1C03B4AFC (-SerializeVidPns@DMMVIDPN@@SAJAEBV-$Queue@VDMMVIDPN@@@@PEAV-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZA.c)
 *     ?Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@@Z @ 0x1C03B6140 (-Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZA.c)
 *     MonitorSerializeMonitorPresentEvents @ 0x1C03C014C (MonitorSerializeMonitorPresentEvents.c)
 */

__int64 __fastcall VIDPN_MGR::AcquireDiagInfo(VIDPN_MGR *a1, void *a2, size_t a3, int a4, int *a5, size_t *a6)
{
  __int64 v6; // r12
  size_t *v10; // r15
  _QWORD *v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r14
  int v17; // eax
  __int64 v18; // rbx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  void *v22; // rcx
  size_t v23; // rbx
  size_t v24; // r8
  _QWORD *v25; // rax
  int v26; // eax
  int v27; // eax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // eax
  unsigned __int8 *v32; // rdx
  DXGDIAGNOSTICS *v33; // rcx
  unsigned __int64 v34; // rbx
  int v35; // eax
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  unsigned __int64 v37; // rbx
  int v38; // eax
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  unsigned __int64 v40; // rbx
  __int64 v41; // r15
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  unsigned __int64 v46; // rbx
  void *v47; // r14
  __int64 v48; // rax
  int v49; // eax
  unsigned int v50[2]; // [rsp+58h] [rbp-29h] BYREF
  unsigned __int64 v51; // [rsp+60h] [rbp-21h] BYREF
  __int64 v52; // [rsp+68h] [rbp-19h] BYREF
  __int128 v53; // [rsp+70h] [rbp-11h]
  void **v54; // [rsp+80h] [rbp-1h]
  void *Src; // [rsp+88h] [rbp+7h]
  unsigned __int64 v56; // [rsp+90h] [rbp+Fh]
  __int64 v57; // [rsp+98h] [rbp+17h]

  v6 = a4;
  if ( a2 )
  {
    if ( a3 )
    {
      memset(a2, 0, a3);
      goto LABEL_7;
    }
LABEL_5:
    WdLogSingleEntry2(2LL, a2, a3);
    return 3221225485LL;
  }
  if ( a3 )
    goto LABEL_5;
LABEL_7:
  v10 = a6;
  if ( a6 )
    *a6 = 0LL;
  Src = 0LL;
  v52 = (__int64)&DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v54 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v56 = 0LL;
  v57 = 256LL;
  v53 = 0LL;
  if ( (int)v6 > 8 )
  {
    if ( (_DWORD)v6 == 9 )
    {
      if ( a5 )
        WdLogSingleEntry0(1LL);
      *(_QWORD *)v50 = 0LL;
      if ( !*((_QWORD *)a1 + 1) )
        WdLogSingleEntry0(1LL);
      v45 = MonitorSerializeMonitorPresentEvents(*(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL), v50, 0LL);
      v16 = v45;
      if ( (int)(v45 + 0x80000000) < 0 || v45 == -1073741789 )
      {
        v46 = *(_QWORD *)v50;
        if ( !*(_QWORD *)v50 )
          WdLogSingleEntry0(1LL);
        DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(&v52, v46);
        v47 = Src;
        v48 = *((_QWORD *)a1 + 1);
        if ( !Src )
        {
          if ( !v48 )
            WdLogSingleEntry0(1LL);
          WdLogSingleEntry2(2LL, v46, *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL));
          LODWORD(v16) = -1073741801;
          goto LABEL_148;
        }
        if ( !v48 )
          WdLogSingleEntry0(1LL);
        v49 = MonitorSerializeMonitorPresentEvents(*(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL), v50, v47);
        v16 = v49;
        if ( v49 >= 0 )
          goto LABEL_48;
        if ( *((_QWORD *)a1 + 1) )
          goto LABEL_146;
      }
      else if ( *((_QWORD *)a1 + 1) )
      {
        goto LABEL_146;
      }
      WdLogSingleEntry0(1LL);
      goto LABEL_146;
    }
    if ( (_DWORD)v6 != 10 && (_DWORD)v6 != 11 )
    {
      if ( (_DWORD)v6 == 12 )
        goto LABEL_94;
      v30 = (unsigned int)(v6 - 13);
      if ( (_DWORD)v6 == 13 )
      {
        if ( a5 )
          WdLogSingleEntry0(1LL);
        v35 = VIDPN_MGR::AcquireDiagVersion(v30, &v52);
        v16 = v35;
        if ( v35 >= 0 )
          goto LABEL_48;
        if ( !*((_QWORD *)a1 + 1) )
LABEL_60:
          WdLogSingleEntry0(1LL);
LABEL_146:
        WdLogSingleEntry2(2LL, *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL), v16);
        goto LABEL_148;
      }
      if ( (_DWORD)v6 != 14 )
        goto LABEL_75;
      if ( a5 )
        WdLogSingleEntry0(1LL);
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v51, (__int64)a1);
      v50[0] = 0x8000;
      v31 = DMM::AutoBuffer<unsigned char>::Initialize(&v52, 0x8000uLL, 0LL, 256LL);
      LODWORD(v16) = v31;
      if ( v31 >= 0 )
      {
        v32 = (unsigned __int8 *)Src;
        if ( !Src )
        {
          WdLogSingleEntry0(1LL);
          v32 = (unsigned __int8 *)Src;
        }
        v33 = (DXGDIAGNOSTICS *)*((_QWORD *)a1 + 70);
        if ( v33 )
        {
          LODWORD(v16) = DXGDIAGNOSTICS::ReadDiagnostics(v33, v32, v50, 0xFFFFFFFF);
          if ( (int)v16 >= 0 )
          {
            v34 = v50[0];
            if ( v50[0] > v56 )
              WdLogSingleEntry0(1LL);
            v29 = v51;
            v56 = v34;
            goto LABEL_68;
          }
          WdLogSingleEntry2(2LL, Src, a1);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Unable to read VIDPN_MGR diagnostics data; DiagInfoSerialization.get() = 0x%I64x, this = 0x%I64x",
            (__int64)Src,
            (__int64)a1,
            0LL,
            0LL,
            0LL);
        }
        else
        {
          WdLogSingleEntry2(2LL, v32, a1);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Unable to obtain VIDPN_MGR Diagnosibility buffer; pDiagnosticsBuffer = 0x%I64x, this = 0x%I64x",
            (__int64)Src,
            (__int64)a1,
            0LL,
            0LL,
            0LL);
          LODWORD(v16) = -1073741436;
        }
      }
      else
      {
        WdLogSingleEntry3(2LL, 0x8000LL, a1, v31);
      }
LABEL_124:
      v28 = v51;
LABEL_125:
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v28 + 40));
      goto LABEL_148;
    }
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v51, (__int64)a1);
    *(_QWORD *)v50 = 0LL;
    ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(a1, (__int64 *)v50);
    LODWORD(v16) = ClientVidPnFromLastClientCommitedVidPn;
    if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
    {
      WdLogSingleEntry1(7LL, ClientVidPnFromLastClientCommitedVidPn);
LABEL_123:
      auto_rc<DMMVIDPN>::reset((__int64 *)v50, 0LL);
      goto LABEL_124;
    }
    v40 = *(_QWORD *)v50;
    v41 = (unsigned int)*a5;
    if ( !DMMVIDPNTOPOLOGY::IsSourceInTopology((DMMVIDPNTOPOLOGY *)(*(_QWORD *)v50 + 96LL), *a5) )
    {
      if ( !*((_QWORD *)a1 + 1) )
        WdLogSingleEntry0(1LL);
      WdLogSingleEntry1(7LL, *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL));
      LODWORD(v16) = -1071774919;
      goto LABEL_123;
    }
    v42 = VIDPN_MGR::UnpinPathModalityFromSource(a1, (struct DMMVIDPNTOPOLOGY *const)(v40 + 96), v41);
    v16 = v42;
    if ( v42 < 0 )
    {
      if ( !*((_QWORD *)a1 + 1) )
        goto LABEL_121;
      goto LABEL_122;
    }
    if ( (_DWORD)v6 == 10 )
    {
      v44 = VIDPN_MGR::_SerializeVidPnSourceModeSet(a1, v40, (unsigned int)v41, &v52);
      v16 = v44;
      if ( v44 < 0 )
      {
        if ( !*((_QWORD *)a1 + 1) )
LABEL_121:
          WdLogSingleEntry0(1LL);
LABEL_122:
        WdLogSingleEntry3(2LL, v41, *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL), v16);
        goto LABEL_123;
      }
    }
    else
    {
      v43 = VIDPN_MGR::_SerializePinnedSourceCofuncPathsModalityFromSource(a1, (__int64)&v52);
      v16 = v43;
      if ( v43 < 0 )
      {
        if ( !*((_QWORD *)a1 + 1) )
          goto LABEL_121;
        goto LABEL_122;
      }
    }
    auto_rc<DMMVIDPN>::reset((__int64 *)v50, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v51 + 40));
    v10 = a6;
    goto LABEL_48;
  }
  switch ( (_DWORD)v6 )
  {
    case 8:
      if ( a5 )
        WdLogSingleEntry0(1LL);
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v50, (__int64)a1);
      v27 = DMMVIDPN::SerializeVidPns((char *)a1 + 256, &v52);
      v16 = v27;
      if ( v27 < 0 )
      {
        if ( !*((_QWORD *)a1 + 1) )
          WdLogSingleEntry0(1LL);
        WdLogSingleEntry3(2LL, (char *)a1 + 256, *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL), v16);
        v28 = *(_QWORD *)v50;
        goto LABEL_125;
      }
      v29 = *(_QWORD *)v50;
LABEL_68:
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v29 + 40));
      goto LABEL_48;
    case 1:
      if ( a5 )
        WdLogSingleEntry0(1LL);
      v26 = VIDPN_MGR::AcquireDiagSummary(a1, &v52);
      v16 = v26;
      if ( v26 >= 0 )
        goto LABEL_48;
      if ( !*((_QWORD *)a1 + 1) )
        goto LABEL_60;
      goto LABEL_146;
    case 2:
      if ( a5 )
        WdLogSingleEntry0(1LL);
      _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)a1 + 14) + 72LL), 1u);
      v18 = *((_QWORD *)a1 + 14);
      v21 = DMMVIDEOPRESENTSOURCESET::Serialize(v18, &v52);
      v16 = v21;
      if ( v21 < 0 )
      {
        if ( *((_QWORD *)a1 + 1) )
        {
LABEL_34:
          WdLogSingleEntry3(2LL, v18, *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL), v16);
          if ( v18 )
            ReferenceCounted::Release((ReferenceCounted *)(v18 + 64));
          goto LABEL_148;
        }
LABEL_33:
        WdLogSingleEntry0(1LL);
        goto LABEL_34;
      }
LABEL_46:
      if ( v18 )
        ReferenceCounted::Release((ReferenceCounted *)(v18 + 64));
      goto LABEL_48;
    case 3:
      if ( a5 )
        WdLogSingleEntry0(1LL);
      _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)a1 + 15) + 72LL), 1u);
      v18 = *((_QWORD *)a1 + 15);
      v20 = DMMVIDEOPRESENTTARGETSET::Serialize((DMMVIDEOPRESENTTARGETSET *)v18);
      v16 = v20;
      if ( v20 < 0 )
      {
        if ( !*((_QWORD *)a1 + 1) )
          WdLogSingleEntry0(1LL);
        goto LABEL_34;
      }
      goto LABEL_46;
    case 4:
LABEL_94:
      if ( a5 )
        WdLogSingleEntry0(1LL);
      *(_QWORD *)v50 = 0LL;
      ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(a1);
      auto_rc<DMMVIDPN const>::reset((__int64 *)v50, (__int64)ClientCommittedVidPnRef);
      v37 = *(_QWORD *)v50;
      if ( *(_QWORD *)v50 )
      {
        v38 = DMMVIDPN::Serialize(*(_QWORD *)v50, &v52);
        v16 = v38;
        if ( v38 >= 0 )
        {
          auto_rc<DMMVIDPN const>::reset((__int64 *)v50, 0LL);
          goto LABEL_48;
        }
        if ( !*((_QWORD *)a1 + 1) )
          WdLogSingleEntry0(1LL);
        WdLogSingleEntry3(2LL, v37, *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL), v16);
      }
      else
      {
        if ( !*((_QWORD *)a1 + 1) )
          WdLogSingleEntry0(1LL);
        WdLogSingleEntry1(3LL, *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL));
        LODWORD(v16) = -1071774884;
      }
      auto_rc<DMMVIDPN const>::reset((__int64 *)v50, 0LL);
      goto LABEL_148;
    case 5:
      if ( a5 )
        WdLogSingleEntry0(1LL);
      _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)a1 + 15) + 72LL), 1u);
      v18 = *((_QWORD *)a1 + 15);
      v19 = DMMVIDEOPRESENTTARGETSET::SerializeConnectedMonitors(v18, &v52);
      v16 = v19;
      if ( v19 < 0 )
      {
        if ( *((_QWORD *)a1 + 1) )
          goto LABEL_34;
        goto LABEL_33;
      }
      goto LABEL_46;
    case 6:
      if ( a5 )
        WdLogSingleEntry0(1LL);
      v11 = (_QWORD *)((char *)a1 + 192);
      v17 = VIDPN_MGR::COMMITVIDPNREQUEST::SerializeCommitVidPnRequests((char *)a1 + 192, &v52);
      v16 = v17;
      if ( v17 < 0 )
      {
        if ( *((_QWORD *)a1 + 1) )
          goto LABEL_23;
        goto LABEL_22;
      }
LABEL_48:
      v22 = a2;
      v23 = v56;
      if ( a2 )
      {
        v24 = v56;
        if ( a3 < v56 )
          v24 = a3;
        memmove(a2, Src, v24);
      }
      if ( v10 )
        *v10 = v23;
      if ( v23 <= a3 )
      {
        LODWORD(v16) = 0;
      }
      else
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v13, v14, v15);
        LODWORD(v16) = -2147483643;
        v25[3] = a3;
        v25[4] = v6;
        v25[5] = v56;
      }
      goto LABEL_148;
  }
  if ( (_DWORD)v6 != 7 )
  {
LABEL_75:
    WdLogSingleEntry1(2LL, v6);
    LODWORD(v16) = -1073741811;
    goto LABEL_148;
  }
  if ( a5 )
    WdLogSingleEntry0((unsigned int)(v6 - 6));
  v11 = (_QWORD *)((char *)a1 + 328);
  v12 = VIDPN_MGR::DISPMODECHANGEREQUEST::SerializeModeChangeRequests((char *)a1 + 328, &v52);
  v16 = v12;
  if ( v12 >= 0 )
    goto LABEL_48;
  if ( !*((_QWORD *)a1 + 1) )
LABEL_22:
    WdLogSingleEntry0(1LL);
LABEL_23:
  WdLogSingleEntry3(2LL, v11, *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL), v16);
LABEL_148:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v52);
  return (unsigned int)v16;
}
