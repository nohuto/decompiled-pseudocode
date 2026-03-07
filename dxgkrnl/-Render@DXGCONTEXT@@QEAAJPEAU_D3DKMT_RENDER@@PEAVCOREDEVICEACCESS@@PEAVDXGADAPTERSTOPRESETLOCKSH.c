__int64 __fastcall DXGCONTEXT::Render(
        DXGCONTEXT *this,
        struct _D3DKMT_RENDER *a2,
        __int64 AllocationCount,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a4,
        struct DXGCONTEXT **a5,
        struct DXGALLOCATION **a6,
        struct DXGHWQUEUE **a7)
{
  struct _D3DKMT_RENDER *v8; // rsi
  int v9; // eax
  D3DKMT_RENDERFLAGS Flags; // eax
  ULONG BroadcastContextCount; // ecx
  unsigned __int8 v13; // r12
  int v14; // eax
  unsigned int v15; // ebx
  char *pNewCommandBuffer; // rcx
  __int64 CommandOffset; // rax
  char *v18; // r13
  unsigned __int64 v19; // rbx
  char *v20; // rdx
  char *v21; // rcx
  char *v22; // rax
  __int64 v23; // r9
  unsigned int v24; // r12d
  __int64 v25; // rsi
  int v26; // r15d
  __int64 v27; // rax
  __int64 v28; // r15
  char *v30; // r12
  int v31; // eax
  int v32; // eax
  COREDEVICEACCESS *v33; // r12
  int v34; // eax
  int v35; // esi
  char *v36; // rdx
  __int64 v37; // rdx
  D3DKMT_RENDERFLAGS v38; // eax
  const EVENT_DESCRIPTOR *v39; // rdx
  __int64 v40; // rax
  __int64 v41; // r15
  _BYTE *v42; // rsi
  __int64 v43; // rax
  int v44; // edx
  unsigned int v45; // eax
  __int64 v46; // rax
  int v47; // r8d
  int v48; // edx
  int v49; // ecx
  int v50; // edx
  unsigned int v51; // eax
  __int64 v52; // rax
  bool v53; // zf
  unsigned __int64 *v54; // rcx
  D3DDDI_ALLOCATIONLIST *pNewAllocationList; // rdx
  int v56; // eax
  __int64 v57; // r8
  int v58; // eax
  struct _D3DKMT_RENDER *v59; // r15
  UINT AllocationListSize; // ecx
  struct DXGGLOBAL *Global; // rax
  size_t v62; // r8
  void *v63; // rcx
  int v64; // eax
  UINT v65; // r15d
  struct DXGALLOCATION **v66; // r13
  DXGK_ALLOCATIONLIST *v67; // rdx
  struct DXGHWQUEUE **v68; // rcx
  int v69; // eax
  unsigned __int64 v70; // r12
  int v71; // eax
  int v72; // ecx
  __int64 v73; // rax
  int v74; // eax
  __int64 v75; // rax
  __int64 v76; // rax
  int v77; // eax
  int v78; // r9d
  unsigned int v79; // ecx
  int v80; // eax
  unsigned int v81; // ecx
  int v82; // eax
  __int64 *v83; // rcx
  struct DXGCONTEXT **v84; // r12
  struct DXGHWQUEUE **v85; // rdx
  int v86; // eax
  __int64 v87; // rdx
  int v88; // edx
  __int64 v89; // rcx
  char v90; // r12
  unsigned int *v91; // r14
  int v92; // r12d
  __int64 v93; // rbx
  struct DXGCONTEXT **v94; // r12
  __int64 v95; // rbx
  UINT64 PresentHistoryToken; // rax
  int v97; // eax
  unsigned int i; // ebx
  struct VIDMM_ALLOC *v99; // r9
  int v100; // edi
  __int64 v101; // rbx
  __int64 v102; // rbx
  int v103[2]; // [rsp+20h] [rbp-100h]
  union _LARGE_INTEGER *v104; // [rsp+28h] [rbp-F8h]
  struct DXGK_PRESENT_PARAMS *v105; // [rsp+30h] [rbp-F0h]
  struct VIDSCH_SUBMIT_DATA_BASE *v106; // [rsp+38h] [rbp-E8h]
  char v107; // [rsp+A0h] [rbp-80h]
  char v108; // [rsp+A0h] [rbp-80h]
  bool v109; // [rsp+A1h] [rbp-7Fh]
  char v110; // [rsp+A2h] [rbp-7Eh]
  __int64 v111; // [rsp+A8h] [rbp-78h] BYREF
  int v112; // [rsp+B0h] [rbp-70h]
  int v113; // [rsp+B4h] [rbp-6Ch]
  int v114; // [rsp+B8h] [rbp-68h]
  struct _D3DKMT_RENDER *v115; // [rsp+C0h] [rbp-60h]
  unsigned __int64 v116; // [rsp+C8h] [rbp-58h] BYREF
  char *v117; // [rsp+D0h] [rbp-50h]
  unsigned int *v118; // [rsp+D8h] [rbp-48h]
  UINT v119; // [rsp+E0h] [rbp-40h] BYREF
  unsigned int v120; // [rsp+E4h] [rbp-3Ch]
  void *v121; // [rsp+E8h] [rbp-38h] BYREF
  PVOID Entry; // [rsp+F0h] [rbp-30h] BYREF
  __int64 v123; // [rsp+F8h] [rbp-28h]
  struct DXGHWQUEUE **v124; // [rsp+100h] [rbp-20h]
  int v125; // [rsp+108h] [rbp-18h]
  __int64 v126; // [rsp+110h] [rbp-10h] BYREF
  COREDEVICEACCESS *v127; // [rsp+118h] [rbp-8h]
  struct _DXGKARG_RENDER Src; // [rsp+120h] [rbp+0h] BYREF
  LARGE_INTEGER v129; // [rsp+190h] [rbp+70h] BYREF
  struct DXGALLOCATION **v130; // [rsp+198h] [rbp+78h]
  char *v131; // [rsp+1A0h] [rbp+80h]
  struct DXGCONTEXT **v132; // [rsp+1A8h] [rbp+88h]
  _DXGKARG_RENDERGDI v133; // [rsp+1B0h] [rbp+90h] BYREF
  __int64 v134; // [rsp+200h] [rbp+E0h]
  struct DXGADAPTERSTOPRESETLOCKSHARED *v135; // [rsp+208h] [rbp+E8h]
  struct _D3DKMT_PRESENTHISTORYTOKEN v136; // [rsp+210h] [rbp+F0h] BYREF

