/*
 * XREFs of PnpProcessCompletedEject @ 0x140956080
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1408625F0 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PnpDisableAndFreeEventWatchdog @ 0x14068A900 (PnpDisableAndFreeEventWatchdog.c)
 *     PnpCompleteDeviceEvent @ 0x14068C1BC (PnpCompleteDeviceEvent.c)
 *     PpDevNodeUnlockTree @ 0x1406CB8B0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406CB944 (PpDevNodeLockTree.c)
 *     IopFreeRelationList @ 0x140863634 (IopFreeRelationList.c)
 *     PnpInvalidateRelationsInList @ 0x14087CBE8 (PnpInvalidateRelationsInList.c)
 *     PpProfileMarkAllTransitioningDocksEjected @ 0x140960E64 (PpProfileMarkAllTransitioningDocksEjected.c)
 *     PnpSetDeviceRemovalSafe @ 0x140961730 (PnpSetDeviceRemovalSafe.c)
 *     PnpTrackQueryRemoveDevices @ 0x140961AFC (PnpTrackQueryRemoveDevices.c)
 *     IopWarmEjectDevice @ 0x14096C1CC (IopWarmEjectDevice.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PnpProcessCompletedEject(PVOID P)
{
  int v1; // esi
  __int64 v3; // rcx
  _QWORD *v4; // rcx
  PVOID *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  void *v8; // rdi

  v1 = 0;
  if ( *((_DWORD *)P + 23) > 1u )
  {
    *((_BYTE *)P + 89) = 0;
    v1 = IopWarmEjectDevice(*((_QWORD *)P + 7));
  }
  v3 = *((_QWORD *)P + 12);
  if ( v3 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(v3 + 32))(*(_QWORD *)(v3 + 8), 1LL);
    (*(void (__fastcall **)(_QWORD))(*((_QWORD *)P + 12) + 24LL))(*(_QWORD *)(*((_QWORD *)P + 12) + 8LL));
  }
  PpDevNodeLockTree(1);
  v4 = *(_QWORD **)P;
  if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P || (v5 = (PVOID *)*((_QWORD *)P + 1), *v5 != P) )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = v5;
  v6 = *((_QWORD *)P + 7);
  if ( v6 )
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
  else
    v7 = 0LL;
  if ( *((_QWORD *)P + 8) )
  {
    if ( *((_BYTE *)P + 88) )
      PpProfileMarkAllTransitioningDocksEjected();
    PnpInvalidateRelationsInList(*((unsigned int ***)P + 8), 4u, 0, 1);
    PnpTrackQueryRemoveDevices(*((_QWORD *)P + 8), 0LL);
    IopFreeRelationList(*((_QWORD **)P + 8));
    *(_QWORD *)(v7 + 696) = 0LL;
  }
  else
  {
    *((_BYTE *)P + 89) = 0;
  }
  PpDevNodeUnlockTree(1);
  v8 = (void *)*((_QWORD *)P + 6);
  if ( v8 )
  {
    PnpDisableAndFreeEventWatchdog(*((_QWORD *)P + 6));
    PnpCompleteDeviceEvent(v8, v1);
  }
  if ( *((_BYTE *)P + 89) )
    PnpSetDeviceRemovalSafe(*((PVOID *)P + 7));
  ObfDereferenceObject(*((PVOID *)P + 7));
  ExFreePoolWithTag(P, 0);
}
