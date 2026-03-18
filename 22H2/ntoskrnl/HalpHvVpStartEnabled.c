/*
 * XREFs of HalpHvVpStartEnabled @ 0x140377BA0
 * Callers:
 *     HalpInterruptBuildGlobalStartupStub @ 0x1403A89F0 (HalpInterruptBuildGlobalStartupStub.c)
 *     HalpInterruptStartProcessor @ 0x140A895A0 (HalpInterruptStartProcessor.c)
 * Callees:
 *     HalpIsXboxNanovisorPresent @ 0x140378C6C (HalpIsXboxNanovisorPresent.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

char HalpHvVpStartEnabled()
{
  if ( qword_140C62630 )
    return qword_140C62630();
  else
    return (unsigned __int8)HalpIsXboxNanovisorPresent() != 0;
}
