__int64 __fastcall DxgkGetAllMonitorDevicesFromSessionView(
        struct _LUID *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5)
{
  __int64 v5; // r12
  unsigned int v6; // r13d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 CurrentProcessSessionId; // rdi
  DXGSESSIONDATA *v14; // rbx
  struct SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rdx
  _QWORD *i; // rax
  _QWORD *v20; // rcx
  DXGSESSIONDATA **v21; // rdi
  __int64 v22; // rsi
  DXGFASTMUTEX *v23; // rdx
  DXGSESSIONDATA *v24; // rcx
  char *v25; // rsi
  bool v26; // zf
  __int64 v27; // rbx
  char v28; // al
  __int64 v29; // rcx
  DXGFASTMUTEX *v30; // rcx
  bool v31; // cf
  unsigned int v33; // eax
  unsigned int *v34; // rax
  __int64 v35; // rdx
  int v36; // eax
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // r8
  __int64 IsMonitorConnected; // rdi
  __int64 v41; // rcx
  __int64 v42; // rax
  bool v43; // al
  __int64 v44; // rcx
  struct DXGGLOBAL *Global; // rax
  unsigned int v46; // r8d
  DXGADAPTERSOURCEHASH *v47; // rcx
  __int64 v48; // rax
  int HashForAdapterAndSource; // eax
  __int64 v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // rcx
  unsigned int v53; // eax
  DXGADAPTERSOURCEHASH *v54; // rcx
  char HashBitShift; // di
  int HashBitMask; // eax
  __int64 v57; // rbx
  __int64 v58; // r10
  const wchar_t *v59; // r9
  unsigned int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  unsigned int v65; // eax
  char v66[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v67; // [rsp+54h] [rbp-ACh] BYREF
  DXGFASTMUTEX *v68; // [rsp+58h] [rbp-A8h] BYREF
  char v69; // [rsp+60h] [rbp-A0h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v70[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v71; // [rsp+70h] [rbp-90h] BYREF
  __int64 v72; // [rsp+78h] [rbp-88h]
  __int64 v73; // [rsp+80h] [rbp-80h]
  unsigned int v74; // [rsp+88h] [rbp-78h]
  unsigned int *v75; // [rsp+90h] [rbp-70h]
  _BYTE v76[144]; // [rsp+A0h] [rbp-60h] BYREF

  v5 = a2;
  v6 = 0;
  v74 = a2;
  v72 = a5;
  v75 = a4;
  v73 = a3;
  v10 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( !v10 )
    goto LABEL_63;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(v9, v8, v11, v12);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v68, (struct DXGFASTMUTEX *const)(v10 + 88), 0);
  if ( v69 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, &v68, 0LL, 0LL);
  DXGFASTMUTEX::Acquire(v68);
  v69 = 1;
  if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v10 + 80) )
  {
    DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v68);
    v14 = 0LL;
  }
  else
  {
    _mm_lfence();
    v14 = *(DXGSESSIONDATA **)(*(_QWORD *)(v10 + 48) + 8 * CurrentProcessSessionId);
    v69 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v68);
  }
  if ( !v14 )
  {
LABEL_63:
    v60 = PsGetCurrentProcessSessionId(v9, v8, v11, v12);
    LODWORD(IsMonitorConnected) = -1073741811;
    WdLogSingleEntry2(2LL, v60, -1073741811LL);
    v65 = PsGetCurrentProcessSessionId(v62, v61, v63, v64);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
      v65,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)IsMonitorConnected;
  }
  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(v14, a1);
  if ( !SessionAdapterFromLuid )
    goto LABEL_62;
  v18 = (_QWORD *)((char *)SessionAdapterFromLuid + 112);
  for ( i = (_QWORD *)*((_QWORD *)SessionAdapterFromLuid + 14); i != v18; i = (_QWORD *)*i )
  {
    v20 = i - 4;
    if ( *((_DWORD *)i - 4) == (_DWORD)v5 )
      goto LABEL_11;
  }
  v20 = 0LL;
LABEL_11:
  if ( !v20 )
  {
LABEL_62:
    v22 = v5;
    WdLogSingleEntry4(3LL, v5, a1->HighPart, a1->LowPart, v14);
    goto LABEL_31;
  }
  v21 = (DXGSESSIONDATA **)v20[6];
  if ( v21 && *v21 != v14 )
  {
    WdLogSingleEntry1(1LL, 4189LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pSessionView == NULL) || (&pSessionView->GetOwnedSession() == this)",
      4189LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_15;
  }
  v22 = v5;
  if ( !v21 )
  {
LABEL_31:
    v33 = PsGetCurrentProcessSessionId(v20, v18, v16, v17);
    WdLogSingleEntry4(4LL, v22, a1->HighPart, a1->LowPart, v33);
    v34 = v75;
    *(_BYTE *)v73 = 1;
    *v34 = 0;
    return 0LL;
  }
