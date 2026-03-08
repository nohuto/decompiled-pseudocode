/*
 * XREFs of RefOf @ 0x1C00068B0
 * Callers:
 *     <none>
 * Callees:
 *     MoveObjData @ 0x1C004C164 (MoveObjData.c)
 */

__int64 __fastcall RefOf(__int64 a1, __int64 a2)
{
  MoveObjData(*(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 80));
  return 0LL;
}
