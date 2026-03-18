/*
 * XREFs of CreatePhysicalMonitorWrap @ 0x1C026FD10
 * Callers:
 *     <none>
 * Callees:
 *     ?CreatePhysicalMonitor@CMonitorAPI@@QEAAJAEAU_LUID@@KPEAPEAX@Z @ 0x1C026E864 (-CreatePhysicalMonitor@CMonitorAPI@@QEAAJAEAU_LUID@@KPEAPEAX@Z.c)
 */

__int64 __fastcall CreatePhysicalMonitorWrap(struct _LUID *a1, unsigned int a2, void **a3)
{
  return CMonitorAPI::CreatePhysicalMonitor((CMonitorAPI *)a1, a1, a2, a3);
}
