/*
 * XREFs of EngMapModule @ 0x1C028DEF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __stdcall EngMapModule(HANDLE h, PULONG pulSize)
{
  *pulSize = *((_DWORD *)h + 6);
  return (PVOID)*((_QWORD *)h + 1);
}
