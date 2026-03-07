__int64 __fastcall DxgkCreateDeviceImpl(
        struct _D3DKMT_CREATEDEVICE *a1,
        struct DXGADAPTER **a2,
        struct DXG_SET_GUEST_DATA **a3,
        char a4)
{
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // r13
  struct DXGADAPTER *v9; // rdx
  struct _D3DKMT_CREATEDEVICE *v10; // rax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  struct DXGADAPTER **v13; // r9
  struct DXGADAPTER *v14; // r12
  struct DXGADAPTER **v15; // rbx
  struct DXGADAPTER **v16; // rax
  struct DXGADAPTER *v17; // rdx
  char *v18; // rbx
  _QWORD *v19; // r12
  __int64 v20; // r13
  struct DXGADAPTER *v21; // rdx
  struct DXGADAPTER *v22; // r8
  int v23; // eax
  unsigned int v24; // r15d
  unsigned int v25; // eax
  unsigned int v26; // ebx
  _DWORD *p_hDevice; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  struct DXGADAPTER **v31; // rax
  int PairingAdapters; // eax
  __int64 v33; // r13
  struct DXGADAPTER **v34; // rax
  const wchar_t *v35; // r9
  bool v36; // sf
  __int64 v37; // rbx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 v43; // r8
  struct _KEVENT *v44; // rbx
  KSPIN_LOCK *Global; // rax
  int v46; // [rsp+28h] [rbp-1F0h]
  int v47; // [rsp+30h] [rbp-1E8h]
  int v48; // [rsp+38h] [rbp-1E0h]
  struct DXGADAPTER *v50; // [rsp+68h] [rbp-1B0h] BYREF
  unsigned __int64 v51; // [rsp+70h] [rbp-1A8h] BYREF
  int v52; // [rsp+78h] [rbp-1A0h] BYREF
  __int64 v53; // [rsp+80h] [rbp-198h]
  char v54; // [rsp+88h] [rbp-190h]
  struct DXGADAPTER *v55; // [rsp+90h] [rbp-188h] BYREF
  unsigned __int64 v56; // [rsp+98h] [rbp-180h] BYREF
  _QWORD *v57; // [rsp+A0h] [rbp-178h]
  struct DXGPROCESS *v58; // [rsp+A8h] [rbp-170h] BYREF
  struct DXGADAPTER *v59; // [rsp+B0h] [rbp-168h]
  struct DXGADAPTER *v60; // [rsp+B8h] [rbp-160h] BYREF
  _QWORD *v61; // [rsp+C0h] [rbp-158h]
  DXGADAPTER *v62; // [rsp+C8h] [rbp-150h] BYREF
  DXGADAPTER *v63; // [rsp+D8h] [rbp-140h] BYREF
  unsigned __int64 v64; // [rsp+E0h] [rbp-138h] BYREF
  struct DXG_SET_GUEST_DATA **v65; // [rsp+E8h] [rbp-130h]
  struct DXGK_VIRTUAL_GPU_PARAV *v66; // [rsp+F0h] [rbp-128h]
  struct _D3DKMT_CREATEDEVICE *v67; // [rsp+F8h] [rbp-120h]
  __int64 v68; // [rsp+100h] [rbp-118h]
  char *v69; // [rsp+108h] [rbp-110h]
  unsigned int v70[4]; // [rsp+110h] [rbp-108h]
  __int128 v71; // [rsp+120h] [rbp-F8h]
  __int128 v72; // [rsp+130h] [rbp-E8h]
  __int128 v73; // [rsp+140h] [rbp-D8h]
  _BYTE v74[144]; // [rsp+150h] [rbp-C8h] BYREF

  v65 = a3;
  v66 = (struct DXGK_VIRTUAL_GPU_PARAV *)a2;
  v67 = a1;
  v52 = -1;
  v53 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v54 = 1;
    v52 = 2009;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2009);
  }
  else
  {
    v54 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v52, 2009);
  Current = DXGPROCESS::GetCurrent(v7);
  v58 = Current;
  if ( !Current )
  {
    v26 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v35 = L"Invalid process context, returning 0x%I64x";
    goto LABEL_51;
  }
  if ( a2 )
    v9 = a2[2];
  else
    v9 = 0LL;
  v60 = v9;
  if ( a4 )
  {
    v10 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v10 = (struct _D3DKMT_CREATEDEVICE *)MmUserProbeAddress;
    *(_OWORD *)v70 = *(_OWORD *)&v10->hAdapter;
    v71 = *(_OWORD *)&v10->pCommandBuffer;
    v11 = *(_OWORD *)&v10->pAllocationList;
    v12 = *(_OWORD *)&v10->pPatchLocationList;
  }
  else
  {
    *(_OWORD *)v70 = *(_OWORD *)&a1->hAdapter;
    v71 = *(_OWORD *)&a1->pCommandBuffer;
    v11 = *(_OWORD *)&a1->pAllocationList;
    v12 = *(_OWORD *)&a1->pPatchLocationList;
  }
  v73 = v12;
  v72 = v11;
  if ( (v70[2] & 8) != 0 && !g_OSTestSigningEnabled )
  {
    v26 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v35 = L"TestDevice flag cannot be used, returning 0x%I64x";
LABEL_51:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v35, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
LABEL_40:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
    if ( !v54 )
      return v26;
    v36 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_62;
  }
  v13 = &v60;
  if ( v9 )
    v13 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v62, v70[0], (struct _KTHREAD **)Current, v13, 1);
  v14 = v60;
  if ( !v60 )
  {
    v26 = -1073741811;
    WdLogSingleEntry2(3LL, v70[0], -1073741811LL);
LABEL_58:
    if ( v62 )
      DXGADAPTER::ReleaseReference(v62);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
    if ( !v54 )
      return v26;
    LOBYTE(v28) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v36 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_62:
    if ( v36 )
      McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v52);
    return v26;
  }
  v59 = 0LL;
  while ( 1 )
  {
    v50 = 0LL;
    v55 = 0LL;
    v15 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v55);
    v16 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v50);
    if ( (int)DxgkpGetPairingAdapters(v14, 0, v16, &v51, v15, &v56, 0) < 0 )
    {
      v31 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v50);
      PairingAdapters = DxgkpGetPairingAdapters(v14, 0, v31, &v51, 0LL, 0LL, 0);
      v33 = PairingAdapters;
      if ( PairingAdapters < 0 )
      {
        v37 = v70[0];
        WdLogSingleEntry2(2LL, v70[0], PairingAdapters);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to get bound render adapter from hAdapter 0x%I64x (ntStatus = 0x%I64x).",
          v37,
          v33,
          0LL,
          0LL,
          0LL);
        DXGADAPTER_REFERENCE::Assign(&v55, 0LL);
        DXGADAPTER_REFERENCE::Assign(&v50, 0LL);
        if ( v62 )
          DXGADAPTER::ReleaseReference(v62);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
        if ( v54 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v38, &EventProfilerExit, v39, v52);
        return (unsigned int)v33;
      }
      Current = v58;
    }
    v17 = v50;
    if ( !v50 || !*((_QWORD *)v50 + 366) )
    {
      WdLogSingleEntry1(1LL, 2075LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"RenderAdapterRef && RenderAdapterRef->IsRenderAdapter()",
        2075LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v17 = v50;
    }
    if ( v55 && !*((_QWORD *)v55 + 365) )
    {
      WdLogSingleEntry1(1LL, 2076LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"!DisplayAdapterRef || DisplayAdapterRef->IsDisplayAdapter()",
        2076LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v17 = v50;
    }
    if ( v59 == v17 )
    {
      v26 = -1073741275;
      WdLogSingleEntry3(1LL, v17, v14, -1073741275LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"DxgkpGetPairingAdapters keeps returning same disabled adapter 0x%I64x for display adapter 0x%I64x, returning 0x%I64x.",
        (__int64)v50,
        (__int64)v14,
        -1073741275LL,
        0LL,
        0LL);
      DXGADAPTER_REFERENCE::Assign(&v55, 0LL);
      DXGADAPTER_REFERENCE::Assign(&v50, 0LL);
      goto LABEL_58;
    }
    v18 = (char *)Current + 216;
    v69 = (char *)Current + 216;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)Current + 216, 0LL);
    v19 = (_QWORD *)((char *)Current + 224);
    v61 = (_QWORD *)((char *)Current + 224);
    *((_QWORD *)Current + 28) = KeGetCurrentThread();
    v68 = *((_QWORD *)v50 + 366) + 24LL;
    v20 = v68;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v20, 0LL);
    v57 = (_QWORD *)(v20 + 8);
    *(_QWORD *)(v20 + 8) = KeGetCurrentThread();
    v21 = v50;
    v22 = v55;
    if ( v50 == v55 )
      break;
    v63 = 0LL;
    v34 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v63);
    v14 = v60;
    LODWORD(v59) = DxgkpGetPairingAdapters(v60, 0, v34, &v64, 0LL, 0LL, 0);
    if ( (int)v59 < 0 )
    {
      DXGADAPTER_REFERENCE::Assign(&v63, 0LL);
      *v57 = 0LL;
      ExReleasePushLockExclusiveEx(v20, 0LL);
      KeLeaveCriticalRegion();
      *v61 = 0LL;
      ExReleasePushLockExclusiveEx(v18, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER_REFERENCE::Assign(&v55, 0LL);
      DXGADAPTER_REFERENCE::Assign(&v50, 0LL);
      if ( v62 )
        DXGADAPTER::ReleaseReference(v62);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
      if ( v54 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v40, &EventProfilerExit, v41, v52);
      return (unsigned int)v59;
    }
    v59 = v50;
    if ( v63 == v50 )
    {
      DXGADAPTER_REFERENCE::Assign(&v63, 0LL);
      v21 = v50;
      v22 = v55;
      v19 = v61;
      break;
    }
    WdLogSingleEntry1(3LL, v50);
    DXGADAPTER_REFERENCE::Assign(&v63, 0LL);
    *v57 = 0LL;
    ExReleasePushLockExclusiveEx(v20, 0LL);
    KeLeaveCriticalRegion();
    *v61 = 0LL;
    ExReleasePushLockExclusiveEx(v18, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER_REFERENCE::Assign(&v55, 0LL);
    DXGADAPTER_REFERENCE::Assign(&v50, 0LL);
    Current = v58;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v74, v21, v22);
  v23 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v74, 0LL);
  v24 = v23;
  if ( v23 >= 0 )
  {
    if ( !*((_BYTE *)v50 + 209)
      && *((_BYTE *)DXGGLOBAL::GetGlobal() + 889)
      && (*DXGADAPTER::GetAdapterType(v50, &v60) & 0x10) != 0 )
    {
      v44 = (struct _KEVENT *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v50 + 366) + 736LL)
                                                                            + 8LL)
                                                                + 904LL))(*(_QWORD *)(*((_QWORD *)v50 + 366) + 744LL));
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      DXGGLOBAL::SetSchedulerCrossAdapterData(Global, v44);
      *((_BYTE *)v50 + 206) = 1;
    }
    v58 = 0LL;
    if ( v50 == v55 )
      v25 = (v70[2] >> 1) & 1;
    else
      LOBYTE(v25) = 0;
    LOBYTE(v48) = 0;
    LOBYTE(v47) = (v70[2] & 4) != 0;
    LOBYTE(v46) = v25;
    v26 = ADAPTER_RENDER::CreateDevice(
            *((_QWORD *)v50 + 366),
            &v58,
            v70[2],
            (v70[2] & 1) == 0,
            v55,
            v46,
            v47,
            v48,
            v66,
            v65,
            0);
    if ( (v26 & 0x80000000) == 0 )
    {
      p_hDevice = &v67->hDevice;
      if ( a4 && (unsigned __int64)p_hDevice >= MmUserProbeAddress )
        p_hDevice = (_DWORD *)MmUserProbeAddress;
      *p_hDevice = *((_DWORD *)v58 + 117);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v74);
    *v57 = 0LL;
    ExReleasePushLockExclusiveEx(v20, 0LL);
    KeLeaveCriticalRegion();
    *v61 = 0LL;
    ExReleasePushLockExclusiveEx(v69, 0LL);
    KeLeaveCriticalRegion();
    if ( v55 )
      DXGADAPTER::ReleaseReference(v55);
    v55 = 0LL;
    if ( v50 )
      DXGADAPTER::ReleaseReference(v50);
    v50 = 0LL;
    if ( v62 )
      DXGADAPTER::ReleaseReference(v62);
    goto LABEL_40;
  }
  if ( v50 != v55 && (*((_DWORD *)v50 + 50) != 1 || *((_BYTE *)v50 + 2833)) )
    WdLogSingleEntry2(3LL, v50, v23);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v74);
  *v57 = 0LL;
  ExReleasePushLockExclusiveEx(v20, 0LL);
  KeLeaveCriticalRegion();
  *v19 = 0LL;
  ExReleasePushLockExclusiveEx(v18, 0LL);
  KeLeaveCriticalRegion();
  DXGADAPTER_REFERENCE::Assign(&v55, 0LL);
  DXGADAPTER_REFERENCE::Assign(&v50, 0LL);
  if ( v62 )
    DXGADAPTER::ReleaseReference(v62);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
  if ( v54 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v42, &EventProfilerExit, v43, v52);
  return v24;
}
