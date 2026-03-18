/*
 * XREFs of IsGetPTPShellTargetSupported @ 0x1C023E28C
 * Callers:
 *     ?GetHitTestState@CPTPProcessor@@QEAAPEBUCHitTestState@@PEBUCPointerInputFrame@@@Z @ 0x1C01DE300 (-GetHitTestState@CPTPProcessor@@QEAAPEBUCHitTestState@@PEBUCPointerInputFrame@@@Z.c)
 *     ApiSetGetPTPShellTarget @ 0x1C020D384 (ApiSetGetPTPShellTarget.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetPTPShellTargetSupported()
{
  if ( qword_1C029D6B0 )
    return qword_1C029D6B0();
  else
    return 3221225659LL;
}