  v8 = a2;
  v132 = a5;
  v130 = a6;
  v9 = *((_DWORD *)this + 101);
  v135 = a4;
  v127 = (COREDEVICEACCESS *)AllocationCount;
  v115 = a2;
  v124 = a7;
  if ( (v9 & 0x10) != 0 && !a7 )
  {
    WdLogSingleEntry1(2LL, 470LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Hardware context render is not provided with hardware queue array",
      470LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225473LL;
  }
  if ( (v9 & 8) != 0 )
  {
    WdLogSingleEntry1(3LL, 477LL);
    return 3221225485LL;
  }
  Flags = a2->Flags;
  BroadcastContextCount = a2->BroadcastContextCount;
  v13 = 1;
  v107 = 1;
  v120 = ((*(_BYTE *)&Flags & 8) << 12) | 0x100;
  v116 = v120;
  v113 = BroadcastContextCount + 1;
  if ( (*(_BYTE *)&Flags & 0x10) != 0 )
  {
    v120 = ((*(_BYTE *)&Flags & 8) << 12) | 0x1A0;
    LODWORD(v116) = v120;
    v14 = DXGCONTEXT::WaitForQueuedPresentLimit(this, 0, 1u, (struct COREDEVICEACCESS *)AllocationCount);
    v15 = v14;
    if ( v14 < 0 )
    {
      WdLogSingleEntry2(4LL, this, v14);
      return v15;
    }
  }
  if ( (*(_DWORD *)&v8->Flags & 0x20) != 0 )
    pNewCommandBuffer = (char *)v8->pNewCommandBuffer;
  else
    pNewCommandBuffer = (char *)*((_QWORD *)this + 7);
  CommandOffset = v8->CommandOffset;
  v18 = (char *)this + 16;
  v19 = v116;
  v20 = (char *)this + 208;
  v121 = 0LL;
  v109 = 1;
  Src.pCommand = &pNewCommandBuffer[CommandOffset];
  v21 = (char *)this + 16;
  Src.CommandLength = v8->CommandLength;
  v110 = 0;
  v22 = (char *)this + 208;
  memset(&Src.CommandLength + 1, 0, 100);
  v117 = (char *)this + 16;
  while ( 1 )
  {
    v23 = 0LL;
    v111 = 0LL;
    if ( !*((_BYTE *)this + 442) )
    {
      v24 = *((_DWORD *)this + 18);
      if ( v24 <= 3 )
      {
        v21 = v18;
        v24 = 3;
        v117 = v18;
        v22 = v20;
      }
      v25 = *((_QWORD *)this + 29);
      v26 = *((_DWORD *)this + 26);
      v114 = v26;
      if ( !v25 )
      {
        LODWORD(v106) = v26;
        LODWORD(v105) = v24;
        LOBYTE(v103[0]) = 1;
        v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, DXGCONTEXT *, int, _DWORD, struct DXGK_PRESENT_PARAMS *, struct VIDSCH_SUBMIT_DATA_BASE *, _DWORD, _DWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v21 + 16LL) + 760LL) + 8LL) + 432LL))(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v21 + 16LL) + 768LL),
                *((unsigned int *)this + 100),
                *(_QWORD *)(*(_QWORD *)v21 + 792LL),
                this,
                v103[0],
                *((_DWORD *)this + 50),
                v105,
                v106,
                *((_DWORD *)this + 51),
                *(_DWORD *)v22);
        *((_QWORD *)this + 29) = v27;
        if ( !v27 )
        {
          WdLogSingleEntry2(3LL, this, -1073741801LL);
          LODWORD(v28) = -1073741801;
LABEL_21:
          if ( *((_QWORD *)this + 29) )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v117 + 16LL) + 760LL) + 8LL)
                                           + 448LL))(*((_QWORD *)this + 29));
            *((_QWORD *)this + 29) = 0LL;
          }
          WdLogSingleEntry1(3LL, this);
          goto LABEL_29;
        }
        LODWORD(v28) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v117 + 16LL)
                                                                                  + 760LL)
                                                                      + 8LL)
                                                          + 440LL))(v27);
        if ( (int)v28 < 0 )
          goto LABEL_21;
        v25 = *((_QWORD *)this + 29);
        *((_DWORD *)this + 54) = v114;
        *((_DWORD *)this + 53) = v24;
      }
      v30 = v117;
      LOBYTE(v20) = 1;
      v31 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v117 + 16LL)
                                                                                                  + 760LL)
                                                                                      + 8LL)
                                                                          + 488LL))(
              v25,
              v20,
              0LL,
              &v111);
      LODWORD(v28) = v31;
      if ( v31 == -1071775486 )
      {
        if ( v127 )
        {
          COREDEVICEACCESS::Release(v127);
          v32 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v30 + 16LL) + 760LL)
                                                                                          + 8LL)
                                                                              + 488LL))(
                  v25,
                  0LL,
                  0LL,
                  &v111);
          v33 = v127;
          LODWORD(v28) = v32;
          v34 = COREDEVICEACCESS::AcquireShared(v127, 0LL);
          v35 = v34;
          if ( v34 < 0 )
          {
            WdLogSingleEntry2(4LL, this, v34);
            COREDEVICEACCESS::AcquireSharedUncheck(v33, v36);
            LODWORD(v28) = v35;
LABEL_29:
            WdLogSingleEntry2(4LL, this, (int)v28);
LABEL_159:
            v91 = 0LL;
            goto LABEL_160;
          }
        }
      }
      else if ( v31 < 0 )
      {
        WdLogSingleEntry2(4LL, this, v31);
      }
      if ( (int)v28 < 0 )
        goto LABEL_29;
      v23 = v111;
      v13 = v107;
      v8 = v115;
    }
    if ( bTracingEnabled )
    {
      v38 = v8->Flags;
      if ( (*(_BYTE *)&v38 & 0x10) != 0 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
        {
          HIDWORD(v106) = 0;
          HIDWORD(v105) = 0;
          McTemplateK0ppxppttqddddddddq_EtwWriteTransfer((__int64)v21, (__int64)v20, AllocationCount, 0LL, v23);
        }
      }
      else
      {
        if ( (*(_BYTE *)&v38 & 0x20) != 0 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
            goto LABEL_44;
          v39 = (const EVENT_DESCRIPTOR *)&EventRenderKm;
        }
        else
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
            goto LABEL_44;
          v39 = &EventRender;
        }
        McTemplateK0p_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, v39, AllocationCount, v23);
      }
    }
