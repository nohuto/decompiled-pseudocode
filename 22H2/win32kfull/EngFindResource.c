/*
 * XREFs of EngFindResource @ 0x1C0279600
 * Callers:
 *     <none>
 * Callees:
 *     ?pvFindResource@@YAPEAXPEAX0HHPEAK@Z @ 0x1C00A716C (-pvFindResource@@YAPEAXPEAX0HHPEAK@Z.c)
 */

PVOID __stdcall EngFindResource(HANDLE h, INT iName, INT iType, PULONG pulSize)
{
  return (PVOID)pvFindResource(
                  (void *)(*((_QWORD *)h + 1) + 1LL),
                  *((_QWORD *)h + 1) + *((unsigned int *)h + 6),
                  iName,
                  iType,
                  pulSize);
}