LABEL_15:
  v23 = (DXGFASTMUTEX *)(v21 + 6);
  v24 = v21[6];
  v25 = 0LL;
  v26 = *(_QWORD *)v23 == (_QWORD)v23;
  v68 = (DXGFASTMUTEX *)(v21 + 6);
  if ( !v26 )
    v25 = (char *)v24 - 56;
  if ( !v25 )
  {
    WdLogSingleEntry1(1LL, 1196LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplaySource != NULL", 1196LL, 0LL, 0LL, 0LL, 0LL);
    v23 = v68;
  }
  v27 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v25 + 1) + 16LL) + 404LL);
  if ( *((_DWORD *)v25 + 4) != (_DWORD)v5 || a1->LowPart != (_DWORD)v27 || (v28 = 1, a1->HighPart != HIDWORD(v27)) )
    v28 = 0;
  *(_BYTE *)v73 = v28;
  while ( *((_DWORD *)v25 + 4) == v74 )
  {
    v29 = *(_QWORD *)(*((_QWORD *)v25 + 1) + 16LL);
    if ( a1->LowPart != *(_DWORD *)(v29 + 404) || a1->HighPart != *(_DWORD *)(v29 + 408) )
      break;
LABEL_26:
    v30 = (DXGFASTMUTEX *)*((_QWORD *)v25 + 7);
    v25 = 0LL;
    if ( v30 != v23 )
      v25 = (char *)v30 - 56;
    if ( !v25 )
    {
      v31 = *v75 < v6;
      *v75 = v6;
      return v31 ? 0x80000005 : 0;
    }
  }
  v35 = *((_QWORD *)v25 + 1);
  v67 = 0;
  v70[0] = D3DKMDT_VOT_HD15;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v76, *(struct DXGADAPTER *const *)(v35 + 16), 0LL);
  v36 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v76, 0LL);
  v37 = *((_QWORD *)v25 + 1);
  if ( v36 < 0 )
  {
    WdLogSingleEntry3(
      4LL,
      *(int *)(*(_QWORD *)(v37 + 16) + 408LL),
      *(unsigned int *)(*(_QWORD *)(v37 + 16) + 404LL),
      v36);
LABEL_55:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v76);
    goto LABEL_56;
  }
  if ( !*(_BYTE *)(v37 + 290) )
  {
    WdLogSingleEntry1(1LL, 1242LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplaySource->GetDisplayCore()->IsVirtualTopologyEnabled()",
      1242LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !v72 || v6 >= *v75 )
  {
LABEL_54:
    ++v6;
    goto LABEL_55;
  }
  if ( (int)DmmEnumClientVidPnPathTargetsFromSource(
              *(void *const *)(*((_QWORD *)v25 + 1) + 16LL),
              *((_DWORD *)v25 + 4),
              1uLL,
              &v67) < 0
    || v67 != -1 )
  {
    WdLogSingleEntry1(1LL, 1260LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"NT_SUCCESS(DmmEnumClientVidPnPathTargetsFromSource( pDisplaySource->GetAdapter(), pDisplaySource->GetVidP"
                "nSourceId(), 1, &VidPnTargetId)) && (VidPnTargetId == D3DDDI_ID_UNINITIALIZED)",
      1260LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v38 = DmmEnumClientVidPnPathTargetsFromSource(
          *(void *const *)(*((_QWORD *)v25 + 1) + 16LL),
          *((_DWORD *)v25 + 4),
          0LL,
          &v67);
  LODWORD(IsMonitorConnected) = v38;
  if ( v38 >= 0 )
  {
    v41 = *(_QWORD *)(*((_QWORD *)v25 + 1) + 16LL);
    if ( v67 == -1 )
    {
      LODWORD(IsMonitorConnected) = -1073741811;
      WdLogSingleEntry4(
        2LL,
        *((unsigned int *)v25 + 4),
        *(int *)(v41 + 408),
        *(unsigned int *)(v41 + 404),
        -1073741811LL);
      v59 = L"Cannot find the attached target from VidPn source 0x%I64x on adapter (0x%I64x%08I64x), returning 0x%I64x.";
      v57 = -1073741811LL;
      goto LABEL_60;
    }
    v66[0] = 0;
    LOBYTE(v39) = 1;
    IsMonitorConnected = (int)MonitorIsMonitorConnected(v41, v67, v39, v66);
    v42 = *((_QWORD *)v25 + 1);
    if ( (int)IsMonitorConnected < 0 )
    {
      v57 = IsMonitorConnected;
      WdLogSingleEntry4(
        2LL,
        v67,
        *(int *)(*(_QWORD *)(v42 + 16) + 408LL),
        *(unsigned int *)(*(_QWORD *)(v42 + 16) + 404LL),
        IsMonitorConnected);
      v58 = v67;
      v59 = L"Failed to check monitor connection to target 0x%I64x on adapter (0x%I64x%08I64x), returning 0x%I64x.";
      goto LABEL_61;
    }
    if ( !v66[0] )
    {
      WdLogSingleEntry4(
        4LL,
        v67,
        *(int *)(*(_QWORD *)(v42 + 16) + 408LL),
        *(unsigned int *)(*(_QWORD *)(v42 + 16) + 404LL),
        IsMonitorConnected);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v76);
LABEL_56:
      v23 = v68;
      goto LABEL_26;
    }
    DmmGetVideoOutputTechnology(*(void *const *)(v42 + 16), v67, v70, 0LL);
    v73 = 5LL * v6;
    v43 = IsInternalVideoOutput(v70[0]);
    v44 = v72;
    v71 = 0;
    *(_BYTE *)(v72 + 20LL * v6 + 16) = v43;
    *(_DWORD *)(v44 + 20LL * v6) = 536870913;
    Global = DXGGLOBAL::GetGlobal();
    v46 = *((_DWORD *)v25 + 4);
    v47 = (struct DXGGLOBAL *)((char *)Global + 1384);
    v48 = *((_QWORD *)v25 + 1);
    *(_QWORD *)v70 = v47;
    HashForAdapterAndSource = DXGADAPTERSOURCEHASH::FindHashForAdapterAndSource(
                                v47,
                                (const struct _LUID *)(*(_QWORD *)(v48 + 16) + 404LL),
                                v46,
                                &v71);
    if ( HashForAdapterAndSource >= 0 )
    {
      v54 = *(DXGADAPTERSOURCEHASH **)v70;
      *(_QWORD *)(v72 + 20LL * v6 + 8) = v27;
      HashBitShift = DXGADAPTERSOURCEHASH::GetHashBitShift(v54);
      HashBitMask = DXGADAPTERSOURCEHASH::GetHashBitMask(*(DXGADAPTERSOURCEHASH **)v70);
      v52 = v73;
      v53 = (v71 << HashBitShift) + (v67 & ~HashBitMask);
      v51 = v72;
    }
    else
    {
      v50 = HashForAdapterAndSource;
      WdLogSingleEntry4(
        2LL,
        *((unsigned int *)v25 + 4),
        *(int *)(*(_QWORD *)(*((_QWORD *)v25 + 1) + 16LL) + 408LL),
        *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v25 + 1) + 16LL) + 404LL),
        HashForAdapterAndSource);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to find hash for VidPn source (0x%I64x) on adapter (0x%I64x%08I64x), status 0x%lx",
        *((unsigned int *)v25 + 4),
        *(int *)(*(_QWORD *)(*((_QWORD *)v25 + 1) + 16LL) + 408LL),
        *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v25 + 1) + 16LL) + 404LL),
        v50,
        0LL);
      v51 = v72;
      v52 = v73;
      *(_QWORD *)(v72 + 4 * v73 + 8) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v25 + 1) + 16LL) + 404LL);
      v53 = v67;
    }
    *(_DWORD *)(v51 + 4 * v52 + 4) = v53;
    goto LABEL_54;
  }
  v57 = v38;
  WdLogSingleEntry4(
    2LL,
    *((unsigned int *)v25 + 4),
    *(int *)(*(_QWORD *)(*((_QWORD *)v25 + 1) + 16LL) + 408LL),
    *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v25 + 1) + 16LL) + 404LL),
    v38);
  v59 = L"Failed to get the attached target from VidPn source 0x%I64x on adapter (0x%I64x%08I64x), returning 0x%I64x.";
LABEL_60:
  v58 = *((unsigned int *)v25 + 4);
LABEL_61:
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)v59,
    v58,
    *(int *)(*(_QWORD *)(*((_QWORD *)v25 + 1) + 16LL) + 408LL),
    *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v25 + 1) + 16LL) + 404LL),
    v57,
    0LL);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v76);
  return (unsigned int)IsMonitorConnected;
}