LABEL_44:
    v40 = *(_QWORD *)v18;
    v119 = 0;
    v129.QuadPart = 0LL;
    v116 = 0LL;
    v126 = 0LL;
    v41 = *(_QWORD *)(v40 + 16);
    v117 = v18;
    v134 = v41;
    v123 = v41;
    Entry = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)(v41 + 1424));
    v42 = Entry;
    if ( !Entry )
    {
      WdLogSingleEntry1(6LL, 590LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate VidSchSubmitData",
        590LL,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v28) = -1073741801;
      CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)&Entry);
      goto LABEL_159;
    }
    v43 = *(_QWORD *)(v41 + 16);
    if ( *(int *)(v43 + 2552) >= 0x2000 )
    {
      v44 = *(_DWORD *)(v43 + 288);
LABEL_47:
      v45 = *(_DWORD *)(v43 + 2760) * ((v44 << 6) + ((8 * v44 + 231) & 0xFFFFFFF8)) + 8 * (v44 + 77);
      goto LABEL_48;
    }
    v44 = 1;
    if ( *(_BYTE *)(v43 + 2852) )
      goto LABEL_47;
    v45 = 1304;
LABEL_48:
    memset(Entry, 0, v45);
    v46 = *(_QWORD *)(v41 + 16);
    v47 = *(_DWORD *)(v46 + 2760);
    if ( *(int *)(v46 + 2552) < 0x2000 )
    {
      v48 = 1;
      if ( !*(_BYTE *)(v46 + 2852) )
      {
        v42[356] = 0;
        goto LABEL_51;
      }
    }
    else
    {
      v48 = *(_DWORD *)(v46 + 288);
    }
    v49 = 8 * v48;
    v42[356] = 1;
    *((_DWORD *)v42 + 152) = v48;
    v50 = v48 << 6;
    *((_DWORD *)v42 + 151) = v47;
    *((_DWORD *)v42 + 153) = v47 * (v50 + ((v49 + 231) & 0xFFFFFFF8)) + 16;
    v51 = v47 * (v50 + ((v49 + 231) & 0xFFFFFFF8)) + 616;
    *((_DWORD *)v42 + 138) = v51;
    *((_DWORD *)v42 + 139) = v49 + v51;
