/*
 * XREFs of MagInputTransform @ 0x1C0213F48
 * Callers:
 *     AddMagnificationOutputTransform @ 0x1C010FE20 (AddMagnificationOutputTransform.c)
 *     ApplyMagInputTransform @ 0x1C01CF2B0 (ApplyMagInputTransform.c)
 *     TransformForInputMagnification @ 0x1C01CF690 (TransformForInputMagnification.c)
 *     EditionMagnificationMousePosition @ 0x1C0213EF0 (EditionMagnificationMousePosition.c)
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
