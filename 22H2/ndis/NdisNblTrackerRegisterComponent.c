/*
 * XREFs of NdisNblTrackerRegisterComponent @ 0x1C002D0C0
 * Callers:
 *     ?ndisUpdateNoPauseOnSuspend@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002A4DC (-ndisUpdateNoPauseOnSuspend@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x1C002CF64 (-ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLO.c)
 *     ?ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012220C (-ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012E1DC (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C0130258 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x1C002D1E4 (-ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
 *     memset @ 0x1C0040B00 (memset.c)
 *     ?ndisNblTrackerDeleteTracker@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C0074718 (-ndisNblTrackerDeleteTracker@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 */

__int64 __fastcall NdisNblTrackerRegisterComponent(__int16 a1, __int64 a2, __int64 a3)
{
  PVOID PoolWithTag; // rax
  __int64 v7; // rbx
  struct PNDIS_PER_PROCESSOR_SLOT__ **v8; // r14
  unsigned int v9; // esi
  struct PNDIS_PER_PROCESSOR_SLOT__ *PerProcessorSlot; // rax
  KIRQL v11; // al
  __int64 *v12; // rcx

  if ( *(int *)ndisNblTrackerMode < 2 )
    return a2 | 2;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x6B74444Eu);
  v7 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return a2 | 2;
  memset(PoolWithTag, 0, 0x48uLL);
  *(_QWORD *)(v7 + 32) = a3;
  v8 = (struct PNDIS_PER_PROCESSOR_SLOT__ **)(v7 + 40);
  v9 = 0;
  *(_WORD *)(v7 + 16) = a1;
  *(_QWORD *)(v7 + 24) = a2;
  *(_QWORD *)(v7 + 8) = v7;
  *(_QWORD *)v7 = v7;
  do
  {
    PerProcessorSlot = ndisAllocatePerProcessorSlot(0x6B74444Eu);
    if ( !PerProcessorSlot )
    {
      ndisNblTrackerDeleteTracker((PVOID)v7);
      return a2 | 2;
    }
    *v8 = PerProcessorSlot;
    ++v9;
    v8 += 2;
  }
  while ( v9 < 2 );
  v11 = KeAcquireSpinLockRaiseToDpc(&ndisNblTrackerListLock);
  v12 = (__int64 *)qword_1C00E5AE8;
  if ( *(struct _NDIS_NBL_TRACKER ***)qword_1C00E5AE8 != &ndisNblTrackerList )
    __fastfail(3u);
  *(_QWORD *)v7 = &ndisNblTrackerList;
  *(_QWORD *)(v7 + 8) = v12;
  *v12 = v7;
  qword_1C00E5AE8 = v7;
  KeReleaseSpinLock(&ndisNblTrackerListLock, v11);
  return v7 | 1;
}
