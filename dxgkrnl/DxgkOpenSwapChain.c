__int64 __fastcall DxgkOpenSwapChain(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct DXGDEVICE *v4; // r14
  __int64 v5; // rcx
  struct _KTHREAD **Current; // rdi
  _OWORD *v7; // rax
  void *v8; // r15
  char *v9; // r12
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGDEVICE *v17; // r13
  int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r8
  int v24; // eax
  NTSTATUS v25; // eax
  BOOL v26; // r13d
  ULONG64 v27; // r8
  _QWORD *v28; // rdx
  _DWORD *v29; // rdx
  _DWORD *v30; // rdx
  size_t v31; // r8
  __int64 v32; // rcx
  __int64 v33; // r8
  PVOID *Object; // [rsp+20h] [rbp-1C8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-1C0h]
  __int64 v36; // [rsp+30h] [rbp-1B8h]
  struct DXGDEVICE *v37[2]; // [rsp+50h] [rbp-198h] BYREF
  int v38; // [rsp+60h] [rbp-188h] BYREF
  __int64 v39; // [rsp+68h] [rbp-180h]
  char v40; // [rsp+70h] [rbp-178h]
  _QWORD v41[3]; // [rsp+78h] [rbp-170h] BYREF
  _BYTE Handle[80]; // [rsp+90h] [rbp-158h] BYREF
  PVOID v43; // [rsp+E0h] [rbp-108h] BYREF
  struct DXGDEVICE *v44; // [rsp+E8h] [rbp-100h] BYREF
  __int64 v45; // [rsp+F0h] [rbp-F8h]
  BOOL v46; // [rsp+F8h] [rbp-F0h]
  ULONG64 v47; // [rsp+100h] [rbp-E8h]
  ULONG64 v48; // [rsp+108h] [rbp-E0h]
  _BYTE v49[160]; // [rsp+110h] [rbp-D8h] BYREF

  v47 = a1;
  v48 = a1;
  v38 = -1;
  v39 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v40 = 1;
    v38 = 2109;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2109);
  }
  else
  {
    v40 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v38, 2109);
  v4 = 0LL;
  memset(Handle, 0, sizeof(Handle));
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, 659LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context", 659LL, 0LL, 0LL, 0LL, 0LL);
LABEL_11:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    if ( v40 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v38);
    }
    return -1073741811LL;
  }
  v7 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v7 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Handle = *v7;
  *(_OWORD *)&Handle[16] = v7[1];
  *(_OWORD *)&Handle[32] = v7[2];
  *(_OWORD *)&Handle[48] = v7[3];
  *(_OWORD *)&Handle[64] = v7[4];
  v8 = 0LL;
  v45 = 0LL;
  v9 = *(char **)&Handle[56];
  if ( (*(_DWORD *)&Handle[48] == 0) != (*(_QWORD *)&Handle[56] == 0LL) )
  {
    WdLogSingleEntry2(2LL, *(unsigned int *)&Handle[48], *(_QWORD *)&Handle[56]);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Either both surface count (0x%I64x) and handle table (0x%I64x) are both valid or both invalid",
      *(unsigned int *)&Handle[48],
      *(__int64 *)&Handle[56],
      0LL,
      0LL,
      0LL);
    goto LABEL_11;
  }
  if ( *(_DWORD *)&Handle[48] )
  {
    v13 = 8LL * *(unsigned int *)&Handle[48];
    if ( !is_mul_ok(*(unsigned int *)&Handle[48], 8uLL) )
      v13 = -1LL;
    v14 = operator new[](v13, 0x4B677844u, 256LL);
    v8 = (void *)v14;
    v45 = v14;
    if ( !v14 )
    {
      WdLogSingleEntry1(6LL, 689LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Out of memory allocating memory for handles table",
        689LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
      if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v38);
      return 3221225495LL;
    }
    *(_QWORD *)&Handle[56] = v14;
  }
  v44 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v37, *(unsigned int *)&Handle[20], Current, &v44);
  v17 = v44;
  if ( v44 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v41, v44);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v49, (__int64)v17, 2, v22, 0);
    v18 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v49, 0LL);
    if ( v18 < 0 )
      goto LABEL_59;
    if ( !*(_QWORD *)Handle )
    {
      if ( *(_QWORD *)&Handle[8] )
      {
        LOBYTE(v23) = 1;
        v24 = ObOpenObjectByName(
                *(_QWORD *)&Handle[8],
                g_pDxgkSharedSwapChainObjectType,
                v23,
                0LL,
                *(_DWORD *)&Handle[28],
                0LL,
                Handle);
        v18 = v24;
        if ( v24 < 0 )
        {
          WdLogSingleEntry1(3LL, v24);
          goto LABEL_59;
        }
      }
    }
    v43 = 0LL;
    v25 = ObReferenceObjectByHandle(*(HANDLE *)Handle, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &v43, 0LL);
    v18 = v25;
    if ( v25 < 0 )
    {
      WdLogSingleEntry2(3LL, *(_QWORD *)Handle, v25);
LABEL_59:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v49);
      if ( v41[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v41);
      goto LABEL_61;
    }
    v4 = *(struct DXGDEVICE **)v43;
    v37[1] = v4;
    if ( *((_DWORD *)v4 + 58) )
    {
      if ( *(_DWORD *)&Handle[48] || *(_QWORD *)&Handle[56] )
      {
        WdLogSingleEntry1(2LL, 752LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"DxgkOpenSwapChain for non-sequential swapchain should not pass any handles",
          752LL,
          0LL,
          0LL,
          0LL,
          0LL);
LABEL_41:
        v18 = -1073741811;
      }
    }
    else
    {
      if ( !*(_QWORD *)&Handle[56] )
      {
        *(_DWORD *)&Handle[48] = *((_DWORD *)v4 + 15);
        v18 = -1073741789;
LABEL_45:
        v26 = *((_DWORD *)v4 + 58) != 0;
        v46 = v26;
        ObfDereferenceObject(v43);
        if ( (int)(v18 + 0x80000000) < 0 || v18 == -1073741789 )
        {
          v27 = v47;
          v28 = (_QWORD *)v47;
          if ( v47 >= MmUserProbeAddress )
            v28 = (_QWORD *)MmUserProbeAddress;
          *v28 = *(_QWORD *)Handle;
          v29 = (_DWORD *)(v27 + 48);
          if ( v27 + 48 >= MmUserProbeAddress )
            v29 = (_DWORD *)MmUserProbeAddress;
          *v29 = *(_DWORD *)&Handle[48];
          v30 = (_DWORD *)(v27 + 64);
          if ( v27 + 64 >= MmUserProbeAddress )
            v30 = (_DWORD *)MmUserProbeAddress;
          *v30 = v26;
          if ( v9 && *(_DWORD *)&Handle[48] )
          {
            v31 = 8LL * *(unsigned int *)&Handle[48];
            if ( (unsigned __int64)&v9[v31] > MmUserProbeAddress || &v9[v31] <= v9 )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v9, v8, v31);
          }
        }
        goto LABEL_59;
      }
      if ( *(_DWORD *)&Handle[48] != *((_DWORD *)v4 + 15) )
      {
        WdLogSingleEntry2(2LL, *(unsigned int *)&Handle[48], *((unsigned int *)v4 + 15));
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Incorrect surface count (%I64d) supplied to DxgkOpenSwapChain (should be %I64d)",
          *(unsigned int *)&Handle[48],
          *((unsigned int *)v4 + 15),
          0LL,
          0LL,
          0LL);
        goto LABEL_41;
      }
    }
    if ( v18 >= 0 )
    {
      v18 = DXGSWAPCHAIN::OpenSwapchainLocal(
              v4,
              *(int *)&Handle[20],
              v17,
              *(__int64 *)&Handle[40],
              *(int *)&Handle[24],
              *(int *)&Handle[16]);
      if ( v18 >= 0 )
      {
        *((_DWORD *)v4 + 18) = *(_DWORD *)&Handle[32];
        v18 = DXGSWAPCHAIN::OpenSurfaceResourcesLocalForSequentialOpener(v4, (struct _D3DKMT_OPENSWAPCHAIN *)Handle);
      }
    }
    goto LABEL_45;
  }
  v18 = -1073741811;
  WdLogSingleEntry2(2LL, *(unsigned int *)&Handle[20], -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
    *(unsigned int *)&Handle[20],
    -1073741811LL,
    0LL,
    0LL,
    0LL);
LABEL_61:
  if ( v37[0] )
  {
    v20 = _InterlockedDecrement64((volatile signed __int64 *)v37[0] + 8);
    if ( !v20 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37[0] + 2), v37[0]);
  }
  if ( v8 )
    operator delete(v8);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
  {
    LODWORD(v36) = *(_DWORD *)&Handle[20];
    LODWORD(HandleInformation) = *(_DWORD *)&Handle[16];
    LODWORD(Object) = v18;
    McTemplateK0pqdqpp_EtwWriteTransfer(
      v20,
      v19,
      v21,
      v4,
      Object,
      HandleInformation,
      v36,
      *(_QWORD *)&Handle[40],
      *(_QWORD *)Handle);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
  if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v38);
  return (unsigned int)v18;
}