LABEL_51:
    if ( (*((_DWORD *)this + 56) & 1) != 0
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 16LL) + 16LL) + 2848LL) & 2) != 0
      && (*(_DWORD *)&v115->Flags & 0x20) == 0 )
    {
      LODWORD(v28) = 0;
      v108 = 0;
      v118 = 0LL;
    }
    else
    {
      v52 = *(_QWORD *)v18;
      v53 = *((_BYTE *)this + 438) == 0;
      v118 = (unsigned int *)(v42 + 200);
      v54 = &v116;
      if ( v53 )
        v54 = 0LL;
      if ( (*(_DWORD *)&v115->Flags & 0x20) != 0 )
        pNewAllocationList = v115->pNewAllocationList;
      else
        pNewAllocationList = (D3DDDI_ALLOCATIONLIST *)*((_QWORD *)this + 11);
      v103[0] = v113;
      v56 = (*(__int64 (__fastcall **)(__int64, D3DDDI_ALLOCATIONLIST *, _QWORD, _QWORD, int *, UINT *, LARGE_INTEGER *, unsigned __int64 *, __int64 *, _BYTE *, struct DXGALLOCATION **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v52 + 16) + 760LL) + 8LL) + 568LL))(
              v111,
              pNewAllocationList,
              v115->AllocationCount,
              v13,
              *(int **)v103,
              &v119,
              &v129,
              v54,
              &v126,
              v42 + 200,
              v130);
      LODWORD(v28) = v56;
      if ( v56 < 0 )
      {
        WdLogSingleEntry2(3LL, this, v56);
        CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)&Entry);
        v91 = v118;
