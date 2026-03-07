__int64 __fastcall DXGCONTEXT::RenderKmLda(
        struct _D3DKMT_RENDER *a1,
        struct COREDEVICEACCESS *a2,
        struct DXGCONTEXT **a3,
        struct DXGALLOCATION **a4,
        struct DXGHWQUEUE **a5)
{
  struct DXGCONTEXT *v5; // rax
  struct _D3DKMT_RENDER *v6; // rdi
  __int64 v8; // r10
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // rax
  unsigned __int64 AllocationCount; // rbx
  int v12; // esi
  struct DXGPROCESS *v13; // r14
  unsigned __int64 v14; // rbx
  _BYTE *Pool2; // r12
  __int64 v16; // rbx
  signed __int64 v17; // r14
  struct DXGHWQUEUE **v18; // rsi
  __int64 v19; // r13
  int v20; // r15d
  D3DKMT_HANDLE hAllocation; // ebx
  unsigned int v22; // eax
  __int64 v23; // r8
  int v24; // ecx
  struct _EX_RUNDOWN_REF *v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rbx
  __int64 v29; // r15
  int v30; // eax
  __int64 v31; // r8
  const EVENT_DESCRIPTOR *v32; // rdx
  __int64 v33; // r9
  int v34; // eax
  char v35; // si
  UINT v36; // eax
  __int64 v37; // rcx
  DXGK_ALLOCATIONLIST *v38; // rax
  __int64 v39; // rcx
  void *pDmaBufferPrivateData; // r8
  __int64 DmaBufferPrivateDataSize; // r9
  int v42; // eax
  __int64 AllocationListSize; // rdx
  void *pDmaBuffer; // rcx
  void *v45; // rdx
  int v46; // eax
  struct DXGHWQUEUE **v47; // rdi
  int v48; // eax
  int v49; // esi
  int v50; // edi
  __int64 *v51; // rdx
  int v52; // eax
  int v53; // eax
  __int64 *v54; // rcx
  struct DXGHWQUEUE **v55; // rsi
  int v56; // eax
  int v57; // edi
  __int64 v58; // rdx
  int v59; // esi
  __int64 v60; // r13
  struct DXGCONTEXT **v61; // rbx
  struct _VIDMM_DMA_BUFFER *v62; // rcx
  char v64; // [rsp+60h] [rbp-A0h]
  char v65; // [rsp+61h] [rbp-9Fh]
  struct _VIDMM_DMA_BUFFER *v66; // [rsp+68h] [rbp-98h] BYREF
  int v67; // [rsp+70h] [rbp-90h]
  UINT v68; // [rsp+74h] [rbp-8Ch]
  UINT v69; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v70; // [rsp+80h] [rbp-80h] BYREF
  struct DXGHWQUEUE **v71; // [rsp+88h] [rbp-78h]
  void *v72; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v73[2]; // [rsp+98h] [rbp-68h] BYREF
  struct _EX_RUNDOWN_REF *v74; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v75; // [rsp+B0h] [rbp-50h]
  __int64 v76; // [rsp+B8h] [rbp-48h]
  _QWORD *v77; // [rsp+C0h] [rbp-40h]
  __int64 v78; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v79; // [rsp+D0h] [rbp-30h]
  struct _D3DKMT_RENDER *v80; // [rsp+D8h] [rbp-28h]
  __int64 v81; // [rsp+E0h] [rbp-20h]
  LARGE_INTEGER v82; // [rsp+E8h] [rbp-18h] BYREF
  ADAPTER_RENDER *v83; // [rsp+F0h] [rbp-10h]
  struct DXGPROCESS *v84; // [rsp+F8h] [rbp-8h]
  struct _DXGKARG_RENDERGDI v85; // [rsp+100h] [rbp+0h] BYREF
  struct DXGALLOCATION **v86; // [rsp+150h] [rbp+50h]
  struct COREDEVICEACCESS *v87; // [rsp+158h] [rbp+58h]
  __int64 *v88; // [rsp+160h] [rbp+60h]
  __int64 v89; // [rsp+168h] [rbp+68h]
  signed __int64 v90; // [rsp+170h] [rbp+70h]
  struct DXGCONTEXT **v91; // [rsp+178h] [rbp+78h]
  __int64 v92; // [rsp+180h] [rbp+80h]
  struct DXGHWQUEUE **v93; // [rsp+188h] [rbp+88h]
  _DXGKARG_RENDER v94; // [rsp+190h] [rbp+90h] BYREF
  _BYTE *v95; // [rsp+200h] [rbp+100h]
  _BYTE v96[128]; // [rsp+208h] [rbp+108h] BYREF
  int v97; // [rsp+288h] [rbp+188h]
  PVOID P; // [rsp+290h] [rbp+190h]
  _BYTE v99[128]; // [rsp+298h] [rbp+198h] BYREF
  int v100; // [rsp+318h] [rbp+218h]

