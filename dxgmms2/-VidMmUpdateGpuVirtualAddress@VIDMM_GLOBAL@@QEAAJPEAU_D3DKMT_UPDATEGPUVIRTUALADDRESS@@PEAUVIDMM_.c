__int64 __fastcall VIDMM_GLOBAL::VidMmUpdateGpuVirtualAddress(
        VIDMM_GLOBAL *this,
        struct _D3DKMT_UPDATEGPUVIRTUALADDRESS *a2,
        struct VIDMM_COMPANION_CONTEXT *a3,
        int a4,
        struct _VIDMM_MULTI_ALLOC **a5,
        struct _VIDSCH_SYNC_OBJECT *a6,
        struct _KSEMAPHORE **a7)
{
  VIDMM_GLOBAL *v7; // rdi
  struct VIDMM_COMPANION_CONTEXT *v8; // rbx
  struct _D3DKMT_UPDATEGPUVIRTUALADDRESS *v9; // r13
  __int64 v11; // r12
  __int64 v12; // r9
  unsigned int *p_NumOperations; // r15
  char *v14; // r14
  __int64 v15; // rax
  unsigned __int64 *v16; // rdx
  VIDMM_GLOBAL *v17; // rcx
  __int64 v18; // r8
  struct _VIDSCH_CONTEXT *v19; // r9
  unsigned int v20; // r11d
  UINT v21; // ecx
  unsigned int v22; // edi
  struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v23; // r15
  __int64 v24; // r12
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION_TYPE OperationType; // eax
  unsigned __int64 BaseAddress; // r13
  VIDMM_GLOBAL *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rcx
  _QWORD *v33; // rax
  VIDMM_GLOBAL *v34; // rcx
  unsigned __int8 v35; // al
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  VIDMM_GLOBAL *v38; // rcx
  VIDMM_GLOBAL *v39; // r10
  struct VIDMM_ALLOC *v40; // r11
  D3DGPU_SIZE_T AllocationSizeInBytes; // r8
  unsigned __int64 AllocationOffsetInBytes; // rbx
  D3DGPU_SIZE_T SizeInBytes; // rax
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rcx
  __int64 Value; // rbx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // r9
  _QWORD *v51; // rcx
  _QWORD *v52; // rax
  bool v53; // cf
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rax
  unsigned __int64 *v56; // r8
  int v57; // ebx
  __int64 v58; // rcx
  char *v59; // rax
  UINT *v60; // rax
  struct VIDMM_VAD *v61; // rdi
  struct VIDMM_VAD *v62; // r8
  char *v63; // rcx
  struct VIDMM_VAD *v64; // rax
  struct VIDMM_VAD **v65; // rdx
  char **v66; // rdx
  __int128 *v67; // rcx
  char *v68; // rbx
  bool v69; // zf
  __int64 v70; // rdx
  _DWORD *v71; // r9
  _QWORD *v72; // r14
  __int64 i; // r8
  VIDMM_GLOBAL *v74; // rcx
  _QWORD *v75; // rax
  __int64 v76; // rcx
  PLARGE_INTEGER Timeout; // [rsp+28h] [rbp-E0h]
  int v78; // [rsp+68h] [rbp-A0h]
  char v79; // [rsp+6Ch] [rbp-9Ch]
  __int128 v80; // [rsp+70h] [rbp-98h] BYREF
  int v81; // [rsp+80h] [rbp-88h]
  unsigned __int64 v82; // [rsp+88h] [rbp-80h]
  int v83; // [rsp+90h] [rbp-78h]
  unsigned int v84; // [rsp+94h] [rbp-74h]
  __int64 v85; // [rsp+98h] [rbp-70h]
  unsigned __int64 v86; // [rsp+A0h] [rbp-68h]
  D3DGPU_SIZE_T v87; // [rsp+A8h] [rbp-60h]
  UINT *v88; // [rsp+B0h] [rbp-58h]
  unsigned __int64 *p_FenceValue; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v90; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v91; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v92; // [rsp+D0h] [rbp-38h]
  unsigned __int64 v93; // [rsp+D8h] [rbp-30h]
  unsigned __int64 v94; // [rsp+E0h] [rbp-28h]
  UINT64 DriverProtection; // [rsp+E8h] [rbp-20h]
  struct _VIDMM_MULTI_ALLOC *v96; // [rsp+F0h] [rbp-18h]
  __int64 v97; // [rsp+F8h] [rbp-10h]
  __int64 v98; // [rsp+100h] [rbp-8h]
  union _LARGE_INTEGER v99; // [rsp+108h] [rbp+0h] BYREF
  __int64 v100; // [rsp+110h] [rbp+8h]
  struct VIDMM_VAD *v101; // [rsp+118h] [rbp+10h]
  PRKSEMAPHORE Semaphore; // [rsp+120h] [rbp+18h]
  char v103[8]; // [rsp+128h] [rbp+20h] BYREF
  DXGPUSHLOCK *v104; // [rsp+130h] [rbp+28h]
  int v105; // [rsp+138h] [rbp+30h]
  _QWORD v106[18]; // [rsp+148h] [rbp+40h] BYREF
  bool v111; // [rsp+218h] [rbp+110h]

