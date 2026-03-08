/*
 * XREFs of NtGdiDestroyPhysicalMonitor @ 0x1C026CF10
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyPhysicalMonitor@CMonitorAPI@@QEAAJPEAX@Z @ 0x1C026C6B0 (-DestroyPhysicalMonitor@CMonitorAPI@@QEAAJPEAX@Z.c)
 */

__int64 __fastcall NtGdiDestroyPhysicalMonitor(void *a1)
{
  __int64 v2; // rax

  v2 = SGDGetSessionState(a1);
  return CMonitorAPI::DestroyPhysicalMonitor(*(CMonitorAPI **)(*(_QWORD *)(v2 + 32) + 8728LL), a1);
}
