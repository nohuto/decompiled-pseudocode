/*
 * XREFs of HUBDSM_InitializingU1U2Flags @ 0x1C0025540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_InitializingU1U2Flags(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 960);
  _InterlockedAnd((volatile signed __int32 *)(v1 + 2216), 0xFFFFFFBF);
  _InterlockedAnd((volatile signed __int32 *)(v1 + 2216), 0xFFFFFF7F);
  _InterlockedAnd((volatile signed __int32 *)(v1 + 2216), 0xFFFFFEFF);
  *(_BYTE *)(v1 + 2206) = 0;
  return 4077LL;
}
