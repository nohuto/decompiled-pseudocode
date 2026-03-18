/*
 * XREFs of ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C01827B0
 * Callers:
 *     DxgkGetPathsModality @ 0x1C01808E0 (DxgkGetPathsModality.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02FAD5C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C03C0124 (-_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z.c)
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0002F24 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007174 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028340 (memmove.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C016C7F0 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C017CDCC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C017D564 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C017D5F8 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C017D78C (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C017D8F4 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z @ 0x1C017FD00 (-_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0180EE4 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C0181620 (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ??0BTL_TOPOLOGY_CONSTRUCTOR@@QEAA@XZ @ 0x1C01817BC (--0BTL_TOPOLOGY_CONSTRUCTOR@@QEAA@XZ.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C01824E0 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ??0CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@PEAVCCD_TOPOLOGY@@@Z @ 0x1C0182748 (--0CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@PEAVCCD_TOPOLOGY@@@Z.c)
 *     ?LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z @ 0x1C0182B88 (-LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z.c)
 *     ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1C0182C58 (-LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z.c)
 *     ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C0184020 (-_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C018433C (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z @ 0x1C0184568 (-CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z.c)
 *     ?_CheckResolvedTopologyForVirtualModeConsistency@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C018511C (-_CheckResolvedTopologyForVirtualModeConsistency@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     ?LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x1C0185E3C (-LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C019D2BC (DxgkReleaseSessionModeChangeLock.c)
 *     DxgkGetGlobalRawmodeFlag @ 0x1C01EABA0 (DxgkGetGlobalRawmodeFlag.c)
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C03C064C (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::RetrievePersisted(struct D3DKMT_HASH **this, unsigned int a2, unsigned __int16 *a3)
{
  __int64 v3; // r12
  unsigned int v5; // ebx
  int v7; // eax
  __int64 v8; // r14
  struct CCD_BTL *v9; // rax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdi
  struct _STRING *v13; // rax
  struct D3DKMT_GETPATHSMODALITY *v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rax
  bool v20; // zf
  struct CCD_BTL *v21; // rax
  bool v22; // r8
  int v23; // eax
  __int64 v24; // rdx
  int TopologyClass; // eax
  int v26; // ecx
  int active; // eax
  struct D3DKMT_HASH *v28; // rdi
  struct _STRING *ConnectedSetStr; // rax
  int StringHash; // eax
  int v31; // edi
  const struct CCD_SET_STRING_ID *ModalitySetId; // rax
  __int64 v34; // rax
  struct _DXGK_DIAG_HEADER *v35; // rbx
  size_t v36; // r8
  PCHAR v37; // rdx
  __int64 v38; // rcx
  unsigned int CurrentProcessSessionId; // eax
  _QWORD *v40; // rax
  BTL_TOPOLOGY_CONSTRUCTOR *v41; // rax
  int v42; // eax
  char GlobalRawmodeFlag; // al
  unsigned int v44; // edx
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v50; // [rsp+60h] [rbp-A8h]
  unsigned int v51; // [rsp+68h] [rbp-A0h]
  __m128i v52; // [rsp+70h] [rbp-98h] BYREF
  int v53; // [rsp+80h] [rbp-88h] BYREF
  __int128 v54; // [rsp+88h] [rbp-80h]
  __int64 v55; // [rsp+98h] [rbp-70h]
  __int16 v56; // [rsp+A0h] [rbp-68h]
  __int128 v57; // [rsp+A8h] [rbp-60h]
  int v58; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v59; // [rsp+C0h] [rbp-48h]
  __int64 v60; // [rsp+D0h] [rbp-38h]
  __int16 v61; // [rsp+D8h] [rbp-30h]
  __int128 v62; // [rsp+E0h] [rbp-28h]
  _BYTE v63[12]; // [rsp+F8h] [rbp-10h] BYREF
  unsigned __int16 v64; // [rsp+104h] [rbp-4h]
  _BYTE v65[64]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v66[128]; // [rsp+148h] [rbp+40h] BYREF
  char v67; // [rsp+210h] [rbp+108h] BYREF

  v3 = a2;
  v67 = 0;
  v5 = 0;
  v7 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v67, 0);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v53 = 0;
    v54 = 0LL;
    v55 = 0LL;
    v57 = 0LL;
    v56 = 0;
    v9 = CCD_BTL::Global();
    v10 = (**(__int64 (__fastcall ***)(struct CCD_BTL *, int *))v9)(v9, &v53);
    LODWORD(v8) = v10;
    if ( v10 < 0 )
    {
      WdLogSingleEntry4(2LL, v10, this, this[8], v3);
      goto LABEL_23;
    }
    if ( (v3 & 0x20) != 0 )
    {
      if ( !*((_WORD *)CCD_TOPOLOGY::GetModalitySetId((CCD_TOPOLOGY *)this) + 4) )
      {
        WdLogSingleEntry3(2LL, this, this[8], *(int *)this);
        LODWORD(v8) = -1073741823;
        goto LABEL_23;
      }
      CCD_RECENT_TOPOLOGY_RETRIEVER::CCD_RECENT_TOPOLOGY_RETRIEVER(
        (CCD_RECENT_TOPOLOGY_RETRIEVER *)v63,
        (struct CCD_TOPOLOGY *)this);
      if ( (v3 & 0x2000) != 0 )
      {
        ModalitySetId = CCD_TOPOLOGY::GetModalitySetId((CCD_TOPOLOGY *)this);
        v58 = 0;
        v60 = 0LL;
        v61 = 0;
        v59 = 0LL;
        v62 = 0LL;
        CCD_SET_STRING_ID::operator=((CCD_SET_STRING_ID *)&v58, (__int64)ModalitySetId);
        LODWORD(v8) = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByConnectedSetId(
                        (CCD_RECENT_TOPOLOGY_RETRIEVER *)v63,
                        (const struct CCD_SET_STRING_ID *)&v53,
                        (const struct CCD_SET_STRING_ID *)&v58,
                        v3 & 0xF,
                        (v3 & 0x1000) != 0);
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v58);
      }
      else
      {
        LODWORD(v8) = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByTopologySetId(
                        (CCD_RECENT_TOPOLOGY_RETRIEVER *)v63,
                        (const struct CCD_SET_STRING_ID *)this,
                        v3 & 0xF,
                        (v3 & 0x1000) != 0);
      }
      if ( (_DWORD)v8 == -1073741275 )
      {
        v5 = 2;
        WdLogSingleEntry3(3LL, this, this[8], v3);
      }
      else
      {
        if ( (int)v8 >= 0 )
        {
          v5 = 1;
          CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v66);
          CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v65);
LABEL_15:
          LODWORD(v49) = 0;
          TopologyClass = CCD_TOPOLOGY::QueryTopologyClass((CCD_TOPOLOGY *)this, (enum CCD_TOPOLOGY_CLASS *)&v49);
          if ( TopologyClass < 0 )
          {
            WdLogSingleEntry3(2LL, TopologyClass, this, this[8]);
            v26 = 0;
          }
          else
          {
            v26 = v49;
          }
          *((_DWORD *)this[8] + 8) = v26;
          active = CCD_TOPOLOGY::_FillPathsActiveFlags((CCD_TOPOLOGY *)this);
          if ( active < 0
            || (active = CCD_TOPOLOGY::FillPathsTargetFlags((CCD_TOPOLOGY *)this), active < 0)
            || (active = CCD_TOPOLOGY::_CheckResolvedTopologyForVirtualModeConsistency((CCD_TOPOLOGY *)this), active < 0) )
          {
            LODWORD(v8) = active;
          }
          else
          {
            v28 = this[8];
            ConnectedSetStr = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)&v53);
            StringHash = CCD_SET_STRING_ID::_QueryStringHash(ConnectedSetStr, v28);
            v31 = StringHash;
            if ( StringHash < 0 )
              WdLogSingleEntry4(2LL, StringHash, this, this[8], v3);
            LODWORD(v8) = v31;
          }
          goto LABEL_23;
        }
        WdLogSingleEntry4(2LL, (int)v8, this, this[8], v3);
      }
      goto LABEL_31;
    }
    CCD_RECENT_TOPOLOGY_RETRIEVER::CCD_RECENT_TOPOLOGY_RETRIEVER(
      (CCD_RECENT_TOPOLOGY_RETRIEVER *)v63,
      (struct CCD_TOPOLOGY *)this);
    LODWORD(v49) = v3 & 0xF;
    v11 = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByConnectedSetId(
            (CCD_RECENT_TOPOLOGY_RETRIEVER *)v63,
            (const struct CCD_SET_STRING_ID *)&v53,
            0LL,
            v49,
            (v3 & 0x1000) != 0);
    v12 = v11;
    LODWORD(v8) = -1073741789;
    if ( v11 == -1073741789 )
    {
      if ( a3 )
        *a3 = v64;
      goto LABEL_31;
    }
    if ( v11 < 0 )
    {
      v52 = *(__m128i *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)&v53);
      LODWORD(v50) = _mm_cvtsi128_si32(v52);
      v51 = (unsigned __int16)v50 + 57;
      v34 = operator new[](v51, 0x63644356u, 256LL);
      v35 = (struct _DXGK_DIAG_HEADER *)v34;
      if ( v34 )
      {
        v36 = (unsigned __int16)v50;
        v37 = (PCHAR)v52.m128i_i64[1];
        *(_DWORD *)v34 = 9;
        *(_DWORD *)(v34 + 4) = v51;
        *(_DWORD *)(v34 + 40) = 0;
        *(_QWORD *)(v34 + 32) = 0LL;
        *(_OWORD *)(v34 + 8) = 0LL;
        *(_QWORD *)(v34 + 24) = 0LL;
        *(_DWORD *)(v34 + 48) = v12;
        *(_DWORD *)(v34 + 52) = v3;
        memmove((void *)(v34 + 56), v37, v36);
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v38);
        DxgkWriteDiagEntry(v35, CurrentProcessSessionId);
        operator delete(v35);
      }
      else
      {
        v50 = 0LL;
        DxgkLogCodePointPacket(0x1Bu, v3, v12, 0, 0LL);
      }
      v5 = 2;
      if ( (v3 & 0x80u) == 0LL )
      {
        v40 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v15, v17, v18);
        v5 = 0;
        LOWORD(v51) = 0;
        v40[3] = v12;
        v40[4] = this;
        v40[5] = this[8];
        v40[6] = v3;
        CCD_BTL::Global();
        v41 = BTL_TOPOLOGY_CONSTRUCTOR::BTL_TOPOLOGY_CONSTRUCTOR((BTL_TOPOLOGY_CONSTRUCTOR *)&v58);
        v42 = BTL_TOPOLOGY_CONSTRUCTOR::operator()(v41);
        v12 = v42;
        if ( v42 == -1073741789 )
        {
          if ( a3 )
            *a3 = v51;
          CCD_TOPOLOGY::_FillPathsActiveFlags((CCD_TOPOLOGY *)this);
          CCD_TOPOLOGY::FillPathsTargetFlags((CCD_TOPOLOGY *)this);
          goto LABEL_31;
        }
        if ( v42 < 0 )
          goto LABEL_57;
        if ( (v3 & 0x4000000) != 0 )
        {
          GlobalRawmodeFlag = DxgkGetGlobalRawmodeFlag();
          v44 = 0;
          if ( GlobalRawmodeFlag )
            v44 = 0x20000;
          v45 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)this, v44, 1);
          v12 = v45;
          if ( v45 < 0 )
          {
LABEL_57:
            v5 = 10;
            v46 = v12;
LABEL_61:
            WdLogSingleEntry4(2LL, v46, this, this[8], v3);
            LODWORD(v8) = v12;
LABEL_31:
            CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v66);
            CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v65);
LABEL_23:
            CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v53);
            goto LABEL_24;
          }
        }
        v5 = 6;
      }
    }
    else
    {
      if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 1344) )
      {
        v13 = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)&v53);
        v14 = this[8];
        v52 = *(__m128i *)v13;
        LogCddDatabaseAccessPacket(1, v12, v14, (struct _STRING *)&v52, v3);
      }
      else
      {
        v50 = 0LL;
        DxgkLogCodePointPacket(9u, v3, v12, 0, 0LL);
      }
      v5 = 1;
    }
    if ( (int)v12 >= 0 )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v15, v17, v18);
      v20 = (_DWORD)v49 == 15;
      v19[3] = this;
      v19[4] = this[8];
      v19[5] = v3;
      if ( !v20 )
      {
LABEL_14:
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v66);
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v65);
        goto LABEL_15;
      }
      v21 = CCD_BTL::Global();
      v23 = CDS_JOURNAL::CommitTo((struct CCD_BTL *)((char *)v21 + 112), (struct CCD_TOPOLOGY *)this, v22, a3);
      if ( v23 != -1073741789 )
      {
        v24 = -1073741266LL;
        if ( v23 == -1073741266 )
        {
          v48 = 3LL;
        }
        else
        {
          if ( v23 >= 0 )
            goto LABEL_14;
          v24 = v23;
          v48 = 2LL;
        }
        WdLogSingleEntry4(v48, v24, this, this[8], v3);
        goto LABEL_14;
      }
      if ( a3 )
        v47 = *a3;
      else
        v47 = 0LL;
      WdLogSingleEntry5(3LL, v47, -1073741789LL, this, this[8], v3);
      goto LABEL_31;
    }
    v46 = (int)v12;
    goto LABEL_61;
  }
  WdLogSingleEntry1(2LL, v7);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to acquire session mode change lock shared (Status = 0x%I64x)",
    v8,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_24:
  if ( v67 )
    DxgkReleaseSessionModeChangeLock();
  if ( v5 )
    DisplayScenarioJournalCCDRetrieval(v5);
  return (unsigned int)v8;
}
