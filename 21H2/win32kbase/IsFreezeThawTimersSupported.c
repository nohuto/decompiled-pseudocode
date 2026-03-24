/*
 * XREFs of IsFreezeThawTimersSupported @ 0x1C0051850
 * Callers:
 *     UserProcessFreezeCallout @ 0x1C00515C8 (UserProcessFreezeCallout.c)
 *     UserProcessThawCallout @ 0x1C0051A10 (UserProcessThawCallout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 IsFreezeThawTimersSupported()
{
  if ( qword_1C0257068 )
    return qword_1C0257068();
  else
    return 3221225659LL;
}
