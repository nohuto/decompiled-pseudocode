__int64 __fastcall DxgkRender(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r13
  __int64 CurrentProcess; // rax
  int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rax
  _OWORD *v11; // rax
  struct _D3DKMT_RENDER *v12; // rcx
  __int64 v13; // rdx
  DXGCONTEXT *v14; // rsi
  int v15; // eax
  ULONG BroadcastContextCount; // edi
  __int64 v17; // rdi
  _QWORD *Pool2; // rcx
  ULONG v19; // r8d
  __int64 v20; // r12
  D3DKMT_HANDLE v21; // eax
  __int64 v22; // r9
  unsigned int v23; // ecx
  int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rdx
  int v28; // ecx
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v35; // r9
  unsigned __int64 v36; // r9
  __int64 CommandOffset; // r8
  UINT v38; // eax
  UINT AllocationCount; // r12d
  UINT v40; // eax
  char Flags; // dl
  struct DXGALLOCATION **v42; // r13
  struct DXGALLOCATION **Elements; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  UINT NewCommandBufferSize; // eax
  UINT NewAllocationListSize; // r13d
  UINT NewPatchLocationListSize; // r12d
  UINT v49; // ecx
  UINT v50; // eax
  UINT v51; // eax
  int v52; // eax
  int v53; // edx
  int v54; // r8d
  int v55; // r9d
  ULONG64 v56; // r10
  unsigned int v57; // [rsp+50h] [rbp-458h] BYREF
  int v58; // [rsp+58h] [rbp-450h] BYREF
  __int64 v59; // [rsp+60h] [rbp-448h]
  char v60; // [rsp+68h] [rbp-440h]
  unsigned __int8 IsDxgmms2; // [rsp+70h] [rbp-438h]
  _BYTE v62[16]; // [rsp+78h] [rbp-430h] BYREF
  PVOID P; // [rsp+88h] [rbp-420h]
  _BYTE v64[32]; // [rsp+90h] [rbp-418h] BYREF
  unsigned int v65; // [rsp+B0h] [rbp-3F8h]
  int v66; // [rsp+B8h] [rbp-3F0h] BYREF
  int v67; // [rsp+BCh] [rbp-3ECh] BYREF
  _BYTE v68[16]; // [rsp+C0h] [rbp-3E8h] BYREF
  DXGCONTEXT *v69; // [rsp+D0h] [rbp-3D8h] BYREF
  char v70[8]; // [rsp+D8h] [rbp-3D0h] BYREF
  __int64 v71; // [rsp+E0h] [rbp-3C8h]
  char v72; // [rsp+E8h] [rbp-3C0h]
  struct _D3DDDI_ALLOCATIONLIST *pNewAllocationList; // [rsp+F0h] [rbp-3B8h]
  _QWORD v74[2]; // [rsp+F8h] [rbp-3B0h] BYREF
  ULONG64 v75; // [rsp+108h] [rbp-3A0h]
  _BYTE v76[24]; // [rsp+110h] [rbp-398h] BYREF
  _QWORD v77[6]; // [rsp+128h] [rbp-380h] BYREF
  char v78; // [rsp+158h] [rbp-350h]
  PVOID v79; // [rsp+160h] [rbp-348h] BYREF
  _BYTE v80[256]; // [rsp+168h] [rbp-340h] BYREF
  int v81; // [rsp+268h] [rbp-240h]
  struct _D3DKMT_RENDER v82; // [rsp+270h] [rbp-238h] BYREF
  DXGADAPTER *v83[20]; // [rsp+3E0h] [rbp-C8h] BYREF

  v75 = a1;
  v58 = -1;
  v59 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v60 = 1;
    v58 = 2013;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2013);
  }
  else
  {
    v60 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v58, 2013);
  Current = DXGPROCESS::GetCurrent(v4);
  v74[1] = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v5);
    v8 = -1073741811;
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    v10 = PsGetCurrentProcess(v9);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"unexpected process 0x%I64x returning 0x%I64x",
      v10,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_60;
  }
  memset(&v82, 0, sizeof(v82));
  v11 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v11 = (_OWORD *)MmUserProbeAddress;
  v12 = &v82;
  v13 = 2LL;
  do
  {
    *(_OWORD *)&v12->hDevice = *v11;
    *(_OWORD *)&v12->PatchLocationCount = v11[1];
    *(_OWORD *)&v12->NewCommandBufferSize = v11[2];
    *(_OWORD *)&v12->NewAllocationListSize = v11[3];
    *(_OWORD *)&v12->NewPatchLocationListSize = v11[4];
    *(_OWORD *)&v12->BroadcastContextCount = v11[5];
    *(_OWORD *)&v12->BroadcastContext[3] = v11[6];
    v12 = (struct _D3DKMT_RENDER *)((char *)v12 + 128);
    *(_OWORD *)&v12[-1].pPrivateDriverData = v11[7];
    v11 += 8;
    --v13;
  }
  while ( v13 );
  *(_OWORD *)&v12->hDevice = *v11;
  *(_OWORD *)&v12->PatchLocationCount = v11[1];
  *(_OWORD *)&v12->NewCommandBufferSize = v11[2];
  *(_OWORD *)&v12->NewAllocationListSize = v11[3];
  *(_OWORD *)&v12->NewPatchLocationListSize = v11[4];
  *(_OWORD *)&v12->BroadcastContextCount = v11[5];
  *(_OWORD *)&v12->BroadcastContext[3] = v11[6];
  v69 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v62, v82.hDevice, Current, &v69, 0, 1);
  v14 = v69;
  if ( !v69 )
  {
    v8 = -1073741811;
    WdLogSingleEntry3(2LL, Current, v82.hDevice, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x failed with invalid hContext 0x%I64x returning 0x%I64x",
      (__int64)Current,
      v82.hDevice,
      -1073741811LL,
      0LL,
      0LL);
LABEL_59:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v62);
LABEL_60:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v58);
    if ( v60 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v58);
    }
    return (unsigned int)v8;
  }
  if ( ((*(_BYTE *)&v82.Flags | (unsigned __int8)(*(_DWORD *)&v82.Flags >> 1)) & 0x20) != 0 )
  {
    v8 = -1073741811;
    WdLogSingleEntry2(2LL, v82.hDevice, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"RenderKm and RenderKmReadback flags should not be set when DxgkRender is called. Context 0x%I64x returning 0x%I64x",
      v82.hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_59;
  }
  v15 = *((_DWORD *)v69 + 101);
  if ( (v15 & 0x10) != 0 )
  {
    WdLogSingleEntry1(2LL, v69);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DXGCONTEXT 0x%p DxgkRender is not supported with hardware scheduling.",
      (__int64)v14,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_68;
  }
  if ( (v15 & 8) != 0 )
  {
    WdLogSingleEntry1(3LL, 88LL);
    goto LABEL_68;
  }
  if ( *((_BYTE *)v69 + 438) )
  {
    WdLogSingleEntry1(2LL, v82.hDevice);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkRender cannot be called on a virtual context. pContext=0x%p",
      v82.hDevice,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_68:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v62);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v58);
    if ( v60 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v58);
    return (unsigned int)-1073741811;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v68,
    *((struct DXGDEVICE **)v69 + 2));
  BroadcastContextCount = v82.BroadcastContextCount;
  if ( v82.BroadcastContextCount
    && DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 16LL))
    || BroadcastContextCount > 0x40 )
  {
    v8 = -1073741811;
    WdLogSingleEntry2(3LL, v14, -1073741811LL);
LABEL_58:
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v68);
    goto LABEL_59;
  }
  v17 = BroadcastContextCount + 1;
  Pool2 = 0LL;
  P = 0LL;
  v65 = 0;
  if ( (unsigned int)v17 <= 4 )
  {
    Pool2 = v64;
    P = v64;
    if ( (_DWORD)v17 )
    {
      memset(v64, 0, 8LL * (unsigned int)v17);
      Pool2 = P;
    }
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v17 < 8 )
      goto LABEL_31;
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8 * v17, 1265072196LL);
    P = Pool2;
  }
  v65 = v17;
