/*
 * XREFs of ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00F0270
 * Callers:
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00EF514 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00EFD60 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00F1B0C (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002910 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C00031B4 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ?RemoveFromCddPrimarySyncContextListSafe@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00031E8 (-RemoveFromCddPrimarySyncContextListSafe@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C0003308 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0003524 (--3@YAXPEAX@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C0005500 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000A008 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqqqqqqqppp_EtwWriteTransfer @ 0x1C003FDDC (McTemplateK0pqqqqqqqqppp_EtwWriteTransfer.c)
 *     ?DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C00F0644 (-DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C0125180 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024DA2C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C026D4AC (-DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C02857F4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

void __fastcall DXGCONTEXT::DestroyContext(DXGCONTEXT *this, PERESOURCE **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rax
  char *v9; // rdx
  __int64 v10; // r8
  DXGDEVICESYNCOBJECT *v11; // rcx
  DXGDEVICESYNCOBJECT *v12; // rcx
  DXGHWQUEUE *i; // rdi
  char v14; // di
  __int64 v15; // rcx
  __int64 v16; // rcx
  char v17; // di
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  DXGDEVICESYNCOBJECT *v22; // rcx
  DXGDEVICESYNCOBJECT *v23; // rcx
  struct _LOOKASIDE_LIST_EX *v24; // rcx
  void *v25; // rdx
  __int64 v26; // r9
  __int128 v27; // xmm1
  __int64 v28; // rcx
  int v29; // edx
  __int64 v30; // rax
  DXGPROCESS *v31; // rcx
  int v32; // eax
  __int64 v33; // rax
  unsigned int *v34; // [rsp+28h] [rbp-59h]
  struct _MDL *v35; // [rsp+30h] [rbp-51h]
  int v36; // [rsp+38h] [rbp-49h]
  int v37; // [rsp+40h] [rbp-41h]
  int v38; // [rsp+48h] [rbp-39h]
  int v39; // [rsp+50h] [rbp-31h]
  int v40; // [rsp+58h] [rbp-29h]
  int v41; // [rsp+60h] [rbp-21h]
  __int128 v42; // [rsp+88h] [rbp+7h] BYREF
  __int128 v43; // [rsp+98h] [rbp+17h]
  __int64 v44; // [rsp+A8h] [rbp+27h] BYREF
  unsigned int HostProcess; // [rsp+B0h] [rbp+2Fh]
  int v46; // [rsp+B4h] [rbp+33h]
  int v47; // [rsp+B8h] [rbp+37h]
  int v48; // [rsp+C0h] [rbp+3Fh]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v30 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v30 + 24) = 1743LL;
    WdLogEvent5_WdAssertion(v30);
  }
  if ( !*((_BYTE *)this + 452) )
  {
    v6 = *((_QWORD *)this + 2);
    *((_BYTE *)this + 452) = 1;
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL);
    v8 = v6;
    if ( *(_BYTE *)(v7 + 209) && *((_DWORD *)this + 7) )
    {
      v31 = *(DXGPROCESS **)(v6 + 40);
      v44 = 0LL;
      HostProcess = DXGPROCESS::GetHostProcess(v31);
      v32 = *((_DWORD *)this + 7);
      v46 = 0;
      v47 = 7;
      v48 = v32;
      DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
        (DXG_VMBUS_CHANNEL_BASE *)(v7 + 4240),
        (struct DXGKVMB_COMMAND_BASE *)&v44,
        0x20u,
        0LL,
        0LL,
        v35);
      v8 = *((_QWORD *)this + 2);
      *((_DWORD *)this + 7) = 0;
    }
    ADAPTER_RENDER::RemoveFromCddPrimarySyncContextListSafe(
      *(ADAPTER_RENDER **)(v8 + 16),
      (struct _LIST_ENTRY *)this + 10);
    v11 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 30);
    if ( v11 )
      DXGDEVICESYNCOBJECT::DestroyCoreState(v11);
    v12 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 32);
    if ( v12 )
      DXGDEVICESYNCOBJECT::DestroyCoreState(v12);
    for ( i = (DXGHWQUEUE *)*((_QWORD *)this + 53); i != (DXGCONTEXT *)((char *)this + 424) && i; i = *(DXGHWQUEUE **)i )
      DXGHWQUEUE::DestroyCoreState(i, (struct COREDEVICEACCESS *)a2);
    if ( *((_QWORD *)this + 34) || *((_QWORD *)this + 35) )
    {
      if ( !a2 || DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]) )
      {
        v14 = 0;
      }
      else
      {
        v14 = 1;
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)a2, (__int64)v9);
      }
      v15 = *((_QWORD *)this + 34);
      v42 = 0LL;
      LODWORD(v42) = 9;
      if ( v15 )
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 616LL)
                                                                + 8LL)
                                                    + 296LL))(
          v15,
          &v42);
      v16 = *((_QWORD *)this + 35);
      if ( v16 )
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 616LL)
                                                                + 8LL)
                                                    + 296LL))(
          v16,
          &v42);
      if ( v14 )
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a2, v9);
      if ( *((DXGCONTEXT **)this + 44) != (DXGCONTEXT *)((char *)this + 352)
        || (v17 = 0, *(_QWORD *)(*((_QWORD *)this + 2) + 808LL) != *((_QWORD *)this + 2) + 808LL) )
      {
        v17 = 1;
      }
      v18 = *((_QWORD *)this + 34);
      if ( v18 && v17 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 616LL)
                                                            + 8LL)
                                                + 312LL))(
          v18,
          0LL);
      v19 = *((_QWORD *)this + 35);
      if ( v19 && v17 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 616LL)
                                                            + 8LL)
                                                + 312LL))(
          v19,
          0LL);
    }
    if ( *((_QWORD *)this + 63) )
    {
      if ( *((_QWORD *)this + 34) )
        _InterlockedExchangeAdd64(
          (volatile signed __int64 *)(*((_QWORD *)this + 63) + 24LL),
          (*(__int64 (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 616LL) + 8LL)
                               + 1024LL))());
      if ( *((_QWORD *)this + 37) )
        _InterlockedExchangeAdd64(
          (volatile signed __int64 *)(*((_QWORD *)this + 63) + 24LL),
          (*(__int64 (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 616LL) + 8LL)
                               + 1032LL))());
    }
    v20 = *((_QWORD *)this + 46);
    if ( v20 )
    {
      if ( !*((_QWORD *)this + 7) )
      {
        v33 = WdLogNewEntry5_WdAssertion(v20, v9);
        *(_QWORD *)(v33 + 24) = 1871LL;
        WdLogEvent5_WdAssertion(v33);
        v20 = *((_QWORD *)this + 46);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL) + 8LL)
                                      + 520LL))(v20);
      (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL)
                                                         + 8LL)
                                             + 504LL))(
        *((_QWORD *)this + 46),
        (char *)this + 400);
      *((_QWORD *)this + 46) = 0LL;
    }
    v21 = *((_QWORD *)this + 47);
    if ( v21 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL)
                                                          + 8LL)
                                              + 504LL))(
        v21,
        0LL);
      *((_QWORD *)this + 47) = 0LL;
    }
    if ( *((_QWORD *)this + 29) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL) + 8LL) + 456LL))();
      *((_QWORD *)this + 29) = 0LL;
    }
    v22 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 30);
    if ( v22 )
    {
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v22);
      *((_QWORD *)this + 30) = 0LL;
    }
    v23 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 32);
    if ( v23 )
    {
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v23);
      *((_QWORD *)this + 32) = 0LL;
    }
    if ( *((_QWORD *)this + 36) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL) + 8LL) + 1008LL))();
      *((_QWORD *)this + 36) = 0LL;
    }
    if ( *((_QWORD *)this + 34) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 616LL) + 8LL) + 240LL))();
      *((_QWORD *)this + 34) = 0LL;
    }
    if ( *((_QWORD *)this + 38) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 616LL) + 8LL) + 264LL))();
      *((_QWORD *)this + 38) = 0LL;
    }
    if ( *((_QWORD *)this + 37) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 616LL) + 8LL) + 248LL))();
      *((_QWORD *)this + 37) = 0LL;
    }
    if ( *((_QWORD *)this + 35) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 616LL) + 8LL) + 240LL))();
      *((_QWORD *)this + 35) = 0LL;
    }
    v24 = (struct _LOOKASIDE_LIST_EX *)*((_QWORD *)this + 64);
    if ( v24 )
    {
      ExDeleteLookasideListEx(v24);
      operator delete(*((void **)this + 64));
      *((_QWORD *)this + 64) = 0LL;
    }
    if ( (*((_DWORD *)this + 10) & 1) != 0 )
    {
      v25 = (void *)*((_QWORD *)this + 23);
      if ( v25 )
      {
        ADAPTER_RENDER::DdiDestroyContext(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), v25);
        *((_QWORD *)this + 23) = 0LL;
      }
    }
    if ( bTracingEnabled )
    {
      v26 = *((_QWORD *)this + 2);
      v27 = *(_OWORD *)((char *)this + 216);
      v28 = *((unsigned int *)this + 103);
      v29 = *((_DWORD *)this + 102);
      v42 = *(_OWORD *)((char *)this + 200);
      v43 = v27;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        v41 = 0;
        v40 = v43;
        v39 = HIDWORD(v42);
        v38 = DWORD2(v42);
        v37 = DWORD1(v42);
        v36 = v42;
        LODWORD(v35) = v28;
        LODWORD(v34) = v29;
        McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
          v28,
          &EventDestroyContext,
          v10,
          v26,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41,
          this,
          0LL,
          0LL);
      }
    }
    if ( !*((_BYTE *)this + 453) )
      DXGADAPTER::NotifyContextCreation(
        *(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
        this,
        0,
        *((_DWORD *)this + 102));
  }
}
