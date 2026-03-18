/*
 * XREFs of MiIsActiveSystemHotPatch @ 0x140A37FA0
 * Callers:
 *     MiLogHotPatchRundown @ 0x140A39720 (MiLogHotPatchRundown.c)
 *     MiQueryProcessActivePatches @ 0x140A3B60C (MiQueryProcessActivePatches.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiIsActiveSystemHotPatch(__int64 a1)
{
  __int64 v1; // rdx

  return (*(_DWORD *)(a1 + 196) & 0x20) != 0 && (v1 = *(_QWORD *)(a1 + 280)) != 0 && *(_QWORD *)(v1 + 280) == a1;
}
