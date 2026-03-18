/*
 * XREFs of ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C03178C0
 * Callers:
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0001314 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGHWQUEUE@@QEAAXXZ @ 0x1C00254D0 (-ReleaseReference@DXGHWQUEUE@@QEAAXXZ.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0168160 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?DxgkCddCreate@@YAJQEAX0PEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAU_LUID@@PEAPEAU_OBJECT_TYPE@@@Z @ 0x1C0186620 (-DxgkCddCreate@@YAJQEAX0PEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAU_LUID@@PEAPEAU_OBJECT_TYPE@@@Z.c)
 *     ??1DXGCONTEXT@@QEAA@XZ @ 0x1C018E26C (--1DXGCONTEXT@@QEAA@XZ.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C0196380 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z.c)
 *     ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01DFBA8 (-DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkCddDestroy@@YAJIIIQEAXE@Z @ 0x1C01E6A40 (-DxgkCddDestroy@@YAJIIIQEAXE@Z.c)
 *     ?DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C0317278 (-DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0008100 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_GDXGHWQUEUE@@IEAAPEAXI@Z @ 0x1C00529AC (--_GDXGHWQUEUE@@IEAAPEAXI@Z.c)
 *     ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C03176CC (-DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyHwQueueOnHost@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@@Z @ 0x1C0317AB8 (-DestroyHwQueueOnHost@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@@Z.c)
 */

void __fastcall DXGCONTEXT::DestroyHwQueue(DXGCONTEXT *this, struct DXGHWQUEUE *P, PERESOURCE **a3)
{
  __int64 v6; // rcx
  _QWORD *v7; // rcx
  PVOID *v8; // rax

  if ( !P )
  {
    WdLogSingleEntry1(1LL, 734LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"HwQueue != NULL", 734LL, 0LL, 0LL, 0LL, 0LL);
  }
  v6 = *((_QWORD *)this + 2);
  if ( !*(_BYTE *)(v6 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v6 + 136)) )
  {
    WdLogSingleEntry1(1LL, 735LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetDevice()->IsDeviceLockExclusiveOwner()",
      735LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 736LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      736LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !P )
  {
    WdLogSingleEntry1(1LL, 739LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"HwQueue != NULL", 739LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 209LL) )
    DXGCONTEXT::DestroyHwQueueOnHost(this, P);
  DXGHWQUEUE::DestroyCoreState(P, a3);
  v7 = *(_QWORD **)P;
  if ( *(struct DXGHWQUEUE **)(*(_QWORD *)P + 8LL) != P || (v8 = (PVOID *)*((_QWORD *)P + 1), *v8 != P) )
    __fastfail(3u);
  *v8 = v7;
  v7[1] = v8;
  DXGHWQUEUE::`scalar deleting destructor'(P);
}
