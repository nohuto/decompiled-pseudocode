/*
 * XREFs of VmSetThreadSchedulerAssist @ 0x14045DEE0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetThreadSchedulerAssist @ 0x14056AE2C (KeSetThreadSchedulerAssist.c)
 */

__int64 __fastcall VmSetThreadSchedulerAssist(ULONG_PTR a1)
{
  return KeSetThreadSchedulerAssist(a1);
}
