/*
 * XREFs of ?HasProjectedShadowReceivers@CVisual@@QEBA_NXZ @ 0x1800E585C
 * Callers:
 *     ?HasSingleD2DBitmapOrPrimitiveGroup@CVisual@@QEBA_NXZ @ 0x1800E5814 (-HasSingleD2DBitmapOrPrimitiveGroup@CVisual@@QEBA_NXZ.c)
 * Callees:
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x180004DC0 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 */

bool __fastcall CVisual::HasProjectedShadowReceivers(CVisual *this)
{
  bool result; // al
  _QWORD *ProjectedShadowReceivers; // rax

  result = 0;
  if ( (**((_DWORD **)this + 29) & 0x20000) != 0 )
  {
    ProjectedShadowReceivers = (_QWORD *)CVisual::GetProjectedShadowReceivers((__int64)this);
    if ( *ProjectedShadowReceivers != ProjectedShadowReceivers[1] )
      return 1;
  }
  return result;
}
