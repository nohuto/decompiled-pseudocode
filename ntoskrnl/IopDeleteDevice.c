/*
 * XREFs of IopDeleteDevice @ 0x140782EF0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     IopCleanupNotifications @ 0x1403A62E8 (IopCleanupNotifications.c)
 *     PnpDeleteAllDependencyRelations @ 0x140782F5C (PnpDeleteAllDependencyRelations.c)
 *     IopDestroyDeviceNode @ 0x140782FD0 (IopDestroyDeviceNode.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall IopDeleteDevice(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  PnpDeleteAllDependencyRelations(a1);
  IopDestroyDeviceNode(*(PVOID *)(*(_QWORD *)(a1 + 312) + 40LL));
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 312) + 32LL) & 0x1000) != 0 )
    IopCleanupNotifications(*(PVOID *)(a1 + 8), (PVOID)a1);
  v2 = (void *)_InterlockedExchange64((volatile __int64 *)(a1 + 56), 0LL);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = *(void **)(a1 + 8);
  if ( v3 )
    ObfDereferenceObject(v3);
}
