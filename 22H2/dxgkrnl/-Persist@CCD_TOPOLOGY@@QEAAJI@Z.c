/*
 * XREFs of ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C014887C
 * Callers:
 *     DxgkPersistPathsModality @ 0x1C0148C70 (DxgkPersistPathsModality.c)
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C0150390 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02967CC (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0297518 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000BAD8 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C00E6D88 (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0123B08 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C013A16C (-IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C013AE0C (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C013D7C8 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C013F638 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x1C0147CE4 (-LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C0148B20 (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C014B1D8 (-ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z.c)
 *     ?ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C014B268 (-ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C014B4A0 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C0167880 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?Purge@CDS_JOURNAL@@QEAAJXZ @ 0x1C016C45C (-Purge@CDS_JOURNAL@@QEAAJXZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::Persist(CCD_TOPOLOGY *this, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct CCD_BTL *v6; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // r8
  unsigned int v16; // edx
  __int64 v18; // rdx
  __int64 v19; // rcx
  DXGSESSIONMGR *v20; // r14
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct CCD_BTL *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  bool v32; // r9
  int v33; // eax
  __int64 v34; // rbx
  struct CCD_BTL *v35; // rax
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned int v39; // edx
  __int64 v40; // rdx
  __int64 v41; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v43; // rdx
  _QWORD *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdx
  struct CCD_BTL *v47; // rax
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  struct _STRING *ConnectedSetStr; // rax
  struct D3DKMT_GETPATHSMODALITY *v52; // r8
  _QWORD *v53; // rax
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  unsigned int v56; // edx
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  struct _STRING v63; // [rsp+30h] [rbp-50h] BYREF
  int v64; // [rsp+40h] [rbp-40h] BYREF
  __int128 v65; // [rsp+48h] [rbp-38h] BYREF
  __int64 v66; // [rsp+58h] [rbp-28h]
  __int16 v67; // [rsp+60h] [rbp-20h]
  __int128 v68; // [rsp+68h] [rbp-18h]

  v3 = (unsigned int)a2;
  if ( g_bDMgrIsSetupRunning == 1 )
  {
    WdLogNewEntry5_WdTrace(this, a2);
    return 0LL;
  }
  else
  {
    if ( *((_WORD *)CCD_TOPOLOGY::GetModalitySetId((void **)this) + 4) )
    {
      v64 = 0;
      v65 = 0LL;
      v66 = 0LL;
      v68 = 0LL;
      v67 = 0;
      v6 = CCD_BTL::Global(v5, v4);
      v7 = (**(__int64 (__fastcall ***)(struct CCD_BTL *, int *))v6)(v6, &v64);
      v10 = v7;
      if ( v7 < 0 )
      {
        v54 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
        v54[3] = v10;
        v54[4] = this;
        v54[5] = *((_QWORD *)this + 8);
        WdLogEvent5_WdError(v54);
        v16 = 1;
        goto LABEL_10;
      }
      if ( CCD_SET_STRING_ID::IsSubsetOf(this, (const struct CCD_SET_STRING_ID *)&v64) )
      {
        if ( (v3 & 0x40000000) != 0 )
          goto LABEL_8;
        v14 = CCD_TOPOLOGY::VerifyConnectivityHash(this, (const struct CCD_SET_STRING_ID *)&v64);
        v10 = v14;
        if ( v14 != -1073741266 )
        {
          if ( v14 < 0 )
          {
            v58 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
            v58[3] = v10;
            v58[4] = *((_QWORD *)this + 8);
            v58[5] = v3;
            WdLogEvent5_WdError(v58);
            v16 = 3;
            goto LABEL_10;
          }
LABEL_8:
          if ( (int)v3 < 0 )
          {
            v16 = 4;
LABEL_10:
            DxgkLogCodePointPacket(0x3Fu, v16, v3, v10, 0LL);
LABEL_11:
            CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v64);
            return (unsigned int)v10;
          }
          v20 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v12, v11) + 102);
          if ( v20 )
          {
            CurrentProcessSessionId = PsGetCurrentProcessSessionId(v19, v18);
            SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                               v20,
                                               CurrentProcessSessionId);
          }
          else
          {
            SessionDataForSpecifiedSession = 0LL;
          }
          if ( SessionDataForSpecifiedSession && *((_BYTE *)SessionDataForSpecifiedSession + 18490) )
          {
            v39 = 9;
LABEL_26:
            DxgkLogCodePointPacket(0x3Fu, v39, v3, v10, 0LL);
            Global = DXGGLOBAL::GetGlobal(v41, v40);
            LOBYTE(v43) = 1;
            QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)Global + 172), v43);
            goto LABEL_11;
          }
          v23 = CCD_BTL::Global(v19, v18);
          if ( *((struct CCD_BTL **)v23 + 16) != (struct CCD_BTL *)((char *)v23 + 128) )
          {
            v44 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v24);
            v44[3] = v3;
            LODWORD(v3) = v3 | 1;
            v44[4] = this;
            v45 = *((_QWORD *)this + 8);
            v44[5] = v45;
            v47 = CCD_BTL::Global(v45, v46);
            CDS_JOURNAL::Purge((struct CCD_BTL *)((char *)v47 + 104));
          }
          if ( (v3 & 1) == 0 )
          {
            v26 = CCD_STORE::ForTopology(this, anonymous_namespace_::_UpdateTimestampTopologySetCallback, this, 0);
            v29 = v26;
            if ( v26 >= 0 )
            {
LABEL_20:
              if ( CCD_SET_STRING_ID::IsSubsetOf(this, (const struct CCD_SET_STRING_ID *)&v64) )
              {
                v33 = CCD_STORE::ForConnectedSet(
                        (const struct CCD_SET_STRING_ID *)&v64,
                        anonymous_namespace_::_UpdateConnectedSetCallback,
                        this,
                        v32);
                v34 = v33;
                if ( v33 < 0 )
                {
                  v61 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30);
                  v61[4] = &v65;
                  v61[3] = v34;
                  v61[5] = this;
                  v61[6] = *((_QWORD *)this + 8);
                  WdLogEvent5_WdError(v61);
                  DxgkLogCodePointPacket(0x3Fu, 6u, v3, v34, 0LL);
                }
              }
              v35 = CCD_BTL::Global(v31, v30);
              v36 = CCD_TOPOLOGY::CopyInheritScope((struct CCD_BTL *)((char *)v35 + 8), this);
              v10 = v36;
              if ( v36 < 0 )
              {
                v62 = (_QWORD *)WdLogNewEntry5_WdError(v38, v37);
                v62[3] = v10;
                v62[4] = this;
                v62[5] = *((_QWORD *)this + 8);
                WdLogEvent5_WdError(v62);
                DxgkLogCodePointPacket(0x3Fu, 7u, v3, v10, 0LL);
                LODWORD(v10) = 0;
              }
              v39 = 8;
              goto LABEL_26;
            }
            v59 = (_QWORD *)WdLogNewEntry5_WdTrace(v28, v27);
            v59[3] = v29;
            v59[4] = this;
            v59[5] = *((_QWORD *)this + 8);
          }
          v48 = CCD_STORE::ForTopology(this, anonymous_namespace_::_SaveTopologySetCallback, this, 1);
          v10 = v48;
          if ( v48 < 0 )
          {
            v60 = (_QWORD *)WdLogNewEntry5_WdError(v50, v49);
            v60[3] = v10;
            v60[4] = this;
            v60[5] = *((_QWORD *)this + 8);
            WdLogEvent5_WdError(v60);
            v16 = 5;
            goto LABEL_10;
          }
          if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v50, v49) + 1232) )
          {
            ConnectedSetStr = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)&v64);
            v52 = (struct D3DKMT_GETPATHSMODALITY *)*((_QWORD *)this + 8);
            v63 = *ConnectedSetStr;
            LogCddDatabaseAccessPacket(0, v10, v52, &v63, 0);
          }
          goto LABEL_20;
        }
        v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v15);
        v57[3] = -1073741266LL;
        v57[4] = *((_QWORD *)this + 8);
        v57[5] = v3;
        WdLogEvent5_WdWarning(v57);
        v56 = 3;
      }
      else
      {
        v55 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
        v55[3] = -1073741266LL;
        v55[4] = *((_QWORD *)this + 8);
        v55[5] = v3;
        WdLogEvent5_WdWarning(v55);
        v56 = 2;
      }
      DxgkLogCodePointPacket(0x3Fu, v56, v3, 0xC000022E, 0LL);
      LODWORD(v10) = -1073741266;
      goto LABEL_11;
    }
    v53 = (_QWORD *)WdLogNewEntry5_WdError(v5, v4);
    v53[3] = this;
    v53[4] = *((_QWORD *)this + 8);
    v53[5] = *(int *)this;
    WdLogEvent5_WdError(v53);
    DxgkLogCodePointPacket(0x3Fu, 0, v3, 0xC0000001, 0LL);
    return 3221225473LL;
  }
}
