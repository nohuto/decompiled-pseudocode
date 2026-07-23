/*
 * XREFs of RtlInitializeGenericTableAvl @ 0x1402524C0
 * Callers:
 *     PiDqQueryCreate @ 0x140623E98 (PiDqQueryCreate.c)
 *     PiPnpRtlBeginOperation @ 0x140629498 (PiPnpRtlBeginOperation.c)
 *     PopDirectedDripsUmInitialize @ 0x140796A98 (PopDirectedDripsUmInitialize.c)
 *     EtwpInitializeAutoLoggers @ 0x14079B1B4 (EtwpInitializeAutoLoggers.c)
 *     EtwpEnableKeyProviders @ 0x14079C2FC (EtwpEnableKeyProviders.c)
 *     PiDmObjectManagerInit @ 0x1407A3180 (PiDmObjectManagerInit.c)
 *     VfAvlInitializeTreeEx @ 0x1409C3634 (VfAvlInitializeTreeEx.c)
 *     IoInitSystemPreDrivers @ 0x140A3FB60 (IoInitSystemPreDrivers.c)
 *     PiDcInit @ 0x140A54024 (PiDcInit.c)
 *     PiInitializeDDBCache @ 0x140A54128 (PiInitializeDDBCache.c)
 *     PiSwInit @ 0x140A544A0 (PiSwInit.c)
 *     PopPowerRequestInit @ 0x140A714D4 (PopPowerRequestInit.c)
 *     PopStatsInitPowerRequestLibrary @ 0x140A716D8 (PopStatsInitPowerRequestLibrary.c)
 *     PpInitSystem @ 0x140A73804 (PpInitSystem.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
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
