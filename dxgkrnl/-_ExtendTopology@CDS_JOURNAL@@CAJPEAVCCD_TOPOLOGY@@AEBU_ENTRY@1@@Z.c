__int64 __fastcall CDS_JOURNAL::_ExtendTopology(struct CCD_TOPOLOGY *this, const struct CDS_JOURNAL::_ENTRY *a2)
{
  DXGGLOBAL *Global; // rax
  unsigned int *v5; // rbx
  struct DXGADAPTER *v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // edi
  char IsPrimaryClonePathByModality; // r12
  __int64 v13; // rax
  unsigned __int16 v14; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v16; // rbx
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // r8
  DMMVIDPNTOPOLOGY *v22; // r10
  __int64 v23; // rax
  unsigned int v24; // ebx
  int v25; // eax
  __int64 v26; // rax
  VIDPN_MGR *v27; // rax
  unsigned int v28; // edx
  int IsMonitorVirtualModeDisabled; // eax
  char v30; // al
  bool v31; // dl
  bool v32; // r8
  char v33; // al
  char v34; // r9
  int v35; // ecx
  int v36; // eax
  int v37; // eax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v38; // rbx
  _BYTE v40[4]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v41; // [rsp+64h] [rbp-9Ch] BYREF
  bool v42; // [rsp+68h] [rbp-98h]
  VIDPN_MGR *v43; // [rsp+70h] [rbp-90h] BYREF
  DMMVIDPNTOPOLOGY *v44; // [rsp+78h] [rbp-88h]
  __int64 v45; // [rsp+80h] [rbp-80h] BYREF
  __int64 v46; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v47; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v48[144]; // [rsp+A0h] [rbp-60h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  v5 = (unsigned int *)((char *)a2 + 20);
  v6 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)((char *)a2 + 20), &v47);
  v7 = (__int64)v6;
  if ( !v6 )
  {
    WdLogSingleEntry4(3LL, this, *((_QWORD *)this + 8), *((int *)a2 + 6), *v5);
    LODWORD(v8) = -1073741810;
    return (unsigned int)v8;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v48, v6, 0LL);
  LODWORD(v8) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v48, 0LL);
  if ( (int)v8 < 0 )
    goto LABEL_58;
  v9 = *(_QWORD *)(v7 + 2920);
  if ( !v9 )
  {
    LODWORD(v8) = -1073741637;
    WdLogSingleEntry3(3LL, *((int *)a2 + 6), *v5, -1073741637LL);
    goto LABEL_58;
  }
  v43 = *(VIDPN_MGR **)(v9 + 104);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v46, (__int64)v43);
  v45 = 0LL;
  v10 = VIDPN_MGR::CreateClientVidPn(v43, &v45);
  LODWORD(v8) = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry5(2LL, v10, v7, *(int *)(v7 + 408), *(unsigned int *)(v7 + 404), *((_QWORD *)this + 8));
    goto LABEL_36;
  }
  v44 = (DMMVIDPNTOPOLOGY *)(v45 + 96);
  if ( v45 == -96 )
  {
    WdLogSingleEntry4(2LL, v7, *(int *)(v7 + 408), *(unsigned int *)(v7 + 404), *((_QWORD *)this + 8));
    LODWORD(v8) = -1073741823;
    goto LABEL_36;
  }
  v11 = 0;
  IsPrimaryClonePathByModality = 1;
  while ( 1 )
  {
    v13 = *((_QWORD *)this + 8);
    v41 = v11;
    v14 = v13 ? *(_WORD *)(v13 + 20) : 0;
    if ( v11 >= v14 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v11);
    v16 = PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 4) == *(_DWORD *)(v7 + 404)
      && *((_DWORD *)PathDescriptor + 5) == *(_DWORD *)(v7 + 408) )
    {
      v17 = VIDPN_MGR::AddPathToVidPnTopology(
              v43,
              v44,
              *((_DWORD *)PathDescriptor + 6),
              *((_DWORD *)PathDescriptor + 7),
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              v11,
              0,
              D3DKMDT_MCC_ENFORCE);
      v8 = v17;
      if ( v17 < 0 )
      {
        v18 = *((unsigned int *)v16 + 7);
        v19 = *((unsigned int *)v16 + 6);
        v20 = *((unsigned int *)v16 + 4);
        v21 = *((int *)v16 + 5);
        goto LABEL_52;
      }
      v11 = v41;
    }
    ++v11;
  }
  if ( DMMVIDPNTOPOLOGY::IsTargetInTopology(v44, *((_DWORD *)a2 + 8)) )
  {
    WdLogSingleEntry0(1LL);
    v22 = v44;
  }
  v23 = *(_QWORD *)(v7 + 2920);
  v24 = 0;
  v41 = 0;
  if ( !*(_DWORD *)(v23 + 96) )
    goto LABEL_27;
  while ( DMMVIDPNTOPOLOGY::IsSourceInTopology(v22, v24) )
  {
LABEL_26:
    v26 = *(_QWORD *)(v7 + 2920);
    v41 = ++v24;
    if ( v24 >= *(_DWORD *)(v26 + 96) )
      goto LABEL_27;
  }
  v25 = VIDPN_MGR::AddPathToVidPnTopology(
          v43,
          v22,
          v24,
          *((_DWORD *)a2 + 8),
          (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
          0xFFFFu,
          0,
          D3DKMDT_MCC_ENFORCE);
  v8 = v25;
  if ( v25 == -1071774975 )
  {
    v22 = v44;
    goto LABEL_26;
  }
  if ( v25 < 0 )
  {
    v20 = *(unsigned int *)(v7 + 404);
    v21 = *(int *)(v7 + 408);
    goto LABEL_51;
  }
LABEL_27:
  v27 = *(VIDPN_MGR **)(v7 + 2920);
  v43 = v27;
  if ( v24 >= *((_DWORD *)v27 + 24) )
  {
    LODWORD(v8) = -1071774975;
    goto LABEL_36;
  }
  v28 = *((_DWORD *)a2 + 8);
  v42 = 0;
  if ( v28 == -1 )
  {
LABEL_34:
    LODWORD(v8) = -1073741811;
LABEL_35:
    WdLogSingleEntry2(2LL, *((unsigned int *)a2 + 8), v7);
    goto LABEL_36;
  }
  if ( !v27 )
  {
    WdLogSingleEntry1(2LL, 9698LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The selected adapter is render-only",
      9698LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_34;
  }
  v40[0] = 0;
  IsMonitorVirtualModeDisabled = MonitorIsMonitorVirtualModeDisabled(v7, v28, v40);
  v8 = IsMonitorVirtualModeDisabled;
  if ( IsMonitorVirtualModeDisabled == -1073741632 )
  {
    v30 = 0;
    LODWORD(v8) = 0;
    goto LABEL_41;
  }
  if ( IsMonitorVirtualModeDisabled < 0 )
  {
    WdLogSingleEntry1(1LL, IsMonitorVirtualModeDisabled);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"Unexpected return code 0x%I64x from MonitorIsMonitorVirtualModeDisabled()",
      v8,
      0LL,
      0LL,
      0LL,
      0LL);
    v31 = v42;
    v24 = v41;
    v32 = v42;
  }
  else
  {
    v30 = v40[0];
LABEL_41:
    if ( v30 )
    {
      v31 = 1;
      v32 = 1;
      goto LABEL_45;
    }
    v33 = *((_BYTE *)v43 + 289);
    v31 = v33 == 0;
    v32 = *((_BYTE *)v43 + 290) == 0;
    if ( !v33 || (*((_DWORD *)v43 + 6) & 0x20) == 0 )
    {
LABEL_45:
      v34 = 0;
      goto LABEL_48;
    }
  }
  v34 = 1;
LABEL_48:
  if ( (int)v8 < 0 )
    goto LABEL_35;
  v35 = *((_DWORD *)a2 + 9);
  v36 = *((_DWORD *)a2 + 10);
  v43 = 0LL;
  v37 = CCD_TOPOLOGY::AddPathDescriptor(
          (__int64)this,
          (__int64 *)((char *)a2 + 20),
          v24,
          *((_DWORD *)a2 + 8),
          !v31,
          !v32,
          v34,
          v35,
          v36,
          0,
          (__int64 *)&v43);
  v8 = v37;
  if ( v37 >= 0 )
  {
    v38 = v43;
    v41 = 0;
    if ( (int)CCD_TOPOLOGY::FindPathDescriptorByTarget(this, (const struct _LUID *)v43 + 2, *((_DWORD *)v43 + 7), &v41) >= 0 )
    {
      CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath(this, v41);
      IsPrimaryClonePathByModality = CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v41);
    }
    CDS_JOURNAL::_FillPathDescriptor(v38, a2, IsPrimaryClonePathByModality, 0, (struct DXGADAPTER *)v7);
  }
  else
  {
    v20 = *((unsigned int *)a2 + 5);
    v21 = *((int *)a2 + 6);
LABEL_51:
    v19 = v24;
    v18 = *((unsigned int *)a2 + 8);
LABEL_52:
    WdLogSingleEntry5(2LL, v8, v21, v20, v19, v18);
  }
LABEL_36:
  auto_rc<DMMVIDPN>::reset(&v45, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v46 + 40));
LABEL_58:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v48);
  DXGADAPTER::ReleaseReference((DXGADAPTER *)v7);
  return (unsigned int)v8;
}
