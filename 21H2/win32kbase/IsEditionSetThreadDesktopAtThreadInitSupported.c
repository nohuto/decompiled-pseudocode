/*
 * XREFs of IsEditionSetThreadDesktopAtThreadInitSupported @ 0x1C00AD230
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C003D918 (xxxCreateThreadInfo.c)
 *     ApiSetEditionSetThreadDesktopAtThreadInit @ 0x1C01CE218 (ApiSetEditionSetThreadDesktopAtThreadInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 IsEditionSetThreadDesktopAtThreadInitSupported()
{
  if ( qword_1C0256F68 )
    return qword_1C0256F68();
  else
    return 3221225659LL;
}
