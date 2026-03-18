/*
 * XREFs of ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C0183BE8
 * Callers:
 *     DxgkPersistPathsModality @ 0x1C0183ED0 (DxgkPersistPathsModality.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02FAD5C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02FBEA0 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C03BEA24 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0002F24 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C0173DFC (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C017BA90 (-IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C017D564 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C017D78C (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ?ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C018230C (-ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C01824E0 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C0182D38 (-ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C018433C (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C0184658 (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x1C0185E3C (-LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C01E7EAC (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?Purge@CDS_JOURNAL@@QEAAJXZ @ 0x1C03BF334 (-Purge@CDS_JOURNAL@@QEAAJXZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::Persist(struct D3DKMT_GETPATHSMODALITY **this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  struct CCD_BTL *v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v10; // edx
  __int64 v12; // rcx
  DXGSESSIONMGR *v13; // r14
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct CCD_BTL *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rbx
  int v27; // eax
  unsigned int v28; // ebx
  struct CCD_BTL *v29; // rax
  int v30; // eax
  unsigned int v31; // edx
  struct DXGGLOBAL *Global; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned int v36; // edx
  _QWORD *v37; // rax
  struct CCD_BTL *v38; // rax
  _QWORD *v39; // rax
  int v40; // eax
  struct _STRING *ConnectedSetStr; // rax
  struct D3DKMT_GETPATHSMODALITY *v42; // r8
  struct _STRING v43; // [rsp+30h] [rbp-50h] BYREF
  int v44; // [rsp+40h] [rbp-40h] BYREF
  __int128 v45; // [rsp+48h] [rbp-38h] BYREF
  __int64 v46; // [rsp+58h] [rbp-28h]
  __int16 v47; // [rsp+60h] [rbp-20h]
  __int128 v48; // [rsp+68h] [rbp-18h]

  v5 = (unsigned int)a2;
  if ( g_bDMgrIsSetupRunning == 1 )
  {
    WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    return 0LL;
  }
  else
  {
    if ( *((_WORD *)CCD_TOPOLOGY::GetModalitySetId((CCD_TOPOLOGY *)this) + 4) )
    {
      v44 = 0;
      v45 = 0LL;
      v46 = 0LL;
      v48 = 0LL;
      v47 = 0;
      v6 = CCD_BTL::Global();
      v7 = (**(__int64 (__fastcall ***)(struct CCD_BTL *, int *))v6)(v6, &v44);
      v8 = v7;
      if ( v7 < 0 )
      {
        WdLogSingleEntry3(2LL, v7, this, this[8]);
        v10 = 1;
        goto LABEL_10;
      }
      if ( CCD_SET_STRING_ID::IsSubsetOf((CCD_SET_STRING_ID *)this, (const struct CCD_SET_STRING_ID *)&v44) )
      {
        if ( (v5 & 0x40000000) != 0 )
          goto LABEL_8;
        v9 = CCD_TOPOLOGY::VerifyConnectivityHash((CCD_TOPOLOGY *)this, (const struct CCD_SET_STRING_ID *)&v44);
        v8 = v9;
        if ( v9 != -1073741266 )
        {
          if ( v9 < 0 )
          {
            WdLogSingleEntry3(2LL, v9, this[8], v5);
            v10 = 3;
            goto LABEL_10;
          }
LABEL_8:
          if ( (int)v5 < 0 )
          {
            v10 = 4;
LABEL_10:
            DxgkLogCodePointPacket(0x3Fu, v10, v5, v8, 0LL);
LABEL_11:
            CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v44);
            return v8;
          }
          v13 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
          if ( v13 )
          {
            CurrentProcessSessionId = PsGetCurrentProcessSessionId(v12);
            SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                               v13,
                                               CurrentProcessSessionId);
            if ( SessionDataForSpecifiedSession )
            {
              if ( *((_BYTE *)SessionDataForSpecifiedSession + 18498) )
              {
                v31 = 9;
LABEL_25:
                DxgkLogCodePointPacket(0x3Fu, v31, v5, v8, 0LL);
                Global = DXGGLOBAL::GetGlobal();
                LOBYTE(v33) = 1;
                QDC_CACHE::InvalidateCache(*((QDC_CACHE **)Global + 187), v33, v34, v35);
                goto LABEL_11;
              }
            }
          }
          v16 = CCD_BTL::Global();
          if ( *((struct CCD_BTL **)v16 + 17) != (struct CCD_BTL *)((char *)v16 + 136) )
          {
            v37 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v17, v19, v20);
            v37[3] = v5;
            LODWORD(v5) = v5 | 1;
            v37[4] = this;
            v37[5] = this[8];
            v38 = CCD_BTL::Global();
            CDS_JOURNAL::Purge((struct CCD_BTL *)((char *)v38 + 112));
          }
          if ( (v5 & 1) == 0 )
          {
            v21 = CCD_STORE::ForTopology(
                    (__int64)this,
                    anonymous_namespace_::_UpdateTimestampTopologySetCallback,
                    (__int64)this,
                    0);
            v26 = v21;
            if ( v21 >= 0 )
            {
LABEL_19:
              if ( CCD_SET_STRING_ID::IsSubsetOf((CCD_SET_STRING_ID *)this, (const struct CCD_SET_STRING_ID *)&v44) )
              {
                v27 = CCD_STORE::ForConnectedSet(
                        (const struct CCD_SET_STRING_ID *)&v44,
                        anonymous_namespace_::_UpdateConnectedSetCallback,
                        (__int64)this);
                v28 = v27;
                if ( v27 < 0 )
                {
                  WdLogSingleEntry4(2LL, v27, &v45, this, this[8]);
                  DxgkLogCodePointPacket(0x3Fu, 6u, v5, v28, 0LL);
                }
              }
              v29 = CCD_BTL::Global();
              v30 = CCD_TOPOLOGY::CopyInheritScope(
                      (struct CCD_BTL *)((char *)v29 + 8),
                      (const struct CCD_TOPOLOGY *)this);
              v8 = v30;
              if ( v30 < 0 )
              {
                WdLogSingleEntry3(2LL, v30, this, this[8]);
                DxgkLogCodePointPacket(0x3Fu, 7u, v5, v8, 0LL);
                v8 = 0;
              }
              v31 = 8;
              goto LABEL_25;
            }
            v39 = (_QWORD *)WdLogNewEntry5_WdTrace(v23, v22, v24, v25);
            v39[3] = v26;
            v39[4] = this;
            v39[5] = this[8];
          }
          v40 = CCD_STORE::ForTopology((__int64)this, anonymous_namespace_::_SaveTopologySetCallback, (__int64)this, 1);
          v8 = v40;
          if ( v40 < 0 )
          {
            WdLogSingleEntry3(2LL, v40, this, this[8]);
            v10 = 5;
            goto LABEL_10;
          }
          if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 1344) )
          {
            ConnectedSetStr = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)&v44);
            v42 = this[8];
            v43 = *ConnectedSetStr;
            LogCddDatabaseAccessPacket(0, v8, v42, &v43, 0);
          }
          goto LABEL_19;
        }
        WdLogSingleEntry3(3LL, -1073741266LL, this[8], v5);
        v36 = 3;
      }
      else
      {
        WdLogSingleEntry3(3LL, -1073741266LL, this[8], v5);
        v36 = 2;
      }
      DxgkLogCodePointPacket(0x3Fu, v36, v5, 0xC000022E, 0LL);
      v8 = -1073741266;
      goto LABEL_11;
    }
    WdLogSingleEntry3(2LL, this, this[8], *(int *)this);
    DxgkLogCodePointPacket(0x3Fu, 0, v5, 0xC0000001, 0LL);
    return 3221225473LL;
  }
}
