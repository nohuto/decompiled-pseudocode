/*
 * XREFs of IsUserResetPointerSupported @ 0x1C0018F24
 * Callers:
 *     ?DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z @ 0x1C0018EB0 (-DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z.c)
 *     DxgkEngResetPointer @ 0x1C01694A0 (DxgkEngResetPointer.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 IsUserResetPointerSupported()
{
  if ( qword_1C0294440 )
    return qword_1C0294440();
  else
    return 3221225659LL;
}