  v7 = this;
  v99.QuadPart = 0LL;
  v8 = a3;
  Semaphore = (PRKSEMAPHORE)((char *)a3 + 24);
  v9 = a2;
  *a7 = (struct _KSEMAPHORE *)((char *)a3 + 24);
  if ( KeWaitForSingleObject((char *)a3 + 24, Executive, 0, 0, &v99) == 258 )
  {
    WdLogSingleEntry0(3LL);
    return 3223191810LL;
  }
  v11 = *(_QWORD *)v8;
  v12 = *((_QWORD *)v8 + 1);
  p_NumOperations = &v9->NumOperations;
  v85 = v11;
  v78 = -1073741811;
  v14 = 0LL;
  v86 = *(_QWORD *)(v11 + 16);
  v15 = *(_QWORD *)(v12 + 96);
  v101 = 0LL;
  v90 = 0LL;
  v92 = 0LL;
  v81 = *(unsigned __int16 *)(v15 + 6);
  *((_QWORD *)&v80 + 1) = &v80;
  *(_QWORD *)&v80 = &v80;
  v91 = -1LL;
  v93 = -1LL;
  v79 = 0;
  p_FenceValue = &v9->FenceValue;
  v88 = &v9->NumOperations;
  if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(v7) )
  {
    VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVa(
      v17,
      1u,
      *(struct VIDMM_PROCESS **)(v11 + 96),
      v19,
      *p_NumOperations,
      a6,
      *v16);
    v16 = &v9->FenceValue;
    v20 = 0;
  }
  else
  {
    p_FenceValue = v16;
    v88 = &v9->NumOperations;
  }
  if ( bTracingEnabled != (_BYTE)v20 && (byte_1C00769C2 & 0x20) != 0 )
  {
    McTemplateK0qqqqqxpp_EtwWriteTransfer(
      (__int64)v17,
      (__int64)v16,
      v18,
      v9->hDevice,
      v9->hContext,
      v9->hFenceObject,
      *p_NumOperations,
      v9->Flags.Value,
      *v16,
      (char)a6,
      *((_QWORD *)v8 + 1));
    v20 = 0;
  }
  v21 = v20;
  v84 = v20;
  if ( *p_NumOperations <= v20 )
  {
LABEL_71:
    if ( (v9->Flags.Value & 1) == 0 )
    {
      v56 = p_FenceValue;
      *((_BYTE *)a6 + 25) = v20;
      v57 = VidSchWaitForSingleSyncObject(*((_QWORD *)v8 + 1), (__int64)a6, *v56);
      if ( v57 < 0 )
      {
        WdLogSingleEntry1(1LL, 26672LL);
        HIDWORD(Timeout) = 0;
        DxgkLogInternalTriageEvent(v58, 0x40000LL);
        v22 = 16;
        goto LABEL_113;
      }
    }
    v59 = (char *)operator new(184LL, 0x39346956u, 256LL);
    v14 = v59;
    if ( !v59 )
    {
      v14 = 0LL;
      WdLogSingleEntry0(3LL);
      v57 = -1073741801;
      v22 = 17;
      goto LABEL_113;
    }
    memset(v59, 0, 0xB8uLL);
    *((_QWORD *)v14 + 13) = v14 + 96;
    *((_QWORD *)v14 + 12) = v14 + 96;
    *((_QWORD *)v14 + 7) = v14 + 48;
    *((_QWORD *)v14 + 6) = v14 + 48;
    v60 = v88;
    *((_QWORD *)v14 + 1) = v7;
    *((_DWORD *)v14 + 5) = *v60;
    *((_QWORD *)v14 + 10) = *p_FenceValue + 1;
    *((_DWORD *)v14 + 4) = v81;
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v103, (struct _KTHREAD **)(v11 + 56), 0);
    DXGPUSHLOCK::AcquireExclusive(v104);
    v105 = 2;
    v61 = CVirtualAddressAllocator::ReferenceReservedZeroVad((CVirtualAddressAllocator *)v11, v91, v90);
    if ( !v61 )
    {
      WdLogSingleEntry0(3LL);
      v22 = 18;
LABEL_91:
      v57 = -1073741811;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v103);
      goto LABEL_113;
    }
    if ( v79 )
    {
      v62 = CVirtualAddressAllocator::ReferenceReservedZeroVad((CVirtualAddressAllocator *)v11, v93, v92);
      if ( !v62 )
      {
        WdLogSingleEntry0(3LL);
        v22 = 19;
        goto LABEL_91;
      }
    }
    else
    {
      v62 = v101;
    }
    *((_QWORD *)v14 + 14) = v61;
    *((_QWORD *)v14 + 18) = v14 + 112;
    v63 = (char *)v61 + 80;
    *((_QWORD *)v14 + 15) = v62;
    *((_QWORD *)v14 + 21) = v14 + 120;
    v64 = (struct VIDMM_VAD *)(v14 + 128);
    v65 = (struct VIDMM_VAD **)*((_QWORD *)v61 + 11);
    if ( *v65 == (struct VIDMM_VAD *)((char *)v61 + 80) )
    {
      *(_QWORD *)v64 = v63;
      *((_QWORD *)v14 + 17) = v65;
      *v65 = v64;
      *((_QWORD *)v61 + 11) = v64;
      if ( !v62 )
        goto LABEL_100;
      v66 = (char **)(v14 + 152);
      if ( *(char **)v64 == v63 )
      {
        *v66 = v63;
        *((_QWORD *)v14 + 20) = v64;
        *(_QWORD *)v64 = v66;
        *((_QWORD *)v61 + 11) = v66;
        v14[176] = 1;
LABEL_100:
        v67 = (__int128 *)v80;
        v68 = v14;
        while ( v67 != &v80 )
        {
          v69 = *((_QWORD *)v67 + 9) == 0LL;
          *((_QWORD *)v67 - 1) = v61;
          if ( v69 )
          {
            v70 = *((_QWORD *)v61 + 12);
            if ( (struct VIDMM_VAD *)v70 != (struct VIDMM_VAD *)((char *)v61 + 96) )
              *((_QWORD *)v67 + 9) = *(_QWORD *)(v70 + 72);
          }
          v67 = *(__int128 **)v67;
        }
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v103);
        v71 = v14 + 32;
        v72 = v14 + 96;
        *((_QWORD *)v68 + 8) = a5;
        *((_DWORD *)v68 + 8) = a4;
        *((_QWORD *)v68 + 3) = v9->Operations;
        v9->Operations = 0LL;
        *((_QWORD *)v68 + 9) = a6;
        *((_QWORD *)v68 + 11) = a3;
        *(_QWORD *)v68 = *((_QWORD *)a3 + 1);
        if ( (__int128 *)v80 == &v80 )
        {
          v72[1] = v72;
          *v72 = v72;
        }
        else
        {
          *(_OWORD *)v72 = v80;
          *(_QWORD *)(*v72 + 8LL) = v72;
          **((_QWORD **)v68 + 13) = v72;
        }
        *((_QWORD *)&v80 + 1) = &v80;
        *(_QWORD *)&v80 = &v80;
        _InterlockedIncrement((volatile signed __int32 *)a6 + 9);
        for ( i = 0LL; (unsigned int)i < *v71; i = (unsigned int)(i + 1) )
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)v68 + 8) + 8 * i) + 160LL));
        memset(v106, 0, 0x50uLL);
        v106[4] = 0LL;
        v106[6] = v68;
        LODWORD(v106[5]) = 2;
        LODWORD(v106[0]) = 2;
        v106[3] = VIDMM_GLOBAL::VidMmiUpdateGpuVirtualAddress;
        VidSchSubmitGlobalCommand(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 1) + 104LL) + 32LL), (__int64)v106);
        return 0LL;
      }
    }
