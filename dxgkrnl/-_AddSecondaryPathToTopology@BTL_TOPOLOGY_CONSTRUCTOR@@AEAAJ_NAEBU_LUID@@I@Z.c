__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology(
        CCD_TOPOLOGY **this,
        char a2,
        const struct _LUID *a3,
        unsigned int a4)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v8; // rax
  struct DXGADAPTER *v9; // r14
  __int64 v10; // rsi
  VIDPN_MGR *v11; // r15
  int ClientVidPn; // eax
  unsigned int i; // edi
  __int64 v14; // rax
  unsigned __int16 v15; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v17; // rbx
  unsigned int v18; // r8d
  unsigned int v19; // r9d
  int v20; // eax
  int v21; // eax
  _QWORD *v22; // rbx
  bool v23; // r15
  _QWORD *v24; // rdi
  bool v25; // r12
  bool v26; // zf
  struct DMMVIDEOPRESENTTARGET *v27; // rdi
  unsigned int v28; // r10d
  int IsMonitorVirtualModeDisabled; // eax
  bool v30; // al
  char v31; // al
  char v32; // cl
  bool v33; // al
  unsigned int v34; // edx
  int IsTargetForceable; // eax
  __int64 v36; // r9
  int v37; // eax
  struct DXGADAPTER *v38; // r11
  unsigned int v39; // r8d
  unsigned int v40; // edi
  char v41; // r10
  unsigned int v42; // edx
  int v43; // eax
  char v45; // [rsp+50h] [rbp-B0h]
  bool v46[2]; // [rsp+51h] [rbp-AFh] BYREF
  char v47; // [rsp+53h] [rbp-ADh]
  char v48; // [rsp+54h] [rbp-ACh]
  bool v49; // [rsp+55h] [rbp-ABh]
  bool v50; // [rsp+56h] [rbp-AAh]
  bool v51; // [rsp+57h] [rbp-A9h] BYREF
  char v52; // [rsp+58h] [rbp-A8h]
  int v53; // [rsp+5Ch] [rbp-A4h]
  struct DMMVIDEOPRESENTTARGET *v54; // [rsp+60h] [rbp-A0h]
  struct DMMVIDEOPRESENTTARGET *NextTarget; // [rsp+68h] [rbp-98h]
  __int64 v56; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v57; // [rsp+78h] [rbp-88h]
  unsigned int v58; // [rsp+7Ch] [rbp-84h]
  const struct DMMVIDPN *v59; // [rsp+80h] [rbp-80h] BYREF
  DMMVIDPNTOPOLOGY *v60; // [rsp+88h] [rbp-78h]
  char *v61; // [rsp+90h] [rbp-70h]
  VIDPN_MGR *v62; // [rsp+98h] [rbp-68h]
  struct DXGADAPTER *v63; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v64; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v65; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v66[144]; // [rsp+C0h] [rbp-40h] BYREF

  v57 = a4;
  v52 = a2;
  LOBYTE(v53) = 0;
  Global = DXGGLOBAL::GetGlobal();
  v8 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a3, &v64);
  v63 = v8;
  v9 = v8;
  if ( !v8 )
  {
    WdLogSingleEntry4(3LL, *this, *((_QWORD *)*this + 8), a3->HighPart, a3->LowPart);
    LODWORD(v10) = -1073741810;
    return (unsigned int)v10;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v66, v8, 0LL);
  LODWORD(v10) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v66, 0LL);
  if ( (int)v10 < 0 )
    goto LABEL_85;
  v61 = (char *)v9 + 2920;
  v62 = *(VIDPN_MGR **)(*((_QWORD *)v9 + 365) + 104LL);
  v11 = v62;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v65, (__int64)v62);
  v59 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v62, (__int64 *)&v59);
  LODWORD(v10) = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    WdLogSingleEntry5(2LL, ClientVidPn, v9, *((int *)v9 + 102), *((unsigned int *)v9 + 101), this);
    goto LABEL_84;
  }
  v60 = (const struct DMMVIDPN *)((char *)v59 + 96);
  if ( v59 == (const struct DMMVIDPN *)-96LL )
  {
    WdLogSingleEntry4(2LL, v9, *((int *)v9 + 102), *((unsigned int *)v9 + 101), this);
    LODWORD(v10) = -1073741823;
    goto LABEL_84;
  }
  for ( i = 0; ; ++i )
  {
    v14 = *((_QWORD *)*this + 8);
    v15 = v14 ? *(_WORD *)(v14 + 20) : 0;
    if ( i >= v15 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*this, i);
    v17 = PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)v9 + 101)
      && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)v9 + 102) )
    {
      v18 = *((_DWORD *)PathDescriptor + 6);
      v19 = *((_DWORD *)PathDescriptor + 7);
      v20 = (unsigned __int8)v53;
      if ( v18 == a4 )
        v20 = 1;
      v53 = v20;
      v21 = VIDPN_MGR::AddPathToVidPnTopology(
              v11,
              v60,
              v18,
              v19,
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              i,
              0,
              D3DKMDT_MCC_IGNORE);
      LODWORD(v10) = v21;
      if ( v21 < 0 )
      {
        WdLogSingleEntry5(
          2LL,
          v21,
          *((int *)v17 + 5),
          *((unsigned int *)v17 + 4),
          *((unsigned int *)v17 + 6),
          *((unsigned int *)v17 + 7));
        goto LABEL_84;
      }
    }
  }
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v11 + 15) + 72LL), 1u);
  v22 = (_QWORD *)*((_QWORD *)v11 + 15);
  v9 = v63;
  v10 = 0LL;
  v50 = 0;
  v48 = 0;
  v45 = 0;
  v23 = 0;
  v54 = 0LL;
  v24 = (_QWORD *)v22[3];
  v25 = 0;
  v58 = -1;
  v49 = 0;
  if ( v24 == v22 + 3
    || (v26 = v24 == (_QWORD *)8, v27 = (struct DMMVIDEOPRESENTTARGET *)(v24 - 1), NextTarget = v27, v26) )
  {
LABEL_81:
    LODWORD(v10) = -1073741275;
    goto LABEL_82;
  }
  while ( 1 )
  {
    if ( *((_DWORD *)v27 + 23)
      || DMMVIDPNTOPOLOGY::IsTargetInTopology(v60, *((_DWORD *)v27 + 6))
      || v28 == *((_DWORD *)this + 6) )
    {
      goto LABEL_57;
    }
    if ( v28 == -1 )
      goto LABEL_79;
    v56 = *(_QWORD *)v61;
    if ( !v56 )
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
LABEL_79:
      LODWORD(v10) = -1073741811;
LABEL_80:
      WdLogSingleEntry2(2LL, v9, *((unsigned int *)v27 + 6));
      goto LABEL_82;
    }
    v46[0] = 0;
    IsMonitorVirtualModeDisabled = MonitorIsMonitorVirtualModeDisabled((__int64)v9, v28, v46);
    v10 = IsMonitorVirtualModeDisabled;
    if ( IsMonitorVirtualModeDisabled == -1073741632 )
    {
      v30 = 0;
      LODWORD(v10) = 0;
    }
    else
    {
      if ( IsMonitorVirtualModeDisabled < 0 )
      {
        WdLogSingleEntry1(1LL, IsMonitorVirtualModeDisabled);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"Unexpected return code 0x%I64x from MonitorIsMonitorVirtualModeDisabled()",
          v10,
          0LL,
          0LL,
          0LL,
          0LL);
        v27 = NextTarget;
        goto LABEL_39;
      }
      v30 = v46[0];
    }
    if ( v30 )
    {
      v23 = 1;
      v25 = 1;
LABEL_34:
      v45 = 1;
      goto LABEL_39;
    }
    v31 = *(_BYTE *)(v56 + 289);
    v23 = v31 == 0;
    v25 = *(_BYTE *)(v56 + 290) == 0;
    if ( !v31 || (*(_DWORD *)(v56 + 24) & 0x20) == 0 )
      goto LABEL_34;
    v45 = 0;
