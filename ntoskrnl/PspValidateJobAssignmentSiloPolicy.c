/*
 * XREFs of PspValidateJobAssignmentSiloPolicy @ 0x140700C58
 * Callers:
 *     PspAssignProcessToJob @ 0x1406FFA20 (PspAssignProcessToJob.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x1402637E0 (PsGetProcessServerSilo.c)
 *     PsGetEffectiveServerSilo @ 0x140294DF0 (PsGetEffectiveServerSilo.c)
 *     PsIsServerSilo @ 0x140294E20 (PsIsServerSilo.c)
 */

char __fastcall PspValidateJobAssignmentSiloPolicy(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 EffectiveServerSilo; // rbx

  if ( ((a4 - 1) & 0xFFFFFFF9) != 0 || a4 == 7 )
  {
    return a4 != 4 || !PsIsServerSilo(a1);
  }
  else
  {
    EffectiveServerSilo = PsGetEffectiveServerSilo(a1);
    if ( PsGetEffectiveServerSilo(a2) == EffectiveServerSilo )
      return 1;
    return EffectiveServerSilo == PsGetProcessServerSilo(a3);
  }
}
