/*
 * XREFs of ?ndisUpdateOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003ACD8
 * Callers:
 *     ?ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C002AA6C (-ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_I.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C01329B4 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C001A3E0 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C001A70C (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C001A7A0 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001C6C8 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     memset @ 0x1C0040B00 (memset.c)
 */

void __fastcall ndisUpdateOperationalStatus(struct _NDIS_MINIPORT_BLOCK *a1)
{
  KIRQL v2; // di
  char v3; // al
  unsigned __int64 *p_Lock; // rcx
  _NDIS_IF_BLOCK *IfBlock; // rcx
  KIRQL NewIrql[16]; // [rsp+28h] [rbp-49h] BYREF
  struct _NDIS_STATUS_INDICATION v7; // [rsp+38h] [rbp-39h] BYREF
  _DWORD v8[4]; // [rsp+A8h] [rbp+37h] BYREF

  NewIrql[0] = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, NewIrql);
  v2 = NewIrql[0];
  v3 = ndisIfSetInterfaceState(a1, 1, NewIrql[0]);
  a1->MiniportThread = 0LL;
  p_Lock = &a1->Lock;
  if ( v3 )
  {
    KeReleaseSpinLock(p_Lock, v2);
    ndisMAcquireStInLockWithSpinLock(a1, NewIrql);
    IfBlock = a1->IfBlock;
    v8[0] = 786816;
    v8[1] = IfBlock->ifOperStatus;
    v8[2] = IfBlock->ifOperStatusFlags;
    memset(&v7, 0, sizeof(v7));
    v7.Header = (_NDIS_OBJECT_HEADER)7340440;
    v7.StatusBuffer = v8;
    v7.SourceHandle = a1;
    v7.StatusCode = 1073807395;
    v7.StatusBufferSize = 12;
    ndisIndicateStatusInternal(a1, &v7);
    ndisMReleaseStInLockAndSpinLock(a1, NewIrql[0]);
  }
  else
  {
    KeReleaseSpinLock(p_Lock, v2);
  }
}
