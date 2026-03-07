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
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned int CurrentProcessSessionId; // eax
  _QWORD *v43; // rax
  BTL_TOPOLOGY_CONSTRUCTOR *v44; // rax
  int v45; // eax
  char GlobalRawmodeFlag; // al
  unsigned int v47; // edx
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v53; // [rsp+60h] [rbp-A8h]
  unsigned int v54; // [rsp+68h] [rbp-A0h]
  __m128i v55; // [rsp+70h] [rbp-98h] BYREF
  int v56; // [rsp+80h] [rbp-88h] BYREF
  __int128 v57; // [rsp+88h] [rbp-80h]
  __int64 v58; // [rsp+98h] [rbp-70h]
  __int16 v59; // [rsp+A0h] [rbp-68h]
  __int128 v60; // [rsp+A8h] [rbp-60h]
  int v61; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v62; // [rsp+C0h] [rbp-48h]
  __int64 v63; // [rsp+D0h] [rbp-38h]
  __int16 v64; // [rsp+D8h] [rbp-30h]
  __int128 v65; // [rsp+E0h] [rbp-28h]
  _BYTE v66[12]; // [rsp+F8h] [rbp-10h] BYREF
  unsigned __int16 v67; // [rsp+104h] [rbp-4h]
  _BYTE v68[64]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v69[128]; // [rsp+148h] [rbp+40h] BYREF
  char v70; // [rsp+210h] [rbp+108h] BYREF

  v3 = a2;
  v70 = 0;
  v5 = 0;
  v7 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v70, 0);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v56 = 0;
    v57 = 0LL;
    v58 = 0LL;
    v60 = 0LL;
    v59 = 0;
    v9 = CCD_BTL::Global();
    v10 = (**(__int64 (__fastcall ***)(struct CCD_BTL *, int *))v9)(v9, &v56);
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
        (CCD_RECENT_TOPOLOGY_RETRIEVER *)v66,
        (struct CCD_TOPOLOGY *)this);
      if ( (v3 & 0x2000) != 0 )
      {
        ModalitySetId = CCD_TOPOLOGY::GetModalitySetId((CCD_TOPOLOGY *)this);
        v61 = 0;
        v63 = 0LL;
        v64 = 0;
        v62 = 0LL;
        v65 = 0LL;
        CCD_SET_STRING_ID::operator=((CCD_SET_STRING_ID *)&v61, (__int64)ModalitySetId);
        LODWORD(v8) = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByConnectedSetId(
                        (CCD_RECENT_TOPOLOGY_RETRIEVER *)v66,
                        (const struct CCD_SET_STRING_ID *)&v56,
                        (const struct CCD_SET_STRING_ID *)&v61,
                        v3 & 0xF,
                        (v3 & 0x1000) != 0);
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v61);
      }
      else
      {
        LODWORD(v8) = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByTopologySetId(
                        (CCD_RECENT_TOPOLOGY_RETRIEVER *)v66,
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
          CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v69);
          CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v68);
