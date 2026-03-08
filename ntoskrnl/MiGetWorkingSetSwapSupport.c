/*
 * XREFs of MiGetWorkingSetSwapSupport @ 0x1402DBD74
 * Callers:
 *     MmInSwapWorkingSet @ 0x1402000BC (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x1402DAFF8 (MmOutSwapWorkingSet.c)
 *     MiOutlawInswaps @ 0x1402DB8E0 (MiOutlawInswaps.c)
 *     MiOutPageSingleKernelStack @ 0x1402DB980 (MiOutPageSingleKernelStack.c)
 *     MiCheckReservePageFileSpace @ 0x14032D670 (MiCheckReservePageFileSpace.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x140650B98 (MmQueryProcessWorkingSetSwapPages.c)
 * Callees:
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 */

__int64 __fastcall MiGetWorkingSetSwapSupport(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    return 0LL;
  else
    return *(_QWORD *)(MiGetSharedVm(a1, a2, a3, a4) + 24);
}
