/*
 * XREFs of PnpUnlinkDeviceRemovalRelations @ 0x140862FDC
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1408625F0 (PnpProcessQueryRemoveAndEject.c)
 *     PipRemoveDevicesInRelationList @ 0x14087CF0C (PipRemoveDevicesInRelationList.c)
 *     PiEventRemovalPostSurpriseRemove @ 0x14087E710 (PiEventRemovalPostSurpriseRemove.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     PpDevNodeRemoveFromTree @ 0x1403CF61C (PpDevNodeRemoveFromTree.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x1403D071C (PnpSetDeviceInstanceRemovalEvent.c)
 *     _PnpSetObjectProperty @ 0x140686C8C (_PnpSetObjectProperty.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140687320 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PpDevNodeUnlockTree @ 0x1406CB8B0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406CB944 (PpDevNodeLockTree.c)
 *     PiPnpRtlEndOperation @ 0x1406CCB7C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1406CDF98 (PiPnpRtlBeginOperation.c)
 *     IopIsDescendantNode @ 0x140861DAC (IopIsDescendantNode.c)
 *     IopEnumerateRelations @ 0x140863508 (IopEnumerateRelations.c)
 *     PnpCleanupDeviceRegistryValues @ 0x14088039C (PnpCleanupDeviceRegistryValues.c)
 *     IopRemoveCurrentRelationFromList @ 0x140969BAC (IopRemoveCurrentRelationFromList.c)
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
      IopIsDescendantNode((_QWORD *)a2, (__int64)Object);
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