  v5 = *a3;
  v6 = a1;
  v80 = a1;
  v86 = a4;
  v8 = *((_QWORD *)v5 + 2);
  v91 = a3;
  v87 = a2;
  v93 = a5;
  v83 = *(ADAPTER_RENDER **)(v8 + 16);
  v9 = *((_QWORD *)v83 + 95);
  v81 = *((_QWORD *)v83 + 92);
  v75 = v9;
  Current = DXGPROCESS::GetCurrent(v9);
  AllocationCount = v6->AllocationCount;
  v12 = v6->BroadcastContextCount + 1;
  P = 0LL;
  v100 = 0;
  v84 = Current;
  if ( (unsigned int)AllocationCount <= 0x10 )
  {
    P = v99;
    if ( (_DWORD)AllocationCount )
      memset(v99, 0, 8 * AllocationCount);
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / AllocationCount < 8 )
      goto LABEL_7;
    P = (PVOID)ExAllocatePool2(256LL, 8 * AllocationCount, 1265072196LL);
  }
  v100 = AllocationCount;
LABEL_7:
  v77 = P;
  if ( !P )
  {
    LODWORD(v13) = -1073741801;
    goto LABEL_108;
  }
  v14 = v6->AllocationCount;
  Pool2 = 0LL;
  v97 = 0;
  v95 = 0LL;
  if ( (unsigned int)v14 <= 0x10 )
  {
    Pool2 = v96;
    v95 = v96;
    if ( (_DWORD)v14 )
    {
      memset(v96, 0, 8 * v14);
      Pool2 = v95;
    }
    goto LABEL_14;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v14 >= 8 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8 * v14, 1265072196LL);
    v95 = Pool2;
LABEL_14:
    v97 = v14;
  }
  if ( !Pool2 )
  {
    LODWORD(v13) = -1073741801;
    goto LABEL_104;
  }
  LODWORD(v13) = 0;
  v67 = 0;
  v89 = v12;
  if ( v12 <= 0 )
    goto LABEL_104;
  v16 = 0LL;
  v71 = a5;
  v79 = 0LL;
  v17 = (char *)a3 - (char *)a5;
  v18 = a5;
  v90 = (char *)a3 - (char *)a5;
LABEL_19:
  v76 = ((*(_DWORD *)&v6->Flags & 8u) << 12) | 0x100LL;
  v94.pCommand = (char *)v6->pNewCommandBuffer + v6->CommandOffset;
  v94.CommandLength = v6->CommandLength;
  memset(&v94.CommandLength + 1, 0, 0x64uLL);
  v19 = *(__int64 *)((char *)v18 + v17);
  v92 = v19;
  if ( (*(_DWORD *)(v19 + 404) & 0x10) != 0 && !v93 )
  {
    WdLogSingleEntry1(2LL, 1215LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Hardware context LDA render is not provided with hardware queue array",
      1215LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v13) = -1073741823;
    goto LABEL_103;
  }
  v20 = 0;
  v68 = *(_DWORD *)(v19 + 400);
  if ( !v6->AllocationCount )
  {
LABEL_40:
    v27 = v75;
    v28 = v76;
    v72 = 0LL;
    v64 = 0;
    v29 = v75 + 8;
    v65 = 1;
    v66 = 0LL;
    while ( 1 )
    {
      v30 = DXGCONTEXT::AcquireDmaBuffer((DXGCONTEXT *)v19, &v66, v87, 0);
      LODWORD(v13) = v30;
      if ( v30 < 0 )
      {
        WdLogSingleEntry2(4LL, v19, v30);
LABEL_96:
        v35 = 0;
LABEL_97:
        v62 = v66;
        if ( v66 )
        {
          if ( v72 )
          {
            (*(void (**)(void))(*(_QWORD *)v29 + 512LL))();
            v62 = v66;
          }
          if ( v35 )
          {
            LOBYTE(v58) = 1;
            (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, __int64))(*(_QWORD *)v29 + 576LL))(v62, v58);
            v62 = v66;
          }
          (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)v29 + 496LL))(v62, 0LL);
        }
        goto LABEL_103;
      }
      if ( bTracingEnabled )
      {
        if ( (*(_DWORD *)&v6->Flags & 0x20) != 0 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
            goto LABEL_50;
          v32 = (const EVENT_DESCRIPTOR *)&EventRenderKm;
        }
        else
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
            goto LABEL_50;
          v32 = &EventRender;
        }
        McTemplateK0p_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, v32, v31, v66);
      }
