/*
 * XREFs of VmSetThreadSchedulerAssist @ 0x140465ED0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetThreadSchedulerAssist @ 0x14056D2BC (KeSetThreadSchedulerAssist.c)
 */

__int64 __fastcall VmSetThreadSchedulerAssist(ULONG_PTR a1)
{
  return KeSetThreadSchedulerAssist(a1);
}
