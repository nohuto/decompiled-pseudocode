/*
 * XREFs of ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0024D60
 * Callers:
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C0027DA0 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C002C464 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreCombineRgn @ 0x1C006EFF0 (GreCombineRgn.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C00968C0 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 * Callees:
 *     HmgReplaceObject @ 0x1C001EB90 (HmgReplaceObject.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C00233C0 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 */

__int64 __fastcall RGNOBJAPI::bSwap(struct OBJECT **this, __int128 **a2)
{
  if ( !(unsigned int)HmgReplaceObject(*this, *a2) )
    return 0LL;
  RGNOBJ::vSwap((RGNOBJ *)this, (struct RGNOBJ *)a2);
  return 1LL;
}
