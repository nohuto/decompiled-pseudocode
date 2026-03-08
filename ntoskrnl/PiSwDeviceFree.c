/*
 * XREFs of PiSwDeviceFree @ 0x140964270
 * Callers:
 *     PiSwDeviceDereference @ 0x140807FA4 (PiSwDeviceDereference.c)
 * Callees:
 *     PnpFreeDevPropertyArray @ 0x1406CC480 (PnpFreeDevPropertyArray.c)
 *     PiSwFreeInterfaceList @ 0x140807ACC (PiSwFreeInterfaceList.c)
 *     PiSwFreePdoAssociationsList @ 0x140964490 (PiSwFreePdoAssociationsList.c)
 *     PiSwInstanceInfoFree @ 0x14096452C (PiSwInstanceInfoFree.c)
 *     PiSwPnPInfoFree @ 0x1409646D4 (PiSwPnPInfoFree.c)
 *     PiSwQueuedCreateInfoFree @ 0x140964BA0 (PiSwQueuedCreateInfoFree.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwDeviceFree(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  char *v5; // rdx

  PiSwInstanceInfoFree(a1 + 8);
  PiSwPnPInfoFree(a1 + 24);
  v2 = *(void **)(a1 + 80);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x57706E50u);
    *(_OWORD *)(a1 + 72) = 0LL;
  }
  v3 = *(void **)(a1 + 88);
  if ( v3 )
  {
    PiSwQueuedCreateInfoFree(v3);
    *(_QWORD *)(a1 + 88) = 0LL;
  }
  v4 = *(void **)(a1 + 152);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x57706E50u);
    *(_QWORD *)(a1 + 152) = 0LL;
  }
  v5 = *(char **)(a1 + 168);
  if ( v5 )
  {
    PnpFreeDevPropertyArray(*(_DWORD *)(a1 + 176), v5, 0x57706E50u);
    *(_QWORD *)(a1 + 168) = 0LL;
    *(_DWORD *)(a1 + 176) = 0;
  }
  PiSwFreeInterfaceList((_QWORD **)(a1 + 184));
  return PiSwFreePdoAssociationsList(a1 + 128);
}
