/*
 * XREFs of ??1MPCConstantManagerClient@@UEAA@XZ @ 0x180111474
 * Callers:
 *     ??_GMPCConstantManagerClient@@UEAAPEAXI@Z @ 0x1801128B0 (--_GMPCConstantManagerClient@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000D150 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x1800334A8 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VBamoKeyboardDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VBamoKeyboardDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@VBamoKeyboardDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18010F4D0 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VBamoKeyboardDockClientProxy@@Uerr_returncode_policy.c)
 */

void __fastcall MPCConstantManagerClient::~MPCConstantManagerClient(MPCConstantManagerClient *this, volatile int *a2)
{
  __int64 v3; // rcx
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  __int64 v7; // rcx
  Microsoft::Bamo::BaseBamoConnection *v8; // rcx

  v3 = *((_QWORD *)this + 15);
  if ( v3 )
  {
    *((_QWORD *)this + 15) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v3, a2);
  }
  v4 = (void *)*((_QWORD *)this + 12);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<BamoKeyboardDockClientProxy,wil::err_returncode_policy>>>(
      *((__int64 **)this + 12),
      *((__int64 **)this + 13));
    std::_Deallocate<16,0>(
      v4,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 14) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 9);
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<BamoKeyboardDockClientProxy,wil::err_returncode_policy>>>(
      *((__int64 **)this + 9),
      *((__int64 **)this + 10));
    std::_Deallocate<16,0>(
      v5,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 11) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 6);
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<BamoKeyboardDockClientProxy,wil::err_returncode_policy>>>(
      *((__int64 **)this + 6),
      *((__int64 **)this + 7));
    std::_Deallocate<16,0>(
      v6,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 8) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
  }
  v7 = *((_QWORD *)this + 5);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v8 = (Microsoft::Bamo::BaseBamoConnection *)*((_QWORD *)this + 4);
  if ( v8 )
    Microsoft::Bamo::BaseBamoConnection::Release(v8);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IMPCConstantManagerClient>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IMPCConstantManagerClient>(
    (__int64)this,
    a2);
}
