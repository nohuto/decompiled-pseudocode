/*
 * XREFs of ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B4254
 * Callers:
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B3FD8 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C02E8704 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppqpttqpqp_EtwWriteTransfer @ 0x1C0048ABC (McTemplateK0ppqpttqpqp_EtwWriteTransfer.c)
 *     ?IterateOutputDuplMgrsForRender@@YAJPEAVDXGADAPTER@@P6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z2@Z @ 0x1C017DAF0 (-IterateOutputDuplMgrsForRender@@YAJPEAVDXGADAPTER@@P6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z2@Z.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C0187554 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C01B3A74 (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1C01B3EC0 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B8C74 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B93B8 (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C01D45C8 (-DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0340210 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendDestroyDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXII@Z @ 0x1C03836A4 (-VmBusSendDestroyDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXII@Z.c)
 */

void __fastcall DXGDEVICE::DestroyDevice(DXGDEVICE *this, PERESOURCE **a2)
{
  struct COREDEVICEACCESS *v4; // rdx
  unsigned int i; // esi
  __int64 v6; // rdi
  ReferenceCounted *v7; // rcx
  DXGPAGINGQUEUE *j; // rdi
  DXGDEVICESYNCOBJECT *k; // rdi
  DXGCONTEXT *m; // rdi
  void *v11; // rdx
  struct DXGADAPTER *v12; // rcx
  unsigned int HostProcess; // eax

  DXGDEVICE::FlushDeferredDestruction(this, a2, 0, 0);
  for ( i = 0; i < *((_DWORD *)this + 472); *((_QWORD *)this + v6 + 211) = 0LL )
  {
    v6 = i;
    v7 = (ReferenceCounted *)*((_QWORD *)this + i + 195);
    if ( v7 )
    {
      ReferenceCounted::Release(v7);
      *((_QWORD *)this + i + 195) = 0LL;
    }
    operator delete(*((void **)this + i++ + 211));
  }
  for ( j = (DXGPAGINGQUEUE *)*((_QWORD *)this + 66); j != (DXGDEVICE *)((char *)this + 528) && j; j = *(DXGPAGINGQUEUE **)j )
    DXGPAGINGQUEUE::DestroyCoreState(j, v4);
  for ( k = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 68);
        k != (DXGDEVICE *)((char *)this + 544) && k;
        k = *(DXGDEVICESYNCOBJECT **)k )
  {
    DXGDEVICESYNCOBJECT::DestroyCoreState(k);
  }
  if ( *((_QWORD *)this + 240) )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 736LL) + 8LL) + 616LL))();
    *((_QWORD *)this + 240) = 0LL;
  }
  for ( m = (DXGCONTEXT *)*((_QWORD *)this + 62); m != (DXGDEVICE *)((char *)this + 496) && m; m = *(DXGCONTEXT **)m )
    DXGCONTEXT::DestroyContext(m, (struct COREDEVICEACCESS *)a2);
  v11 = (void *)*((_QWORD *)this + 77);
  if ( v11 )
  {
    ADAPTER_RENDER::DdiDestroyDevice(*((ADAPTER_RENDER **)this + 2), v11);
    *((_QWORD *)this + 77) = 0LL;
  }
  if ( *((_QWORD *)this + 99) )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL) + 400LL))();
    *((_QWORD *)this + 99) = 0LL;
  }
  if ( *((_QWORD *)this + 100) )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 736LL) + 8LL) + 120LL))();
    *((_QWORD *)this + 100) = 0LL;
  }
  v12 = (struct DXGADAPTER *)*((_QWORD *)this + 235);
  if ( !v12 )
    v12 = *(struct DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL);
  IterateOutputDuplMgrsForRender(
    v12,
    (__int64 (__fastcall *)(__int64, void *))W32kStub_UserRemoveWindowedSwapChain,
    this);
  if ( *((_BYTE *)this + 1902) )
  {
    DXGPROCESS::CloseAdapter(*((DXGPROCESS **)this + 5), *((struct DXGADAPTER *const **)this + 2));
    *((_BYTE *)this + 1902) = 0;
  }
  if ( *((_DWORD *)this + 118) )
  {
    HostProcess = DXGPROCESS::GetHostProcess(*((DXGPROCESS **)this + 5));
    DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyDevice(
      (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4472LL),
      HostProcess,
      *((_DWORD *)this + 118));
    *((_DWORD *)this + 118) = 0;
  }
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
      McTemplateK0ppqpttqpqp_EtwWriteTransfer(
        *(_QWORD *)(*((_QWORD *)this + 5) + 64LL),
        &EventDestroyDevice,
        *((unsigned __int8 *)this + 1898),
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 64LL) + 80LL),
        *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
        *((_DWORD *)this + 116),
        this,
        *((unsigned __int8 *)this + 1897),
        *((unsigned __int8 *)this + 1898),
        *((_DWORD *)this + 117),
        0LL,
        0,
        0LL);
  }
}
