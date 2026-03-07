__int64 __fastcall VIDMM_PROCESS_HEAP::AllocateBlock(
        __int64 a1,
        SIZE_T a2,
        unsigned int a3,
        unsigned int a4,
        __int64 *a5,
        char a6)
{
  unsigned __int64 v7; // r8
  int v8; // r13d
  unsigned int v9; // r15d
  VIDMM_LINEAR_POOL *v10; // rsi
  HANDLE v11; // r12
  SIZE_T v12; // r8
  int v13; // eax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v15; // rax
  int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  NTSTATUS inserted; // eax
  __int64 v22; // rcx
  __int64 v23; // rdx
  NTSTATUS v24; // eax
  VIDMM_LINEAR_POOL *v25; // rax
  VIDMM_LINEAR_POOL *v26; // rax
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rbx
  __int64 v32; // rbx
  __int64 v33; // rcx
  int v34; // eax
  int v35; // r15d
  _QWORD *v36; // rcx
  __int64 v37; // rax
  PVOID v38; // r9
  __int64 BlockListHead; // rax
  _QWORD *v40; // r8
  __int64 v41; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v42; // rax
  __int64 NewObject; // [rsp+20h] [rbp-50h]
  PHANDLE Handle; // [rsp+28h] [rbp-48h]
  __int64 v46; // [rsp+30h] [rbp-40h]
  __int64 v47; // [rsp+38h] [rbp-38h]
  PVOID Object; // [rsp+50h] [rbp-20h] BYREF
  SIZE_T Size; // [rsp+58h] [rbp-18h] BYREF
  HANDLE v50; // [rsp+60h] [rbp-10h] BYREF
  SIZE_T v51; // [rsp+68h] [rbp-8h] BYREF
  PVOID Address; // [rsp+B8h] [rbp+48h] BYREF

  v7 = a2 + a3;
  Address = 0LL;
  v8 = 0;
  Object = 0LL;
  *a5 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v50 = 0LL;
  v11 = 0LL;
  if ( v7 <= (unsigned int)dword_1C00763EC )
    v7 = (unsigned int)dword_1C00763EC;
  v12 = (v7 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  Size = v12;
  if ( v12 < a2 )
    goto LABEL_58;
  if ( a4 != 3 )
  {
    if ( a4 == 4 )
    {
LABEL_22:
      v19 = 134479872;
      goto LABEL_24;
    }
    if ( a4 != 5 )
    {
      if ( a4 != 6 )
      {
        v8 = 4;
        v9 = 8400896;
        if ( a4 != 2 )
          v8 = 1028;
        v13 = 12288;
        if ( a4 != 2 )
          v13 = 8400896;
        if ( !a6 )
          v9 = v13;
        if ( dword_1C0076278 )
          v9 &= ~0x1000u;
        VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
        if ( (*(int (__fastcall **)(__int64, PVOID *, _QWORD, SIZE_T *, unsigned int, int))VirtualMemoryInterface)(
               -1LL,
               &Address,
               0LL,
               &Size,
               v9,
               v8) < 0 )
        {
          v9 &= ~0x800000u;
          v15 = DxgkGetVirtualMemoryInterface();
          v16 = (*(__int64 (__fastcall **)(__int64, PVOID *, _QWORD, SIZE_T *, unsigned int, int))v15)(
                  -1LL,
                  &Address,
                  0LL,
                  &Size,
                  v9,
                  v8);
          v17 = v16;
          if ( v16 < 0 )
          {
            Address = 0LL;
            _InterlockedIncrement(&dword_1C00767E8);
            WdLogSingleEntry1(6LL, v16);
            v47 = 0LL;
            v46 = 0LL;
            Handle = 0LL;
            NewObject = v17;
            DxgkLogInternalTriageEvent(v18, 262145LL);
LABEL_63:
            if ( v11 )
              MmUnsecureVirtualMemory(v11);
            if ( Address )
            {
              v42 = DxgkGetVirtualMemoryInterface();
              (*((void (__fastcall **)(__int64, PVOID *, SIZE_T *, __int64, __int64, PHANDLE, __int64, __int64))v42 + 2))(
                -1LL,
                &Address,
                &Size,
                0x8000LL,
                NewObject,
                Handle,
                v46,
                v47);
              Address = 0LL;
            }
LABEL_73:
            if ( v10 )
              VIDMM_LINEAR_POOL::`scalar deleting destructor'(v10);
            return (unsigned int)v17;
          }
        }
        if ( (v9 & 0x1000) != 0 )
        {
          v11 = MmSecureVirtualMemory(Address, Size, 4u);
          if ( !v11 )
          {
            WdLogSingleEntry0(3LL);
            LODWORD(v17) = -1073741801;
            goto LABEL_63;
          }
        }
        goto LABEL_33;
      }
      goto LABEL_22;
    }
  }
  v19 = 1208221696;
LABEL_24:
  v51 = v12;
  LODWORD(v17) = MmCreateSection(&Object, 0LL, 0LL, &v51, 4, v19, -1LL, 0LL);
  if ( (int)v17 < 0 )
  {
    Object = 0LL;
    _InterlockedIncrement(&dword_1C0076898);
    WdLogSingleEntry1(6LL, 1953LL);
    v47 = 0LL;
    v46 = 0LL;
    Handle = 0LL;
    NewObject = 1953LL;
    DxgkLogInternalTriageEvent(v20, 262145LL);
LABEL_59:
    if ( a4 != 3 && a4 != 4 )
    {
      if ( a4 != 5 && a4 != 6 )
        goto LABEL_63;
      if ( Address )
        MmUnmapViewInSystemSpace(Address);
    }
    if ( Object )
    {
      if ( v50 )
        ObCloseHandle(v50, ((unsigned __int64)v50 & 0xFFFFFFFF80000000uLL) == 0);
      ObfDereferenceObject(Object);
    }
    goto LABEL_73;
  }
  ObfReferenceObject(Object);
  inserted = ObInsertObject(Object, 0LL, 0, 0, 0LL, &v50);
  v17 = inserted;
  if ( inserted < 0 )
  {
    WdLogSingleEntry2(1LL, Object, inserted);
    v47 = 0LL;
    v23 = 0x40000LL;
    v46 = 0LL;
    Handle = (PHANDLE)v17;
    NewObject = (__int64)Object;
LABEL_28:
    DxgkLogInternalTriageEvent(v22, v23);
    goto LABEL_59;
  }
  if ( a4 - 5 <= 1 )
  {
    v24 = MmMapViewInSystemSpace(Object, &Address, &Size);
    v17 = v24;
    if ( v24 < 0 )
    {
      _InterlockedIncrement(&dword_1C0076894);
      WdLogSingleEntry1(6LL, v24);
LABEL_32:
      v23 = 262145LL;
      v47 = 0LL;
      v46 = 0LL;
      Handle = 0LL;
      NewObject = v17;
      goto LABEL_28;
    }
  }
LABEL_33:
  v25 = (VIDMM_LINEAR_POOL *)operator new(320LL, 0x37316956u, 64LL);
  if ( !v25 || (v26 = VIDMM_LINEAR_POOL::VIDMM_LINEAR_POOL(v25), (v10 = v26) == 0LL) )
  {
    _InterlockedIncrement(&dword_1C00767EC);
    v32 = 2069LL;
    WdLogSingleEntry1(6LL, 2069LL);
    goto LABEL_57;
  }
  v27 = VIDMM_LINEAR_POOL::Init(v26, Size, 0, 0LL, 0LL);
  v17 = v27;
  if ( v27 < 0 )
  {
    _InterlockedIncrement(&dword_1C00767F0);
    WdLogSingleEntry1(6LL, v27);
    goto LABEL_32;
  }
  v28 = operator new(104LL, 0x31316956u, 256LL);
  v31 = v28;
  if ( !v28 )
  {
    _InterlockedIncrement(&dword_1C00767F4);
    v32 = 2091LL;
    WdLogSingleEntry1(6LL, 2091LL);
LABEL_57:
    v47 = 0LL;
    v46 = 0LL;
    Handle = 0LL;
    NewObject = v32;
    DxgkLogInternalTriageEvent(v33, 262145LL);
LABEL_58:
    LODWORD(v17) = -1073741801;
    goto LABEL_59;
  }
  *(_QWORD *)v28 = a1;
  *(_DWORD *)(v28 + 24) = 0;
  *(_QWORD *)(v28 + 32) = Address;
  *(_QWORD *)(v28 + 40) = Size;
  v34 = 2;
  v35 = (v9 >> 23) & 1;
  *(_DWORD *)(v31 + 48) = v8;
  *(_QWORD *)(v31 + 72) = v10;
  *(_QWORD *)(v31 + 56) = v11;
  if ( a4 != 2 )
    v34 = 0;
  *(_DWORD *)(v31 + 80) = a4;
  *(_DWORD *)(v31 + 64) = v34 | v35;
  *(_QWORD *)(v31 + 88) = Object;
  *(_QWORD *)(v31 + 96) = v50;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v29) + 24) = v31;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 144LL) += *(_QWORD *)(v31 + 40);
  ++*(_DWORD *)(*(_QWORD *)(a1 + 8) + 152LL);
  v36 = *(_QWORD **)(a1 + 8);
  v37 = *(_QWORD *)(v31 + 40);
  if ( a4 == 1 )
  {
    v36[21] += v37;
  }
  else if ( a4 == 2 )
  {
    v36[23] += v37;
  }
  else
  {
    v36[25] += v37;
  }
  if ( bTracingEnabled )
  {
    v38 = Address;
    if ( a4 - 3 <= 3 )
      v38 = Object;
    if ( (byte_1C00769C2 & 2) != 0 )
    {
      LODWORD(v47) = 1;
      LODWORD(v46) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
      LODWORD(Handle) = a4;
      McTemplateK0pxqqt_EtwWriteTransfer(
        (unsigned int)v46,
        &EventCreateProcessAllocation,
        v30,
        v38,
        Size,
        Handle,
        v46,
        v47);
    }
  }
  BlockListHead = VIDMM_PROCESS_HEAP::GetBlockListHead(a1, a4, v31 + 8);
  v41 = *(_QWORD *)BlockListHead;
  if ( *(_QWORD *)(*(_QWORD *)BlockListHead + 8LL) != BlockListHead )
    __fastfail(3u);
  v40[1] = BlockListHead;
  *v40 = v41;
  *(_QWORD *)(v41 + 8) = v40;
  *(_QWORD *)BlockListHead = v40;
  *a5 = v31;
  return (unsigned int)v17;
}