LABEL_50:
      v73[1] = v83;
      v69 = 0;
      v82.QuadPart = 0LL;
      v70 = 0LL;
      v78 = 0LL;
      v73[0] = 0LL;
      CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v73);
      v88 = (__int64 *)v73[0];
      if ( !v73[0] )
      {
        WdLogSingleEntry1(6LL, 1316LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate VidSchSubmitData",
          1316LL,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v13) = -1073741801;
        CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v73);
        v35 = 0;
        v29 = v75 + 8;
        goto LABEL_97;
      }
      v29 = v27 + 8;
      LOBYTE(v33) = 1;
      v34 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD *, _QWORD, __int64, int, UINT *, LARGE_INTEGER *, unsigned __int64 *, __int64 *, __int64, _BYTE *))(*(_QWORD *)(v27 + 8) + 568LL))(
              v66,
              v77,
              v6->AllocationCount,
              v33,
              1,
              &v69,
              &v82,
              &v70,
              &v78,
              v73[0] + 200LL,
              Pool2);
      LODWORD(v13) = v34;
      if ( v34 < 0 )
      {
        WdLogSingleEntry2(3LL, v19, v34);
        CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v73);
        goto LABEL_96;
      }
      v35 = 1;
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, void **))(*(_QWORD *)v29 + 504LL))(v66, &v72);
      v76 = (__int64)v72;
      v94.pDmaBuffer = v72;
      v36 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)v29 + 528LL))(v66);
      v37 = *(_QWORD *)v29;
      v94.DmaSize = v36;
      v38 = (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(v37 + 552))(v66);
      v39 = *(_QWORD *)v29;
      v94.pAllocationList = v38;
      v68 = v6->AllocationCount;
      v94.AllocationListSize = v68;
      pDmaBufferPrivateData = (void *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(v39 + 560))(v66);
      DmaBufferPrivateDataSize = *(unsigned int *)(v19 + 208);
      v94.DmaBufferSegmentId = v69;
      v94.DmaBufferPhysicalAddress = v82;
      v94.pDmaBufferPrivateData = pDmaBufferPrivateData;
      v94.DmaBufferPrivateDataSize = DmaBufferPrivateDataSize;
      if ( v64 )
      {
        v42 = DXGCONTEXT::SignalRenderKmMonitoredFence(&v94, (struct DXGCONTEXT *)v19, *v71, v70);
        v13 = (struct DXGPROCESS *)v42;
        if ( v42 == -1071775743 )
        {
          WdLogSingleEntry5(0LL, 275LL, 40LL, v19, 0LL, 0LL);
LABEL_84:
          WdLogSingleEntry2(3LL, v19, v13);
LABEL_85:
          CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v73);
          goto LABEL_97;
        }
        if ( v42 < 0 )
          goto LABEL_84;
        AllocationListSize = v94.AllocationListSize;
        DmaBufferPrivateDataSize = v94.DmaBufferPrivateDataSize;
        pDmaBufferPrivateData = v94.pDmaBufferPrivateData;
        pDmaBuffer = v94.pDmaBuffer;
        v64 = 0;
      }
      else
      {
        pDmaBuffer = (void *)v76;
        AllocationListSize = v68;
      }
      if ( v65 )
      {
        v85.pCommand = (char *)v6->pNewCommandBuffer + v6->CommandOffset;
        v85.CommandLength = v6->CommandLength;
        HIDWORD(v85.pAllocationList) = 0;
        *(_OWORD *)((char *)&v85.DmaBufferGpuVirtualAddress + 4) = 0LL;
        v85.AllocationListSize = AllocationListSize;
        v45 = *(void **)(v19 + 184);
        *(&v85.DmaBufferPrivateDataSize + 1) = 0;
        v85.pDmaBufferPrivateData = pDmaBufferPrivateData;
        *(&v85.CommandLength + 1) = 0;
        v85.DmaBufferGpuVirtualAddress = v70;
        v85.DmaSize = v94.DmaSize;
        v85.pAllocationList = v94.pAllocationList;
        v85.pDmaBuffer = pDmaBuffer;
        v85.MultipassOffset = v94.MultipassOffset;
        v85.DmaBufferPrivateDataSize = DmaBufferPrivateDataSize;
        v46 = ADAPTER_RENDER::DdiRenderGdi(v83, v45, &v85);
        v13 = (struct DXGPROCESS *)v46;
        if ( v46 == -1071775743 )
        {
          v65 = 1;
        }
        else
        {
          if ( v46 < 0 )
            goto LABEL_84;
          v65 = 0;
        }
        v94.pDmaBuffer = v85.pDmaBuffer;
        v94.pDmaBufferPrivateData = v85.pDmaBufferPrivateData;
        v94.MultipassOffset = v85.MultipassOffset;
        if ( (*(_DWORD *)(v19 + 404) & 0x10) != 0 )
        {
          v47 = v71;
          v94.DmaBufferPrivateDataSize = v85.DmaBufferPrivateDataSize;
          v94.DmaSize = v85.DmaSize;
          LODWORD(v13) = DXGHWQUEUE::EnsureKmSubmissionProgressSyncObject(*v71);
          if ( (int)v13 < 0 )
            goto LABEL_85;
          ++*((_QWORD *)*v47 + 12);
          if ( !*(_BYTE *)(v19 + 296) )
          {
            v48 = DXGCONTEXT::SignalRenderKmMonitoredFence(&v94, (struct DXGCONTEXT *)v19, *v47, v70);
            v13 = (struct DXGPROCESS *)v48;
            if ( v48 == -1071775743 )
            {
              v64 = 1;
            }
            else if ( v48 < 0 )
            {
              goto LABEL_84;
            }
          }
        }
      }
      v49 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *, __int64, void *, __int64))(*(_QWORD *)v29 + 560LL))(
              v66,
              AllocationListSize,
              pDmaBufferPrivateData,
              DmaBufferPrivateDataSize);
      v50 = LODWORD(v94.pDmaBuffer) - (_DWORD)v72;
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)v29 + 512LL))(v66);
      v51 = v88;
      v72 = 0LL;
      *v88 = v28;
      *(_DWORD *)v51 |= 0x8000000u;
      v51[5] = v70;
      v51[1] = (__int64)v66;
      v52 = LODWORD(v94.pDmaBufferPrivateData) - v49;
      *((_DWORD *)v51 + 13) = v50;
      *((_DWORD *)v51 + 19) = v52;
      *((_DWORD *)v51 + 12) = 0;
      v51[7] = 0LL;
      v51[8] = 0LL;
      *((_DWORD *)v51 + 18) = 0;
      if ( v78 )
      {
        v53 = 1;
        v54 = &v78;
      }
      else
      {
        v53 = 0;
        v54 = 0LL;
      }
      v51[43] = (__int64)v54;
      *((_DWORD *)v51 + 88) = v53;
      if ( (*(_DWORD *)(v19 + 404) & 0x10) != 0 )
      {
        v55 = v71;
        v51[62] = *((_QWORD *)*v71 + 12);
        *((_DWORD *)v51 + 126) = 0;
        v51[65] = *(_QWORD *)(*((_QWORD *)*v55 + 11) + 64LL);
        v51[64] = *(_QWORD *)(*((_QWORD *)*v55 + 11) + 48LL);
        v56 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(v81 + 8) + 432LL))(*((_QWORD *)*v55 + 5));
      }
      else
      {
        v56 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(v81 + 8) + 424LL))(*(_QWORD *)(v19 + 256));
        v55 = v71;
      }
      v57 = v56;
      if ( v56 < 0 )
      {
        v59 = v67;
        if ( v67 >= 0 )
        {
          v60 = v81;
          v61 = &v91[v67];
          do
          {
            if ( (*((_DWORD *)*v61 + 101) & 0x10) == 0 )
              (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v60 + 8) + 440LL))(*((_QWORD *)*v61 + 32), 0LL);
            --v61;
            --v59;
          }
          while ( v59 >= 0 );
          v19 = v92;
        }
        WdLogSingleEntry2(3LL, v19, v57);
        LODWORD(v13) = v57;
        CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v73);
        v35 = 1;
        goto LABEL_97;
      }
      v66 = 0LL;
      CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v73);
      v6 = v80;
      if ( !v64 && !v65 )
      {
        v18 = v55 + 1;
        ++v67;
        v16 = v79 + 1;
        v79 = v16;
        v71 = v18;
        if ( v16 >= v89 )
          goto LABEL_103;
        v17 = v90;
        goto LABEL_19;
      }
      v27 = v75;
    }
  }
  while ( 1 )
  {
    v77[v20] = v6->pNewAllocationList[v20];
    *(_QWORD *)&Pool2[8 * v20] = v86[v20];
    if ( !v16 )
      goto LABEL_39;
    v13 = v84;
    hAllocation = v6->pNewAllocationList[v20].hAllocation;
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v84 + 248));
    v22 = (hAllocation >> 6) & 0xFFFFFF;
    if ( v22 >= *((_DWORD *)v13 + 74) )
      goto LABEL_29;
    v23 = *((_QWORD *)v13 + 35);
    if ( ((hAllocation >> 25) & 0x60) != (*(_BYTE *)(v23 + 16LL * v22 + 8) & 0x60) )
      goto LABEL_29;
    if ( (*(_DWORD *)(v23 + 16LL * v22 + 8) & 0x2000) != 0 )
      goto LABEL_29;
    v24 = *(_DWORD *)(v23 + 16LL * v22 + 8) & 0x1F;
    if ( !v24 )
      goto LABEL_29;
    if ( v24 != 5 )
    {
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_29:
      v25 = 0LL;
      goto LABEL_30;
    }
    v25 = *(struct _EX_RUNDOWN_REF **)(v23 + 16LL * v22);