LABEL_31:
  if ( !Pool2 )
  {
    WdLogSingleEntry1(3LL, 126LL);
    goto LABEL_97;
  }
  *Pool2 = v14;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v76, Current);
  v19 = 0;
  v57 = 0;
  while ( v19 < v82.BroadcastContextCount )
  {
    v20 = v19;
    v21 = (v82.BroadcastContext[v19] >> 6) & 0xFFFFFF;
    if ( v21 < *((_DWORD *)Current + 74) )
    {
      v22 = *((_QWORD *)Current + 35);
      v23 = *(_DWORD *)(v22 + 16LL * v21 + 8);
      if ( v82.BroadcastContext[v19] >> 30 == ((v23 >> 5) & 3) && (v23 & 0x2000) == 0 )
      {
        v24 = v23 & 0x1F;
        if ( v24 )
        {
          if ( v24 == 7 )
          {
            v25 = *(_QWORD *)(v22 + 16LL * v21);
            goto LABEL_41;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v25 = 0LL;
LABEL_41:
    v19 = v57 + 1;
    v57 = v19;
    v26 = v19;
    *((_QWORD *)P + v19) = v25;
    v27 = *((_QWORD *)P + v19);
    if ( !v27 || (v28 = *(_DWORD *)(v27 + 404), (v28 & 8) != 0) || *(_QWORD *)(v27 + 16) != *((_QWORD *)v14 + 2) )
    {
      v8 = -1073741811;
      WdLogSingleEntry4(2LL, v14, v82.BroadcastContext[v20], v20, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
        (__int64)v14,
        v82.BroadcastContext[v20],
        v20,
        -1073741811LL,
        0LL);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v76);
      goto LABEL_54;
    }
    if ( (v28 & 0x10) != 0 )
    {
      WdLogSingleEntry1(2LL, v27);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DXGCONTEXT 0x%p DxgkRender is not supported with hardware scheduling.",
        *((_QWORD *)P + v26),
        0LL,
        0LL,
        0LL,
        0LL);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v76);
      goto LABEL_64;
    }
    if ( *(_BYTE *)(v27 + 438) )
    {
      WdLogSingleEntry1(1LL, 178LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"BroadcastContextArray.Get()[i + 1]->UsesGpuVa() == FALSE",
        178LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v19 = v57;
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v76);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v77,
    P,
    v65,
    v29,
    1);
  if ( v78 )
  {
    if ( v77[0] )
    {
      WdLogSingleEntry1(3LL, 195LL);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v77);
LABEL_64:
      if ( P != v64 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v65 = 0;
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v68);
      goto LABEL_68;
    }
    WdLogSingleEntry1(3LL, 190LL);
    goto LABEL_96;
  }
  v71 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 16LL);
  v72 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v70);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v83, *((_QWORD *)v14 + 2), 0, v35, 0);
  v8 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v83, 0LL);
  if ( v8 < 0 )
    goto LABEL_74;
  v36 = *((_QWORD *)v14 + 6);
  if ( v82.CommandOffset >= v36 )
  {
    CommandOffset = v82.CommandOffset;
LABEL_79:
    v8 = -1073741811;
    WdLogSingleEntry4(3LL, v14, CommandOffset, v36, -1073741811LL);
    goto LABEL_137;
  }
  CommandOffset = v82.CommandLength;
  if ( v82.CommandLength + (unsigned __int64)v82.CommandOffset > v36 )
    goto LABEL_79;
  v38 = *((_DWORD *)v14 + 18);
  AllocationCount = v82.AllocationCount;
  if ( v82.AllocationCount > v38 )
  {
    v36 = v38;
    CommandOffset = v82.AllocationCount;
    goto LABEL_79;
  }
  v40 = *((_DWORD *)v14 + 26);
  if ( v82.PatchLocationCount > v40 )
  {
    v36 = v40;
    CommandOffset = v82.PatchLocationCount;
    goto LABEL_79;
  }
  v8 = 0;
  Flags = (char)v82.Flags;
  if ( !v82.CommandLength )
  {
LABEL_116:
    if ( (Flags & 1) != 0 || (Flags & 2) != 0 || (Flags & 4) != 0 )
    {
      NewCommandBufferSize = v82.NewCommandBufferSize;
      if ( (Flags & 1) == 0 )
        NewCommandBufferSize = *((_DWORD *)v14 + 50);
      v57 = NewCommandBufferSize;
      NewAllocationListSize = v82.NewAllocationListSize;
      if ( (Flags & 2) == 0 )
        NewAllocationListSize = *((_DWORD *)v14 + 53);
      NewPatchLocationListSize = v82.NewPatchLocationListSize;
      if ( (Flags & 4) == 0 )
        NewPatchLocationListSize = *((_DWORD *)v14 + 54);
      v49 = *((_DWORD *)v14 + 50);
      if ( NewCommandBufferSize < v49 )
        goto LABEL_132;
      if ( NewAllocationListSize >= *((_DWORD *)v14 + 53) && NewPatchLocationListSize >= *((_DWORD *)v14 + 54) )
      {
        if ( DXGADAPTER::IsCoreResourceSharedOwner(v83[3]) )
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v83);
        DXGCONTEXT::ResizeUserModeBuffers(
          v14,
          *((struct VIDMM_DMA_POOL **)v14 + 29),
          v57,
          NewAllocationListSize,
          NewPatchLocationListSize);
        v8 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v83, 0LL);
        goto LABEL_137;
      }
      if ( NewCommandBufferSize < v49 )
