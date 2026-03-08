/*
 * XREFs of HvlGetLpIndexFromApicId @ 0x14053DBA0
 * Callers:
 *     PpmIdleUpdateHvStates @ 0x14099AC10 (PpmIdleUpdateHvStates.c)
 * Callees:
 *     HvlpGetLpcbByApicId @ 0x14053EB98 (HvlpGetLpcbByApicId.c)
 */

__int64 __fastcall HvlGetLpIndexFromApicId(__int64 a1)
{
  __int64 LpcbByApicId; // rax

  if ( (HvlpFlags & 2) != 0 && (LpcbByApicId = HvlpGetLpcbByApicId(a1)) != 0 )
    return *(unsigned int *)(LpcbByApicId + 4);
  else
    return 0xFFFFFFFFLL;
}
