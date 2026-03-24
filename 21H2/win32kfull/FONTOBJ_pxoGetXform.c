/*
 * XREFs of FONTOBJ_pxoGetXform @ 0x1C02937B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

XFORMOBJ *__stdcall FONTOBJ_pxoGetXform(FONTOBJ *pfo)
{
  return (XFORMOBJ *)&pfo[3].sizLogResPpi;
}
