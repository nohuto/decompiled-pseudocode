/*
 * XREFs of MagInputTransform @ 0x1C0155EF2
 * Callers:
 *     AddMagnificationOutputTransform @ 0x1C00A4A10 (AddMagnificationOutputTransform.c)
 *     TransformForInputMagnification @ 0x1C014E870 (TransformForInputMagnification.c)
 *     ApplyMagInputTransform @ 0x1C01A5470 (ApplyMagInputTransform.c)
 *     EditionMagnificationMousePosition @ 0x1C01F6B70 (EditionMagnificationMousePosition.c)
 * Callees:
 *     <none>
 */

__int64 MagInputTransform()
{
  __int64 result; // rax

  result = 0LL;
  if ( grpdeskRitInput )
    return *(_QWORD *)(grpdeskRitInput + 224LL);
  return result;
}