LABEL_160:
        v90 = 0;
        goto LABEL_161;
      }
      v108 = 1;
    }
    (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 16LL) + 760LL) + 8LL)
                                             + 504LL))(
      v111,
      &v121);
    Src.pDmaBuffer = v121;
    Src.DmaSize = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 16LL) + 760LL)
                                                                 + 8LL)
                                                     + 528LL))(v111);
    Src.pDmaBufferPrivateData = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 16LL) + 760LL)
                                                                                       + 8LL)
                                                                           + 560LL))(v111);
    v131 = (char *)this + 208;
    Src.DmaBufferPrivateDataSize = *((_DWORD *)this + 52);
    if ( v110 )
    {
      v58 = DXGCONTEXT::SignalRenderKmMonitoredFence(&Src, this, *v124, v116);
      v28 = v58;
      if ( v58 == -1071775743 )
      {
        WdLogSingleEntry5(0LL, 275LL, 40LL, this, 0LL, 0LL);
LABEL_141:
        WdLogSingleEntry2(3LL, this, v28);
LABEL_142:
        CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)&Entry);
        v90 = v108;
        v91 = v118;
        goto LABEL_161;
      }
      if ( v58 < 0 )
        goto LABEL_141;
      v110 = 0;
    }
    if ( v109 )
    {
      v59 = v115;
      if ( (*((_DWORD *)this + 56) & 1) != 0
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 16LL) + 16LL) + 2848LL) & 8) != 0
        && (*(_DWORD *)&v115->Flags & 0x20) == 0 )
      {
        AllocationListSize = 0;
        Src.pAllocationList = 0LL;
        Src.AllocationListSize = 0;
        Src.pPatchLocationListIn = 0LL;
        Src.PatchLocationListInSize = 0;
        Src.pPatchLocationListOut = 0LL;
        Src.PatchLocationListOutSize = 0;
      }
      else
      {
        Src.pAllocationList = (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 16LL) + 760LL) + 8LL)
                                                                                        + 552LL))(v111);
        Src.AllocationListSize = v59->AllocationCount;
        Src.pPatchLocationListIn = (D3DDDI_PATCHLOCATIONLIST *)*((_QWORD *)this + 15);
        Src.PatchLocationListInSize = v59->PatchLocationCount;
        Src.pPatchLocationListOut = (D3DDDI_PATCHLOCATIONLIST *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 16LL) + 760LL) + 8LL) + 544LL))(v111);
        Src.PatchLocationListOutSize = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 16LL)
                                                                                                  + 760LL)
                                                                                      + 8LL)
                                                                          + 536LL))(v111);
        Global = DXGGLOBAL::GetGlobal();
        if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
               (struct DXGGLOBAL *)((char *)Global + 1684),
               *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)v18 + 16LL) + 16LL)) )
        {
          memmove(*((void **)this + 8), Src.pCommand, *((_QWORD *)this + 6));
          v62 = *((_QWORD *)this + 14);
          v63 = (void *)*((_QWORD *)this + 16);
          Src.pCommand = (const void *)*((_QWORD *)this + 8);
          memmove(v63, Src.pPatchLocationListIn, v62);
          Src.pPatchLocationListIn = (D3DDDI_PATCHLOCATIONLIST *)*((_QWORD *)this + 16);
        }
        AllocationListSize = Src.AllocationListSize;
      }
      Src.DmaBufferSegmentId = v119;
      Src.DmaBufferPhysicalAddress = v129;
      if ( (*(_DWORD *)&v59->Flags & 0x20) != 0 )
      {
        if ( *((_BYTE *)this + 438) )
        {
          v133.pCommand = (char *)v59->pNewCommandBuffer + v59->CommandOffset;
          v133.CommandLength = v59->CommandLength;
          *(&v133.DmaSize + 1) = 0;
          v133.AllocationListSize = AllocationListSize;
          *(&v133.DmaBufferPrivateDataSize + 1) = 0;
          *(&v133.CommandLength + 1) = 0;
          v133.pDmaBuffer = Src.pDmaBuffer;
          v133.DmaSize = Src.DmaSize;
          v133.pDmaBufferPrivateData = Src.pDmaBufferPrivateData;
          v133.DmaBufferPrivateDataSize = Src.DmaBufferPrivateDataSize;
          v133.pAllocationList = Src.pAllocationList;
          v133.MultipassOffset = Src.MultipassOffset;
          v133.DmaBufferGpuVirtualAddress = v116;
          if ( bTracingEnabled )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            {
              LODWORD(v104) = AllocationListSize;
              McTemplateK0pxq_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &RenderGdi, v57, this, v116, v104);
              AllocationListSize = Src.AllocationListSize;
            }
            v65 = 0;
            if ( AllocationListSize )
            {
              v66 = v130;
              do
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                {
                  v67 = &Src.pAllocationList[v65];
                  LODWORD(v104) = *(_DWORD *)&v67->8 & 1;
                  McTemplateK0ppqx_EtwWriteTransfer(
                    (REGHANDLE *)&DxgkControlGuid_Context,
                    (__int64)v67,
                    v57,
                    v66[v65],
                    v67->hDeviceSpecificAllocation,
                    v104,
                    v67->PhysicalAddress.QuadPart);
                  AllocationListSize = Src.AllocationListSize;
                }
                ++v65;
              }
              while ( v65 < AllocationListSize );
              v18 = (char *)this + 16;
            }
          }
          LODWORD(v28) = ADAPTER_RENDER::DdiRenderGdi(
                           *(ADAPTER_RENDER **)(*(_QWORD *)v18 + 16LL),
                           *((void **)this + 23),
                           &v133);
          Src.pDmaBuffer = v133.pDmaBuffer;
          Src.pDmaBufferPrivateData = v133.pDmaBufferPrivateData;
          Src.MultipassOffset = v133.MultipassOffset;
          if ( (*((_DWORD *)this + 101) & 0x10) != 0 )
          {
            Src.DmaBufferPrivateDataSize = v133.DmaBufferPrivateDataSize;
            Src.DmaSize = v133.DmaSize;
          }
          goto LABEL_97;
        }
        v64 = ADAPTER_RENDER::DdiRenderKm(*(ADAPTER_RENDER **)(*(_QWORD *)v18 + 16LL), *((void **)this + 23), &Src);
      }
      else
      {
        if ( (*((_DWORD *)this + 56) & 1) != 0
          && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 16LL) + 16LL) + 2848LL) & 4) != 0 )
        {
          LODWORD(v28) = 0;
          goto LABEL_97;
        }
        v64 = ADAPTER_RENDER::DdiRender(*(ADAPTER_RENDER **)(*(_QWORD *)v18 + 16LL), *((void **)this + 23), &Src);
      }
      LODWORD(v28) = v64;
