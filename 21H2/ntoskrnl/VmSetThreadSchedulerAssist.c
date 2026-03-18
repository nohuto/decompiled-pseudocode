/*
 * XREFs of VmSetThreadSchedulerAssist @ 0x14045F720
 * Callers:
 *     <none>
 * Callees:
 *     KeSetThreadSchedulerAssist @ 0x140576AA4 (KeSetThreadSchedulerAssist.c)
 */

__int64 __fastcall VmSetThreadSchedulerAssist(ULONG_PTR a1)
{
  return KeSetThreadSchedulerAssist(a1);
}
