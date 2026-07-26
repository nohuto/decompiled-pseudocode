/*
 * XREFs of ?ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z @ 0x1C00214C0
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001AE74 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x1C0127C0C (ndisIfUpdateIfBlockFromPersistedState.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C012D504 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     NdisReferenceWithTag @ 0x1C000DF00 (NdisReferenceWithTag.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1C00189B4 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ?ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z @ 0x1C0107B2C (-ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z.c)
 */

void __fastcall ndisMUpdateHiddenFlag(struct _NDIS_MINIPORT_BLOCK *a1, bool a2)
{
  unsigned int PnPFlags; // eax
  KIRQL v5; // dl
  unsigned int v6; // ecx
  unsigned int v7; // eax
  KIRQL v8; // al
  struct _LIST_ENTRY *Flink; // rdi
  KIRQL v10; // r14
  struct _LIST_ENTRY *v11; // rsi
  KIRQL v12; // al
  KIRQL NewIrql; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 != ((a1->PnPFlags & 0x1000) != 0) )
  {
    NewIrql = 0;
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    PnPFlags = a1->PnPFlags;
    v5 = NewIrql;
    v6 = PnPFlags | 0x1000;
    v7 = PnPFlags & 0xFFFFEFFF;
    if ( !a2 )
      v6 = v7;
    a1->MiniportThread = 0LL;
    a1->PnPFlags = v6;
    KeReleaseSpinLock(&a1->Lock, v5);
    v8 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    Flink = ndisIfList.Flink;
    v10 = v8;
    while ( Flink != &ndisIfList )
    {
      v11 = Flink - 77;
      if ( BYTE2(Flink[10].Flink) && (struct _NDIS_MINIPORT_BLOCK *)v11[88].Flink[2].Flink == a1 )
      {
        NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v11[89].Blink, 0xEu);
        ++LODWORD(v11[81].Blink);
        KeReleaseSpinLock(&ndisIfListLock, v10);
        ndisIfUpdateInterfaceHiddenFlag((struct _NDIS_IF_BLOCK *)&Flink[-77], a2);
        v12 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
        Flink = Flink->Flink;
        v10 = v12;
        IFBLOCK_DECREMENT_REF((struct _NDIS_IF_BLOCK *)v11, 0xEu);
      }
      else
      {
        Flink = Flink->Flink;
      }
    }
    KeReleaseSpinLock(&ndisIfListLock, v10);
    if ( (a1->Flags & 0x100) == 0 )
      IoInvalidateDeviceState(a1->PhysicalDeviceObject);
  }
}
