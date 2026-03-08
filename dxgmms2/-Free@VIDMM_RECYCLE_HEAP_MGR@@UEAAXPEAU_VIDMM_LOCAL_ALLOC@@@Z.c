/*
 * XREFs of ?Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00999D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B90 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage @ 0x1C001A5BC (Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C00853FC (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?IntegrateMultirangeIntoTrees_To_Remove@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0085854 (-IntegrateMultirangeIntoTrees_To_Remove@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00973C8 (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C0099CA0 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0099D0C (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C009AAD0 (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C009AD48 (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C009AF28 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1C00B4E90 (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_RECYCLE_HEAP_MGR::Free(VIDMM_RECYCLE_HEAP_MGR *this, struct _VIDMM_LOCAL_ALLOC *a2)
{
  __int64 v4; // rcx
  struct VIDMM_RECYCLE_MULTIRANGE *v5; // rsi
  __int64 v6; // rdx
  struct VIDMM_RECYCLE_RANGE *i; // rdi
  __int64 v8; // rdx
  VIDMM_RECYCLE_HEAP_MGR *v9; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  DXGFASTMUTEX *v13; // rbx
  __int64 v14; // rcx
  DXGFASTMUTEX *v16; // [rsp+50h] [rbp-18h]
  char v17; // [rsp+58h] [rbp-10h]

  v16 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328);
  v17 = 0;
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-1328LL )
  {
    WdLogSingleEntry1(1LL, 592LL);
    DxgkLogInternalTriageEvent(v4, 262146LL);
  }
  DXGFASTMUTEX::Acquire(v16);
  v5 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)a2 + 3);
  v6 = *((_QWORD *)this + 1);
  v17 = 1;
  *(_QWORD *)(v6 + 136) += *((_QWORD *)v5 + 4) - *((_QWORD *)v5 + 5);
  for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)v5 + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    v8 = *((int *)i + 16);
    if ( *((_DWORD *)i + 16) == 1 )
    {
      v12 = *(_QWORD *)(*((_QWORD *)i + 9) + 32LL);
      if ( (unsigned int)(*(_DWORD *)v12 - 3) <= 3 || (unsigned int)(*(_DWORD *)v12 - 9) <= 1 )
      {
        v11 = 0LL;
      }
      else
      {
        VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(*(VIDMM_RECYCLE_HEAP_MGR **)(v12 + 8), i);
        v11 = 5LL;
      }
    }
    else
    {
      if ( *((_DWORD *)i + 16) != 3 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 52LL, 1LL, v8, 0LL);
        goto LABEL_13;
      }
      v9 = *(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)i + 9) + 32LL);
      v10 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v9 + 1);
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v9, i);
      VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(v10, i);
      v11 = 4LL;
    }
    VIDMM_RECYCLE_RANGE::Transition(i, v11);
LABEL_13:
    if ( i == *((struct VIDMM_RECYCLE_RANGE **)v5 + 9) )
      break;
  }
  if ( (unsigned int)Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage() )
  {
    VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees(*(VIDMM_RECYCLE_HEAP **)(*((_QWORD *)v5 + 10) + 32LL), v5);
    goto LABEL_19;
  }
  if ( !VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees_To_Remove(
          *(VIDMM_RECYCLE_HEAP **)(*((_QWORD *)v5 + 10) + 32LL),
          v5) )
LABEL_19:
    VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(
      *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)v5 + 10) + 32LL) + 8LL),
      v5);
  if ( v17 )
  {
    v13 = v16;
    v17 = 0;
    if ( *((struct _KTHREAD **)v16 + 3) != KeGetCurrentThread() )
      WdLogSingleEntry5(0LL, 275LL, 4LL, v16, 0LL, 0LL);
    if ( *((int *)v13 + 8) <= 0 )
    {
      WdLogSingleEntry1(1LL, 535LL);
      DxgkLogInternalTriageEvent(v14, 262146LL);
    }
    if ( (*((_DWORD *)v13 + 8))-- == 1 )
    {
      *((_QWORD *)v13 + 3) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v13 + 8, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  if ( (__int64)VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit >= (__int64)((unsigned __int64)(unsigned int)dword_1C00764A0 << 20)
    || VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock >= (__int64)((unsigned __int64)(unsigned int)dword_1C00764A4 << 20) )
  {
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(1);
  }
}
