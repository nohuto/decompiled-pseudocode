/*
 * XREFs of PnpUnlinkDeviceRemovalRelations @ 0x140868334
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140867948 (PnpProcessQueryRemoveAndEject.c)
 *     PipRemoveDevicesInRelationList @ 0x140881CBC (PipRemoveDevicesInRelationList.c)
 *     PiEventRemovalPostSurpriseRemove @ 0x1408834B4 (PiEventRemovalPostSurpriseRemove.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390C0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     PpDevNodeRemoveFromTree @ 0x1403D4BAC (PpDevNodeRemoveFromTree.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x1403D5A18 (PnpSetDeviceInstanceRemovalEvent.c)
 *     PpDevNodeUnlockTree @ 0x1406C99AC (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406C9A40 (PpDevNodeLockTree.c)
 *     PiPnpRtlEndOperation @ 0x140788CDC (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140788EE0 (PiPnpRtlBeginOperation.c)
 *     _PnpSetObjectProperty @ 0x14079708C (_PnpSetObjectProperty.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140797720 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     IopEnumerateRelations @ 0x140868860 (IopEnumerateRelations.c)
 *     IopIsDescendantNode @ 0x1408693C4 (IopIsDescendantNode.c)
 *     PnpCleanupDeviceRegistryValues @ 0x14088507C (PnpCleanupDeviceRegistryValues.c)
 *     IopRemoveCurrentRelationFromList @ 0x14096CBCC (IopRemoveCurrentRelationFromList.c)
 */

void __fastcall PnpUnlinkDeviceRemovalRelations(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // r14
  char v5; // bl
  bool v6; // zf
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // [rsp+50h] [rbp-10h] BYREF
  PVOID Object; // [rsp+90h] [rbp+30h] BYREF
  PVOID P; // [rsp+98h] [rbp+38h] BYREF
  char v12; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+48h] BYREF

  Object = 0LL;
  v9 = 0LL;
  P = 0LL;
  PpDevNodeLockTree(4);
  if ( a2 && *(_BYTE *)(a2 + 8) )
  {
    v13 = 1LL;
    while ( (unsigned __int8)IopEnumerateRelations(
                               a2,
                               (unsigned int)&v13,
                               (unsigned int)&Object,
                               (unsigned int)&v12,
                               0LL) )
    {
      v8 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
      IopIsDescendantNode(a2);
      if ( (unsigned int)(*(_DWORD *)(v8 + 300) - 789) <= 1 )
      {
        CurrentThread = KeGetCurrentThread();
        v4 = *(_QWORD *)(v8 + 16);
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
        PnpCleanupDeviceRegistryValues(v8 + 40);
        v5 = PpDevNodeRemoveFromTree((_QWORD *)v8);
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KeLeaveCriticalRegion();
        if ( v5 )
        {
          v6 = *(_QWORD *)(v8 + 48) == 0LL;
          *(_QWORD *)(v8 + 648) = v4;
          if ( !v6 )
          {
            PiPnpRtlBeginOperation((__int64 **)&P);
            v9 = MEMORY[0xFFFFF78000000014];
            PnpSetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              *(_QWORD *)(v8 + 48),
              1u,
              0LL,
              0LL,
              (__int64)&DEVPKEY_Device_LastRemovalDate,
              16,
              (__int64)&v9,
              8u,
              0);
            PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v7, *(_QWORD *)(v8 + 48), 1);
            PnpSetDeviceInstanceRemovalEvent(v8);
            if ( P )
            {
              PiPnpRtlEndOperation((PVOID **)P);
              P = 0LL;
            }
          }
          if ( *(_DWORD *)(v8 + 300) == 790 )
            IopRemoveCurrentRelationFromList(a2, Object, &v13);
          ObfDereferenceObject(Object);
        }
      }
    }
  }
  PpDevNodeUnlockTree(4);
}
