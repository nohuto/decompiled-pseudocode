/*
 * XREFs of ??1CHolographicClient@@MEAA@XZ @ 0x1802A9040
 * Callers:
 *     ??_ECHolographicClient@@MEAAPEAXI@Z @ 0x1802A9270 (--_ECHolographicClient@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C8D4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180097680 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D4A28 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1801028E4 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1801BB140 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@s.c)
 *     ??$ReleaseInterface@VCHolographicInteropTaskQueue@@@@YAXAEAPEAVCHolographicInteropTaskQueue@@@Z @ 0x1802A0C04 (--$ReleaseInterface@VCHolographicInteropTaskQueue@@@@YAXAEAPEAVCHolographicInteropTaskQueue@@@Z.c)
 *     ?ClearMessage@CHolographicInteropTaskQueue@@AEAAXPEAUMESSAGE@1@@Z @ 0x1802A8B70 (-ClearMessage@CHolographicInteropTaskQueue@@AEAAXPEAUMESSAGE@1@@Z.c)
 *     ?ReverseList@CHolographicInteropTaskQueue@@AEAAPEAU_SLIST_ENTRY@@PEAU2@@Z @ 0x1802A8E0C (-ReverseList@CHolographicInteropTaskQueue@@AEAAPEAU_SLIST_ENTRY@@PEAU2@@Z.c)
 */

void __fastcall CHolographicClient::~CHolographicClient(CHolographicClient *this)
{
  __int64 *v2; // r15
  __int64 v3; // rcx
  __int64 v4; // rbx
  void *v5; // rdx
  struct _SLIST_ENTRY *v6; // rax
  CHolographicInteropTaskQueue *v7; // rcx
  CHolographicInteropTaskQueue *v8; // rcx
  struct _SLIST_ENTRY *v9; // r14
  union _SLIST_HEADER *v10; // rbp
  struct MESSAGE *v11; // rbx
  void *v12; // rcx
  __int64 *v13; // rcx

  *(_QWORD *)this = &CHolographicClient::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  v2 = (__int64 *)((char *)this + 32);
  *((_QWORD *)this + 2) = &CHolographicClient::`vftable'{for `IHolographicCompositorHost'};
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v2);
  }
  if ( *((_QWORD *)this + 3) )
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 3);
  *((_DWORD *)this + 62) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 224, 0x20u);
  v4 = *((_QWORD *)this + 33);
  wil::details::ResetEvent(*(wil::details **)(v4 + 48), v5);
  v6 = InterlockedFlushSList((PSLIST_HEADER)(v4 + 16));
  v9 = CHolographicInteropTaskQueue::ReverseList(v7, v6);
  if ( v9 )
  {
    v10 = (union _SLIST_HEADER *)(v4 + 32);
    do
    {
      v11 = (struct MESSAGE *)v9;
      v9 = v9->Next;
      CHolographicInteropTaskQueue::ClearMessage(v8, v11);
      InterlockedPushEntrySList(v10, (PSLIST_ENTRY)v11);
    }
    while ( v9 );
  }
  ReleaseInterface<CHolographicInteropTaskQueue>((__int64 *)this + 33);
  ReleaseInterface<CHolographicInteropTaskQueue>((__int64 *)this + 34);
  v12 = (void *)*((_QWORD *)this + 32);
  if ( v12 )
    CloseHandle(v12);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 224);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 26);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 25);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 160);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 128);
  v13 = (__int64 *)*((_QWORD *)this + 13);
  if ( v13 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>>(
      v13,
      *((__int64 **)this + 14));
    std::_Deallocate<16,0>(
      *((void **)this + 13),
      (*((_QWORD *)this + 15) - *((_QWORD *)this + 13)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 72);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 40);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 3);
}
