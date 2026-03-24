/*
 * XREFs of PpmPerfSetAllDomainsToUpdate @ 0x1403807D8
 * Callers:
 *     PpmCheckStart @ 0x140229DC0 (PpmCheckStart.c)
 *     PpmPerfReApplyStates @ 0x14077A250 (PpmPerfReApplyStates.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14078B4DC (PpmPerfUpdateDomainPolicy.c)
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
