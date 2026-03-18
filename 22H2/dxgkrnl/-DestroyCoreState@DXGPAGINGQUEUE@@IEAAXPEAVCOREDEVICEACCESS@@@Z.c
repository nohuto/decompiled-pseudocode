/*
 * XREFs of ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C018AD40
 * Callers:
 *     ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C018ADCC (-DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C018B4BC (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C01EDE58 (-CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0008100 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C01A73D8 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?UnmapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT@@QEAAXI@Z @ 0x1C03548B4 (-UnmapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT@@QEAAXI@Z.c)
 */

void __fastcall DXGPAGINGQUEUE::DestroyCoreState(DXGPAGINGQUEUE *this, struct COREDEVICEACCESS *a2)
{
  __int64 v3; // rdx
  DXGDEVICESYNCOBJECT *v4; // rcx

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 67LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetDevice()->GetRenderCore()->GetAdapter()->IsCoreResourceSharedOwner()",
      67LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_BYTE *)this + 72) )
  {
    v3 = *((_QWORD *)this + 4);
    *((_BYTE *)this + 72) = 1;
    if ( v3 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL) + 8LL)
                                     + 896LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 792LL));
      *((_QWORD *)this + 4) = 0LL;
    }
    v4 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 5);
    if ( v4 )
    {
      if ( *((_QWORD *)this + 7) )
      {
        DXGDEVICESYNCOBJECT::UnmapGpuVaForPagingProcess(v4, *((_DWORD *)this + 12));
        *((_QWORD *)this + 7) = 0LL;
      }
      DXGDEVICESYNCOBJECT::DestroyCoreState(*((DXGDEVICESYNCOBJECT **)this + 5));
    }
  }
}
