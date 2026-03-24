/*
 * XREFs of MagInputTransform @ 0x1C0213988
 * Callers:
 *     AddMagnificationOutputTransform @ 0x1C010FAA0 (AddMagnificationOutputTransform.c)
 *     ApplyMagInputTransform @ 0x1C01CECF0 (ApplyMagInputTransform.c)
 *     TransformForInputMagnification @ 0x1C01CF0D0 (TransformForInputMagnification.c)
 *     EditionMagnificationMousePosition @ 0x1C0213930 (EditionMagnificationMousePosition.c)
 * Callees:
 *     <none>
 */

__int64 MagInputTransform()
{
  __int64 result; // rax

  result = 0LL;
  if ( grpdeskRitInput )
    return *(_QWORD *)(grpdeskRitInput + 216LL);
  return result;
}
