__int64 __fastcall VIDMM_GLOBAL::UpdateGpuVirtualAddressSystemCommand(
        VIDMM_GLOBAL *this,
        struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA *a2,
        struct VIDMM_ALLOC **a3)
{
  unsigned __int64 v3; // r12
  struct VIDMM_PROCESS ***v5; // rax
  int v6; // ebx
  struct VIDMM_PROCESS **v7; // r13
  VIDMM_GLOBAL *v8; // rcx
  int v9; // esi
  VIDMM_GLOBAL *v10; // rcx
  __int64 v11; // rdx
  char *v12; // rdx
  __int64 v13; // r15
  struct _LIST_ENTRY **v14; // rax
  struct _LIST_ENTRY *v15; // rcx
  struct _LIST_ENTRY *v16; // r15
  VIDMM_GLOBAL *v17; // rcx
  VIDMM_GLOBAL *v18; // r10
  __int64 v19; // r14
  struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v20; // r14
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION_TYPE OperationType; // eax
  struct _DXGK_ADL *v22; // rdx
  VIDMM_GLOBAL *v23; // rcx
  char *v24; // r14
  volatile signed __int32 *v25; // r15
  struct VIDMM_MAPPED_VA_RANGE *v26; // rbx
  unsigned __int64 v27; // rax
  __int64 *v28; // rax
  __int64 v29; // rcx
  VIDMM_GLOBAL *v30; // rcx
  char *v31; // r15
  char *v32; // rax
  __int64 v33; // r14
  __int64 v34; // rdx
  D3DGPU_SIZE_T v35; // rcx
  char v36; // al
  VIDMM_SEGMENT *v37; // rdx
  int v38; // eax
  D3DGPU_SIZE_T v39; // rsi
  int v40; // r9d
  struct _MDL *FullMDL; // rax
  struct _MDL *v42; // rbx
  unsigned __int64 LogicalAddress; // rax
  char v44; // r8
  unsigned __int64 v45; // rax
  void **v46; // rbx
  bool v47; // zf
  struct VIDMM_MAPPED_VA_RANGE *v48; // rdx
  unsigned __int64 v49; // rax
  char *v50; // rax
  __int64 v51; // rcx
  _QWORD *v52; // rax
  volatile signed __int32 *v53; // rax
  __int64 v54; // rcx
  UINT Size; // r14d
  VIDMM_GLOBAL *v56; // rcx
  struct _LIST_ENTRY *v57; // r8
  struct _LIST_ENTRY *v58; // r9
  unsigned __int64 v59; // r11
  int v60; // r10d
  char v61; // al
  VIDMM_SEGMENT *Blink; // rcx
  DXGPUSHLOCK *v63; // rdx
  struct _MDL *v64; // rbx
  unsigned __int64 v65; // rax
  __int64 v66; // rax
  unsigned int v67; // ecx
  char *v68; // r14
  struct VIDMM_MAPPED_VA_RANGE *v69; // rdx
  int v70; // eax
  unsigned __int64 v71; // rdx
  void *v72; // r8
  unsigned __int64 v73; // rax
  void *pMetaData; // rax
  unsigned __int64 v75; // rax
  __int64 *v76; // rax
  __int64 v77; // rcx
  _QWORD *v78; // rax
  __int64 v79; // rdx
  __int64 v80; // r8
  __int64 v81; // rcx
  unsigned int v82; // ebx
  __int64 v83; // rcx
  __int64 v84; // r8
  struct _LIST_ENTRY *v86; // [rsp+20h] [rbp-E0h]
  DXGK_HDR_METADATA v87; // [rsp+50h] [rbp-B0h] BYREF
  int v88; // [rsp+60h] [rbp-A0h]
  struct _LIST_ENTRY *v89; // [rsp+68h] [rbp-98h] BYREF
  D3DGPU_SIZE_T AllocationOffsetInBytes; // [rsp+70h] [rbp-90h]
  unsigned int v91; // [rsp+78h] [rbp-88h]
  struct _LIST_ENTRY *v92; // [rsp+80h] [rbp-80h] BYREF
  _QWORD *v93; // [rsp+88h] [rbp-78h]
  __int128 v94; // [rsp+90h] [rbp-70h] BYREF
  struct _LIST_ENTRY *Flink; // [rsp+A0h] [rbp-60h]
  struct _LIST_ENTRY **v96; // [rsp+A8h] [rbp-58h]
  char *v97; // [rsp+B0h] [rbp-50h] BYREF
  DXGPUSHLOCK *v98[2]; // [rsp+B8h] [rbp-48h] BYREF
  int v99; // [rsp+C8h] [rbp-38h]
  int v100; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v101; // [rsp+D8h] [rbp-28h]
  char v102; // [rsp+E0h] [rbp-20h]
  __int64 v103; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v104; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v105; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v106[10]; // [rsp+100h] [rbp+0h] BYREF
  DXGK_HDR_METADATA v108; // [rsp+168h] [rbp+68h] BYREF
  char v109; // [rsp+178h] [rbp+78h]

