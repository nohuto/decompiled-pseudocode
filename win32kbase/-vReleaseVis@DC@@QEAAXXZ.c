/*
 * XREFs of ?vReleaseVis@DC@@QEAAXXZ @ 0x1C00D5DA4
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004592C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1C004EC00 (-vDelete@XDCOBJ@@QEAAXK@Z.c)
 * Callees:
 *     HmgPentryFromPobj @ 0x1C004A180 (HmgPentryFromPobj.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C00558E0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1C00DDFD0 (-AcquireDcVisRgnExclusive@DC@@QEAA@XZ.c)
 *     ?ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ @ 0x1C00DE014 (-ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ.c)
 */

void __fastcall DC::vReleaseVis(DC *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // [rsp+20h] [rbp-18h]
  char v5; // [rsp+28h] [rbp-10h]

  *((_DWORD *)this + 9) |= 0x10u;
  v2 = HmgPentryFromPobj(this);
  *(_BYTE *)(v2 + 15) |= 4u;
  DC::AcquireDcVisRgnExclusive(this);
  REGION::vDeleteREGION(*((_QWORD *)this + 142));
  *((_QWORD *)this + 142) = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v3) + 24) + 6400LL);
  if ( v5 )
    GreInnermostPushLockMSRC85333::ReleaseLock((GreInnermostPushLockMSRC85333 *)(v4 + 1112));
}
