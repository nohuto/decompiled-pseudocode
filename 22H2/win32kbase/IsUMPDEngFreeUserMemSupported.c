/*
 * XREFs of IsUMPDEngFreeUserMemSupported @ 0x1C023279C
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00483E0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 IsUMPDEngFreeUserMemSupported()
{
  if ( qword_1C0294CB8 )
    return qword_1C0294CB8();
  else
    return 3221225659LL;
}
