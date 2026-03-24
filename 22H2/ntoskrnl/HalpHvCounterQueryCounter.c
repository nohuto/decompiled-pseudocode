/*
 * XREFs of HalpHvCounterQueryCounter @ 0x14038DBB0
 * Callers:
 *     HalpHvTimerArm @ 0x14038DB20 (HalpHvTimerArm.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 HalpHvCounterQueryCounter()
{
  if ( HalpHvTimerApi )
    return HalpHvTimerApi(0LL);
  else
    return __readmsr(0x40000020u);
}