LABEL_123:
    __fastfail(3u);
  }
  v22 = 8;
  while ( 1 )
  {
    v23 = &v9->Operations[(unsigned __int64)v21];
    v24 = v21;
    OperationType = v23->OperationType;
    if ( v23->OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP
      || OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP_PROTECT )
    {
      break;
    }
    if ( OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_UNMAP )
    {
      BaseAddress = v23->Map.BaseAddress;
      v82 = BaseAddress + v23->Map.SizeInBytes;
      if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(this) )
        VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(
          v27,
          *(struct VIDMM_PROCESS **)(v85 + 96),
          *((struct _VIDSCH_CONTEXT **)v8 + 1),
          0LL,
          v23);
      if ( !IsRangeValid(BaseAddress, v82, v86) )
        goto LABEL_75;
      v30 = operator new(136LL, 0x39346956u, 256LL);
      if ( !v30
        || (v31 = VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                    v30,
                    0LL,
                    BaseAddress,
                    v82,
                    v81,
                    0LL,
                    0LL,
                    (v23->Unmap.Protection.Value & 8) == 0 ? 6 : 0,
                    v23->Unmap.Protection.Value,
                    0LL,
                    0LL,
                    0LL)) == 0 )
      {
        WdLogSingleEntry1(3LL, 26581LL);
        v22 = 9;
        goto LABEL_75;
      }
      v32 = (_QWORD *)*((_QWORD *)&v80 + 1);
      v33 = (_QWORD *)(v31 + 8);
      if ( **((__int128 ***)&v80 + 1) != &v80 )
        goto LABEL_123;
      v33[1] = *((_QWORD *)&v80 + 1);
      *v33 = &v80;
      *v32 = v33;
      *((_QWORD *)&v80 + 1) = v33;
    }
    else
    {
      if ( OperationType != D3DDDI_UPDATEGPUVIRTUALADDRESS_COPY )
        goto LABEL_82;
      BaseAddress = v23->Unmap.Protection.Value;
      v82 = BaseAddress + v23->Map.SizeInBytes;
      if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(this) )
        VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(
          v34,
          *(struct VIDMM_PROCESS **)(v85 + 96),
          *((struct _VIDSCH_CONTEXT **)v8 + 1),
          0LL,
          v23);
      v35 = IsRangeValid(BaseAddress, v82, v86);
      LOBYTE(v20) = 0;
      if ( !v35 )
      {
        v22 = 10;
        goto LABEL_75;
      }
      v36 = v23->Map.BaseAddress;
      v37 = v36 + v23->Map.SizeInBytes;
      if ( v37 <= v36 )
      {
        WdLogSingleEntry2(3LL, v24, 26608LL);
        v22 = 11;
        goto LABEL_75;
      }
      if ( (v36 & 0xFFF) != 0 || (v37 & 0xFFF) != 0 )
      {
        WdLogSingleEntry2(3LL, v24, 26614LL);
        v22 = 12;
        goto LABEL_75;
      }
      if ( BaseAddress < v37 && v82 > v36 )
      {
        WdLogSingleEntry2(3LL, v24, 26621LL);
        v22 = 13;
        goto LABEL_75;
      }
      v79 = 1;
      if ( v93 <= v36 )
        v36 = v93;
      v93 = v36;
      if ( v92 >= v37 )
        v37 = v92;
      v92 = v37;
    }
