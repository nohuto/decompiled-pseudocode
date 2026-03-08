/*
 * XREFs of PpmPerfSetAllDomainsToUpdate @ 0x1402D1B24
 * Callers:
 *     PpmCheckStart @ 0x1402D1D84 (PpmCheckStart.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14075DE18 (PpmPerfUpdateDomainPolicy.c)
 *     PpmPerfReApplyStates @ 0x1409839D4 (PpmPerfReApplyStates.c)
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
