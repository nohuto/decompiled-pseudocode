/*
 * XREFs of KiCheckAssistDataForBamQosLevelOverride @ 0x14056B928
 * Callers:
 *     KeYieldExecution @ 0x140256BE0 (KeYieldExecution.c)
 *     KiDeferredReadySingleThread @ 0x140259FB0 (KiDeferredReadySingleThread.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1402E1338 (KiUpdateVPBackingThreadPriority.c)
 *     KiDirectSwitchThread @ 0x1403414A0 (KiDirectSwitchThread.c)
 *     KeSetThreadSchedulerAssist @ 0x14056AE2C (KeSetThreadSchedulerAssist.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x14056C0C8 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiCheckAssistDataForBamQosLevelOverride(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  if ( *a2 )
  {
    v2 = *(_QWORD *)(a1 + 968);
    if ( v2 )
    {
      result = *(unsigned int *)(v2 + 28);
      if ( *(_QWORD *)(v2 + 28) || (*(_DWORD *)(v2 + 20) & 0x4000) != 0 )
        *a2 = 0;
    }
  }
  return result;
}
