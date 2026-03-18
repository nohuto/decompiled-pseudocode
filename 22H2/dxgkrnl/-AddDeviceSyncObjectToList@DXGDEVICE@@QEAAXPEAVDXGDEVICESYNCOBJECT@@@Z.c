/*
 * XREFs of ?AddDeviceSyncObjectToList@DXGDEVICE@@QEAAXPEAVDXGDEVICESYNCOBJECT@@@Z @ 0x1C01A59E4
 * Callers:
 *     ??0DXGDEVICESYNCOBJECT@@QEAA@PEAVDXGDEVICE@@_N1@Z @ 0x1C01A5970 (--0DXGDEVICESYNCOBJECT@@QEAA@PEAVDXGDEVICE@@_N1@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0008100 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall DXGDEVICE::AddDeviceSyncObjectToList(DXGDEVICE *this, struct DXGDEVICESYNCOBJECT *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx

  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry1(1LL, 8133LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDeviceLockExclusiveOwner()", 8133LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 8134LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      8134LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = (_QWORD *)((char *)this + 544);
  v5 = *((_QWORD *)this + 68);
  if ( *(DXGDEVICE **)(v5 + 8) != (DXGDEVICE *)((char *)this + 544) )
    __fastfail(3u);
  *(_QWORD *)a2 = v5;
  *((_QWORD *)a2 + 1) = v4;
  *(_QWORD *)(v5 + 8) = a2;
  *v4 = a2;
}