LABEL_97:
      if ( (int)(v28 + 0x80000000) >= 0 && (_DWORD)v28 != -1071775743 )
      {
        WdLogSingleEntry2(3LL, this, (int)v28);
        CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)&Entry);
        v90 = v108;
        v91 = v118;
        goto LABEL_161;
      }
      v109 = (_DWORD)v28 == -1071775743;
      if ( (*((_DWORD *)this + 101) & 0x10) != 0 )
      {
        LODWORD(v28) = DXGHWQUEUE::EnsureKmSubmissionProgressSyncObject(*v124);
        if ( (int)v28 < 0 )
          goto LABEL_142;
        v68 = v124;
        ++*((_QWORD *)*v124 + 12);
        if ( !*((_BYTE *)this + 296) )
        {
          v69 = DXGCONTEXT::SignalRenderKmMonitoredFence(&Src, this, *v68, v116);
          v28 = v69;
          if ( v69 == -1071775743 )
          {
            v110 = 1;
          }
          else if ( v69 < 0 )
          {
            goto LABEL_141;
          }
        }
      }
    }
    LODWORD(v70) = 0;
    v71 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 16LL) + 760LL) + 8LL)
                                             + 560LL))(v111);
    v72 = LODWORD(Src.pDmaBufferPrivateData) - v71;
    v114 = LODWORD(Src.pDmaBuffer) - (_DWORD)v121;
    v73 = *(_QWORD *)v18;
    v125 = v72;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v73 + 16) + 760LL) + 8LL) + 512LL))(v111);
    v74 = *((_DWORD *)this + 56);
    v121 = 0LL;
    if ( (v74 & 1) == 0 )
      goto LABEL_107;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 16LL) + 16LL) + 2848LL) & 8) != 0 )
    {
      AllocationCount = 0LL;
    }
    else
    {
LABEL_107:
      v75 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 16LL) + 760LL)
                                                           + 8LL)
                                               + 544LL))(v111);
      v70 = 0xAAAAAAAAAAAAAAABuLL * (((__int64)Src.pPatchLocationListOut - v75) >> 3);
      AllocationCount = v115->AllocationCount;
      v112 = v115->AllocationCount;
      if ( (qword_1C013A870 & 0x10) != 0 )
      {
        v76 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 16LL) + 760LL)
                                                             + 8LL)
                                                 + 544LL))(v111);
        TraceDxgkPatchLocationList((__int64)this, v111, v70, v76);
        AllocationCount = (unsigned int)v112;
      }
    }
    *(_QWORD *)v42 = v19;
    if ( *((_BYTE *)this + 438) )
    {
      *(_DWORD *)v42 |= 0x8000000u;
      *((_QWORD *)v42 + 5) = v116;
    }
    if ( (v120 & 0x20) != 0 )
    {
      if ( v109 || (v77 = 0, v110) )
        v77 = 64;
      v78 = v113;
      v79 = v77 | *(_DWORD *)v42 & 0xFFFFFFBF;
      v80 = 2048;
      v81 = v79 & 0xFFFFFBFF;
      if ( v113 > 1 )
        v80 = 3072;
      *(_DWORD *)v42 = v80 | v81;
      if ( *(_QWORD *)(*(_QWORD *)v18 + 1880LL) != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 16LL) + 16LL) )
        *((_DWORD *)v42 + 29) = 0;
    }
    else
    {
      v78 = v113;
    }
    *((_QWORD *)v42 + 1) = v111;
    *((_DWORD *)v42 + 13) = v114;
    *((_DWORD *)v42 + 19) = v125;
    *((_DWORD *)v42 + 12) = 0;
    *((_DWORD *)v42 + 15) = AllocationCount;
    *((_DWORD *)v42 + 14) = 0;
    *((_DWORD *)v42 + 17) = v70;
    *((_DWORD *)v42 + 16) = 0;
    *((_DWORD *)v42 + 18) = 0;
    if ( v126 )
    {
      v82 = 1;
      v83 = &v126;
    }
    else
    {
      v82 = 0;
      v83 = 0LL;
    }
    *((_QWORD *)v42 + 43) = v83;
    *((_DWORD *)v42 + 88) = v82;
    v112 = 0;
    if ( v78 > 0 )
      break;
    v89 = v134;
