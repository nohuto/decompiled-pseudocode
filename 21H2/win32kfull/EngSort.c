/*
 * XREFs of EngSort @ 0x1C028E3F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall EngSort(PBYTE pjBuf, ULONG c, ULONG cjElem, SORTCOMP pfnComp)
{
  qsort(pjBuf, c, cjElem, pfnComp);
}
