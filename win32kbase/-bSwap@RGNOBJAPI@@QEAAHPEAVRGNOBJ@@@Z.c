/*
 * XREFs of ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0045420
 * Callers:
 *     GreCombineRgn @ 0x1C0041BD0 (GreCombineRgn.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0042720 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C00434E0 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004592C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 * Callees:
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C0045140 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     HmgReplaceObject @ 0x1C0045470 (HmgReplaceObject.c)
 */

__int64 __fastcall RGNOBJAPI::bSwap(struct OBJECT **this, struct RGNOBJ *a2)
{
  if ( !(unsigned int)HmgReplaceObject(*this) )
    return 0LL;
  RGNOBJ::vSwap((RGNOBJ *)this, a2);
  return 1LL;
}
