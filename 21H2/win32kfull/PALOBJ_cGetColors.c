/*
 * XREFs of PALOBJ_cGetColors @ 0x1C02BC0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z @ 0x1C009095C (-ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z.c)
 */

ULONG __stdcall PALOBJ_cGetColors(PALOBJ *ppalo, ULONG iStart, ULONG cColors, ULONG *pulColors)
{
  return XEPALOBJ::ulGetEntries((XEPALOBJ *)ppalo, iStart, cColors, (struct tagPALETTEENTRY *)pulColors, 0);
}
