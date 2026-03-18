/*
 * XREFs of ?SysMmCreateLiveDump@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1C0072774
 * Callers:
 *     ?SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x1C03D65F8 (-SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 * Callees:
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1C02CE310 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 */

__int64 SysMmCreateLiveDump()
{
  return DxgCreateLiveDumpWithWdLogs(403LL, 2074LL);
}
