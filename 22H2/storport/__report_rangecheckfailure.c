/*
 * XREFs of __report_rangecheckfailure @ 0x1C001D5F0
 * Callers:
 *     StorCompareScsiDeviceId @ 0x1C0014694 (StorCompareScsiDeviceId.c)
 *     WppInitGlobalLogger @ 0x1C007A48C (WppInitGlobalLogger.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
