/*
 * XREFs of ?TraceMoveRemovedMoveRegions@METAREGION@@AEAAXPEAU_RECTL@@@Z @ 0x1C02E2048
 * Callers:
 *     ?bIntersectMoveWithDirty@METAREGION@@AEAAHPEAU_RECTL@@@Z @ 0x1C02E20D0 (-bIntersectMoveWithDirty@METAREGION@@AEAAHPEAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall METAREGION::TraceMoveRemovedMoveRegions(METAREGION *this, struct _RECTL *a2)
{
  __int64 v3; // rcx

  EtwLogicalSurfRemovedTranslationFromMoveEvent(
    *((_QWORD *)this + 6),
    (unsigned int)a2->left,
    (unsigned int)a2->top,
    (unsigned int)a2->right,
    a2->bottom);
  EtwTraceMoveRegion(*(_QWORD *)this, 0LL, 0LL, *((_QWORD *)this + 4));
  EtwTraceMoveRegion(*(_QWORD *)this, 1LL, 0LL, *(_QWORD *)this);
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
    EtwTraceMoveRegion(v3, 1LL, 0LL, *((_QWORD *)this + 1));
}
