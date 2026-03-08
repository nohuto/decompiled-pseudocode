/*
 * XREFs of ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B8C74
 * Callers:
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B4254 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C01B530C (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B8B78 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0007064 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C00072AC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C0009C2C (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ?RemoveFromCddPrimarySyncContextListSafe@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C000A0DC (-RemoveFromCddPrimarySyncContextListSafe@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C0047790 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     McTemplateK0pqqqqqqqqppp_EtwWriteTransfer @ 0x1C0047864 (McTemplateK0pqqqqqqqqppp_EtwWriteTransfer.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C0187554 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C01B9670 (-DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C03126F0 (-DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0340210 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendDestroyContext@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXII@Z @ 0x1C03835D4 (-VmBusSendDestroyContext@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXII@Z.c)
 */

void __fastcall DXGCONTEXT::DestroyContext(DXGCONTEXT *this, PERESOURCE **a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  char *v6; // rdx
  __int64 v7; // r8
  DXGDEVICESYNCOBJECT *v8; // rcx
  DXGHWQUEUE *i; // rdi
  char v10; // di
  __int64 v11; // rcx
  __int64 v12; // rcx
  char v13; // di
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  DXGDEVICESYNCOBJECT *v17; // rcx
  struct _LOOKASIDE_LIST_EX *v18; // rcx
  void *v19; // rdx
  __int64 v20; // rcx
  __int128 v21; // xmm1
  int v22; // edx
  __int64 v23; // r9
  unsigned int HostProcess; // eax
  __int64 v25; // [rsp+20h] [rbp-88h]
  __int64 v26; // [rsp+28h] [rbp-80h]
  __int64 v27; // [rsp+30h] [rbp-78h]
  __int64 v28; // [rsp+38h] [rbp-70h]
  __int64 v29; // [rsp+40h] [rbp-68h]
  int v30; // [rsp+48h] [rbp-60h]
  int v31; // [rsp+50h] [rbp-58h]
  int v32; // [rsp+58h] [rbp-50h]
  __int128 v33; // [rsp+80h] [rbp-28h] BYREF
  __int128 v34; // [rsp+90h] [rbp-18h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 1718LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->GetAdapter()->IsCoreResourceSharedOwner()",
      1718LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_BYTE *)this + 436) )
  {
    v4 = *((_QWORD *)this + 2);
    *((_BYTE *)this + 436) = 1;
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 16LL);
    if ( *(_BYTE *)(v5 + 209) && *((_DWORD *)this + 7) )
    {
      HostProcess = DXGPROCESS::GetHostProcess(*(DXGPROCESS **)(v4 + 40));
      DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyContext(
        (DXG_GUEST_VIRTUALGPU_VMBUS *)(v5 + 4472),
        HostProcess,
        *((_DWORD *)this + 7));
      *((_DWORD *)this + 7) = 0;
    }
    ADAPTER_RENDER::RemoveFromCddPrimarySyncContextListSafe(
      *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
      (struct _LIST_ENTRY *)this + 10);
    v8 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 30);
    if ( v8 )
      DXGDEVICESYNCOBJECT::DestroyCoreState(v8);
    for ( i = (DXGHWQUEUE *)*((_QWORD *)this + 51); i != (DXGCONTEXT *)((char *)this + 408) && i; i = *(DXGHWQUEUE **)i )
      DXGHWQUEUE::DestroyCoreState(i, (struct COREDEVICEACCESS *)a2);
    if ( *((_QWORD *)this + 32) || *((_QWORD *)this + 33) )
    {
      if ( !a2 || DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]) )
      {
        v10 = 0;
      }
      else
      {
        v10 = 1;
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)a2);
      }
      v11 = *((_QWORD *)this + 32);
      v33 = 0LL;
      LODWORD(v33) = 11;
      if ( v11 )
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 736LL)
                                                                + 8LL)
                                                    + 296LL))(
          v11,
          &v33);
      v12 = *((_QWORD *)this + 33);
      if ( v12 )
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 736LL)
                                                                + 8LL)
                                                    + 296LL))(
          v12,
          &v33);
      if ( v10 )
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a2, v6);
      if ( *((DXGCONTEXT **)this + 42) != (DXGCONTEXT *)((char *)this + 336)
        || (v13 = 0, *(_QWORD *)(*((_QWORD *)this + 2) + 840LL) != *((_QWORD *)this + 2) + 840LL) )
      {
        v13 = 1;
      }
      v14 = *((_QWORD *)this + 32);
      if ( v14 && v13 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 736LL)
                                                            + 8LL)
                                                + 312LL))(
          v14,
          0LL);
      v15 = *((_QWORD *)this + 33);
      if ( v15 && v13 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 736LL)
                                                            + 8LL)
                                                + 312LL))(
          v15,
          0LL);
    }
    if ( *((_QWORD *)this + 61) )
    {
      if ( *((_QWORD *)this + 32) )
        _InterlockedExchangeAdd64(
          (volatile signed __int64 *)(*((_QWORD *)this + 61) + 24LL),
          (*(__int64 (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL) + 8LL)
                               + 1024LL))());
      if ( *((_QWORD *)this + 35) )
        _InterlockedExchangeAdd64(
          (volatile signed __int64 *)(*((_QWORD *)this + 61) + 24LL),
          (*(__int64 (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL) + 8LL)
                               + 1032LL))());
    }
    if ( *((_QWORD *)this + 44) )
    {
      if ( !*((_QWORD *)this + 7) )
      {
        WdLogSingleEntry1(1LL, 1841LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pCommandBuffer", 1841LL, 0LL, 0LL, 0LL, 0LL);
      }
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL) + 8LL)
                                     + 512LL))(*((_QWORD *)this + 44));
      (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL)
                                                         + 8LL)
                                             + 496LL))(
        *((_QWORD *)this + 44),
        (char *)this + 384);
      *((_QWORD *)this + 44) = 0LL;
    }
    v16 = *((_QWORD *)this + 45);
    if ( v16 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL)
                                                          + 8LL)
                                              + 496LL))(
        v16,
        0LL);
      *((_QWORD *)this + 45) = 0LL;
    }
    if ( *((_QWORD *)this + 29) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL) + 8LL) + 448LL))();
      *((_QWORD *)this + 29) = 0LL;
    }
    v17 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 30);
    if ( v17 )
    {
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v17);
      *((_QWORD *)this + 30) = 0LL;
    }
    if ( *((_QWORD *)this + 34) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL) + 8LL) + 1000LL))();
      *((_QWORD *)this + 34) = 0LL;
    }
    if ( *((_QWORD *)this + 32) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL) + 8LL) + 240LL))();
      *((_QWORD *)this + 32) = 0LL;
    }
    if ( *((_QWORD *)this + 36) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL) + 8LL) + 264LL))();
      *((_QWORD *)this + 36) = 0LL;
    }
    if ( *((_QWORD *)this + 35) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL) + 8LL) + 248LL))();
      *((_QWORD *)this + 35) = 0LL;
    }
    if ( *((_QWORD *)this + 33) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL) + 8LL) + 240LL))();
      *((_QWORD *)this + 33) = 0LL;
    }
    v18 = (struct _LOOKASIDE_LIST_EX *)*((_QWORD *)this + 62);
    if ( v18 )
    {
      ExDeleteLookasideListEx(v18);
      operator delete(*((void **)this + 62));
      *((_QWORD *)this + 62) = 0LL;
    }
    if ( (*((_DWORD *)this + 10) & 1) != 0 )
    {
      v19 = (void *)*((_QWORD *)this + 23);
      if ( v19 )
      {
        ADAPTER_RENDER::DdiDestroyContext(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), v19);
        *((_QWORD *)this + 23) = 0LL;
      }
    }
    if ( bTracingEnabled )
    {
      v20 = *((unsigned int *)this + 99);
      v21 = *(_OWORD *)((char *)this + 216);
      v22 = *((_DWORD *)this + 98);
      v23 = *((_QWORD *)this + 2);
      v33 = *(_OWORD *)((char *)this + 200);
      v34 = v21;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
      {
        v32 = 0;
        v31 = v34;
        v30 = HIDWORD(v33);
        LODWORD(v29) = DWORD2(v33);
        LODWORD(v28) = DWORD1(v33);
        LODWORD(v27) = v33;
        LODWORD(v26) = v20;
        LODWORD(v25) = v22;
        McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
          v20,
          &EventDestroyContext,
          v7,
          v23,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32,
          this,
          0LL,
          0LL);
      }
    }
    if ( !*((_BYTE *)this + 437) )
      DXGADAPTER::NotifyContextCreation(
        *(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
        this,
        0,
        *((_DWORD *)this + 98));
  }
}
