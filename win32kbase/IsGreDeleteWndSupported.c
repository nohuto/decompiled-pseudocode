/*
 * XREFs of IsGreDeleteWndSupported @ 0x1C02715AC
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C004B700 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGreDeleteWndSupported()
{
  if ( qword_1C02D5E38 )
    return qword_1C02D5E38();
  else
    return 3221225659LL;
}
