__int64 __fastcall VIDMM_RECYCLE_BLOCK::Allocate(VIDMM_RECYCLE_BLOCK *this, ULONG_PTR a2, char a3)
{
  int *v3; // r9
  int v7; // ecx
  char v8; // bp
  char v9; // dl
  PVOID *v10; // r14
  int v11; // ebx
  void *CurrentPartitionHandle; // rax
  int v13; // ecx
  NTSTATUS v14; // eax
  int v15; // ebp
  NTSTATUS inserted; // eax
  __int64 v17; // r9
  ULONG_PTR v18; // r8
  unsigned int v19; // ebx
  int v20; // eax
  unsigned int v21; // r8d
  unsigned int v23; // ebx
  int v24; // eax
  PVOID v25; // rcx
  __int64 v26; // rdx
  int v27; // r8d
  unsigned int v28; // r8d
  ULONG_PTR v29; // [rsp+80h] [rbp+8h] BYREF
  ULONG_PTR ViewSize; // [rsp+88h] [rbp+10h] BYREF

  ViewSize = a2;
  v3 = (int *)*((_QWORD *)this + 4);
  v7 = *v3;
  v8 = *((_BYTE *)v3 + 16);
  v9 = *((_BYTE *)v3 + 17);
  if ( (unsigned int)(*v3 - 9) <= 1 )
  {
    *((_DWORD *)this + 32) = 0x800000;
    v23 = 1028;
    if ( *v3 == 10 )
      v23 = 4;
    v24 = VIDMM_PROCESS::MapHostVirtualAddressToGuest(
            *(VIDMM_PROCESS **)(*((_QWORD *)v3 + 1) + 8LL),
            0LL,
            a2,
            0x800000u,
            v23,
            (void **)this + 14,
            (unsigned __int64 *)this + 15,
            (void **)this + 5);
    v15 = v24;
    if ( v24 >= 0 )
    {
      v17 = *((_QWORD *)this + 5);
      *((_BYTE *)this + 132) |= 1u;
      goto LABEL_10;
    }
    _InterlockedIncrement(&dword_1C00767E8);
    WdLogSingleEntry1(6LL, v24);
    goto LABEL_33;
  }
  if ( (unsigned int)(v7 - 3) > 3 )
  {
    if ( v7 == 2 || (v19 = 1028, v7 == 8) )
      v19 = 4;
    v20 = 0x2000;
    *((_DWORD *)this + 32) = 0x2000;
    if ( v9 )
    {
      v20 = 2105344;
      *((_DWORD *)this + 32) = 2105344;
    }
    if ( v8 )
    {
      v20 |= 0x20400000u;
      *((_DWORD *)this + 32) = v20;
    }
    v21 = v20;
    if ( a3 && !v8 && !v9 )
    {
      v21 = v20 | 0x800000;
      *((_DWORD *)this + 32) = v20 | 0x800000;
    }
    v15 = VidMmAllocateVirtualMemory((void **)this + 5, &ViewSize, v21, v19);
    if ( v15 >= 0
      || (v27 = *((_DWORD *)this + 32), (v27 & 0x800000) != 0)
      && (v28 = v27 & 0xFF7FFFFF,
          *((_DWORD *)this + 32) = v28,
          v15 = VidMmAllocateVirtualMemory((void **)this + 5, &ViewSize, v28, v19),
          v15 >= 0) )
    {
      v18 = ViewSize;
      *((_QWORD *)this + 6) = *((_QWORD *)this + 5) + ViewSize;
      *((_BYTE *)this + 132) ^= (*((_BYTE *)this + 132) ^ (*((_DWORD *)this + 32) >> 23)) & 1;
      goto LABEL_20;
    }
    _InterlockedIncrement(&dword_1C00767E8);
    WdLogSingleEntry1(6LL, v15);
    goto LABEL_33;
  }
  v29 = a2;
  v10 = (PVOID *)((char *)this + 56);
  v11 = ((v7 - 4) & 0xFFFFFFFD) != 0 ? 1208221696 : 134479872;
  CurrentPartitionHandle = VIDMM_PROCESS::GetCurrentPartitionHandle();
  v13 = v11 | 0x80000;
  if ( !v8 )
    v13 = v11;
  v14 = MmCreateSection((char *)this + 56, 0LL, 0LL, &v29, 4, v13, CurrentPartitionHandle, 0LL);
  v15 = v14;
  if ( v14 < 0 )
    goto LABEL_32;
  ObfReferenceObject(*v10);
  inserted = ObInsertObject(*v10, 0LL, 0, 0, 0LL, (PHANDLE)this + 8);
  v15 = inserted;
  if ( inserted < 0 )
  {
    WdLogSingleEntry2(1LL, *v10, inserted);
    v25 = *v10;
    v26 = 0x40000LL;
    goto LABEL_35;
  }
  if ( (unsigned int)(**((_DWORD **)this + 4) - 5) > 1 )
  {
    v18 = ViewSize;
    *((_QWORD *)this + 6) = ViewSize;
    *((_QWORD *)this + 5) = 0LL;
    goto LABEL_20;
  }
  v14 = MmMapViewInSystemSpace(*v10, (PVOID *)this + 5, &ViewSize);
  v15 = v14;
  if ( v14 < 0 )
  {
LABEL_32:
    _InterlockedIncrement(&dword_1C0076898);
    WdLogSingleEntry1(6LL, v14);
LABEL_33:
    v26 = 262145LL;
LABEL_35:
    DxgkLogInternalTriageEvent((__int64)v25, v26);
    return (unsigned int)v15;
  }
  v17 = *((_QWORD *)this + 5);
LABEL_10:
  v18 = ViewSize;
  *((_QWORD *)this + 6) = v17 + ViewSize;
LABEL_20:
  if ( bTracingEnabled )
  {
    if ( (byte_1C00769C2 & 2) != 0 )
      McTemplateK0pxqqt_EtwWriteTransfer(**((unsigned int **)this + 4), &EventCreateProcessAllocation, v18);
  }
  return 0LL;
}