  v108.pMetaData = a3;
  v3 = -1LL;
  v100 = -1;
  v101 = 0LL;
  if ( (qword_1C0076010 & 2) != 0 )
  {
    v102 = 1;
    v100 = 8011;
    if ( byte_1C00769C1 < 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 8011);
  }
  else
  {
    v102 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  v5 = (struct VIDMM_PROCESS ***)*((_QWORD *)a2 + 11);
  v109 = 0;
  v6 = 0;
  v7 = *v5;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v98, *v5 + 7, 0);
  DXGPUSHLOCK::AcquireExclusive(v98[1]);
  v9 = -1073741823;
  v99 = 2;
  if ( !*((_QWORD *)a2 + 14) )
  {
    WdLogSingleEntry0(4LL);
    v6 = -1073741823;
    v109 = 1;
  }
  VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v8, (struct _LIST_ENTRY *)a2 + 8);
  if ( *((_BYTE *)a2 + 176) )
  {
    if ( !*((_QWORD *)a2 + 15) )
    {
      WdLogSingleEntry0(4LL);
      v6 = -1073741823;
      v109 = 1;
    }
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v10, (struct _LIST_ENTRY *)((char *)a2 + 152));
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v98);
  v11 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 16LL) + 32LL);
  if ( *(_BYTE *)(v11 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 200), 0, 0) )
    goto LABEL_133;
  v9 = v6;
  if ( v6 < 0 )
  {
    LODWORD(v19) = v108.Type;
    goto LABEL_131;
  }
  v12 = (char *)*((unsigned int *)a2 + 4);
  v87.pMetaData = 0LL;
  v13 = *((_QWORD *)a2 + 14);
  v97 = v12;
  v103 = 3LL * (_QWORD)(v12 + 4);
  v14 = (struct _LIST_ENTRY **)(v13 + 24LL * (_QWORD)(v12 + 4));
  v15 = *v14;
  v96 = v14;
  if ( v15 == (struct _LIST_ENTRY *)v14 )
  {
    v16 = (struct _LIST_ENTRY *)(v13 + 24LL * (_QWORD)(v12 + 4));
  }
  else
  {
    v16 = *(struct _LIST_ENTRY **)(v13 + 24LL * (_QWORD)v12 + 112);
    if ( !v16 )
      v16 = v15;
  }
  v89 = v16;
  if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(this) )
  {
    VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVa(
      v17,
      0,
      v7[12],
      *(struct _VIDSCH_CONTEXT **)a2,
      *((_DWORD *)a2 + 5),
      *((struct _VIDSCH_SYNC_OBJECT **)a2 + 9),
      *((_QWORD *)a2 + 10));
    v18 = this;
  }
  v19 = *((unsigned int *)a2 + 9);
  v87.Size = v19;
  if ( (unsigned int)v19 >= *((_DWORD *)a2 + 5) )
    goto LABEL_133;
  while ( 1 )
  {
    v20 = (struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)(*((_QWORD *)a2 + 3) + (v19 << 6));
    OperationType = v20->OperationType;
    if ( v20->OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP
      || OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP_PROTECT )
    {
      break;
    }
    if ( OperationType != D3DDDI_UPDATEGPUVIRTUALADDRESS_UNMAP )
    {
      if ( OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_COPY )
      {
        if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(v18) )
          VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(v30, v7[12], *(struct _VIDSCH_CONTEXT **)a2, 0LL, v20);
        v31 = (char *)a2 + 48;
        if ( *(char **)v31 == v31 )
          v9 = CVirtualAddressAllocator::BuildVaRangeList(
                 (CVirtualAddressAllocator *)v7,
                 *((struct VIDMM_VAD **)a2 + 15),
                 *((struct VIDMM_VAD **)a2 + 14),
                 *((_DWORD *)a2 + 4),
                 (struct _LIST_ENTRY *)a2 + 3,
                 v20->Map.BaseAddress,
                 v20->Map.BaseAddress + v20->Map.SizeInBytes,
                 v20->Unmap.Protection.Value);
        if ( v9 >= 0 )
        {
          v92 = *(struct _LIST_ENTRY **)(*((_QWORD *)a2 + 14) + 8 * v103);
          while ( 1 )
          {
            v32 = *(char **)v31;
            v93 = v32;
            if ( v32 == v31 || v9 < 0 )
              break;
            v33 = (__int64)(v32 - 8);
            v34 = *((_QWORD *)v32 + 6);
            if ( v34 )
            {
              v35 = **(_QWORD **)v34;
              v36 = *(_DWORD *)(v34 + 28) & 3;
              AllocationOffsetInBytes = v35;
              if ( v36 == 2 )
              {
                v37 = *(VIDMM_SEGMENT **)(v35 + 120);
                v94 = 0LL;
                if ( (*((_DWORD *)v37 + 20) & 0x1001) != 0 )
                {
                  FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v35, 0LL);
                  v39 = AllocationOffsetInBytes;
                  v42 = FullMDL;
                  LogicalAddress = SysMmGetLogicalAddress(*(void *const *)(AllocationOffsetInBytes + 528));
                  VidMmiInitializeAdlForMdl((struct _DXGK_ADL *)&v94, v42, LogicalAddress);
                  v40 = 0;
                }
                else
                {
                  LODWORD(v94) = *(_DWORD *)(v35 + 16) >> 12;
                  *((_QWORD *)&v94 + 1) = *(_QWORD *)(v35 + 128) >> 12;
                  DWORD1(v94) = 1;
                  v38 = VIDMM_SEGMENT::DriverId(v37);
                  v39 = AllocationOffsetInBytes;
                  v40 = v38;
                }
                v44 = *(_DWORD *)(v39 + 68) & 0x3F;
                v86 = *(struct _LIST_ENTRY **)(v33 + 72);
                BYTE1(v87.Type) = 0;
                v9 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                       (__int64)v7,
                       v33,
                       v44,
                       v40,
                       (unsigned __int64)v86,
                       (struct _DXGK_ADL *)&v94,
                       2,
                       (DXGK_MULTIPLANE_OVERLAY_PLANE3 **)v108.pMetaData,
                       (DXGK_HDR_METADATA *)((char *)&v87.Type + 1));
                if ( v9 < 0 )
                  WdLogSingleEntry3(3LL, *(_QWORD *)(v33 + 96), *(_QWORD *)(v33 + 104), 26070LL);
                if ( BYTE1(v87.Type) )
                {
                  v45 = *(_QWORD *)(v33 + 96);
                  if ( v3 < v45 )
                    v45 = v3;
                  v3 = v45;
                  if ( v87.pMetaData <= (void *)*(_QWORD *)(v33 + 104) )
                    v87.pMetaData = *(void **)(v33 + 104);
                }
              }
              v46 = (void **)(v33 + 104);
            }
            else
            {
              v47 = (*(_BYTE *)(v33 + 88) & 8) == 0;
              v48 = (struct VIDMM_MAPPED_VA_RANGE *)(v32 - 8);
              LOBYTE(v87.Type) = 0;
              if ( v47 )
              {
                v9 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                       (__int64)v7,
                       (__int64)v48,
                       0,
                       -2,
                       0LL,
                       (struct _DXGK_ADL *)&xmmword_1C004F0A8,
                       2,
                       (DXGK_MULTIPLANE_OVERLAY_PLANE3 **)v108.pMetaData,
                       &v87);
                v46 = (void **)(v33 + 104);
                if ( v9 < 0 )
                  WdLogSingleEntry3(3LL, *(_QWORD *)(v33 + 96), *(_QWORD *)(v33 + 104), 26105LL);
                if ( !LOBYTE(v87.Type) )
                  goto LABEL_74;
              }
              else
              {
                v9 = CVirtualAddressAllocator::UncommitVirtualAddressRange(
                       (CVirtualAddressAllocator *)v7,
                       v48,
                       (struct VIDMM_ALLOC **)v108.pMetaData,
                       0);
                if ( v9 < 0 )
                  WdLogSingleEntry3(3LL, *(_QWORD *)(v33 + 96), *(_QWORD *)(v33 + 104), 26088LL);
              }
              v49 = *(_QWORD *)(v33 + 96);
              v46 = (void **)(v33 + 104);
              if ( v3 < v49 )
                v49 = v3;
              v3 = v49;
              if ( v87.pMetaData <= *v46 )
                v87.pMetaData = *v46;
            }
LABEL_74:
            if ( v9 >= 0 )
            {
              v50 = *(char **)v31;
              if ( *(char **)(*(_QWORD *)v31 + 8LL) != v31 )
                goto LABEL_127;
              v51 = *(_QWORD *)v50;
              if ( *(char **)(*(_QWORD *)v50 + 8LL) != v50 )
                goto LABEL_127;
              v52 = v93;
              *(_QWORD *)v31 = v51;
              *(_QWORD *)(v51 + 8) = v31;
              *(_QWORD *)(v33 + 16) = 0LL;
              *v52 = 0LL;
              v9 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
                     v7,
                     *((struct VIDMM_VAD **)a2 + 14),
                     *((_DWORD *)a2 + 4),
                     &v92,
                     (struct VIDMM_MAPPED_VA_RANGE *)v33);
              if ( v9 < 0 )
              {
                WdLogSingleEntry3(3LL, *(_QWORD *)(v33 + 96), *v46, 26122LL);
                VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe((volatile signed __int32 *)v33, v7);
              }
            }
          }
        }
        if ( v9 != -1073741267 )
        {
          while ( 1 )
          {
            v53 = *(volatile signed __int32 **)v31;
            if ( *(char **)v31 == v31 )
              break;
            if ( *((char **)v53 + 1) != v31 )
              goto LABEL_127;
            v54 = *(_QWORD *)v53;
            if ( *(volatile signed __int32 **)(*(_QWORD *)v53 + 8LL) != v53 )
              goto LABEL_127;
            *(_QWORD *)v31 = v54;
            *(_QWORD *)(v54 + 8) = v31;
            *((_QWORD *)v53 + 1) = 0LL;
            *(_QWORD *)v53 = 0LL;
            VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(v53 - 2, v7);
          }
        }
        v16 = *v96;
        v89 = *v96;
      }
