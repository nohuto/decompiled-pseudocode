/*
 * XREFs of ?vReleaseVis@DC@@QEAAXXZ @ 0x1C00C6CF4
 * Callers:
 *     ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1C0044560 (-vDelete@XDCOBJ@@QEAAXK@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004B888 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00329E8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     HmgPentryFromPobj @ 0x1C0042F00 (HmgPentryFromPobj.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0047CB0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1C00D1650 (-AcquireDcVisRgnExclusive@DC@@QEAA@XZ.c)
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
    CPushLock::ReleaseLock((CPushLock *)(v4 + 1112));
}
