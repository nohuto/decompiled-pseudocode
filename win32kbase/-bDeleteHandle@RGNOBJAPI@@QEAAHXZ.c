/*
 * XREFs of ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C0045C0C
 * Callers:
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0019970 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004592C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     bDeleteRegion @ 0x1C0053FA0 (bDeleteRegion.c)
 * Callees:
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C0045E40 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 */

__int64 __fastcall RGNOBJAPI::bDeleteHandle(struct HOBJ__ **this)
{
  __int64 v2; // rax
  struct HOBJ__ *v3; // rcx

  v2 = SGDGetSessionState(this);
  v3 = this[1];
  if ( v3 == *(struct HOBJ__ **)(*(_QWORD *)(v2 + 24) + 6392LL) || HmgRemoveObjectImpl(v3, 1, 0, 0, 4, 0LL) != *this )
    return 0LL;
  this[1] = 0LL;
  return 1LL;
}
