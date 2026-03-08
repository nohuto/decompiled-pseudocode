/*
 * XREFs of HalpHvCounterQueryCounter @ 0x1403C3240
 * Callers:
 *     HalpHvTimerArm @ 0x1403C31B0 (HalpHvTimerArm.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 HalpHvCounterQueryCounter()
{
  if ( HalpHvTimerApi )
    return HalpHvTimerApi(0LL);
  else
    return __readmsr(0x40000020u);
}
