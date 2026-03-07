void *__fastcall VIDMM_RECYCLE_MULTIRANGE::MapLocked(VIDMM_RECYCLE_MULTIRANGE *this)
{
  void *result; // rax
  void *v3; // r15
  _QWORD *v4; // r12
  __int64 v5; // rcx
  int v6; // edx
  char v7; // r14
  int v8; // eax
  struct _MDL *Mdl; // rax
  char *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct _EPROCESS *v19; // r14
  __int64 v20; // r9
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v21; // rax
  struct _MDL *v22; // rcx
  PVOID MappedSystemVa; // rax
  struct _MDL *v24; // rcx
  struct _EPROCESS *CurrentProcess; // rdi
  __int64 v26; // r9
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  unsigned __int8 v28; // [rsp+50h] [rbp-88h] BYREF
  char v29; // [rsp+51h] [rbp-87h]
  PVOID MappedBase; // [rsp+58h] [rbp-80h] BYREF
  PVOID VirtualAddress[4]; // [rsp+60h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-58h] BYREF

  result = (void *)*((_QWORD *)this + 22);
  if ( !result )
  {
    VirtualAddress[0] = 0LL;
    MappedBase = 0LL;
    v3 = (void *)(*((_QWORD *)this + 5) - *((_QWORD *)this + 6));
    VirtualAddress[1] = v3;
    v28 = 0;
    memset(&ApcState, 0, sizeof(ApcState));
    v4 = (_QWORD *)((char *)this + 80);
    VirtualAddress[3] = (char *)this + 80;
    KeStackAttachProcess(
      **(PRKPROCESS **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL),
      &ApcState);
    v5 = *v4;
    v6 = **(_DWORD **)(*v4 + 32LL);
    if ( (unsigned int)(v6 - 3) > 1 )
    {
      v7 = 0;
      v29 = 0;
      VirtualAddress[0] = *((PVOID *)this + 6);
    }
    else
    {
      v7 = 1;
      v29 = 1;
      v8 = VidMmRecycleHeapMapSection(
             *(PVOID *)(v5 + 56),
             *((_QWORD *)this + 6),
             (__int64)v3,
             v6 == 4,
             VirtualAddress,
             &MappedBase,
             0,
             &v28);
      if ( v8 < 0 )
      {
        WdLogSingleEntry5(
          3LL,
          v3,
          *((_QWORD *)this + 6),
          *v4,
          v8,
          **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*v4 + 32LL) + 8LL) + 8LL));
LABEL_32:
        KeUnstackDetachProcess(&ApcState);
        return 0LL;
      }
    }
    Mdl = IoAllocateMdl(VirtualAddress[0], (ULONG)v3, 0, 0, 0LL);
    v10 = (char *)this + 184;
    VirtualAddress[2] = (char *)this + 184;
    *((_QWORD *)this + 23) = Mdl;
    if ( !Mdl )
    {
      _InterlockedIncrement((volatile signed __int32 *)&gVidMmLowResourceAccumulated);
      WdLogSingleEntry1(6LL, 4471LL);
      DxgkLogInternalTriageEvent(v11, 262145LL);
      v24 = *(struct _MDL **)v10;
      if ( *(_QWORD *)v10 )
      {
        IoFreeMdl(v24);
        *(_QWORD *)v10 = 0LL;
      }
      if ( v7 )
      {
        if ( v28 )
          CurrentProcess = 0LL;
        else
          CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v24, v12, v13, v14);
        if ( (unsigned __int64)v3 <= VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(
                                       *(VIDMM_RECYCLE_HEAP_MGR **)(*v4 + 32LL),
                                       (unsigned int)(**(_DWORD **)(*v4 + 32LL) - 5) <= 1) )
        {
          if ( CurrentProcess )
          {
            VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
            (*((void (__fastcall **)(struct _EPROCESS *, PVOID))VirtualMemoryInterface + 4))(CurrentProcess, MappedBase);
          }
          else
          {
            MmUnmapViewInSystemSpace(MappedBase);
          }
        }
        else
        {
          VidMmUnmapViewAsync(CurrentProcess, *(void **)(v26 + 56), MappedBase);
        }
      }
      goto LABEL_32;
    }
    MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
    if ( v7 )
    {
      if ( v28 )
        v19 = 0LL;
      else
        v19 = (struct _EPROCESS *)PsGetCurrentProcess(v16, v15, v17, v18);
      if ( (unsigned __int64)v3 <= VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(
                                     *(VIDMM_RECYCLE_HEAP_MGR **)(*v4 + 32LL),
                                     (unsigned int)(**(_DWORD **)(*v4 + 32LL) - 5) <= 1) )
      {
        if ( v19 )
        {
          v21 = DxgkGetVirtualMemoryInterface();
          (*((void (__fastcall **)(struct _EPROCESS *, PVOID))v21 + 4))(v19, MappedBase);
        }
        else
        {
          MmUnmapViewInSystemSpace(MappedBase);
        }
      }
      else
      {
        VidMmUnmapViewAsync(v19, *(void **)(v20 + 56), MappedBase);
      }
    }
    v22 = *(struct _MDL **)v10;
    if ( (*(_BYTE *)(*(_QWORD *)v10 + 10LL) & 5) != 0 )
      MappedSystemVa = v22->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(v22, 0, MmCached, 0LL, 0, 0x40000010u);
    *((_QWORD *)this + 22) = MappedSystemVa;
    KeUnstackDetachProcess(&ApcState);
    return (void *)*((_QWORD *)this + 22);
  }
  return result;
}
