// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::Rotate(
        __int64 a1,
        ULONG_PTR a2,
        enum _MM_ROTATE_DIRECTION a3,
        struct _MDL *a4,
        SIZE_T Size,
        PMM_ROTATE_COPY_CALLBACK_FUNCTION CopyFunction,
        PVOID Context,
        char a8,
        SIZE_T a9)
{
  char v9; // si
  char v10; // r14
  enum _MM_ROTATE_DIRECTION v12; // r13d
  NTSTATUS v13; // r12d
  __int64 v14; // rdi
  struct VIDMM_RECYCLE_RANGE *i; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  void *v20; // r10
  SIZE_T v21; // rdi
  HANDLE v22; // rax
  __int64 v23; // rcx
  ULONG_PTR v25; // rbx
  void *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  NTSTATUS v29; // eax
  __int64 v30; // rcx
  __int64 v31; // r8
  PVOID v32; // r13
  NTSTATUS (__stdcall *v33)(PMDL, PMDL, PVOID); // rdi
  int v34; // ebx
  struct _MDL *v35; // rcx
  __int64 v36; // rax
  ULONG_PTR v37; // rcx
  __int64 v38; // rbx
  unsigned int v39; // edx
  __int64 v40; // r9
  __int64 *QuadPart; // r8
  __int64 v42; // rsi
  __int64 v43; // rdx
  PHYSICAL_ADDRESS v44; // rdi
  union _LARGE_INTEGER v45; // r13
  PHYSICAL_ADDRESS v46; // rbx
  SIZE_T v47; // rdi
  struct _EPROCESS *v48; // rax
  __int32 v49; // r13d
  __int64 CurrentProcess; // rax
  ULONG_PTR NumberOfBytes; // [rsp+58h] [rbp-31h] BYREF
  union _LARGE_INTEGER v52; // [rsp+60h] [rbp-29h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+70h] [rbp-19h] BYREF
  ULONG_PTR v54; // [rsp+78h] [rbp-11h] BYREF
  union _LARGE_INTEGER v55; // [rsp+80h] [rbp-9h] BYREF
  char *VirtualAddress; // [rsp+D8h] [rbp+4Fh]
  ULONG_PTR v57; // [rsp+E0h] [rbp+57h] BYREF
  enum _MM_ROTATE_DIRECTION v58; // [rsp+E8h] [rbp+5Fh]
  PMDL NewMdl; // [rsp+F0h] [rbp+67h]

  NewMdl = a4;
  v58 = a3;
  v57 = a2;
  v9 = a8;
  v10 = 0;
  v12 = a3;
  v13 = 0;
  v14 = a3;
  if ( *(_DWORD *)(a1 + 216) == 4 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 52LL, 11LL, a3, 0LL);
  }
  for ( i = *(struct VIDMM_RECYCLE_RANGE **)(a1 + 64); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    if ( *((_DWORD *)i + 16) == 3 )
    {
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce((VIDMM_RECYCLE_HEAP_MGR *)a1, i);
      LOBYTE(v57) = 0;
      v13 = VIDMM_RECYCLE_RANGE::DebouncedUnlock(i, (bool *)&v57);
      if ( v13 < 0 )
      {
        WdLogSingleEntry3(3LL, i, a1, **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 32LL) + 8LL) + 8LL));
        VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
          *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 32LL) + 8LL),
          i);
        return (unsigned int)v13;
      }
    }
    if ( i == *(struct VIDMM_RECYCLE_RANGE **)(a1 + 72) )
      break;
  }
  VirtualAddress = *(char **)(a1 + 48);
  if ( !VIDMM_RECYCLE_MULTIRANGE::IsRotateVAD((struct VIDMM_RECYCLE_RANGE **)a1) )
  {
    if ( v12 && (v49 = v12 - 1) != 0 )
    {
      if ( (unsigned int)(v49 - 1) <= 1 )
      {
        CurrentProcess = PsGetCurrentProcess(v17, v16, v18, v19);
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 1LL, CurrentProcess, a1, v14);
      }
    }
    else
    {
      return (unsigned int)-1073741823;
    }
    return (unsigned int)v13;
  }
  if ( (unsigned int)v12 <= MmToFrameBufferNoCopy )
  {
    v21 = Size;
    a9 = Size;
    if ( !*(_QWORD *)(a1 + 192) )
    {
      v22 = MmSecureVirtualMemory(v20, Size, 4u);
      *(_QWORD *)(a1 + 192) = v22;
      if ( !v22 )
      {
        _InterlockedIncrement(&dword_1C0076870);
        WdLogSingleEntry1(6LL, 3474LL);
        DxgkLogInternalTriageEvent(v23, 262145LL);
        return 3221225495LL;
      }
      v20 = VirtualAddress;
    }
  }
  else
  {
    v21 = *(_QWORD *)(a1 + 136);
    a9 = v21;
  }
  if ( v12 == MmToRegularMemory )
  {
    Interval.QuadPart = -10000LL;
    v25 = v21;
    while ( 1 )
    {
      NumberOfBytes = v25;
      v13 = MmRotatePhysicalView(v20, &NumberOfBytes, NewMdl, MmToRegularMemory, CopyFunction, Context);
      if ( v13 != 1073741849 )
        break;
      WdLogSingleEntry0(3LL);
      if ( bTracingEnabled )
      {
        if ( (byte_1C00769C1 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v27, &EventPerformanceWarning, v28, 12);
      }
      v25 -= NumberOfBytes;
      VirtualAddress += NumberOfBytes;
      KeDelayExecutionThread(0, 0, &Interval);
      v20 = VirtualAddress;
    }
    goto LABEL_42;
  }
  if ( v12 == MmToRegularMemoryNoCopy )
  {
    v52.QuadPart = -10000LL;
    v57 = v21;
    while ( 1 )
    {
      v29 = MmRotatePhysicalView(v20, &v57, NewMdl, MmToRegularMemoryNoCopy, CopyFunction, Context);
      v13 = v29;
      if ( (v9 & 1) == 0 || v29 != 1073741849 )
        break;
      WdLogSingleEntry0(3LL);
      if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v30, &EventPerformanceWarning, v31, 12);
      v32 = Context;
      v33 = CopyFunction;
      while ( MmRotatePhysicalView(VirtualAddress, &v57, *(PMDL *)(a1 + 144), MmToFrameBufferNoCopy, v33, v32) < 0 )
        KeDelayExecutionThread(0, 0, &v52);
      KeDelayExecutionThread(0, 0, &v52);
      v12 = v58;
      v20 = VirtualAddress;
      v21 = a9;
    }
    goto LABEL_42;
  }
  v34 = v9 & 2;
  if ( (v9 & 2) != 0 )
  {
    v35 = *(struct _MDL **)(a1 + 144);
    NewMdl = v35;
  }
  else
  {
    v35 = NewMdl;
  }
  v54 = v21;
  if ( g_bInjectRotateFailure )
  {
    v13 = -1073741823;
LABEL_40:
    if ( (v9 & 2) == 0 )
      goto LABEL_48;
    ExFreePoolWithTag(*(PVOID *)(a1 + 144), 0);
    *(_QWORD *)(a1 + 144) = 0LL;
LABEL_42:
    if ( v13 >= 0 )
    {
      v34 = v9 & 2;
      goto LABEL_44;
    }
LABEL_48:
    if ( v13 == -1073741558 && (unsigned int)(v12 - 2) <= 1 )
    {
      v36 = *(_QWORD *)(a1 + 144);
      if ( v36 )
      {
        v37 = 1LL;
        v38 = *(_QWORD *)(v36 + 48);
        v39 = *(_DWORD *)(v36 + 40) >> 12;
        v40 = v38;
        if ( v39 > 1 )
        {
          QuadPart = (__int64 *)(v36 + 56);
          v52.QuadPart = v36 + 56;
          v42 = v39 - 1;
          do
          {
            v43 = *QuadPart;
            if ( *QuadPart == v40 + 1 )
            {
              ++v37;
            }
            else
            {
              v44.QuadPart = v38 << 12;
              v55.QuadPart = v37 << 12;
              v38 = v43;
              v57 = 1LL;
              if ( MmIsIoSpaceActive(v44, v37 << 12) )
              {
                v45 = v55;
                do
                {
                  v55.QuadPart = -10000LL;
                  KeDelayExecutionThread(0, 0, &v55);
                }
                while ( MmIsIoSpaceActive(v44, v45.QuadPart) );
              }
              QuadPart = (__int64 *)v52.QuadPart;
              v43 = v38;
              v37 = v57;
            }
            ++QuadPart;
            v40 = v43;
            v52.QuadPart = (LONGLONG)QuadPart;
            --v42;
          }
          while ( v42 );
          v9 = a8;
          v12 = v58;
        }
        v57 = v37 << 12;
        v46.QuadPart = v38 << 12;
        if ( MmIsIoSpaceActive(v46, v37 << 12) )
        {
          v47 = v57;
          do
          {
            v57 = -10000LL;
            KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&v57);
          }
          while ( MmIsIoSpaceActive(v46, v47) );
        }
        if ( (v9 & 2) == 0 )
        {
          ExFreePoolWithTag(*(PVOID *)(a1 + 144), 0);
          *(_QWORD *)(a1 + 144) = 0LL;
        }
        v21 = a9;
        *(_BYTE *)(a1 + 130) = 0;
      }
      else
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 4LL, a1, -1073741558LL, 0LL);
      }
    }
    v26 = *(void **)(a1 + 192);
    if ( v26 )
    {
      MmUnsecureVirtualMemory(v26);
      *(_QWORD *)(a1 + 192) = 0LL;
    }
    goto LABEL_72;
  }
  v13 = MmRotatePhysicalView(v20, &v54, v35, v12, CopyFunction, Context);
  if ( v13 < 0 )
    goto LABEL_40;
LABEL_44:
  if ( (unsigned int)v12 <= MmToFrameBufferNoCopy )
  {
    v10 = 1;
    *(_QWORD *)(a1 + 144) = NewMdl;
    *(_QWORD *)(a1 + 136) = v21;
  }
  else if ( !v34 )
  {
    ExFreePoolWithTag(*(PVOID *)(a1 + 144), 0);
    v26 = *(void **)(a1 + 192);
    *(_QWORD *)(a1 + 144) = 0LL;
    if ( v26 )
    {
      MmUnsecureVirtualMemory(v26);
      *(_QWORD *)(a1 + 192) = 0LL;
    }
  }
  *(_BYTE *)(a1 + 130) = v10;
LABEL_72:
  v48 = (struct _EPROCESS *)PsGetCurrentProcess(v26, v16, v18, v19);
  VIDMM_GLOBAL::RecordRotation(v48, VirtualAddress, v21, NewMdl, v12, v13);
  return (unsigned int)v13;
}
