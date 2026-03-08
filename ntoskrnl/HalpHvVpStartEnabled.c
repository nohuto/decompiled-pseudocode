/*
 * XREFs of HalpHvVpStartEnabled @ 0x140372950
 * Callers:
 *     HalpInterruptBuildGlobalStartupStub @ 0x1403A3BE0 (HalpInterruptBuildGlobalStartupStub.c)
 *     HalpInterruptStartProcessor @ 0x140A86180 (HalpInterruptStartProcessor.c)
 * Callees:
 *     HalpIsXboxNanovisorPresent @ 0x140373A1C (HalpIsXboxNanovisorPresent.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

char HalpHvVpStartEnabled()
{
  if ( qword_140C621D0 )
    return qword_140C621D0();
  else
    return (unsigned __int8)HalpIsXboxNanovisorPresent() != 0;
}
