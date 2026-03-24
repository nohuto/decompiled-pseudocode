/*
 * XREFs of IsGetAppCompatFlags2QuadWordSupported @ 0x1C003E0FC
 * Callers:
 *     UserThreadCallout @ 0x1C003DA00 (UserThreadCallout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetAppCompatFlags2QuadWordSupported()
{
  if ( qword_1C0256A18 )
    return qword_1C0256A18();
  else
    return 3221225659LL;
}
