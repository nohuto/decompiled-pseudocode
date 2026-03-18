/*
 * XREFs of MiGetWorkingSetSwapSupport @ 0x140342488
 * Callers:
 *     MmInSwapWorkingSet @ 0x1402000BC (MmInSwapWorkingSet.c)
 *     MiOutPageSingleKernelStack @ 0x14021B5A0 (MiOutPageSingleKernelStack.c)
 *     MiCheckReservePageFileSpace @ 0x140282EC0 (MiCheckReservePageFileSpace.c)
 *     MmOutSwapWorkingSet @ 0x140341B10 (MmOutSwapWorkingSet.c)
 *     MiOutlawInswaps @ 0x1403423F4 (MiOutlawInswaps.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x1406531F4 (MmQueryProcessWorkingSetSwapPages.c)
 * Callees:
 *     MiGetSharedVm @ 0x140286D54 (MiGetSharedVm.c)
 */

__int64 __fastcall MiGetWorkingSetSwapSupport(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    return 0LL;
  else
    return *((_QWORD *)MiGetSharedVm(a1) + 3);
}