LABEL_15:
          LODWORD(v52) = 0;
          TopologyClass = CCD_TOPOLOGY::QueryTopologyClass((CCD_TOPOLOGY *)this, (enum CCD_TOPOLOGY_CLASS *)&v52);
          if ( TopologyClass < 0 )
          {
            WdLogSingleEntry3(2LL, TopologyClass, this, this[8]);
            v26 = 0;
          }
          else
          {
            v26 = v52;
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
            ConnectedSetStr = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)&v56);
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
      (CCD_RECENT_TOPOLOGY_RETRIEVER *)v66,
      (struct CCD_TOPOLOGY *)this);
    LODWORD(v52) = v3 & 0xF;
    v11 = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByConnectedSetId(
            (CCD_RECENT_TOPOLOGY_RETRIEVER *)v66,
            (const struct CCD_SET_STRING_ID *)&v56,
            0LL,
            v52,
            (v3 & 0x1000) != 0);
    v12 = v11;
    LODWORD(v8) = -1073741789;
    if ( v11 == -1073741789 )
    {
      if ( a3 )
        *a3 = v67;
      goto LABEL_31;
    }
    if ( v11 < 0 )
    {
      v55 = *(__m128i *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)&v56);
      LODWORD(v53) = _mm_cvtsi128_si32(v55);
      v54 = (unsigned __int16)v53 + 57;
      v34 = operator new[](v54, 0x63644356u, 256LL);
      v35 = (struct _DXGK_DIAG_HEADER *)v34;
      if ( v34 )
      {
        v36 = (unsigned __int16)v53;
        v37 = (PCHAR)v55.m128i_i64[1];
        *(_DWORD *)v34 = 9;
        *(_DWORD *)(v34 + 4) = v54;
        *(_DWORD *)(v34 + 40) = 0;
        *(_QWORD *)(v34 + 32) = 0LL;
        *(_OWORD *)(v34 + 8) = 0LL;
        *(_QWORD *)(v34 + 24) = 0LL;
        *(_DWORD *)(v34 + 48) = v12;
        *(_DWORD *)(v34 + 52) = v3;
        memmove((void *)(v34 + 56), v37, v36);
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v39, v38, v40, v41);
        DxgkWriteDiagEntry(v35, CurrentProcessSessionId);
        operator delete(v35);
      }
      else
      {
        v53 = 0LL;
        DxgkLogCodePointPacket(0x1Bu, v3, v12, 0, 0LL);
      }
      v5 = 2;
      if ( (v3 & 0x80u) == 0LL )
      {
        v43 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v15, v17, v18);
        v5 = 0;
        LOWORD(v54) = 0;
        v43[3] = v12;
        v43[4] = this;
        v43[5] = this[8];
        v43[6] = v3;
        CCD_BTL::Global();
        v44 = BTL_TOPOLOGY_CONSTRUCTOR::BTL_TOPOLOGY_CONSTRUCTOR((BTL_TOPOLOGY_CONSTRUCTOR *)&v61);
        v45 = BTL_TOPOLOGY_CONSTRUCTOR::operator()(v44);
        v12 = v45;
        if ( v45 == -1073741789 )
        {
          if ( a3 )
            *a3 = v54;
          CCD_TOPOLOGY::_FillPathsActiveFlags((CCD_TOPOLOGY *)this);
          CCD_TOPOLOGY::FillPathsTargetFlags((CCD_TOPOLOGY *)this);
          goto LABEL_31;
        }
        if ( v45 < 0 )
          goto LABEL_57;
        if ( (v3 & 0x4000000) != 0 )
        {
          GlobalRawmodeFlag = DxgkGetGlobalRawmodeFlag();
          v47 = 0;
          if ( GlobalRawmodeFlag )
            v47 = 0x20000;
          v48 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)this, v47, 1);
          v12 = v48;
          if ( v48 < 0 )
          {
LABEL_57:
            v5 = 10;
            v49 = v12;
LABEL_61:
            WdLogSingleEntry4(2LL, v49, this, this[8], v3);
            LODWORD(v8) = v12;
LABEL_31:
            CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v69);
            CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v68);
LABEL_23:
            CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v56);
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
        v13 = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)&v56);
        v14 = this[8];
        v55 = *(__m128i *)v13;
        LogCddDatabaseAccessPacket(1, v12, v14, (struct _STRING *)&v55, v3);
      }
      else
      {
        v53 = 0LL;
        DxgkLogCodePointPacket(9u, v3, v12, 0, 0LL);
      }
      v5 = 1;
    }
    if ( (int)v12 >= 0 )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v15, v17, v18);
      v20 = (_DWORD)v52 == 15;
      v19[3] = this;
      v19[4] = this[8];
      v19[5] = v3;
      if ( !v20 )
      {
LABEL_14:
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v69);
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v68);
        goto LABEL_15;
      }
      v21 = CCD_BTL::Global();
      v23 = CDS_JOURNAL::CommitTo((struct CCD_BTL *)((char *)v21 + 112), (struct CCD_TOPOLOGY *)this, v22, a3);
      if ( v23 != -1073741789 )
      {
        v24 = -1073741266LL;
        if ( v23 == -1073741266 )
        {
          v51 = 3LL;
        }
        else
        {
          if ( v23 >= 0 )
            goto LABEL_14;
          v24 = v23;
          v51 = 2LL;
        }
        WdLogSingleEntry4(v51, v24, this, this[8], v3);
        goto LABEL_14;
      }
      if ( a3 )
        v50 = *a3;
      else
        v50 = 0LL;
      WdLogSingleEntry5(3LL, v50, -1073741789LL, this, this[8], v3);
      goto LABEL_31;
    }
    v49 = (int)v12;
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
  if ( v70 )
    DxgkReleaseSessionModeChangeLock();
  if ( v5 )
    DisplayScenarioJournalCCDRetrieval(v5);
  return (unsigned int)v8;
}
