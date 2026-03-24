/*
 * XREFs of IsFreezeThawTimersSupported @ 0x1C0052850
 * Callers:
 *     UserProcessFreezeCallout @ 0x1C00525C8 (UserProcessFreezeCallout.c)
 *     UserProcessThawCallout @ 0x1C0052A10 (UserProcessThawCallout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 IsFreezeThawTimersSupported()
{
  if ( qword_1C0256068 )
    return qword_1C0256068();
  else
    return 3221225659LL;
}
