/*
 * XREFs of ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C01A73D8
 * Callers:
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C018AD40 (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C018B4BC (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C018BDB0 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C01A1FF8 (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C03176CC (-DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C03547B0 (-DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x1C00080CC (-GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0008100 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008468 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01A5A68 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall DXGDEVICESYNCOBJECT::DestroyCoreState(DXGDEVICESYNCOBJECT *this)
{
  DXGADAPTER *v2; // rcx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v4; // rdx
  __int64 v5; // r11
  __int64 v6; // r8
  __int64 v7; // rdi
  struct VIDMM_MONITORED_FENCE_STORAGE *MonitoredFenceStorage; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  _BYTE v11[24]; // [rsp+50h] [rbp-18h] BYREF

  v2 = *(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  if ( !*((_BYTE *)v2 + 209) )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(v2) )
    {
      WdLogSingleEntry1(1LL, 118LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"GetDevice()->GetRenderCore()->IsCoreResourceSharedOwner()",
        118LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (*((_BYTE *)this + 92) & 1) != 0 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 4) + 32LL), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
      VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                           *((DXGSYNCOBJECT **)this + 4),
                           *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL));
      v6 = *((_DWORD *)this + 18) >> 5;
      LOBYTE(v6) = (*((_DWORD *)this + 18) & 0x20) == 0;
      (*(void (__fastcall **)(struct _VIDSCH_SYNC_OBJECT *, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v4 + 736)
                                                                                                + 8LL)
                                                                                    + 672LL))(
        VidSchSyncObject,
        *(_QWORD *)(v5 + 800),
        v6,
        *((_QWORD *)this + 3));
      operator delete(*((void **)this + 3));
      *((_QWORD *)this + 3) = 0LL;
      *((_BYTE *)this + 92) &= ~1u;
      if ( v11[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
    }
    if ( *((_QWORD *)this + 6) )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL);
      MonitoredFenceStorage = DXGSYNCOBJECT::GetMonitoredFenceStorage(*((DXGSYNCOBJECT **)this + 4));
      v9 = *((_QWORD *)this + 2);
      v10 = *(_QWORD *)(*(_QWORD *)(v9 + 40) + 64LL);
      if ( v10 )
        v10 = *(_QWORD *)(v10 + 8);
      (*(void (__fastcall **)(_QWORD, __int64, struct VIDMM_MONITORED_FENCE_STORAGE *))(*(_QWORD *)(v7 + 8) + 960LL))(
        *(_QWORD *)(*(_QWORD *)(v9 + 16) + 768LL),
        v10,
        MonitoredFenceStorage);
      *((_QWORD *)this + 6) = 0LL;
    }
  }
}
