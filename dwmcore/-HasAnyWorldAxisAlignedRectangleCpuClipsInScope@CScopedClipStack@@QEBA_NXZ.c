/*
 * XREFs of ?HasAnyWorldAxisAlignedRectangleCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x1800922F8
 * Callers:
 *     ?PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180091F48 (-PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 * Callees:
 *     ?HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x18008F054 (-HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 */

char __fastcall CScopedClipStack::HasAnyWorldAxisAlignedRectangleCpuClipsInScope(CScopedClipStack *this)
{
  bool HasCpuClipsInScope; // al
  __int64 v2; // rcx
  char v3; // dl

  HasCpuClipsInScope = CScopedClipStack::HasCpuClipsInScope(this);
  v3 = 0;
  if ( HasCpuClipsInScope )
    return *(_QWORD *)(*(_QWORD *)(v2 + 1872) - 24LL) != 0LL;
  return v3;
}
