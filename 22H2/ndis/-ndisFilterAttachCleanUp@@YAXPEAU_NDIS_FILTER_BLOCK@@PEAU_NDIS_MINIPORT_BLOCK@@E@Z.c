/*
 * XREFs of ?ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0068F90
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012E1DC (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C01382CC (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     NdisIfAddIfStackEntry @ 0x1C00257C0 (NdisIfAddIfStackEntry.c)
 *     ?ndisIfUpdateFilterIfStack@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00259C4 (-ndisIfUpdateFilterIfStack@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002AF14 (-ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z @ 0x1C0068384 (-ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z.c)
 *     NdisIfFreeNetLuidIndex @ 0x1C01277D0 (NdisIfFreeNetLuidIndex.c)
 *     NdisIfDeregisterInterface @ 0x1C01279E0 (NdisIfDeregisterInterface.c)
 */

void __fastcall ndisFilterAttachCleanUp(PVOID P, struct _NDIS_MINIPORT_BLOCK *a2, char a3)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rcx
  _NDIS_FILTER_BLOCK *v7; // rax
  __int64 v8; // rcx
  _NDIS_FILTER_BLOCK *v9; // rax
  KIRQL v10; // dl
  __int64 v11; // rcx
  __int64 v12; // rax
  NET_IFINDEX v13; // edx
  KIRQL v14; // al
  struct _NDIS_MINIPORT_BLOCK *v15; // rcx
  KIRQL v16; // bl
  KIRQL v17; // dl
  KIRQL NewIrql; // [rsp+40h] [rbp+18h] BYREF

  NewIrql = 0;
  if ( a3 )
  {
    v5 = *(_QWORD *)(*((_QWORD *)P + 87) + 1312LL);
    NdisIfDeregisterInterface(*((_DWORD *)P + 172));
    NdisIfFreeNetLuidIndex(HIWORD(v5), (v5 >> 24) & 0xFFFFFF);
    *((_QWORD *)P + 87) = 0LL;
    *((_DWORD *)P + 172) = 0;
  }
  if ( a2 )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a2, &NewIrql);
    v6 = *((_QWORD *)P + 14);
    v7 = (_NDIS_FILTER_BLOCK *)*((_QWORD *)P + 15);
    if ( v6 )
      *(_QWORD *)(v6 + 120) = v7;
    else
      a2->LowestFilter = v7;
    v8 = *((_QWORD *)P + 15);
    v9 = (_NDIS_FILTER_BLOCK *)*((_QWORD *)P + 14);
    if ( v8 )
      *(_QWORD *)(v8 + 112) = v9;
    else
      a2->HighestFilter = v9;
    v10 = NewIrql;
    a2->MiniportThread = 0LL;
    KeReleaseSpinLock(&a2->Lock, v10);
    v11 = *((_QWORD *)P + 15);
    if ( v11 )
    {
      v12 = *((_QWORD *)P + 14);
      if ( v12 )
        v13 = *(_DWORD *)(v12 + 688);
      else
        v13 = *(_DWORD *)(*((_QWORD *)P + 4) + 4056LL);
      NdisIfAddIfStackEntry(*(_DWORD *)(v11 + 688), v13);
      v14 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      v15 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)P + 4);
      v16 = v14;
      NewIrql = v14;
      ndisIfUpdateFilterIfStack(v15);
      KeReleaseSpinLock(&ndisIfListLock, v16);
    }
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a2, &NewIrql);
    ndisSetupLwfMiniportHandlers(a2);
    v17 = NewIrql;
    a2->MiniportThread = 0LL;
    KeReleaseSpinLock(&a2->Lock, v17);
  }
  ndisDereferenceFilter((char *)P, 0xFFu);
}
