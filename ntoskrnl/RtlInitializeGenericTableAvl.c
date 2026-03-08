/*
 * XREFs of RtlInitializeGenericTableAvl @ 0x140245560
 * Callers:
 *     PiPnpRtlBeginOperation @ 0x1406CDF98 (PiPnpRtlBeginOperation.c)
 *     PiDqQueryCreate @ 0x140745E44 (PiDqQueryCreate.c)
 *     PiDmObjectManagerInit @ 0x14083A2C8 (PiDmObjectManagerInit.c)
 *     EtwpInitializeAutoLoggers @ 0x14083C56C (EtwpInitializeAutoLoggers.c)
 *     EtwpEnableKeyProviders @ 0x14083D574 (EtwpEnableKeyProviders.c)
 *     PopDirectedDripsUmInitialize @ 0x14085CE30 (PopDirectedDripsUmInitialize.c)
 *     VfAvlInitializeTreeEx @ 0x140ABA4D4 (VfAvlInitializeTreeEx.c)
 *     ViPtInitAvlTrees @ 0x140ADBDB0 (ViPtInitAvlTrees.c)
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 *     PpInitSystem @ 0x140B493C0 (PpInitSystem.c)
 *     PiSwInit @ 0x140B56DF0 (PiSwInit.c)
 *     PiDcInit @ 0x140B5A688 (PiDcInit.c)
 *     PiInitializeDDBCache @ 0x140B5A928 (PiInitializeDDBCache.c)
 *     PopPowerRequestInitialize @ 0x140B62754 (PopPowerRequestInitialize.c)
 *     PopPowerRequestStatsInitialize @ 0x140B62918 (PopPowerRequestStatsInitialize.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

void __stdcall RtlInitializeGenericTableAvl(
        PRTL_AVL_TABLE Table,
        PRTL_AVL_COMPARE_ROUTINE CompareRoutine,
        PRTL_AVL_ALLOCATE_ROUTINE AllocateRoutine,
        PRTL_AVL_FREE_ROUTINE FreeRoutine,
        PVOID TableContext)
{
  memset(Table, 0, sizeof(RTL_AVL_TABLE));
  Table->CompareRoutine = (_RTL_GENERIC_COMPARE_RESULTS (__fastcall *)(_RTL_AVL_TABLE *, void *, void *))CompareRoutine;
  Table->FreeRoutine = (void (__fastcall *)(_RTL_AVL_TABLE *, void *))FreeRoutine;
  Table->TableContext = TableContext;
  Table->BalancedRoot.Parent = &Table->BalancedRoot;
  Table->AllocateRoutine = (void *(__fastcall *)(_RTL_AVL_TABLE *, unsigned int))AllocateRoutine;
}
