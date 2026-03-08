/*
 * XREFs of MiGenerateSecureCookie @ 0x14085F580
 * Callers:
 *     MiInitSystem @ 0x140B39508 (MiInitSystem.c)
 * Callees:
 *     ExGenRandom @ 0x14027E2F0 (ExGenRandom.c)
 */

__int64 MiGenerateSecureCookie()
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v1; // rdi
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rdi

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = CurrentPrcb->InterruptTime ^ CurrentPrcb->KeSystemCalls ^ MEMORY[0xFFFFF78000000018] ^ (__rdtsc() >> 4) ^ ((unsigned __int64)MEMORY[0xFFFFF78000000014] << 32);
  v2 = (unsigned __int64)(unsigned int)ExGenRandom(0) << 32;
  v3 = (v2 | (unsigned int)ExGenRandom(0)) ^ v1;
  if ( !v3 )
    return 1LL;
  return v3;
}
