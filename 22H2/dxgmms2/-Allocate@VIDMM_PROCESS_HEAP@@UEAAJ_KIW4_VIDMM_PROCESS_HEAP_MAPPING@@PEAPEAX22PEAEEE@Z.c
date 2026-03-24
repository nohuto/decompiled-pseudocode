/*
 * XREFs of ?Allocate@VIDMM_PROCESS_HEAP@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C00CA400
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0005710 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0017928 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     memset @ 0x1C0018D80 (memset.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024D70 (McTemplateK0q_EtwWriteTransfer.c)
 *     ExAllocateFromPagedLookasideList @ 0x1C0026034 (ExAllocateFromPagedLookasideList.c)
 *     ExFreeToPagedLookasideList @ 0x1C0026078 (ExFreeToPagedLookasideList.c)
 *     McTemplateK0pxqqt_EtwWriteTransfer @ 0x1C0027F6C (McTemplateK0pxqqt_EtwWriteTransfer.c)
 *     McTemplateK0qpxp_EtwWriteTransfer @ 0x1C0028014 (McTemplateK0qpxp_EtwWriteTransfer.c)
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C00CAFF0 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAE.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::Allocate(
        __int64 a1,
        ULONG_PTR a2,
        __int64 a3,
        ULONG a4,
        _QWORD *a5,
        _QWORD *a6,
        __int64 a7,
        PPAGED_LOOKASIDE_LIST Lookaside,
        char a9)
{
  __int64 v10; // r14
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // r8
  ULONG AllocationType; // r15d
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // r13
  _QWORD *v21; // rcx
  ULONG_PTR v22; // rdx
  PPAGED_LOOKASIDE_LIST v23; // r12
  __int64 v24; // rbx
  _DWORD *v25; // rax
  __int64 v26; // rcx
  _DWORD *v27; // r14
  __int64 v28; // rax
  ULONG v29; // ebx
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v33; // ecx
  __int64 v34; // rcx
  NTSTATUS inserted; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  NTSTATUS v40; // eax
  __int64 v41; // rcx
  PVOID v42; // rcx
  _QWORD *v43; // rcx
  void *v44; // rax
  PVOID v45; // rax
  _QWORD *v46; // rcx
  PVOID v47; // rcx
  PVOID v48; // rdx
  PVOID v49; // r9
  __int64 v50; // r8
  __int64 v51; // rcx
  __int64 v52; // r8
  ULONG Protect[2]; // [rsp+28h] [rbp-58h]
  __int64 v55; // [rsp+30h] [rbp-50h]
  __int64 v56; // [rsp+38h] [rbp-48h]
  PVOID BaseAddress; // [rsp+40h] [rbp-40h] BYREF
  PVOID Object; // [rsp+48h] [rbp-38h] BYREF
  void *Handle; // [rsp+50h] [rbp-30h] BYREF
  HANDLE v60; // [rsp+58h] [rbp-28h]
  int v61; // [rsp+60h] [rbp-20h] BYREF
  __int64 v62; // [rsp+68h] [rbp-18h]
  char v63; // [rsp+70h] [rbp-10h]
  ULONG v64; // [rsp+C0h] [rbp+40h]
  ULONG_PTR RegionSize; // [rsp+C8h] [rbp+48h] BYREF

  RegionSize = a2;
  v61 = -1;
  v10 = (unsigned int)a3;
  v62 = 0LL;
  if ( (qword_1C0050010 & 2) != 0 )
  {
    v63 = 1;
    v61 = 8004;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 8004);
  }
  else
  {
    v63 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  AllocationType = 0;
  BaseAddress = 0LL;
  Object = 0LL;
  Handle = 0LL;
  v64 = 0;
  v60 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v13);
    v13[3] = RegionSize;
    v13[4] = v10;
    v13[5] = a1;
  }
  v16 = **(_QWORD **)(a1 + 8);
  if ( PsGetCurrentProcess(v13, v12, v14) != v16 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v17);
    v19[3] = 270LL;
    v19[4] = 30LL;
    v19[5] = 0LL;
    v19[6] = 0LL;
    v19[7] = 0LL;
    WdLogEvent5_WdCriticalError(v19);
  }
  v20 = a5;
  v21 = a6;
  v22 = RegionSize;
  *a5 = 0LL;
  *v21 = 0LL;
  v23 = Lookaside;
  LOBYTE(Lookaside->L.ListHead.Alignment) = 0;
  if ( v22 < (unsigned int)dword_1C0050338 )
  {
    LODWORD(v24) = VIDMM_PROCESS_HEAP::AllocateSmallAllocation(a1, v22, (unsigned int)v10, a4, v20, v21, v23, a9);
    goto LABEL_67;
  }
  Lookaside = (PPAGED_LOOKASIDE_LIST)(a1 + 64);
  v25 = ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)(a1 + 64));
  v27 = v25;
  if ( !v25 )
  {
    LODWORD(v24) = -1073741801;
    _InterlockedIncrement(&dword_1C00506C4);
    v28 = WdLogNewEntry5_WdLowResource(v26);
    *(_QWORD *)(v28 + 24) = 340LL;
LABEL_36:
    WdLogEvent5_WdLowResource(v28);
LABEL_37:
    if ( a4 - 3 > 1 )
    {
      if ( a4 == 5 )
        goto LABEL_43;
      if ( a4 != 6 )
      {
        if ( BaseAddress )
          ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
LABEL_49:
        if ( v27 )
          ExFreeToPagedLookasideList(Lookaside, v27);
        goto LABEL_67;
      }
    }
    if ( a4 - 5 > 1 )
    {
LABEL_45:
      v42 = Object;
      if ( Object )
      {
        if ( Handle )
        {
          ObCloseHandle(Handle, ((unsigned __int64)Handle & 0xFFFFFFFF80000000uLL) == 0);
          v42 = Object;
        }
        ObfDereferenceObject(v42);
      }
      goto LABEL_49;
    }
LABEL_43:
    if ( BaseAddress )
      MmUnmapViewInSystemSpace(BaseAddress);
    goto LABEL_45;
  }
  memset(v25, 0, 0x70uLL);
  if ( a4 == 3 )
    goto LABEL_27;
  if ( a4 == 4 )
    goto LABEL_28;
  if ( a4 - 5 <= 1 )
  {
LABEL_27:
    v33 = 1208221696;
    if ( ((a4 - 4) & 0xFFFFFFFD) != 0 )
    {
LABEL_29:
      a5 = (_QWORD *)RegionSize;
      LODWORD(v24) = MmCreateSection(&Object, 0LL, 0LL, &a5, 4, v33, -1LL, 0LL);
      if ( (int)v24 < 0 )
      {
        Object = 0LL;
        _InterlockedIncrement(&dword_1C0050778);
        v28 = WdLogNewEntry5_WdLowResource(v34);
        *(_QWORD *)(v28 + 24) = 378LL;
        goto LABEL_36;
      }
      ObfReferenceObject(Object);
      inserted = ObInsertObject(Object, 0LL, 0, 0, 0LL, &Handle);
      v24 = inserted;
      if ( inserted < 0 )
      {
        v39 = WdLogNewEntry5_WdAssertion(v37, v36, v38);
        *(_QWORD *)(v39 + 24) = Object;
        *(_QWORD *)(v39 + 32) = v24;
        WdLogEvent5_WdAssertion(v39);
        goto LABEL_37;
      }
      if ( a4 - 5 <= 1 )
      {
        v40 = MmMapViewInSystemSpace(Object, &BaseAddress, &RegionSize);
        v24 = v40;
        if ( v40 < 0 )
        {
          _InterlockedIncrement(&dword_1C0050774);
          v28 = WdLogNewEntry5_WdLowResource(v41);
          *(_QWORD *)(v28 + 24) = v24;
          goto LABEL_36;
        }
      }
      goto LABEL_51;
    }
LABEL_28:
    v33 = 134479872;
    goto LABEL_29;
  }
  v29 = 4;
  if ( a4 != 2 )
    v29 = 1028;
  v30 = 12288;
  v64 = v29;
  if ( a4 != 2 )
    v30 = 8400896;
  AllocationType = v30 | 0x800000;
  if ( !a9 )
    AllocationType = v30;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, AllocationType, v29) < 0 )
  {
    AllocationType &= ~0x800000u;
    LODWORD(v24) = ZwAllocateVirtualMemory(
                     (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                     &BaseAddress,
                     0LL,
                     &RegionSize,
                     AllocationType,
                     v29);
    if ( (int)v24 < 0 )
    {
      BaseAddress = 0LL;
      _InterlockedIncrement(&dword_1C0050750);
      v28 = WdLogNewEntry5_WdLowResource(v31);
      *(_QWORD *)(v28 + 24) = 460LL;
      goto LABEL_36;
    }
  }
  v60 = MmSecureVirtualMemory(BaseAddress, RegionSize, 4u);
  if ( !v60 )
  {
    LODWORD(v24) = -1073741801;
    _InterlockedIncrement(&dword_1C0050750);
    v28 = WdLogNewEntry5_WdLowResource(v32);
    *(_QWORD *)(v28 + 24) = 478LL;
    goto LABEL_36;
  }
LABEL_51:
  *v27 |= 1u;
  v43 = a6;
  *((_QWORD *)v27 + 7) = RegionSize;
  *((_QWORD *)v27 + 6) = v60;
  *((_BYTE *)v27 + 72) = 0;
  *((_QWORD *)v27 + 1) = BaseAddress;
  v27[4] = v64;
  v27[5] = AllocationType;
  *((_QWORD *)v27 + 4) = Object;
  v44 = Handle;
  *((_QWORD *)v27 + 10) = 0LL;
  *((_QWORD *)v27 + 5) = v44;
  v27[6] = a4;
  v45 = BaseAddress;
  *v20 = v27;
  *v43 = v45;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL) += RegionSize;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 144LL) += RegionSize;
  ++*(_DWORD *)(*(_QWORD *)(a1 + 8) + 156LL);
  v46 = *(_QWORD **)(a1 + 8);
  if ( a4 == 1 )
  {
    v46[20] += RegionSize;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL) += RegionSize;
  }
  else if ( a4 == 2 )
  {
    v46[22] += RegionSize;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 184LL) += RegionSize;
  }
  else
  {
    v46[24] += RegionSize;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 200LL) += RegionSize;
  }
  if ( bTracingEnabled )
  {
    v47 = BaseAddress;
    v48 = Object;
    v49 = BaseAddress;
    if ( a4 - 3 <= 3 )
      v49 = Object;
    v50 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    {
      LODWORD(v56) = 0;
      LODWORD(v55) = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
      Protect[0] = a4;
      McTemplateK0pxqqt_EtwWriteTransfer(
        (__int64)BaseAddress,
        &EventCreateProcessAllocation,
        v50,
        v49,
        RegionSize,
        *(_QWORD *)Protect,
        v55,
        v56);
      v47 = BaseAddress;
      v48 = Object;
    }
    if ( bTracingEnabled )
    {
      if ( a4 - 3 <= 3 )
        v47 = v48;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        McTemplateK0qpxp_EtwWriteTransfer(
          (__int64)v47,
          &EventCreateProcessAllocationDetails,
          v50,
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL),
          (char)v27,
          RegionSize,
          (char)v47);
    }
  }
  LOBYTE(v23->L.ListHead.Alignment) = 1;
  LODWORD(v24) = 0;
LABEL_67:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v61);
  if ( v63 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v51, &EventProfilerExit, v52, v61);
  return (unsigned int)v24;
}
