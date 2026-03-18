/*
 * XREFs of IsFreezeThawTimersSupported @ 0x1C0068A04
 * Callers:
 *     UserProcessThawCallout @ 0x1C00681D0 (UserProcessThawCallout.c)
 *     UserProcessFreezeCallout @ 0x1C0068894 (UserProcessFreezeCallout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 IsFreezeThawTimersSupported()
{
  if ( qword_1C02954F8 )
    return qword_1C02954F8();
  else
    return 3221225659LL;
}
