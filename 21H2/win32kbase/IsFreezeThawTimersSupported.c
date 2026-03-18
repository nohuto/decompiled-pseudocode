/*
 * XREFs of IsFreezeThawTimersSupported @ 0x1C00AD648
 * Callers:
 *     UserProcessThawCallout @ 0x1C00ACCFC (UserProcessThawCallout.c)
 *     UserProcessFreezeCallout @ 0x1C00AD1B4 (UserProcessFreezeCallout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsFreezeThawTimersSupported()
{
  if ( qword_1C029BDB8 )
    return qword_1C029BDB8();
  else
    return 3221225659LL;
}