LABEL_39:
    v32 = v45;
    v33 = v23;
    v47 = v45;
    v46[0] = v23;
    if ( (int)v10 < 0 )
      goto LABEL_80;
    if ( (_BYTE)v53 )
    {
      if ( !v25 )
        goto LABEL_56;
    }
    else if ( *((_BYTE *)this + 10) && v25 )
    {
      goto LABEL_56;
    }
    if ( !*((_QWORD *)v27 + 14) )
    {
      if ( !v52 )
        goto LABEL_56;
      v34 = *((_DWORD *)v27 + 6);
      v51 = 0;
      IsTargetForceable = DmmIsTargetForceable(v9, v34, &v51, 0);
      LODWORD(v10) = IsTargetForceable;
      if ( IsTargetForceable < 0 )
      {
        WdLogSingleEntry5(
          2LL,
          IsTargetForceable,
          *((int *)v9 + 102),
          *((unsigned int *)v9 + 101),
          *((unsigned int *)v27 + 6),
          *((_QWORD *)*this + 8));
        goto LABEL_82;
      }
      v32 = v47;
      v45 = v47;
      if ( !v51 )
      {
LABEL_56:
        v10 = (__int64)v54;
        goto LABEL_57;
      }
      v33 = v23;
    }
    v10 = (__int64)v54;
    v45 = v32;
    v23 = v33;
    if ( BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v9, v27, v54) )
      break;