LABEL_63:
    if ( v82 <= BaseAddress )
    {
LABEL_82:
      WdLogSingleEntry2(3LL, v24, 26642LL);
      v22 = 14;
      goto LABEL_75;
    }
    if ( ((BaseAddress | v82) & 0xFFF) != 0 )
    {
      WdLogSingleEntry2(3LL, v24, 26648LL);
      v22 = 15;
      goto LABEL_75;
    }
    v54 = v91;
    if ( v91 > BaseAddress )
      v54 = BaseAddress;
    v9 = a2;
    v91 = v54;
    v55 = v90;
    if ( v90 < v82 )
      v55 = v82;
    v21 = v84 + 1;
    v90 = v55;
    v84 = v21;
    if ( v21 >= *v88 )
    {
      v7 = this;
      v11 = v85;
      goto LABEL_71;
    }
  }
  BaseAddress = v23->Map.BaseAddress;
  v82 = BaseAddress + v23->Map.SizeInBytes;
  if ( !IsRangeValid(BaseAddress, v82, v86) )
  {
    v22 = 1;
    goto LABEL_75;
  }
  v96 = a5[v23->Map.hAllocation];
  if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(this) )
  {
    VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(
      v38,
      *(struct VIDMM_PROCESS **)(v85 + 96),
      *((struct _VIDSCH_CONTEXT **)v8 + 1),
      v40,
      v23);
    v39 = this;
    v40 = v96;
  }
  AllocationSizeInBytes = v23->Map.AllocationSizeInBytes;
  if ( (AllocationSizeInBytes & 0xFFF) != 0
    || (AllocationOffsetInBytes = v23->Map.AllocationOffsetInBytes,
        v94 = AllocationOffsetInBytes,
        (AllocationOffsetInBytes & 0xFFF) != 0) )
  {
    WdLogSingleEntry2(3LL, v24, 26448LL);
    v22 = 2;
    goto LABEL_75;
  }
  SizeInBytes = v23->Map.SizeInBytes;
  v87 = SizeInBytes;
  if ( AllocationSizeInBytes )
  {
    if ( AllocationSizeInBytes > SizeInBytes )
    {
      WdLogSingleEntry1(3LL, v24);
      v22 = 3;
      goto LABEL_75;
    }
    if ( SizeInBytes % AllocationSizeInBytes )
    {
      WdLogSingleEntry2(3LL, v24, 26473LL);
      v22 = 4;
      goto LABEL_75;
    }
    SizeInBytes = v87;
  }
  else
  {
    v23->Map.AllocationSizeInBytes = SizeInBytes;
    AllocationSizeInBytes = SizeInBytes;
  }
  if ( AllocationSizeInBytes + AllocationOffsetInBytes < AllocationOffsetInBytes
    || AllocationSizeInBytes + AllocationOffsetInBytes > *(_QWORD *)(**(_QWORD **)v40 + 16LL) )
  {
    WdLogSingleEntry3(3LL, *(_QWORD *)(**(_QWORD **)v40 + 16LL), v24, 26485LL);
    v22 = 5;
    goto LABEL_75;
  }
  if ( (*((_BYTE *)v39 + 40937) & 0x10) != 0 )
  {
    LODWORD(v44) = 1;
    v98 = 1LL;
    v111 = SizeInBytes != AllocationSizeInBytes;
    LOBYTE(v20) = 0;
  }
  else
  {
    LOBYTE(v20) = 0;
    v111 = 0;
    v44 = SizeInBytes / AllocationSizeInBytes;
    v98 = v44;
    v94 = 0LL;
    SizeInBytes = AllocationSizeInBytes;
    v87 = AllocationSizeInBytes;
    if ( v44 >= 0xFFFFFFFF )
    {
      WdLogSingleEntry2(3LL, v24, 26509LL);
      v22 = 6;
      goto LABEL_75;
    }
  }
  v45 = BaseAddress;
  DriverProtection = 0LL;
  v97 = BaseAddress;
  if ( v23->OperationType )
  {
    Value = v23->MapProtect.Protection.Value;
    DriverProtection = v23->MapProtect.DriverProtection;
  }
  else
  {
    Value = 1LL;
  }
  v83 = 0;
  if ( !(_DWORD)v44 )
  {
LABEL_62:
    v8 = a3;
    goto LABEL_63;
  }
  while ( 1 )
  {
    v100 = v45 + SizeInBytes;
    v47 = operator new(136LL, 0x39346956u, 256LL);
    if ( !v47 )
      break;
    v48 = v111 ? v23->Map.AllocationSizeInBytes >> 12 : 0LL;
    v49 = VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
            v47,
            0LL,
            v97,
            v100,
            v81,
            (__int64)v96,
            v23->Map.AllocationOffsetInBytes,
            1,
            Value,
            DriverProtection,
            v48,
            v94);
    if ( !v49 )
      break;
    v51 = (_QWORD *)*((_QWORD *)&v80 + 1);
    v52 = (_QWORD *)(v49 + 8);
    if ( **((__int128 ***)&v80 + 1) != &v80 )
      goto LABEL_123;
    v52[1] = *((_QWORD *)&v80 + 1);
    *v52 = &v80;
    *v51 = v52;
    v45 = v50;
    *((_QWORD *)&v80 + 1) = v52;
    v97 = v50;
    v53 = ++v83 < (unsigned int)v98;
    SizeInBytes = v87;
    if ( !v53 )
      goto LABEL_62;
  }
  WdLogSingleEntry1(3LL, 26543LL);
  v22 = 7;
