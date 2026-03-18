/*
 * XREFs of CmSiProcessTupleInitialize @ 0x14036EAD4
 * Callers:
 *     CmpInitializeRegistryProcess @ 0x14080D05C (CmpInitializeRegistryProcess.c)
 * Callees:
 *     <none>
 */

void CmSiProcessTupleInitialize()
{
  CmpRegistryProcess = 0LL;
  *(_OWORD *)&xmmword_140C13F30 = 0LL;
  xmmword_140C13F40 = 0LL;
}
