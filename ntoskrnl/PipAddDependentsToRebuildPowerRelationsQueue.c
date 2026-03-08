/*
 * XREFs of PipAddDependentsToRebuildPowerRelationsQueue @ 0x140838960
 * Callers:
 *     IoResolveDependency @ 0x1403943F0 (IoResolveDependency.c)
 *     PnpDeleteAllDependencyRelations @ 0x140782F5C (PnpDeleteAllDependencyRelations.c)
 *     IoDuplicateDependency @ 0x140951200 (IoDuplicateDependency.c)
 * Callees:
 *     PiGetDependentList @ 0x1406819C8 (PiGetDependentList.c)
 *     PipAddtoRebuildPowerRelationsQueue @ 0x140681B48 (PipAddtoRebuildPowerRelationsQueue.c)
 *     PiEnumerateDependentListEntry @ 0x140838DB4 (PiEnumerateDependentListEntry.c)
 */

__int64 *__fastcall PipAddDependentsToRebuildPowerRelationsQueue(__int64 a1)
{
  __int64 *result; // rax
  __int64 *v2; // rdi
  __int64 *v3; // rbx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  result = PiGetDependentList(a1);
  v2 = result;
  v3 = (__int64 *)*result;
  while ( v3 != v2 )
  {
    result = (__int64 *)PiEnumerateDependentListEntry(v3, &v4, 0LL);
    v3 = (__int64 *)*v3;
    if ( v4 )
      result = PipAddtoRebuildPowerRelationsQueue(v4);
  }
  return result;
}
