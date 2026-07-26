/*
 * XREFs of NdisNblTrackerDeregisterComponent @ 0x1C00204C0
 * Callers:
 *     ?ndisUpdateNoPauseOnSuspend@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002A4DC (-ndisUpdateNoPauseOnSuspend@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z @ 0x1C0068384 (-ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z.c)
 *     ?ndisFreeOpenBlock@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C006D414 (-ndisFreeOpenBlock@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMCleanupMiniportBlockOnStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006EE78 (-ndisMCleanupMiniportBlockOnStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSelectiveSuspendFree@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0122120 (-ndisSelectiveSuspendFree@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisNblTrackerDeleteTracker@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C0074718 (-ndisNblTrackerDeleteTracker@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 *     ?ndisNblTrackerVerifyNoNblsHeld@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C0074EB0 (-ndisNblTrackerVerifyNoNblsHeld@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 */

void __fastcall NdisNblTrackerDeregisterComponent(__int64 a1)
{
  _QWORD *v1; // rbx
  KIRQL v2; // al
  __int64 v3; // r8
  KIRQL v4; // di
  _QWORD *v5; // rdx

  if ( (a1 & 1) != 0 )
  {
    v1 = (_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF8uLL);
    v2 = KeAcquireSpinLockRaiseToDpc(&ndisNblTrackerListLock);
    v3 = *v1;
    v4 = v2;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v5 = (_QWORD *)v1[1], (_QWORD *)*v5 != v1) )
      __fastfail(3u);
    *v5 = v3;
    *(_QWORD *)(v3 + 8) = v5;
    ndisNblTrackerVerifyNoNblsHeld((ULONG_PTR)v1);
    KeReleaseSpinLock(&ndisNblTrackerListLock, v4);
    ndisNblTrackerDeleteTracker(v1);
  }
}
