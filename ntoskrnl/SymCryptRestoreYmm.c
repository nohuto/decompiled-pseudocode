/*
 * XREFs of SymCryptRestoreYmm @ 0x14056ADE4
 * Callers:
 *     SymCryptParallelSha256Process @ 0x1403EFFF0 (SymCryptParallelSha256Process.c)
 * Callees:
 *     SymCryptRestoreYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1403ED880 (SymCryptRestoreYmmEnvWindowsKernelmodeWin8_1nLater.c)
 */

void __fastcall SymCryptRestoreYmm(struct _XSTATE_SAVE *a1)
{
  SymCryptRestoreYmmEnvWindowsKernelmodeWin8_1nLater(a1);
}