LABEL_57:
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v22, NextTarget);
    v27 = NextTarget;
    if ( !NextTarget )
    {
      if ( v10 )
      {
        LODWORD(v10) = BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
                         (BTL_TOPOLOGY_CONSTRUCTOR *)this,
                         (struct _LUID *)((char *)v9 + 404),
                         v58,
                         *((_DWORD *)v54 + 6),
                         (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*(_DWORD *)(v10 + 80),
                         (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*(_DWORD *)(v10 + 84),
                         v50,
                         v49,
                         v48 != 0);
        goto LABEL_82;
      }
      goto LABEL_81;
    }
  }
  v56 = 0LL;
  v37 = VIDPN_MGR::CreateVidPnCopyForClient((__int64)v62, v59, &v56, v36);
  LODWORD(v10) = v37;
  if ( v37 < 0 )
  {
    WdLogSingleEntry5(2LL, v37, v9, *((int *)v9 + 102), *((unsigned int *)v9 + 101), this);
    goto LABEL_77;
  }
  v38 = (struct DXGADAPTER *)(v56 + 96);
  v63 = (struct DXGADAPTER *)(v56 + 96);
  if ( v56 == -96 )
  {
    WdLogSingleEntry4(2LL, v9, *((int *)v9 + 102), *((unsigned int *)v9 + 101), this);
    LODWORD(v10) = -1073741823;
    goto LABEL_77;
  }
  v39 = v57;
  v40 = 0;
  v23 = v46[0];
  v41 = v47;
  if ( v57 != -1 )
    v40 = v57;
  while ( 2 )
  {
    if ( v39 == -1 )
      v42 = *(_DWORD *)(*(_QWORD *)v61 + 96LL);
    else
      v42 = v39 + 1;
    v45 = v41;
    if ( v40 >= v42 )
    {
      v10 = (__int64)v54;
LABEL_72:
      auto_rc<DMMVIDPN>::reset(&v56, 0LL);
      goto LABEL_57;
    }
    v45 = v41;
    if ( v39 == -1 )
    {
      v45 = v41;
      if ( DMMVIDPNTOPOLOGY::IsSourceInTopology(v38, v40) )
      {
LABEL_66:
        v39 = v57;
        ++v40;
        continue;
      }
    }
    break;
  }
  v43 = VIDPN_MGR::AddPathToVidPnTopology(
          v62,
          v38,
          v40,
          *((_DWORD *)NextTarget + 6),
          (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
          0xFFFFu,
          0,
          D3DKMDT_MCC_IGNORE);
  LODWORD(v10) = v43;
  if ( v43 == -1071774975 )
  {
    v41 = v45;
    v38 = v63;
    goto LABEL_66;
  }
  if ( v43 >= 0 )
  {
    v10 = (__int64)NextTarget;
    v54 = NextTarget;
    v58 = v40;
    v50 = !v23;
    v49 = !v25;
    if ( v45 )
    {
      v48 = 0;
      v50 = !v23;
      v49 = !v25;
    }
    else
    {
      v48 = 1;
    }
    goto LABEL_72;
  }
  WdLogSingleEntry5(2LL, v43, *((int *)v9 + 102), *((unsigned int *)v9 + 101), v40, *((unsigned int *)NextTarget + 6));
LABEL_77:
  auto_rc<DMMVIDPN>::reset(&v56, 0LL);
LABEL_82:
  if ( v22 )
    ReferenceCounted::Release((ReferenceCounted *)(v22 + 8));
LABEL_84:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v59, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v65 + 40));
LABEL_85:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v66);
  DXGADAPTER::ReleaseReference(v9);
  return (unsigned int)v10;
}