LABEL_75:
  v57 = v78;
LABEL_113:
  if ( (byte_1C00769C2 & 0x20) != 0 )
  {
    LODWORD(Timeout) = v22;
    McTemplateK0qq_EtwWriteTransfer(v28, &UpdateGpuVirtualAddressFailure, v29, v57, (__int64)Timeout);
  }
  if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(this) )
    VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaFailure(v74, *(struct VIDMM_PROCESS **)(v85 + 96), v57, v22);
  KeReleaseSemaphore(Semaphore, 0, 1, 0);
  if ( v14 )
    VIDMM_DEVICE_COMMAND_UPDATEGPUVA::`scalar deleting destructor'((VIDMM_DEVICE_COMMAND_UPDATEGPUVA *)v14);
  while ( 1 )
  {
    v75 = (_QWORD *)v80;
    if ( (__int128 *)v80 == &v80 )
      return (unsigned int)v57;
    if ( *(__int128 **)(v80 + 8) != &v80 )
      goto LABEL_123;
    v76 = *(_QWORD *)v80;
    if ( *(_QWORD *)(*(_QWORD *)v80 + 8LL) != (_QWORD)v80 )
      goto LABEL_123;
    *(_QWORD *)&v80 = *(_QWORD *)v80;
    *(_QWORD *)(v76 + 8) = &v80;
    v75[1] = 0LL;
    *v75 = 0LL;
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)(v75 - 1), (unsigned int)&v80);
  }
}