LABEL_85:
      if ( v9 < 0 )
        goto LABEL_106;
      goto LABEL_86;
    }
    if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(v18) )
    {
      VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(v23, v7[12], *(struct _VIDSCH_CONTEXT **)a2, 0LL, v20);
      v22 = (struct _DXGK_ADL *)&xmmword_1C004F0A8;
    }
    v24 = (char *)a2 + 96;
    LOBYTE(v108.Type) = 0;
    v25 = (volatile signed __int32 *)*((_QWORD *)a2 + 12);
    v26 = (struct VIDMM_MAPPED_VA_RANGE *)(v25 - 2);
    if ( (v25[20] & 8) != 0 )
    {
      v9 = CVirtualAddressAllocator::UncommitVirtualAddressRange(
             (CVirtualAddressAllocator *)v7,
             (struct VIDMM_MAPPED_VA_RANGE *)(v25 - 2),
             (struct VIDMM_ALLOC **)v108.pMetaData,
             0);
      if ( v9 < 0 )
        WdLogSingleEntry3(3LL, *((_QWORD *)v26 + 12), *((_QWORD *)v26 + 13), 25952LL);
      LOBYTE(v108.Type) = 1;
    }
    else
    {
      v9 = CVirtualAddressAllocator::CommitVirtualAddressRange(
             (__int64)v7,
             (__int64)(v25 - 2),
             0,
             -2,
             0LL,
             v22,
             2,
             (DXGK_MULTIPLANE_OVERLAY_PLANE3 **)v108.pMetaData,
             &v108);
      if ( v9 < 0 )
        WdLogSingleEntry3(3LL, *((_QWORD *)v26 + 12), *((_QWORD *)v26 + 13), 25968LL);
      if ( !LOBYTE(v108.Type) )
        goto LABEL_37;
    }
    v27 = *((_QWORD *)v26 + 12);
    if ( v3 < v27 )
      v27 = v3;
    v3 = v27;
    if ( v87.pMetaData <= (void *)*((_QWORD *)v26 + 13) )
      v87.pMetaData = (void *)*((_QWORD *)v26 + 13);
