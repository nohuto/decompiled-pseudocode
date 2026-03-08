/*
 * XREFs of MagInputTransform @ 0x1C01491D2
 * Callers:
 *     AddMagnificationOutputTransform @ 0x1C00DBA40 (AddMagnificationOutputTransform.c)
 *     TransformForInputMagnification @ 0x1C01419A0 (TransformForInputMagnification.c)
 *     ApplyMagInputTransform @ 0x1C01A6660 (ApplyMagInputTransform.c)
 *     EditionMagnificationMousePosition @ 0x1C01F7D40 (EditionMagnificationMousePosition.c)
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
