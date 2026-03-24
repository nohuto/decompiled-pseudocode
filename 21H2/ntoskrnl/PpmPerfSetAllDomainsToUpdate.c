/*
 * XREFs of PpmPerfSetAllDomainsToUpdate @ 0x140381028
 * Callers:
 *     PpmCheckStart @ 0x14022A450 (PpmCheckStart.c)
 *     PpmPerfReApplyStates @ 0x14077A350 (PpmPerfReApplyStates.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14078B5DC (PpmPerfUpdateDomainPolicy.c)
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