LABEL_37:
    if ( v9 < 0 )
    {
      VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(v25 - 2, v7);
      goto LABEL_106;
    }
    v28 = *(__int64 **)v24;
    if ( *(char **)(*(_QWORD *)v24 + 8LL) != v24 || (v29 = *v28, *(__int64 **)(*v28 + 8) != v28) )
LABEL_127:
      __fastfail(3u);
    *(_QWORD *)v24 = v29;
    *(_QWORD *)(v29 + 8) = v24;
    *(_QWORD *)v25 = 0LL;
    *((_QWORD *)v26 + 2) = 0LL;
    v9 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
           v7,
           *((struct VIDMM_VAD **)a2 + 14),
           *((_DWORD *)a2 + 4),
           0LL,
           v26);
    if ( v9 < 0 )
    {
LABEL_124:
      WdLogSingleEntry0(3LL);
      VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe((volatile signed __int32 *)v26, v7);
      goto LABEL_106;
    }
    v16 = *v96;
    v89 = *v96;
LABEL_86:
    Size = v87.Size;
    *((_DWORD *)a2 + 10) = 0;
    v19 = Size + 1;
    v87.Size = v19;
    if ( (unsigned int)v19 >= *((_DWORD *)a2 + 5) )
      goto LABEL_107;
    v18 = this;
  }
  v92 = *(struct _LIST_ENTRY **)(*((_QWORD *)a2 + 8) + 8LL * v20->Map.hAllocation);
  Flink = v92->Flink->Flink;
  if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(v18) )
  {
    VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(
      v56,
      v7[12],
      *(struct _VIDSCH_CONTEXT **)a2,
      (struct VIDMM_ALLOC *)v58,
      v20);
    v57 = Flink;
    v58 = v92;
  }
  v59 = 0LL;
  v60 = 0;
  AllocationOffsetInBytes = 0LL;
  *(_OWORD *)v98 = 0LL;
  v61 = HIDWORD(v58[1].Blink) & 3;
  v88 = 0;
  if ( v61 == 2 )
  {
    Blink = (VIDMM_SEGMENT *)v57[7].Blink;
    AllocationOffsetInBytes = v20->Map.AllocationOffsetInBytes;
    if ( (*((_DWORD *)Blink + 20) & 0x1001) != 0 )
    {
      v64 = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v57, 0LL);
      v65 = SysMmGetLogicalAddress(Flink[33].Flink);
      VidMmiInitializeAdlForMdl((struct _DXGK_ADL *)v98, v64, v65);
      v58 = v92;
      v60 = 0;
      v59 = AllocationOffsetInBytes;
      v88 = 0;
    }
    else
    {
      v63 = (DXGPUSHLOCK *)((unsigned __int64)v57[8].Flink >> 12);
      LODWORD(v98[0]) = LODWORD(v57[1].Flink) >> 12;
      v98[1] = v63;
      HIDWORD(v98[0]) = 1;
      v60 = VIDMM_SEGMENT::DriverId(Blink);
      v88 = v60;
    }
  }
  if ( (*((_BYTE *)this + 40937) & 0x10) != 0 )
    v66 = 1LL;
  else
    v66 = v20->Map.SizeInBytes / v20->Map.AllocationSizeInBytes;
  v67 = *((_DWORD *)a2 + 10);
  v93 = (_QWORD *)v66;
  v91 = v67;
  if ( v67 >= (unsigned int)v66 )
    goto LABEL_85;
  v68 = (char *)a2 + 96;
  while ( 1 )
  {
    *(_QWORD *)&v94 = *(_QWORD *)v68;
    v26 = (struct VIDMM_MAPPED_VA_RANGE *)(v94 - 8);
    v69 = (struct VIDMM_MAPPED_VA_RANGE *)(v94 - 8);
    if ( (HIDWORD(v58[1].Blink) & 3) == 2 )
      break;
    v70 = CVirtualAddressAllocator::UncommitVirtualAddressRange(
            (CVirtualAddressAllocator *)v7,
            v69,
            (struct VIDMM_ALLOC **)v108.pMetaData,
            0);
    v71 = *((_QWORD *)v26 + 12);
    v9 = v70;
    v72 = (void *)*((_QWORD *)v26 + 13);
    v73 = v71;
    if ( v3 < v71 )
      v73 = v3;
    v3 = v73;
    pMetaData = (void *)*((_QWORD *)v26 + 13);
    if ( v87.pMetaData > v72 )
      pMetaData = v87.pMetaData;
    v87.pMetaData = pMetaData;
    if ( v9 < 0 )
    {
      WdLogSingleEntry2(3LL, v71, v72);
      goto LABEL_106;
    }
LABEL_115:
    if ( *v96 != (struct _LIST_ENTRY *)v96 )
    {
      if ( (struct _LIST_ENTRY *)*((_QWORD *)v26 + 12) < v16[5].Blink )
        v16 = *v96;
      v89 = v16;
    }
    v76 = *(__int64 **)v68;
    if ( *(char **)(*(_QWORD *)v68 + 8LL) != v68 )
      goto LABEL_127;
    v77 = *v76;
    if ( *(__int64 **)(*v76 + 8) != v76 )
      goto LABEL_127;
    v78 = (_QWORD *)v94;
    *(_QWORD *)v68 = v77;
    *(_QWORD *)(v77 + 8) = v68;
    *((_QWORD *)v26 + 2) = 0LL;
    *v78 = 0LL;
    v9 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
           v7,
           *((struct VIDMM_VAD **)a2 + 14),
           *((_DWORD *)a2 + 4),
           &v89,
           v26);
    if ( v9 < 0 )
      goto LABEL_124;
    v58 = v92;
    v60 = v88;
    v59 = AllocationOffsetInBytes;
    v16 = v89->Blink;
    v89 = v16;
    *(_QWORD *)(*((_QWORD *)a2 + 14) + 24LL * (_QWORD)v97 + 112) = v16;
    if ( ++v91 >= (unsigned int)v93 )
      goto LABEL_86;
  }
  LOBYTE(v87.Type) = 0;
  v9 = CVirtualAddressAllocator::CommitVirtualAddressRange(
         (__int64)v7,
         (__int64)v69,
         HIDWORD(Flink[4].Flink) & 0x3F,
         v60,
         v59,
         (struct _DXGK_ADL *)v98,
         2,
         (DXGK_MULTIPLANE_OVERLAY_PLANE3 **)v108.pMetaData,
         &v87);
  if ( LOBYTE(v87.Type) )
  {
    v75 = *((_QWORD *)v26 + 12);
    if ( v3 < v75 )
      v75 = v3;
    v3 = v75;
    if ( v87.pMetaData <= (void *)*((_QWORD *)v26 + 13) )
      v87.pMetaData = (void *)*((_QWORD *)v26 + 13);
  }
  if ( v9 >= 0 )
    goto LABEL_115;
  WdLogSingleEntry3(3LL, *((_QWORD *)v26 + 12), *((_QWORD *)v26 + 13), 25889LL);