LABEL_132:
        WdLogSingleEntry3(3LL, v14, NewCommandBufferSize, *((unsigned int *)v14 + 50));
      v50 = *((_DWORD *)v14 + 53);
      if ( NewAllocationListSize < v50 )
        WdLogSingleEntry3(3LL, v14, NewAllocationListSize, v50);
      v51 = *((_DWORD *)v14 + 54);
      if ( NewPatchLocationListSize < v51 )
        WdLogSingleEntry3(3LL, v14, NewPatchLocationListSize, v51);
    }
LABEL_137:
    v52 = 0;
    v74[0] = 0LL;
    v53 = 0;
    v66 = 0;
    v54 = 0;
    v67 = 0;
    v55 = 0;
    if ( v8 != -1073741130 )
    {
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)v83);
      if ( !*((_BYTE *)v14 + 438) )
        (*(void (__fastcall **)(_QWORD, _QWORD *, int *, int *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL)
                                                                                       + 760LL)
                                                                           + 8LL)
                                                               + 480LL))(
          *((_QWORD *)v14 + 29),
          v74,
          &v66,
          &v67);
      v55 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 736LL)
                                                          + 8LL)
                                              + 448LL))(*((_QWORD *)v14 + 32));
      v52 = v74[0];
      v53 = v66;
      v54 = v67;
    }
    v56 = v75;
    *(_QWORD *)(v75 + 24) = *((_QWORD *)v14 + 7);
    *(_DWORD *)(v56 + 32) = v52;
    *(_QWORD *)(v56 + 40) = *((_QWORD *)v14 + 11);
    *(_DWORD *)(v56 + 48) = v53;
    *(_QWORD *)(v56 + 56) = *((_QWORD *)v14 + 15);
    *(_DWORD *)(v56 + 64) = v54;
    *(_DWORD *)(v56 + 340) = v55;
