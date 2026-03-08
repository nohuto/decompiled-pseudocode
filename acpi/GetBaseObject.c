/*
 * XREFs of GetBaseObject @ 0x1C004B918
 * Callers:
 *     DerefOf @ 0x1C0006500 (DerefOf.c)
 *     AMLIAsyncEvalObject @ 0x1C00478E8 (AMLIAsyncEvalObject.c)
 *     AMLIEvalNameSpaceObject @ 0x1C0047B9C (AMLIEvalNameSpaceObject.c)
 *     AMLIEvalPackageElement @ 0x1C0047D64 (AMLIEvalPackageElement.c)
 *     AMLIFindNameSpaceObject @ 0x1C0048110 (AMLIFindNameSpaceObject.c)
 *     DebugRunMethod @ 0x1C004DE10 (DebugRunMethod.c)
 *     ParseNameObj @ 0x1C005B96C (ParseNameObj.c)
 *     ParseSuperName @ 0x1C005C56C (ParseSuperName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetBaseObject(__int64 a1)
{
  while ( *(_WORD *)(a1 + 66) == 128 )
    a1 = *(_QWORD *)(a1 + 80);
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 112));
  return a1;
}
