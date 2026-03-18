/*
 * XREFs of EngFindResource @ 0x1C027B480
 * Callers:
 *     <none>
 * Callees:
 *     pvFindResource @ 0x1C00EE1AC (pvFindResource.c)
 */

PVOID __stdcall EngFindResource(HANDLE h, INT iName, INT iType, PULONG pulSize)
{
  return (PVOID)pvFindResource(
                  *((_QWORD *)h + 1) + 1LL,
                  *((_QWORD *)h + 1) + *((unsigned int *)h + 6),
                  iName,
                  iType,
                  (int *)pulSize);
}
