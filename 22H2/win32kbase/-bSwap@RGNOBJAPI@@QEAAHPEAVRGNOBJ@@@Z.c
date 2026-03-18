/*
 * XREFs of ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C003C6B0
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004B888 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreCombineRgn @ 0x1C005C1D0 (GreCombineRgn.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C007D860 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C007DB80 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 * Callees:
 *     HmgReplaceObject @ 0x1C003C700 (HmgReplaceObject.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C003C880 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 */

__int64 __fastcall RGNOBJAPI::bSwap(struct OBJECT **this, struct RGNOBJ *a2)
{
  if ( !(unsigned int)HmgReplaceObject(*this) )
    return 0LL;
  RGNOBJ::vSwap((RGNOBJ *)this, a2);
  return 1LL;
}
