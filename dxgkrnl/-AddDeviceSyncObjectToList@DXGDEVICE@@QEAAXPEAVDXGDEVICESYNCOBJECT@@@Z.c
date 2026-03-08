/*
 * XREFs of ?AddDeviceSyncObjectToList@DXGDEVICE@@QEAAXPEAVDXGDEVICESYNCOBJECT@@@Z @ 0x1C0186B54
 * Callers:
 *     ??0DXGDEVICESYNCOBJECT@@QEAA@PEAVDXGDEVICE@@_N1@Z @ 0x1C0186AE0 (--0DXGDEVICESYNCOBJECT@@QEAA@PEAVDXGDEVICE@@_N1@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGDEVICE::AddDeviceSyncObjectToList(DXGDEVICE *this, struct DXGDEVICESYNCOBJECT *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx

  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry1(1LL, 8131LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDeviceLockExclusiveOwner()", 8131LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 8132LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      8132LL,
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
