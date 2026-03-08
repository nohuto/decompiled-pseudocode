/*
 * XREFs of ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C03126F0
 * Callers:
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B8C74 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x1C0312040 (-CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C03128E4 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0007064 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C00072AC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ??_GDXGDOORBELL@@IEAAPEAXI@Z @ 0x1C0051918 (--_GDXGDOORBELL@@IEAAPEAXI@Z.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C0051A38 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C0187554 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?DdiDestroyHwQueue@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C02C1C10 (-DdiDestroyHwQueue@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 */

void __fastcall DXGHWQUEUE::DestroyCoreState(DXGHWQUEUE *this, PERESOURCE **a2)
{
  __int64 v4; // r8
  char v5; // di
  DXGDOORBELL *v6; // rcx
  char *v7; // rdx
  void *v8; // rdx
  DXGDEVICESYNCOBJECT *v9; // rcx
  DXGDEVICESYNCOBJECT *v10; // rcx
  __int64 v11; // rax

  v5 = 1;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                         + 16LL)
                                                             + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 88LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetDevice()->GetRenderCore()->GetAdapter()->IsCoreResourceSharedOwner()",
      88LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 16LL) + 209LL) )
  {
    *((_BYTE *)this + 112) = 1;
  }
  else if ( !*((_BYTE *)this + 112) )
  {
    v6 = (DXGDOORBELL *)*((_QWORD *)this + 18);
    *((_BYTE *)this + 112) = 1;
    if ( v6 )
    {
      DXGDOORBELL::`scalar deleting destructor'(v6);
      *((_QWORD *)this + 18) = 0LL;
    }
    if ( *((_QWORD *)this + 5) )
    {
      if ( !a2 || DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]) )
        v5 = 0;
      else
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)a2);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                         + 16LL)
                                                             + 736LL)
                                                 + 8LL)
                                     + 304LL))(*((_QWORD *)this + 5));
      if ( v5 )
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a2, v7);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                         + 16LL)
                                                             + 736LL)
                                                 + 8LL)
                                     + 264LL))(*((_QWORD *)this + 5));
      *((_QWORD *)this + 5) = 0LL;
    }
    v8 = (void *)*((_QWORD *)this + 4);
    if ( v8 )
    {
      ADAPTER_RENDER::DdiDestroyHwQueue(*(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL), v8, v4);
      *((_QWORD *)this + 4) = 0LL;
    }
    v9 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 9);
    if ( v9 )
      DXGDEVICESYNCOBJECT::DestroyCoreState(v9);
    v10 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 11);
    if ( v10 )
      DXGDEVICESYNCOBJECT::DestroyCoreState(v10);
    v11 = *((_QWORD *)this + 6);
    if ( v11 )
    {
      *(_DWORD *)(v11 + 44) = 0;
      DXGDEVICESYNCOBJECT::DestroyCoreState(*((DXGDEVICESYNCOBJECT **)this + 6));
    }
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        McTemplateK0ppp_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          &EventDestroyHwQueue,
          v4,
          *((_QWORD *)this + 2),
          0LL,
          this);
    }
  }
}
