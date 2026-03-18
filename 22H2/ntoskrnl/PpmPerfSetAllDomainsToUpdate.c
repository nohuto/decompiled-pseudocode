/*
 * XREFs of PpmPerfSetAllDomainsToUpdate @ 0x14032AFD0
 * Callers:
 *     PpmCheckStart @ 0x14032BEE4 (PpmCheckStart.c)
 *     PpmPerfUpdateDomainPolicy @ 0x1407A6860 (PpmPerfUpdateDomainPolicy.c)
 *     PpmPerfReApplyStates @ 0x140986A84 (PpmPerfReApplyStates.c)
 * Callees:
 *     <none>
 */

__int64 PpmPerfSetAllDomainsToUpdate()
{
  __int64 result; // rax

  for ( result = PpmPerfDomainHead; (__int64 *)result != &PpmPerfDomainHead; result = *(_QWORD *)result )
    *(_BYTE *)(result + 1061) = 1;
  return result;
}
