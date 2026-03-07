// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_PROCESS_HEAP::Allocate(
        __int64 a1,
        SIZE_T a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        _QWORD *a6,
        __int64 a7,
        PPAGED_LOOKASIDE_LIST Lookaside,
        char a9)
{
  __int64 v10; // rdi
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // r13
  _QWORD *v17; // rcx
  PPAGED_LOOKASIDE_LIST v18; // r12
  SIZE_T v19; // rdx
  unsigned int SmallAllocation; // ebx
  __int64 v21; // rcx
  __int64 v22; // r8
  _DWORD *v24; // rax
  _DWORD *v25; // r14
  __int64 v26; // rdi
  __int64 v27; // rcx
  int v28; // eax
  int v29; // edi
  int v30; // eax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v31; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rcx
  int v35; // ecx
  NTSTATUS inserted; // eax
  __int64 v37; // rdx
  NTSTATUS v38; // eax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  PVOID v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // r8
  _QWORD *v43; // rcx
  PVOID v44; // rax
  _QWORD *v45; // rcx
  PVOID v46; // rcx
  PVOID v47; // rdx
  PVOID v48; // r9
  __int64 v49; // r8
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 NewObject; // [rsp+20h] [rbp-69h]
  PHANDLE Handle; // [rsp+28h] [rbp-61h]
  PHANDLE Handlea; // [rsp+28h] [rbp-61h]
  __int64 v55; // [rsp+30h] [rbp-59h]
  __int64 v56; // [rsp+38h] [rbp-51h]
  int v57; // [rsp+50h] [rbp-39h]
  PVOID Address; // [rsp+58h] [rbp-31h] BYREF
  PVOID Object; // [rsp+60h] [rbp-29h] BYREF
  HANDLE v60; // [rsp+68h] [rbp-21h] BYREF
  HANDLE v61; // [rsp+70h] [rbp-19h]
  int v62; // [rsp+78h] [rbp-11h] BYREF
  __int64 v63; // [rsp+80h] [rbp-9h]
  char v64; // [rsp+88h] [rbp-1h]
  int v65; // [rsp+D0h] [rbp+47h]
  SIZE_T Size; // [rsp+D8h] [rbp+4Fh] BYREF

  Size = a2;
  v62 = -1;
  v10 = (unsigned int)a3;
  v63 = 0LL;
  if ( (qword_1C0076010 & 2) != 0 )
  {
    v64 = 1;
    v62 = 8004;
    if ( byte_1C00769C1 < 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 8004);
  }
  else
  {
    v64 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  Address = 0LL;
  Object = 0LL;
  v60 = 0LL;
  v65 = 0;
  v57 = 0;
  v61 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v13);
    v13[3] = Size;
    v13[4] = v10;
    v13[5] = a1;
  }
  if ( PsGetCurrentProcess(v13, v12, v14, v15) != **(_QWORD **)(a1 + 8) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 30LL, 0LL, 0LL, 0LL);
  }
  v16 = a5;
  v17 = a6;
  v18 = Lookaside;
  v19 = Size;
  *a5 = 0LL;
  *v17 = 0LL;
  LOBYTE(v18->L.ListHead.Alignment) = 0;
  if ( v19 < (unsigned int)dword_1C00763E8 )
  {
    SmallAllocation = VIDMM_PROCESS_HEAP::AllocateSmallAllocation(a1, v19, (unsigned int)v10, a4, v16, v17, v18, a9);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v62);
    if ( v64 )
    {
      if ( byte_1C00769C1 < 0 )
        McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v62);
    }
    return SmallAllocation;
  }
  Lookaside = (PPAGED_LOOKASIDE_LIST)(a1 + 64);
  v24 = ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)(a1 + 64));
  v25 = v24;
  if ( !v24 )
  {
    LODWORD(v26) = -1073741801;
    _InterlockedIncrement(&dword_1C00767E4);
    WdLogSingleEntry1(6LL, 321LL);
    Handle = 0LL;
    NewObject = 321LL;
LABEL_41:
    v37 = 262145LL;
    goto LABEL_42;
  }
  memset(v24, 0, 0x70uLL);
  switch ( a4 )
  {
    case 3u:
      goto LABEL_33;
    case 4u:
LABEL_32:
      v35 = 134479872;
LABEL_34:
      a5 = (_QWORD *)Size;
      LODWORD(v26) = MmCreateSection(&Object, 0LL, 0LL, &a5, 4, v35, -1LL, 0LL);
      if ( (int)v26 < 0 )
      {
        Object = 0LL;
        _InterlockedIncrement(&dword_1C0076898);
        WdLogSingleEntry1(6LL, 359LL);
        Handle = 0LL;
        NewObject = 359LL;
        goto LABEL_41;
      }
      ObfReferenceObject(Object);
      inserted = ObInsertObject(Object, 0LL, 0, 0, 0LL, &v60);
      v26 = inserted;
      if ( inserted < 0 )
      {
        WdLogSingleEntry2(1LL, Object, inserted);
        v37 = 0x40000LL;
        Handle = (PHANDLE)v26;
        NewObject = (__int64)Object;
LABEL_42:
        DxgkLogInternalTriageEvent(v27, v37);
        if ( a4 != 3 && a4 != 4 )
        {
          if ( a4 != 5 && a4 != 6 )
          {
LABEL_46:
            if ( Address )
            {
              VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
              (*((void (__fastcall **)(__int64, PVOID *, SIZE_T *, __int64, __int64, PHANDLE, _QWORD, _QWORD))VirtualMemoryInterface
               + 2))(
                -1LL,
                &Address,
                &Size,
                0x8000LL,
                NewObject,
                Handle,
                0LL,
                0LL);
            }
LABEL_54:
            if ( v25 )
              ExFreeToPagedLookasideList(Lookaside, v25);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v62);
            if ( v64 && byte_1C00769C1 < 0 )
              McTemplateK0q_EtwWriteTransfer(v41, &EventProfilerExit, v42, v62);
            return (unsigned int)v26;
          }
          if ( Address )
            MmUnmapViewInSystemSpace(Address);
        }
        v40 = Object;
        if ( Object )
        {
          if ( v60 )
          {
            ObCloseHandle(v60, ((unsigned __int64)v60 & 0xFFFFFFFF80000000uLL) == 0);
            v40 = Object;
          }
          ObfDereferenceObject(v40);
        }
        goto LABEL_54;
      }
      if ( a4 - 5 <= 1 )
      {
        v38 = MmMapViewInSystemSpace(Object, &Address, &Size);
        v26 = v38;
        if ( v38 < 0 )
        {
          _InterlockedIncrement(&dword_1C0076894);
          WdLogSingleEntry1(6LL, v38);
          Handle = 0LL;
          NewObject = v26;
          goto LABEL_41;
        }
      }
      goto LABEL_60;
    case 5u:
