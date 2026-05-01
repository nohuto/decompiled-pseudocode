/*
 * XREFs of ?RmpMemoryMonitorActiveLowPriFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x180075550
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012C50 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostIsRunnable@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18006BBE8 (-RmpActivityHostIsRunnable@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 */

bool __fastcall RmpMemoryMonitorActiveLowPriFilterCallback(struct _RM_ACTIVITY_HOST *a1, void *a2)
{
  struct _RM_ACTIVITY_HOST *v2; // rcx

  return (unsigned int)RmpActivityHostIsRunnable(a1, 1) && (unsigned int)RmpActivityHostIsRevocable(v2);
}
