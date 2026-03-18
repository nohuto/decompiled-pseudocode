/*
 * XREFs of PsRevertToUserMultipleGroupAffinityThread @ 0x1405E0B20
 * Callers:
 *     <none>
 * Callees:
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14056B410 (KeRevertToUserMultipleGroupAffinityThread.c)
 */

char __fastcall PsRevertToUserMultipleGroupAffinityThread(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  return KeRevertToUserMultipleGroupAffinityThread(a1, a2, a3, a4);
}
