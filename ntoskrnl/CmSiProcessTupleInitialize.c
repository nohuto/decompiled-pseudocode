/*
 * XREFs of CmSiProcessTupleInitialize @ 0x140303124
 * Callers:
 *     CmpInitializeRegistryProcess @ 0x140817300 (CmpInitializeRegistryProcess.c)
 * Callees:
 *     <none>
 */

void CmSiProcessTupleInitialize()
{
  CmpRegistryProcess = 0LL;
  *(_OWORD *)&xmmword_140C13E10 = 0LL;
  xmmword_140C13E20 = 0LL;
}
