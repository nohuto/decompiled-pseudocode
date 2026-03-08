/*
 * XREFs of ?GetCcdRawmodeFlag@@YAIXZ @ 0x1C00D4310
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0025C00 (DrvSetDisplayConfig.c)
 *     ?DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C018E088 (-DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetCcdRawmodeFlag(__int64 a1, __int64 a2)
{
  __int64 DxgkWin32kInterface; // rax

  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
  return (*(unsigned __int8 (**)(void))(DxgkWin32kInterface + 328))() != 0 ? 0x20000 : 0;
}
