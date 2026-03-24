/*
 * XREFs of HalpHvVpStartEnabled @ 0x1403A1280
 * Callers:
 *     HalpInterruptStartProcessor @ 0x140999F64 (HalpInterruptStartProcessor.c)
 * Callees:
 *     HalpIsXboxNanovisorPresent @ 0x1403A1B40 (HalpIsXboxNanovisorPresent.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

char HalpHvVpStartEnabled()
{
  if ( qword_140C4A2B0 )
    return qword_140C4A2B0();
  else
    return (unsigned __int8)HalpIsXboxNanovisorPresent() != 0;
}
