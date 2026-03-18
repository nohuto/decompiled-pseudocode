/*
 * XREFs of PALOBJ_cGetColors @ 0x1C02D9220
 * Callers:
 *     <none>
 * Callees:
 *     ?ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z @ 0x1C00584C0 (-ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z.c)
 */

ULONG __stdcall PALOBJ_cGetColors(PALOBJ *ppalo, ULONG iStart, ULONG cColors, ULONG *pulColors)
{
  return XEPALOBJ::ulGetEntries((XEPALOBJ *)ppalo, iStart, cColors, (struct tagPALETTEENTRY *)pulColors, 0);
}