LABEL_30:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v74, v25);
    _InterlockedDecrement((volatile signed __int32 *)v13 + 66);
    ExReleasePushLockSharedEx((char *)v13 + 248, 0LL);
    KeLeaveCriticalRegion();
    LODWORD(v13) = -1073741811;
    if ( !v74 )
      break;
    if ( *(_QWORD *)(*(_QWORD *)(v74[1].Count + 16) + 16LL) != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL)
                                                                         + 16LL) )
    {
      WdLogSingleEntry3(2LL, *(_QWORD *)(v19 + 16), v74, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
        *(_QWORD *)(v19 + 16),
        (__int64)v74,
        -1073741811LL,
        0LL,
        0LL);
      goto LABEL_82;
    }
    v26 = *(_QWORD *)(v74[5].Count + 24);
    if ( v26 )
    {
      while ( ((*(_DWORD *)(v26 + 72) >> 12) & 0x3F) != v68 )
      {
        v26 = *(_QWORD *)(v26 + 64);
        if ( !v26 )
          goto LABEL_38;
      }
      LODWORD(v77[v20]) = *(_DWORD *)(v26 + 16);
      *(_QWORD *)&Pool2[8 * v20] = v26;
    }
LABEL_38:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v74);
    v16 = v79;
LABEL_39:
    if ( ++v20 >= v6->AllocationCount )
      goto LABEL_40;
  }
  WdLogSingleEntry1(2LL, 1238LL);
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"The allocation handle is invalid", 1238LL, 0LL, 0LL, 0LL, 0LL);
LABEL_82:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v74);
LABEL_103:
  Pool2 = v95;
LABEL_104:
  if ( Pool2 != v96 && Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  v95 = 0LL;
  v97 = 0;
LABEL_108:
  if ( P != v99 && P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v13;
}
