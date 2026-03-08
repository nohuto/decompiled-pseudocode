/*
 * XREFs of HUBDSM_CheckingIfCompleteAlternateBOSDescriptorWasRetrieved @ 0x1C0022430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfCompleteAlternateBOSDescriptorWasRetrieved(__int64 a1)
{
  return *(_DWORD *)(*(_QWORD *)(a1 + 960) + 256LL) < (unsigned int)*(unsigned __int16 *)(*(_QWORD *)(a1 + 960) + 1734LL)
       ? 4061
       : 4089;
}
