/*
 * XREFs of IsFreezeThawTimersSupported @ 0x1C0084214
 * Callers:
 *     UserProcessFreezeCallout @ 0x1C0083BC4 (UserProcessFreezeCallout.c)
 *     UserProcessThawCallout @ 0x1C0084770 (UserProcessThawCallout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsFreezeThawTimersSupported()
{
  if ( qword_1C02D6670 )
    return qword_1C02D6670();
  else
    return 3221225659LL;
}
