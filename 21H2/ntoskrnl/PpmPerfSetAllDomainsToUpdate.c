/*
 * XREFs of PpmPerfSetAllDomainsToUpdate @ 0x140380B78
 * Callers:
 *     PpmCheckStart @ 0x1402CED00 (PpmCheckStart.c)
 *     PpmPerfReApplyStates @ 0x14077A510 (PpmPerfReApplyStates.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14078B79C (PpmPerfUpdateDomainPolicy.c)
 * Callees:
 *     <none>
 */

__int64 PpmPerfSetAllDomainsToUpdate()
{
  __int64 result; // rax

  for ( result = PpmPerfDomainHead; (__int64 *)result != &PpmPerfDomainHead; result = *(_QWORD *)result )
    *(_BYTE *)(result + 765) = 1;
  return result;
}
