/*
 * XREFs of ?IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z @ 0x1C014242C
 * Callers:
 *     EditionLLMouseButtonHook @ 0x1C01AD480 (EditionLLMouseButtonHook.c)
 *     EditionLLMouseWheelHook @ 0x1C01AD660 (EditionLLMouseWheelHook.c)
 *     EditionxxxReportMouseBreakToAccessibility @ 0x1C01AD790 (EditionxxxReportMouseBreakToAccessibility.c)
 * Callees:
 *     <none>
 */

char __fastcall IsGpqForegroundAccessibleOnInputThread(char a1, const struct tagUIPI_INFO_INT *a2)
{
  if ( a1 && gpqForeground && !*((_DWORD *)a2 + 2) )
    return CheckAccess(a2, gpqForeground + 432LL);
  else
    return 1;
}
