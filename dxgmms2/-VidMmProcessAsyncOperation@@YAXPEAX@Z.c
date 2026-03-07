void __fastcall VidMmProcessAsyncOperation(void *a1)
{
  int v2; // ecx
  __int64 v3; // rcx
  __int64 v4; // r8
  VIDMM_GLOBAL *v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rdi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbp
  struct VIDMM_ALLOC *v13; // rdi
  struct DXGPUSHLOCKBASE *v14; // rsi
  VIDMM_GLOBAL *v15; // rcx
  unsigned int v16; // r8d
  int v17; // eax
  unsigned int v19; // [rsp+50h] [rbp+8h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+58h] [rbp+10h] BYREF
  struct VIDMM_ALLOC *v21; // [rsp+60h] [rbp+18h] BYREF

  v2 = *((_DWORD *)a1 + 8) - 1;
  if ( v2 )
  {
    v5 = (VIDMM_GLOBAL *)(unsigned int)(v2 - 1);
    if ( (_DWORD)v5 )
    {
      if ( (_DWORD)v5 == 1 )
      {
        v12 = *((_QWORD *)a1 + 5);
        v13 = *(struct VIDMM_ALLOC **)(*((_QWORD *)a1 + 6) + 24LL);
        v21 = v13;
        v14 = (struct DXGPUSHLOCKBASE *)(**(_QWORD **)v13 + 376LL);
        if ( **(_QWORD **)v13 != -376LL )
        {
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v14, 0LL);
        }
        while ( 1 )
        {
          v19 = 0;
          if ( !VIDMM_GLOBAL::IsAllocationInPresentQueue(v5, v13, &v19) )
            break;
          if ( v19 > 1 )
            break;
          v17 = VIDMM_GLOBAL::WaitOnAllocationPresentQueue(v15, v13, v16);
          if ( v17 >= 0 )
            break;
          WdLogSingleEntry1(3LL, v17);
          Interval.QuadPart = -150LL;
          KeDelayExecutionThread(0, 0, &Interval);
        }
        VidMmCompleteAsyncUnpin((struct VIDMM_GLOBAL *)v12, &v21, v14);
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v12 + 44416, 0LL);
        *(_QWORD *)(v12 + 44424) = KeGetCurrentThread();
        if ( (*(_DWORD *)(v12 + 44464))-- == 1 )
          KeSetEvent((PRKEVENT)(v12 + 44440), 0, 0);
        *(_QWORD *)(v12 + 44424) = 0LL;
        ExReleasePushLockExclusiveEx(v12 + 44416, 0LL);
        KeLeaveCriticalRegion();
        DxgkUnreferenceDxgResource(*(struct DXGRESOURCE **)(*((_QWORD *)a1 + 6) + 40LL));
        DxgkUnreferenceDxgAllocation(*((struct DXGALLOCATION **)a1 + 6));
      }
    }
    else
    {
      v6 = *((_QWORD *)a1 + 5);
      v7 = *((_QWORD *)a1 + 7);
      if ( v6 )
      {
        VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
        (*((void (__fastcall **)(__int64, __int64))VirtualMemoryInterface + 4))(v6, v7);
      }
      else
      {
        MmUnmapViewInSystemSpace(*((PVOID *)a1 + 7));
      }
      v9 = *((_QWORD *)a1 + 8);
      if ( v9 )
        _InterlockedDecrement((volatile signed __int32 *)(v9 + 444));
      ObfDereferenceObject(*((PVOID *)a1 + 6));
      if ( (byte_1C00769C1 & 1) != 0 )
        McTemplateK0ppp_EtwWriteTransfer(
          v10,
          &EndVidMmUnmapViewAsync,
          v11,
          *((_QWORD *)a1 + 5),
          *((_QWORD *)a1 + 6),
          *((_QWORD *)a1 + 7));
    }
  }
  else
  {
    ObfDereferenceObject(*((PVOID *)a1 + 5));
    if ( (byte_1C00769C1 & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer(v3, &EndVidMmDereferenceObjectAsync, v4, *((_QWORD *)a1 + 5));
  }
  operator delete(a1);
  _InterlockedDecrement(&g_VidMmAsyncOpPendingCount);
}
