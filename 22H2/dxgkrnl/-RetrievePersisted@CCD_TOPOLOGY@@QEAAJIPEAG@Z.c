/*
 * XREFs of ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C013F8EC
 * Callers:
 *     DxgkGetPathsModality @ 0x1C013E680 (DxgkGetPathsModality.c)
 *     ?_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C0150254 (-_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02967CC (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000A3B8 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000BAD8 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C0120374 (DxgkReleaseSessionModeChangeLock.c)
 *     ?_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z @ 0x1C0139524 (-_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C013AC90 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C013AE0C (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C013B174 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C013D7C8 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?_CheckResolvedTopologyForVirtualModeConsistency@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C013E178 (-_CheckResolvedTopologyForVirtualModeConsistency@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C013E924 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C013F638 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C013FCF0 (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C0145F7C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x1C0147CE4 (-LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C01486EC (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ?LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z @ 0x1C014B01C (-LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z.c)
 *     ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1C014B0F4 (-LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C014B4A0 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z @ 0x1C0150174 (-CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z.c)
 *     ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C0168C70 (-_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     ??0CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@PEAVCCD_TOPOLOGY@@@Z @ 0x1C01695E0 (--0CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@PEAVCCD_TOPOLOGY@@@Z.c)
 *     DxgkGetGlobalRawmodeFlag @ 0x1C016D0D0 (DxgkGetGlobalRawmodeFlag.c)
 *     ??0BTL_TOPOLOGY_CONSTRUCTOR@@QEAA@XZ @ 0x1C02EDD04 (--0BTL_TOPOLOGY_CONSTRUCTOR@@QEAA@XZ.c)
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C02EDE18 (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::RetrievePersisted(CCD_TOPOLOGY *this, unsigned int a2, unsigned __int16 *a3)
{
  __int64 v3; // r14
  unsigned int v5; // ebx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  struct CCD_BTL *v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r15
  __m128i *v19; // rax
  struct D3DKMT_GETPATHSMODALITY *v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rdx
  bool v25; // zf
  __int64 v26; // rcx
  struct CCD_BTL *v27; // rax
  bool v28; // r8
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r15
  int TopologyClass; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdi
  int v38; // ecx
  int active; // eax
  __int64 v40; // rdx
  struct D3DKMT_HASH *v41; // rdi
  struct _STRING *ConnectedSetStr; // rax
  int StringHash; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  _QWORD *v50; // rax
  void **ModalitySetId; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  _QWORD *v55; // rax
  _QWORD *v56; // rcx
  __int64 v57; // rax
  _QWORD *v58; // rax
  _DWORD *v59; // rbx
  size_t v60; // r8
  PCHAR v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rcx
  unsigned int CurrentProcessSessionId; // eax
  _QWORD *v65; // rax
  __int64 v66; // rdx
  BTL_TOPOLOGY_CONSTRUCTOR *v67; // rax
  int v68; // eax
  __int64 v69; // rdx
  char GlobalRawmodeFlag; // al
  unsigned int v71; // edx
  int v72; // eax
  _QWORD *v73; // rax
  _QWORD *v74; // rax
  _QWORD *v75; // rax
  _QWORD *v76; // rax
  _QWORD *v77; // rax
  __int64 v78; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v79; // [rsp+40h] [rbp-C8h]
  __int64 v80; // [rsp+48h] [rbp-C0h]
  size_t Size; // [rsp+50h] [rbp-B8h]
  __m128i Size_8; // [rsp+58h] [rbp-B0h] BYREF
  __m256i v83; // [rsp+68h] [rbp-A0h] BYREF
  __int16 v84; // [rsp+88h] [rbp-80h]
  __int128 v85; // [rsp+90h] [rbp-78h]
  int v86; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v87; // [rsp+A8h] [rbp-60h]
  __int64 v88; // [rsp+B8h] [rbp-50h]
  __int16 v89; // [rsp+C0h] [rbp-48h]
  __int128 v90; // [rsp+C8h] [rbp-40h]
  _BYTE v91[12]; // [rsp+E8h] [rbp-20h] BYREF
  unsigned __int16 v92; // [rsp+F4h] [rbp-14h]
  _BYTE v93[64]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v94[112]; // [rsp+138h] [rbp+30h] BYREF
  char v95; // [rsp+1F0h] [rbp+E8h] BYREF

  v3 = a2;
  v95 = 0;
  v5 = 0;
  v7 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v95, 0);
  v10 = v7;
  if ( v7 >= 0 )
  {
    v83.m256i_i32[0] = 0;
    memset(&v83.m256i_u64[1], 0, 24);
    v85 = 0LL;
    v84 = 0;
    v11 = CCD_BTL::Global(v9, v8);
    v12 = (**(__int64 (__fastcall ***)(struct CCD_BTL *, __m256i *))v11)(v11, &v83);
    v10 = v12;
    if ( v12 < 0 )
      goto LABEL_71;
    if ( (v3 & 0x20) != 0 )
    {
      if ( !*((_WORD *)CCD_TOPOLOGY::GetModalitySetId((void **)this) + 4) )
      {
        v50 = (_QWORD *)WdLogNewEntry5_WdError(v49, v48);
        v50[3] = this;
        v50[4] = *((_QWORD *)this + 8);
        v50[5] = *(int *)this;
        WdLogEvent5_WdError(v50);
        LODWORD(v10) = -1073741823;
        goto LABEL_22;
      }
      CCD_RECENT_TOPOLOGY_RETRIEVER::CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v91, this);
      if ( (v3 & 0x2000) != 0 )
      {
        ModalitySetId = CCD_TOPOLOGY::GetModalitySetId((void **)this);
        v86 = 0;
        v88 = 0LL;
        v89 = 0;
        v87 = 0LL;
        v90 = 0LL;
        CCD_SET_STRING_ID::operator=((CCD_SET_STRING_ID *)&v86, (__int64)ModalitySetId);
        LODWORD(v10) = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByConnectedSetId(
                         (CCD_RECENT_TOPOLOGY_RETRIEVER *)v91,
                         (const struct CCD_SET_STRING_ID *)&v83,
                         (const struct CCD_SET_STRING_ID *)&v86,
                         v3 & 0xF,
                         (v3 & 0x1000) != 0);
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v86);
      }
      else
      {
        LODWORD(v10) = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByTopologySetId(
                         (CCD_RECENT_TOPOLOGY_RETRIEVER *)v91,
                         this,
                         v3 & 0xF,
                         (v3 & 0x1000) != 0);
      }
      if ( (_DWORD)v10 == -1073741275 )
      {
        v5 = 2;
        v55 = (_QWORD *)WdLogNewEntry5_WdWarning(v53, v52, v54);
        v55[3] = this;
        v55[4] = *((_QWORD *)this + 8);
        v56 = v55;
        v55[5] = v3;
LABEL_42:
        WdLogEvent5_WdWarning(v56);
        goto LABEL_31;
      }
      if ( (int)v10 >= 0 )
      {
        v5 = 1;
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v94);
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v93);
LABEL_16:
        LODWORD(v78) = 0;
        TopologyClass = CCD_TOPOLOGY::QueryTopologyClass(this, (enum CCD_TOPOLOGY_CLASS *)&v78);
        v37 = TopologyClass;
        if ( TopologyClass < 0 )
        {
          v76 = (_QWORD *)WdLogNewEntry5_WdError(v36, v35);
          v76[3] = v37;
          v76[4] = this;
          v76[5] = *((_QWORD *)this + 8);
          WdLogEvent5_WdError(v76);
          v38 = 0;
        }
        else
        {
          v38 = v78;
        }
        *(_DWORD *)(*((_QWORD *)this + 8) + 32LL) = v38;
        active = CCD_TOPOLOGY::_FillPathsActiveFlags(this);
        if ( active < 0
          || (active = CCD_TOPOLOGY::FillPathsTargetFlags(this, v40), active < 0)
          || (active = CCD_TOPOLOGY::_CheckResolvedTopologyForVirtualModeConsistency(this), active < 0) )
        {
          LODWORD(v10) = active;
          goto LABEL_22;
        }
        v41 = (struct D3DKMT_HASH *)*((_QWORD *)this + 8);
        ConnectedSetStr = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)&v83);
        StringHash = CCD_SET_STRING_ID::_QueryStringHash(ConnectedSetStr, v41);
        v10 = StringHash;
        if ( StringHash >= 0 )
        {
LABEL_22:
          CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v83);
          goto LABEL_23;
        }
LABEL_71:
        v77 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
        v77[3] = v10;
        v77[4] = this;
        v77[5] = *((_QWORD *)this + 8);
        v77[6] = v3;
        WdLogEvent5_WdError(v77);
        goto LABEL_22;
      }
      v58 = (_QWORD *)WdLogNewEntry5_WdError(v53, v52);
      v58[3] = (int)v10;
      v58[4] = this;
      v58[5] = *((_QWORD *)this + 8);
      v58[6] = v3;
      WdLogEvent5_WdError(v58);
LABEL_31:
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v94);
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v93);
      goto LABEL_22;
    }
    CCD_RECENT_TOPOLOGY_RETRIEVER::CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v91, this);
    LODWORD(v80) = v3 & 0xF;
    v15 = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByConnectedSetId(
            (CCD_RECENT_TOPOLOGY_RETRIEVER *)v91,
            (const struct CCD_SET_STRING_ID *)&v83,
            0LL,
            v80,
            (v3 & 0x1000) != 0);
    v18 = v15;
    LODWORD(v10) = -1073741789;
    if ( v15 == -1073741789 )
    {
      if ( a3 )
        *a3 = v92;
      goto LABEL_30;
    }
    if ( v15 < 0 )
    {
      Size_8 = *(__m128i *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)&v83);
      LODWORD(v79) = _mm_cvtsi128_si32(Size_8);
      LODWORD(v78) = (unsigned __int16)v79 + 57;
      Size = (unsigned int)v78;
      v59 = operator new[]((unsigned int)v78, 0x63644356u, PagedPool);
      if ( v59 )
      {
        memset(v59, 0, Size);
        v60 = (unsigned __int16)v79;
        v61 = (PCHAR)Size_8.m128i_i64[1];
        v59[1] = v78;
        v59[10] = 0;
        *((_QWORD *)v59 + 4) = 0LL;
        *v59 = 9;
        *(_OWORD *)(v59 + 2) = 0LL;
        *((_QWORD *)v59 + 3) = 0LL;
        v59[12] = v18;
        v59[13] = v3;
        memmove(v59 + 14, v61, v60);
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v63, v62);
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v59, CurrentProcessSessionId);
        operator delete[](v59);
      }
      else
      {
        v79 = 0LL;
        DxgkLogCodePointPacket(0x1Bu, v3, v18, 0, 0LL);
      }
      v5 = 2;
    }
    else
    {
      if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v17, v16) + 1232) )
      {
        v19 = (__m128i *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)&v83);
        v20 = (struct D3DKMT_GETPATHSMODALITY *)*((_QWORD *)this + 8);
        Size_8 = *v19;
        LogCddDatabaseAccessPacket(1, v18, v20, (struct _STRING *)&Size_8, v3);
      }
      else
      {
        v79 = 0LL;
        DxgkLogCodePointPacket(9u, v3, v18, 0, 0LL);
      }
      v5 = 1;
    }
    if ( (int)v18 >= 0 )
      goto LABEL_10;
    if ( (v3 & 0x80u) == 0LL )
    {
      v65 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v21);
      v65[3] = v18;
      v65[4] = this;
      v65[5] = *((_QWORD *)this + 8);
      v65[6] = v3;
      LOWORD(v78) = 0;
      CCD_BTL::Global(v3, v66);
      v67 = BTL_TOPOLOGY_CONSTRUCTOR::BTL_TOPOLOGY_CONSTRUCTOR((BTL_TOPOLOGY_CONSTRUCTOR *)&v86);
      v68 = BTL_TOPOLOGY_CONSTRUCTOR::operator()(v67);
      v18 = v68;
      if ( v68 == -1073741789 )
      {
        if ( a3 )
          *a3 = v78;
        CCD_TOPOLOGY::_FillPathsActiveFlags(this);
        CCD_TOPOLOGY::FillPathsTargetFlags(this, v69);
LABEL_30:
        v5 = 0;
        goto LABEL_31;
      }
      if ( v68 < 0 )
        goto LABEL_61;
      if ( (v3 & 0x4000000) != 0 )
      {
        GlobalRawmodeFlag = DxgkGetGlobalRawmodeFlag();
        v71 = 0;
        if ( GlobalRawmodeFlag )
          v71 = 0x20000;
        v72 = CCD_TOPOLOGY::Functionalize(this, v71, 1);
        v18 = v72;
        if ( v72 < 0 )
        {
LABEL_61:
          v5 |= 8u;
          v73 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
          v73[3] = v18;
          goto LABEL_65;
        }
      }
      v5 |= 4u;
    }
    if ( (int)v18 >= 0 )
    {
LABEL_10:
      v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v21);
      v25 = (_DWORD)v80 == 15;
      v23[3] = this;
      v26 = *((_QWORD *)this + 8);
      v23[4] = v26;
      v23[5] = v3;
      if ( !v25 )
      {
LABEL_15:
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v94);
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v93);
        goto LABEL_16;
      }
      v27 = CCD_BTL::Global(v26, v24);
      v29 = CDS_JOURNAL::CommitTo((struct CCD_BTL *)((char *)v27 + 104), this, v28, a3);
      v33 = v29;
      if ( v29 != -1073741789 )
      {
        if ( v29 == -1073741266 )
        {
          v74 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30, v32);
          v74[3] = -1073741266LL;
          v74[4] = this;
          v74[5] = *((_QWORD *)this + 8);
          v74[6] = v3;
          WdLogEvent5_WdWarning(v74);
        }
        else if ( v29 < 0 )
        {
          v75 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30);
          v75[3] = v33;
          v75[4] = this;
          v75[5] = *((_QWORD *)this + 8);
          v75[6] = v3;
          WdLogEvent5_WdError(v75);
        }
        goto LABEL_15;
      }
      v56 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30, v32);
      if ( a3 )
        v57 = *a3;
      else
        v57 = 0LL;
      v56[3] = v57;
      v56[4] = -1073741789LL;
      v56[5] = this;
      v56[6] = *((_QWORD *)this + 8);
      v56[7] = v3;
      goto LABEL_42;
    }
    v73 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
    v73[3] = (int)v18;
LABEL_65:
    v73[4] = this;
    v73[5] = *((_QWORD *)this + 8);
    v73[6] = v3;
    WdLogEvent5_WdError(v73);
    LODWORD(v10) = v18;
    goto LABEL_31;
  }
  v47 = WdLogNewEntry5_WdError(v9, v8);
  *(_QWORD *)(v47 + 24) = v10;
  WdLogEvent5_WdError(v47);
LABEL_23:
  if ( v95 )
    DxgkReleaseSessionModeChangeLock(v45, v44);
  if ( v5 )
    DisplayScenarioJournalCCDRetrieval(v5);
  return (unsigned int)v10;
}