LABEL_106:
  LODWORD(v19) = v87.Size;
LABEL_107:
  if ( (void *)v3 < v87.pMetaData )
    CVirtualAddressAllocator::FlushGpuVaTlb(
      (CVirtualAddressAllocator *)v7,
      *((_DWORD *)a2 + 4),
      v3,
      (unsigned __int64)v87.pMetaData);
LABEL_131:
  if ( v9 == -1073741267 )
  {
    *((_DWORD *)a2 + 9) = v19;
    goto LABEL_141;
  }
LABEL_133:
  if ( *((_QWORD *)a2 + 9) )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(this, *((_DWORD *)a2 + 4), 0, 0LL, 0LL, 0, 0);
    v79 = *((unsigned int *)a2 + 4);
    v80 = *(_QWORD *)(*((_QWORD *)this + 2) + 744LL);
    *(_QWORD *)&v94 = *(_QWORD *)(*(_QWORD *)(v80 + 280) + 8 * v79);
    if ( (_QWORD)v94 )
    {
      v97 = (char *)*((_QWORD *)a2 + 9);
      *(_QWORD *)&v108.Type = *((_QWORD *)a2 + 10);
      if ( (int)VidSchSubmitSignalToHwQueue(1u, (__int64)&v94, 1u, &v97, 0x80000000, (unsigned __int64 *)&v108) < 0 )
      {
        WdLogSingleEntry1(1LL, 26210LL);
        goto LABEL_139;
      }
    }
    else
    {
      v106[0] = VidSchGetPagingContext(v80, v79);
      v105 = *((_QWORD *)a2 + 9);
      v104 = *((_QWORD *)a2 + 10);
      if ( (int)VidSchSignalSyncObjectsFromGpu(0, 0LL, 1, v106, 1u, (__int64)&v105, 0x80000000, &v104, 0) < 0 )
      {
        WdLogSingleEntry1(1LL, 26238LL);
LABEL_139:
        DxgkLogInternalTriageEvent(v81, 0x40000LL);
      }
    }
  }
  VIDMM_DEVICE_COMMAND_UPDATEGPUVA::`scalar deleting destructor'(a2);
LABEL_141:
  v82 = 0;
  if ( !v109 )
    v82 = v9;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v100);
  if ( v102 )
  {
    LOBYTE(v83) = byte_1C00769C1;
    if ( byte_1C00769C1 < 0 )
      McTemplateK0q_EtwWriteTransfer(v83, &EventProfilerExit, v84, v100);
  }
  return v82;
}
