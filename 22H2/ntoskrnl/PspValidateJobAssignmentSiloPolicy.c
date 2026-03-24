/*
 * XREFs of PspValidateJobAssignmentSiloPolicy @ 0x14071F434
 * Callers:
 *     PspAssignProcessToJob @ 0x14071E800 (PspAssignProcessToJob.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x14025C2E0 (PsGetProcessServerSilo.c)
 *     PsGetEffectiveServerSilo @ 0x140361880 (PsGetEffectiveServerSilo.c)
 *     PsIsServerSilo @ 0x140361920 (PsIsServerSilo.c)
 */

bool __fastcall PspValidateJobAssignmentSiloPolicy(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 EffectiveServerSilo; // rbx

  if ( ((a4 - 1) & 0xFFFFFFF9) != 0 || a4 == 7 )
  {
    if ( a4 != 4 )
      return 1;
    return !PsIsServerSilo(a1);
  }
  else
  {
    EffectiveServerSilo = PsGetEffectiveServerSilo(a1);
    if ( PsGetEffectiveServerSilo(a2) == EffectiveServerSilo )
      return 1;
    return EffectiveServerSilo == PsGetProcessServerSilo(a3);
  }
}