LABEL_74:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v83);
    if ( v72 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v70);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v77);
LABEL_54:
    if ( P != v64 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v65 = 0;
    goto LABEL_58;
  }
  if ( (*(_BYTE *)&v82.Flags & 0x20) != 0 )
    pNewAllocationList = v82.pNewAllocationList;
  else
    pNewAllocationList = (struct _D3DDDI_ALLOCATIONLIST *)*((_QWORD *)v14 + 11);
  IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 16LL));
  v57 = AllocationCount;
  v79 = 0LL;
  v81 = 0;
  v42 = 0LL;
  if ( !IsDxgmms2 )
  {
LABEL_105:
    if ( v8 >= 0 )
    {
      v8 = DXGCONTEXT::Render(
             v14,
             &v82,
             (__int64)v83,
             (struct DXGADAPTERSTOPRESETLOCKSHARED *)v70,
             (struct DXGCONTEXT **)P,
             v42,
             0LL);
      Flags = (char)v82.Flags;
    }
    if ( IsDxgmms2 )
    {
      DxgkUnreferenceAllocationList(AllocationCount, (struct _EX_RUNDOWN_REF **)v42);
      Flags = (char)v82.Flags;
    }
    if ( v8 >= 0 && (Flags & 0x10) != 0 )
    {
      v8 = DXGCONTEXT::HandleVistaBltStub(
             v14,
             v82.PresentHistoryToken,
             1,
             v83,
             (struct DXGADAPTERSTOPRESETLOCKSHARED *)v70,
             v82.BroadcastContextCount,
             v82.BroadcastContext,
             (struct DXGCONTEXT **)P);
      Flags = (char)v82.Flags;
    }
    if ( v79 != v80 && v79 )
    {
      ExFreePoolWithTag(v79, 0);
      Flags = (char)v82.Flags;
    }
    if ( v8 < 0 )
      goto LABEL_137;
    goto LABEL_116;
  }
  Elements = (struct DXGALLOCATION **)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(
                                        (__int64 *)&v79,
                                        AllocationCount);
  v42 = Elements;
  if ( Elements )
  {
    v8 = DxgkReferenceAllocationList(&v57, pNewAllocationList, Elements, *((struct DXGDEVICE **)v14 + 2));
    Flags = (char)v82.Flags;
    AllocationCount = v57;
    goto LABEL_105;
  }
  WdLogSingleEntry1(3LL, 278LL);
  if ( v79 != v80 && v79 )
    ExFreePoolWithTag(v79, 0);
  v79 = 0LL;
  v81 = 0;
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v83);
  if ( v72 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v70);
LABEL_96:
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v77);
LABEL_97:
  if ( P != v64 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v65 = 0;
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v68);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v62);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v58);
  if ( v60 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v44, &EventProfilerExit, v45, v58);
  return 3221225495LL;
}
