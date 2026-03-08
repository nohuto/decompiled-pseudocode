/*
 * XREFs of PipIsDeviceReadyForPowerRelations @ 0x140681BD0
 * Callers:
 *     PipProcessRebuildPowerRelationsQueue @ 0x1406819F4 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipAddtoRebuildPowerRelationsQueue @ 0x140681B48 (PipAddtoRebuildPowerRelationsQueue.c)
 * Callees:
 *     <none>
 */

bool __fastcall PipIsDeviceReadyForPowerRelations(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // eax
  bool result; // al

  result = a1
        && (v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL)) != 0
        && (v2 = *(_DWORD *)(v1 + 300), v2 != 769)
        && v2 != 770;
  return result;
}
