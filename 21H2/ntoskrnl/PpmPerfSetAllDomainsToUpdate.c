/*
 * XREFs of PpmPerfSetAllDomainsToUpdate @ 0x140224EDC
 * Callers:
 *     PpmCheckStart @ 0x140224A24 (PpmCheckStart.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14069DDE8 (PpmPerfUpdateDomainPolicy.c)
 *     PpmPerfReApplyStates @ 0x140808958 (PpmPerfReApplyStates.c)
 * Callees:
 *     <none>
 */

__int64 PpmPerfSetAllDomainsToUpdate()
{
  __int64 result; // rax

  for ( result = PpmPerfDomainHead; (__int64 *)result != &PpmPerfDomainHead; result = *(_QWORD *)result )
    *(_BYTE *)(result + 989) = 1;
  return result;
}
