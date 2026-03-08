/*
 * XREFs of HUBDSM_UnconfiguredSuspending @ 0x1C0020610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_UnconfiguredSuspending(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 960);
  _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v1 + 16) + 32LL), 0xFFFFFFBF);
  _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v1 + 16) + 32LL), 0xFFFFDFFF);
  return 1000LL;
}
