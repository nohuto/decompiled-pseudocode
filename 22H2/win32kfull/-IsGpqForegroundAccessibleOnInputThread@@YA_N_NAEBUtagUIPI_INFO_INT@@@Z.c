/*
 * XREFs of ?IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z @ 0x1C014F306
 * Callers:
 *     EditionLLMouseButtonHook @ 0x1C01AC290 (EditionLLMouseButtonHook.c)
 *     EditionLLMouseWheelHook @ 0x1C01AC470 (EditionLLMouseWheelHook.c)
 *     EditionxxxReportMouseBreakToAccessibility @ 0x1C01AC5A0 (EditionxxxReportMouseBreakToAccessibility.c)
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
