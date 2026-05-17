/*
 * XREFs of __report_rangecheckfailure @ 0x18008CAB0
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x18000CF10 (RtlCanonicalizeDomainName.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180034EA0 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlCultureNameToLCID @ 0x18003B850 (RtlCultureNameToLCID.c)
 *     LdrpDetectDetour @ 0x18006347C (LdrpDetectDetour.c)
 *     strcspn @ 0x1800913D0 (strcspn.c)
 *     strpbrk @ 0x180091960 (strpbrk.c)
 *     strspn @ 0x180091A40 (strspn.c)
 *     strtok_s @ 0x180097FC0 (strtok_s.c)
 *     RtlpMatchUILanguage @ 0x1800FD3BC (RtlpMatchUILanguage.c)
 * Callees:
 *     __report_securityfailure @ 0x18008CACC (__report_securityfailure.c)
 */

void __noreturn _report_rangecheckfailure()
{
  _report_securityfailure(8LL);
}
