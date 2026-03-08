/*
 * XREFs of ?RemoveDeviceSyncObjectFromList@DXGDEVICE@@QEAAXPEAVDXGDEVICESYNCOBJECT@@@Z @ 0x1C01B95F4
 * Callers:
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C01B94C4 (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGDEVICE::RemoveDeviceSyncObjectFromList(DXGDEVICE *this, struct DXGDEVICESYNCOBJECT ***a2)
{
  struct DXGDEVICESYNCOBJECT **v4; // rcx
  struct DXGDEVICESYNCOBJECT **v5; // rax

  if ( !*((_BYTE *)this + 72)
    && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17))
    && !*((_BYTE *)this + 1937) )
  {
    WdLogSingleEntry1(1LL, 8141LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"IsDeviceLockExclusiveOwner() || IgnoreDeviceLock()",
      8141LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 8142LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      8142LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = *a2;
  if ( (*a2)[1] != (struct DXGDEVICESYNCOBJECT *)a2 || (v5 = a2[1], *v5 != (struct DXGDEVICESYNCOBJECT *)a2) )
    __fastfail(3u);
  *v5 = (struct DXGDEVICESYNCOBJECT *)v4;
  v4[1] = (struct DXGDEVICESYNCOBJECT *)v5;
}