LABEL_135:
    v13 = 0;
    v111 = 0LL;
    v107 = 0;
    if ( v42 )
      ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v89 + 1424), v42);
    v20 = (char *)this + 208;
    v22 = v131;
    v21 = v117;
    if ( !v110 )
    {
      if ( !v109 )
      {
        if ( (*(_DWORD *)&v115->Flags & 0x10) != 0 )
        {
          memset(&v136, 0, sizeof(v136));
          PresentHistoryToken = v115->PresentHistoryToken;
          v136.Model = D3DKMT_PM_REDIRECTED_VISTABLT;
          v136.Token.Flip.FenceValue = PresentHistoryToken;
          v97 = SubmitPresentHistoryToken(&v136, v127, v135, 0LL, 0, 0LL, 0LL, 0LL, this, 0LL, 0LL);
          LODWORD(v28) = v97;
          if ( (int)(v97 + 0x80000000) >= 0 && v97 != -1073741130 )
          {
            WdLogSingleEntry2(3LL, this, v97);
            LODWORD(v28) = 0;
          }
        }
        return (unsigned int)v28;
      }
      v20 = (char *)this + 208;
    }
    v8 = v115;
  }
  v84 = v132;
  while ( 1 )
  {
    if ( *((struct _KTHREAD **)*v84 + 57) != KeGetCurrentThread() )
    {
      WdLogSingleEntry1(1LL, 920LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pBroadcastContext[i]->GetContextLock()->IsExclusiveOwner()",
        920LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (*((_DWORD *)*v84 + 101) & 0x10) != 0 )
    {
      v85 = v124;
      *((_QWORD *)v42 + 62) = *((_QWORD *)*v124 + 12);
      *((_DWORD *)v42 + 126) = 0;
      *((_QWORD *)v42 + 65) = *(_QWORD *)(*((_QWORD *)*v85 + 11) + 64LL);
      *((_QWORD *)v42 + 64) = *(_QWORD *)(*((_QWORD *)*v85 + 11) + 48LL);
      v86 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 16LL)
                                                                               + 736LL)
                                                                   + 8LL)
                                                       + 432LL))(
              *((_QWORD *)*v85 + 5),
              v42);
    }
    else
    {
      v86 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 16LL)
                                                                               + 736LL)
                                                                   + 8LL)
                                                       + 424LL))(
              *((_QWORD *)*v84 + 32),
              v42);
    }
    v114 = v86;
    if ( v86 < 0 )
      break;
    v88 = v112;
    ++v84;
    *(_DWORD *)v42 &= ~0x800u;
    v112 = v88 + 1;
    if ( v88 + 1 >= v113 )
    {
      v89 = v123;
      v42 = Entry;
      goto LABEL_135;
    }
  }
  if ( (*((_DWORD *)this + 101) & 0x10) != 0 )
  {
LABEL_148:
    v92 = v112;
  }
  else
  {
    v92 = v112;
    v93 = v112;
    if ( v112 >= 0 )
    {
      v94 = v132;
      do
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 16LL) + 736LL)
                                                           + 8LL)
                                               + 440LL))(
          *((_QWORD *)v94[v93--] + 32),
          0LL);
      while ( v93 >= 0 );
      goto LABEL_148;
    }
  }
  if ( v92 < v113 )
  {
    v95 = (unsigned int)(v113 - v92);
    do
    {
      LOBYTE(v87) = 1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 16LL) + 760LL)
                                                           + 8LL)
                                               + 576LL))(
        v111,
        v87);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 16LL) + 760LL) + 8LL)
                                              + 496LL))(
        v111,
        0LL);
      --v95;
    }
    while ( v95 );
  }
  v90 = 0;
  v111 = 0LL;
  WdLogSingleEntry2(3LL, this, v114);
  CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)&Entry);
  v91 = v118;
