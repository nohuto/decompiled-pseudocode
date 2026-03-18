/*
 * XREFs of ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C018ADCC
 * Callers:
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C00252CC (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     ?DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C0189F7C (-DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C018B128 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z @ 0x1C03116CC (-DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0008100 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C018AD40 (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ??1DXGPAGINGQUEUE@@IEAA@XZ @ 0x1C018AE90 (--1DXGPAGINGQUEUE@@IEAA@XZ.c)
 */

void __fastcall DXGDEVICE::DestroyPagingQueue(DXGDEVICE *this, struct DXGPAGINGQUEUE *a2, struct COREDEVICEACCESS *a3)
{
  struct COREDEVICEACCESS *v5; // rdx
  struct DXGPAGINGQUEUE *v6; // rcx
  struct DXGPAGINGQUEUE **v7; // rax

  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 8115LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"PagingQueue != NULL", 8115LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry1(1LL, 8116LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDeviceLockExclusiveOwner()", 8116LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 8117LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      8117LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 8120LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"PagingQueue != NULL", 8120LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGPAGINGQUEUE::DestroyCoreState(a2, v5);
  v6 = *(struct DXGPAGINGQUEUE **)a2;
  if ( *(struct DXGPAGINGQUEUE **)(*(_QWORD *)a2 + 8LL) != a2
    || (v7 = (struct DXGPAGINGQUEUE **)*((_QWORD *)a2 + 1), *v7 != a2) )
  {
    __fastfail(3u);
  }
  *v7 = v6;
  *((_QWORD *)v6 + 1) = v7;
  DXGPAGINGQUEUE::~DXGPAGINGQUEUE(a2);
  ExFreePoolWithTag(a2, 0);
}
