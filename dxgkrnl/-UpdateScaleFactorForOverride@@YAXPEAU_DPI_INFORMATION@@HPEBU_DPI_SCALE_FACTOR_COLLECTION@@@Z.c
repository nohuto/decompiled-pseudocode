/*
 * XREFs of ?UpdateScaleFactorForOverride@@YAXPEAU_DPI_INFORMATION@@HPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C004BDCC
 * Callers:
 *     DxgkUpdateDpiInfoForNewOverride @ 0x1C02FE570 (DxgkUpdateDpiInfoForNewOverride.c)
 * Callees:
 *     ?AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@HH@Z @ 0x1C0001930 (-AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 */

void __fastcall UpdateScaleFactorForOverride(
        struct _DPI_INFORMATION *a1,
        unsigned int a2,
        const struct _DPI_SCALE_FACTOR_COLLECTION *a3)
{
  *((_DWORD *)a1 + 2) = DpiInternal::AdjustDesktopScaleFactorForOverride(
                          (DpiInternal *)*((unsigned int *)a1 + 3),
                          *((_QWORD *)a1 + 4),
                          (struct tagSIZE)a3,
                          (const struct _DPI_SCALE_FACTOR_COLLECTION *)a2,
                          1);
  *((_DWORD *)a1 + 21) = a2;
}