LABEL_161:
  if ( !v111 )
    return (unsigned int)v28;
  if ( v121 )
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 16LL) + 760LL) + 8LL) + 512LL))();
  if ( v91 )
  {
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)v18 + 16LL) + 16LL)) )
    {
      for ( i = 0; i < *v91; ++i )
      {
        if ( i >= 0x10 )
          break;
        v99 = *(struct VIDMM_ALLOC **)&v91[2 * i + 2];
        if ( v99 )
        {
          VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
            *(VIDMM_EXPORT **)(*(_QWORD *)(*(_QWORD *)v18 + 16LL) + 760LL),
            *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*(_QWORD *)v18 + 16LL) + 768LL),
            0,
            v99);
          *(_QWORD *)&v91[2 * i + 2] = 0LL;
        }
      }
    }
  }
  if ( v90 )
  {
    v100 = v113;
    if ( v113 <= 0 )
      return (unsigned int)v28;
    v101 = (unsigned int)v113;
    do
    {
      LOBYTE(v37) = 1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 16LL) + 760LL)
                                                           + 8LL)
                                               + 576LL))(
        v111,
        v37);
      --v101;
    }
    while ( v101 );
  }
  else
  {
    v100 = v113;
  }
  if ( v100 > 0 )
  {
    v102 = (unsigned int)v100;
    do
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 16LL) + 760LL) + 8LL)
                                              + 496LL))(
        v111,
        0LL);
      --v102;
    }
    while ( v102 );
  }
  return (unsigned int)v28;
}
