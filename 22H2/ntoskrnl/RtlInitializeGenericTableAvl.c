/*
 * XREFs of RtlInitializeGenericTableAvl @ 0x14032D560
 * Callers:
 *     PiDqQueryCreate @ 0x1406A7BF8 (PiDqQueryCreate.c)
 *     PiPnpRtlBeginOperation @ 0x1406AD460 (PiPnpRtlBeginOperation.c)
 *     PopDirectedDripsUmInitialize @ 0x140791728 (PopDirectedDripsUmInitialize.c)
 *     EtwpInitializeAutoLoggers @ 0x140795E44 (EtwpInitializeAutoLoggers.c)
 *     EtwpEnableKeyProviders @ 0x140796F8C (EtwpEnableKeyProviders.c)
 *     PiDmObjectManagerInit @ 0x1407A33B0 (PiDmObjectManagerInit.c)
 *     VfAvlInitializeTreeEx @ 0x1409C2644 (VfAvlInitializeTreeEx.c)
 *     IoInitSystemPreDrivers @ 0x140A3DF90 (IoInitSystemPreDrivers.c)
 *     PiDcInit @ 0x140A53024 (PiDcInit.c)
 *     PiInitializeDDBCache @ 0x140A53128 (PiInitializeDDBCache.c)
 *     PiSwInit @ 0x140A534A0 (PiSwInit.c)
 *     PopPowerRequestInit @ 0x140A704D4 (PopPowerRequestInit.c)
 *     PopStatsInitPowerRequestLibrary @ 0x140A706D8 (PopStatsInitPowerRequestLibrary.c)
 *     PpInitSystem @ 0x140A72804 (PpInitSystem.c)
 * Callees:
 *     memset @ 0x140413800 (memset.c)
 */

void __stdcall RtlInitializeGenericTableAvl(
        PRTL_AVL_TABLE Table,
        PRTL_AVL_COMPARE_ROUTINE CompareRoutine,
        PRTL_AVL_ALLOCATE_ROUTINE AllocateRoutine,
        PRTL_AVL_FREE_ROUTINE FreeRoutine,
        PVOID TableContext)
{
  memset(Table, 0, sizeof(_RTL_AVL_TABLE));
  Table->CompareRoutine = (_RTL_GENERIC_COMPARE_RESULTS (__fastcall *)(_RTL_AVL_TABLE *, void *, void *))CompareRoutine;
  Table->FreeRoutine = (void (__fastcall *)(_RTL_AVL_TABLE *, void *))FreeRoutine;
  Table->TableContext = TableContext;
  Table->BalancedRoot.Parent = &Table->BalancedRoot;
  Table->AllocateRoutine = (void *(__fastcall *)(_RTL_AVL_TABLE *, unsigned int))AllocateRoutine;
}
