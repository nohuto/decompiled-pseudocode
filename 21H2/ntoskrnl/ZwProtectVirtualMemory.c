/*
 * XREFs of ZwProtectVirtualMemory @ 0x1403FADA0
 * Callers:
 *     CmSiProtectViewOfSection @ 0x14036286C (CmSiProtectViewOfSection.c)
 *     KiOpPatchCode @ 0x140524734 (KiOpPatchCode.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405D7AD8 (WbMakeUserDataPagesKernelWritable.c)
 *     MiCheckForUserStackOverflow @ 0x1406955F8 (MiCheckForUserStackOverflow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwProtectVirtualMemory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
