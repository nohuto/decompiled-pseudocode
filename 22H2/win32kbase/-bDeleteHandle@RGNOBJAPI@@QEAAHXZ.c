/*
 * XREFs of ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C0049F04
 * Callers:
 *     bDeleteRegion @ 0x1C003DA20 (bDeleteRegion.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004B888 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C008AFB0 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 * Callees:
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C0044F10 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 */

__int64 __fastcall RGNOBJAPI::bDeleteHandle(struct HOBJ__ **this)
{
  __int64 v2; // rax
  struct HOBJ__ *v3; // rcx

  v2 = SGDGetSessionState(this);
  v3 = this[5];
  if ( v3 == *(struct HOBJ__ **)(*(_QWORD *)(v2 + 24) + 6392LL)
    || (struct HOBJ__ *)HmgRemoveObjectImpl(v3, 1u, 0, 0, 4, 0LL) != *this )
  {
    return 0LL;
  }
  this[5] = 0LL;
  return 1LL;
}
