/*
 * XREFs of ?ndisLWM5RestartMinport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_RESTART_PARAMETERS@@@Z @ 0x1C006E6C0
 * Callers:
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C01329B4 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_RECV_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C006D6CC (-NDIS_ACQUIRE_MINIPORT_RECV_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 */

__int64 __fastcall ndisLWM5RestartMinport(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_MINIPORT_RESTART_PARAMETERS *a2)
{
  KIRQL v3; // dl
  struct _NDIS_MINIPORT_RESTART_PARAMETERS *NewIrql; // [rsp+38h] [rbp+10h] BYREF

  NewIrql = a2;
  LOBYTE(NewIrql) = 0;
  NDIS_ACQUIRE_MINIPORT_RECV_SPIN_LOCK(a1, (unsigned __int8 *)&NewIrql);
  v3 = (unsigned __int8)NewIrql;
  a1->MiniportRecvLockThread = 0LL;
  a1->RecvState = NdisMiniportRunning;
  KeReleaseSpinLock(&a1->RecvLock, v3);
  return 0LL;
}
