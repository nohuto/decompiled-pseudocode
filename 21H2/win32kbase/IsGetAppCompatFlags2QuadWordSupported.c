/*
 * XREFs of IsGetAppCompatFlags2QuadWordSupported @ 0x1C003CC8C
 * Callers:
 *     UserThreadCallout @ 0x1C003C590 (UserThreadCallout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetAppCompatFlags2QuadWordSupported()
{
  if ( qword_1C0257A18 )
    return qword_1C0257A18();
  else
    return 3221225659LL;
}
