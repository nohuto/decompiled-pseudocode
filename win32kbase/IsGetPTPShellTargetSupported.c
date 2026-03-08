/*
 * XREFs of IsGetPTPShellTargetSupported @ 0x1C0271F1C
 * Callers:
 *     ?GetHitTestState@CPTPProcessor@@QEAAPEBUCHitTestState@@PEBUCPointerInputFrame@@@Z @ 0x1C020DD78 (-GetHitTestState@CPTPProcessor@@QEAAPEBUCHitTestState@@PEBUCPointerInputFrame@@@Z.c)
 *     ApiSetGetPTPShellTarget @ 0x1C0244748 (ApiSetGetPTPShellTarget.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetPTPShellTargetSupported()
{
  if ( qword_1C02D7E88 )
    return qword_1C02D7E88();
  else
    return 3221225659LL;
}
