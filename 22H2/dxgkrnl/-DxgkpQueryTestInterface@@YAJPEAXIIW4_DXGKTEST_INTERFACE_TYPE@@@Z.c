/*
 * XREFs of ?DxgkpQueryTestInterface@@YAJPEAXIIW4_DXGKTEST_INTERFACE_TYPE@@@Z @ 0x1C035D8B4
 * Callers:
 *     DxgkInternalDeviceIoctl @ 0x1C01E30C0 (DxgkInternalDeviceIoctl.c)
 * Callees:
 *     ?SysMmQueryTestInterface@@YAJPEAXII@Z @ 0x1C00721B4 (-SysMmQueryTestInterface@@YAJPEAXII@Z.c)
 *     DxgkpIsDrtEnabled @ 0x1C030A784 (DxgkpIsDrtEnabled.c)
 *     QueryCoreInterface @ 0x1C035D924 (QueryCoreInterface.c)
 */

__int64 __fastcall DxgkpQueryTestInterface(_QWORD *a1, unsigned int a2, unsigned int a3, int a4)
{
  if ( !DxgkpIsDrtEnabled((__int64)a1) )
    return 3221225485LL;
  if ( !a4 )
    return QueryCoreInterface(a1, a2, a3);
  if ( a4 != 1 )
    return 3221225485LL;
  return SysMmQueryTestInterface(a1, a2, a3);
}