LABEL_33:
      v35 = 1208221696;
      goto LABEL_34;
    case 6u:
      goto LABEL_32;
  }
  v28 = 4;
  v29 = 8400896;
  if ( a4 != 2 )
    v28 = 1028;
  v65 = v28;
  v30 = 12288;
  if ( a4 != 2 )
    v30 = 8400896;
  if ( !a9 )
    v29 = v30;
  v57 = v29;
  v31 = DxgkGetVirtualMemoryInterface();
  if ( (*(int (__fastcall **)(__int64, PVOID *, _QWORD, SIZE_T *, int, int))v31)(-1LL, &Address, 0LL, &Size, v29, v65) < 0 )
  {
    v57 = 12288;
    v32 = DxgkGetVirtualMemoryInterface();
    LODWORD(v26) = (*(__int64 (__fastcall **)(__int64, PVOID *, _QWORD, SIZE_T *, int, int))v32)(
                     -1LL,
                     &Address,
                     0LL,
                     &Size,
                     12288,
                     v65);
    if ( (int)v26 < 0 )
    {
      Address = 0LL;
      _InterlockedIncrement(&dword_1C0076870);
      v33 = 439LL;
      WdLogSingleEntry1(6LL, 439LL);
LABEL_31:
      Handle = 0LL;
      NewObject = v33;
      DxgkLogInternalTriageEvent(v34, 262145LL);
      goto LABEL_46;
    }
  }
  v61 = MmSecureVirtualMemory(Address, Size, 4u);
  if ( !v61 )
  {
    LODWORD(v26) = -1073741801;
    _InterlockedIncrement(&dword_1C0076870);
    v33 = 457LL;
    WdLogSingleEntry1(6LL, 457LL);
    goto LABEL_31;
  }
LABEL_60:
  *v25 |= 1u;
  v43 = a6;
  *((_QWORD *)v25 + 7) = Size;
  *((_QWORD *)v25 + 6) = v61;
  *((_BYTE *)v25 + 72) = 0;
  *((_QWORD *)v25 + 1) = Address;
  v25[4] = v65;
  v25[5] = v57;
  *((_QWORD *)v25 + 4) = Object;
  *((_QWORD *)v25 + 5) = v60;
  v25[6] = a4;
  *((_QWORD *)v25 + 10) = 0LL;
  v44 = Address;
  *v16 = v25;
  *v43 = v44;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL) += Size;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 144LL) += Size;
  ++*(_DWORD *)(*(_QWORD *)(a1 + 8) + 156LL);
  v45 = *(_QWORD **)(a1 + 8);
  if ( a4 == 1 )
  {
    v45[20] += Size;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL) += Size;
  }
  else if ( a4 == 2 )
  {
    v45[22] += Size;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 184LL) += Size;
  }
  else
  {
    v45[24] += Size;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 200LL) += Size;
  }
  if ( bTracingEnabled )
  {
    v46 = Address;
    v47 = Object;
    v48 = Address;
    v49 = *(unsigned int *)(*(_QWORD *)(a1 + 8) + 8LL);
    if ( a4 - 3 <= 3 )
      v48 = Object;
    if ( (byte_1C00769C2 & 2) != 0 )
    {
      LODWORD(v56) = 0;
      LODWORD(v55) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
      LODWORD(Handlea) = a4;
      McTemplateK0pxqqt_EtwWriteTransfer(
        (__int64)Address,
        &EventCreateProcessAllocation,
        v49,
        v48,
        Size,
        Handlea,
        v55,
        v56);
      v46 = Address;
      v47 = Object;
    }
    if ( bTracingEnabled )
    {
      if ( a4 - 3 <= 3 )
        v46 = v47;
      if ( (byte_1C00769C1 & 8) != 0 )
        McTemplateK0qxxx_EtwWriteTransfer(
          (__int64)v46,
          &EventCreateProcessAllocationDetails,
          v49,
          *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL),
          (char)v25,
          Size,
          (char)v46);
    }
  }
  LOBYTE(v18->L.ListHead.Alignment) = 1;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v62);
  if ( v64 && byte_1C00769C1 < 0 )
    McTemplateK0q_EtwWriteTransfer(v50, &EventProfilerExit, v51, v62);
  return 0LL;
}
