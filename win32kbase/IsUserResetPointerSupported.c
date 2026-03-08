/*
 * XREFs of IsUserResetPointerSupported @ 0x1C00CCC4C
 * Callers:
 *     ?DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z @ 0x1C00CCA70 (-DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z.c)
 *     DxgkEngResetPointer @ 0x1C0196230 (DxgkEngResetPointer.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsUserResetPointerSupported()
{
  if ( qword_1C02D55B0 )
    return qword_1C02D55B0();
  else
    return 3221225659LL;
}
