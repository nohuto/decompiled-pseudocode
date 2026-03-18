/*
 * XREFs of MagInputTransform @ 0x1C0212718
 * Callers:
 *     AddMagnificationOutputTransform @ 0x1C00FB810 (AddMagnificationOutputTransform.c)
 *     TransformForInputMagnification @ 0x1C016A6E0 (TransformForInputMagnification.c)
 *     ApplyMagInputTransform @ 0x1C01CBBD0 (ApplyMagInputTransform.c)
 *     EditionMagnificationMousePosition @ 0x1C02126C0 (EditionMagnificationMousePosition.c)
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
