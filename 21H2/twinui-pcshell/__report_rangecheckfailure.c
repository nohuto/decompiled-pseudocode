/*
 * XREFs of __report_rangecheckfailure @ 0x18008FBB8
 * Callers:
 *     ?CreateGUID@ShellFeedsAvailabilityHelpers@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18010911C (-CreateGUID@ShellFeedsAvailabilityHelpers@@YAJAEAV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 * Callees:
 *     __report_securityfailure @ 0x18008FBD4 (__report_securityfailure.c)
 */

void __noreturn _report_rangecheckfailure()
{
  _report_securityfailure(8LL);
}
