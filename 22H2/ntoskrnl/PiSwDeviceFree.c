/*
 * XREFs of PiSwDeviceFree @ 0x1407342E0
 * Callers:
 *     PiSwDeviceDereference @ 0x140773A00 (PiSwDeviceDereference.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402CC2B0 (ExAcquireResourceExclusiveLite.c)
 *     PnpFreeDevPropertyArray @ 0x1406AC460 (PnpFreeDevPropertyArray.c)
 *     PiSwPdoAssociationFree @ 0x14073312C (PiSwPdoAssociationFree.c)
 *     PiSwPnPInfoFree @ 0x1407343A0 (PiSwPnPInfoFree.c)
 *     PiSwInstanceInfoFree @ 0x140734414 (PiSwInstanceInfoFree.c)
 *     PiSwFreeInterfaceList @ 0x14074DF0C (PiSwFreeInterfaceList.c)
 *     PiSwQueuedCreateInfoFree @ 0x1408AEC98 (PiSwQueuedCreateInfoFree.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwDeviceFree(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  char *v5; // rdx
  PADAPTER_OBJECT **v6; // rdi
  PADAPTER_OBJECT *v7; // rbx
  PADAPTER_OBJECT v8; // rax
  struct _KTHREAD *CurrentThread; // rax
  PADAPTER_OBJECT v10; // rdx
  PADAPTER_OBJECT **v11; // rax

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
  PiSwFreeInterfaceList(a1 + 184);
  v6 = (PADAPTER_OBJECT **)(a1 + 128);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == (PADAPTER_OBJECT *)v6 )
      break;
    if ( v7[1] != (PADAPTER_OBJECT)v6 )
      goto LABEL_16;
    v8 = *v7;
    if ( (PADAPTER_OBJECT *)(*v7)->DmaOperations != v7
      || (*v6 = (PADAPTER_OBJECT *)v8,
          v8->DmaOperations = (_DMA_OPERATIONS *)v6,
          CurrentThread = KeGetCurrentThread(),
          --CurrentThread->KernelApcDisable,
          ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u),
          v10 = v7[2],
          (PADAPTER_OBJECT *)v10->DmaOperations != v7 + 2)
      || (v11 = (PADAPTER_OBJECT **)v7[3], *v11 != v7 + 2) )
    {
LABEL_16:
      __fastfail(3u);
    }
    *v11 = (PADAPTER_OBJECT *)v10;
    v10->DmaOperations = (_DMA_OPERATIONS *)v11;
    ExReleaseResourceLite(&PiSwLockObj);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    PiSwPdoAssociationFree(v7);
  }
}
