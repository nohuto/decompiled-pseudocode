/*
 * XREFs of MiIsActiveSystemHotPatch @ 0x140A35270
 * Callers:
 *     MiLogHotPatchRundown @ 0x140A36A34 (MiLogHotPatchRundown.c)
 *     MiQueryProcessActivePatches @ 0x140A3892C (MiQueryProcessActivePatches.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiIsActiveSystemHotPatch(__int64 a1)
{
  __int64 v1; // rdx

  return (*(_DWORD *)(a1 + 196) & 0x20) != 0 && (v1 = *(_QWORD *)(a1 + 280)) != 0 && *(_QWORD *)(v1 + 280) == a1;
}
