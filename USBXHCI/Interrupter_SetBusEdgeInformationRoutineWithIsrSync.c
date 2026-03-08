/*
 * XREFs of Interrupter_SetBusEdgeInformationRoutineWithIsrSync @ 0x1C000D8D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall Interrupter_SetBusEdgeInformationRoutineWithIsrSync(__int64 a1, __int64 *a2)
{
  __int64 v2; // r8
  char result; // al

  v2 = *a2;
  result = 1;
  *(_BYTE *)(v2 + 57) = 1;
  *(_QWORD *)(v2 + 64) = a2[1];
  *(_DWORD *)(v2 + 72) = *((_DWORD *)a2 + 4);
  *(_DWORD *)(v2 + 76) = *((_DWORD *)a2 + 5);
  *(_DWORD *)(v2 + 80) = *((_DWORD *)a2 + 6);
  return result;
}
