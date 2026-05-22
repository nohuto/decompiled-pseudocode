/*
 * XREFs of InitJoints @ 0x1800E021C
 * Callers:
 *     ?AddReport@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAAJ_J0PEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@2_NW4HandState@1234@@Z @ 0x1800DEC2C (-AddReport@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAAJ_J0PEAUISpati.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitJoints(__int64 a1)
{
  __int64 *v1; // rdx
  __int64 v2; // r8
  __int64 result; // rax

  v1 = (__int64 *)&unk_180208758;
  v2 = 26LL;
  do
  {
    result = *v1;
    v1 += 4;
    *(_OWORD *)(result + a1) = xmmword_1801D8850;
    *(_OWORD *)(result + a1 + 16) = xmmword_1801D8860;
    *(_DWORD *)(result + a1 + 32) = 1;
    --v2;
  }
  while ( v2 );
  return result;
}
