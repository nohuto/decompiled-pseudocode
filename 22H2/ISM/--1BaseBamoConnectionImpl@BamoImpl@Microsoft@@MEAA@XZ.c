/*
 * XREFs of ??1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x1800718D0
 * Callers:
 *     ??_EBamoConnection@MPCManagerBamo_AutoBamos@@UEAAPEAXI@Z @ 0x180071A10 (--_EBamoConnection@MPCManagerBamo_AutoBamos@@UEAAPEAXI@Z.c)
 *     ??_EBamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@UEAAPEAXI@Z @ 0x180071A50 (--_EBamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@UEAAPEAXI@Z.c)
 *     ??_EMPCManagerConnection@@UEAAPEAXI@Z @ 0x180071C90 (--_EMPCManagerConnection@@UEAAPEAXI@Z.c)
 *     ??_GInputSystemServerConnection@@UEAAPEAXI@Z @ 0x1800E2F50 (--_GInputSystemServerConnection@@UEAAPEAXI@Z.c)
 *     ??_GMPCManagerClientConnection@@UEAAPEAXI@Z @ 0x180107180 (--_GMPCManagerClientConnection@@UEAAPEAXI@Z.c)
 *     ??_GAnimationDataProviderConnection@@UEAAPEAXI@Z @ 0x180141640 (--_GAnimationDataProviderConnection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180001E50 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18000DA10 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800280BC (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x18003A130 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::~BaseBamoConnectionImpl(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this)
{
  void *v2; // rdx
  wil::details *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  const char *v6; // r9
  Microsoft::BamoImpl::BamoImplObject *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx

  *(_QWORD *)this = &Microsoft::BamoImpl::BaseBamoConnectionImpl::`vftable';
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  v3 = (wil::details *)*((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = 0LL;
  if ( v3 )
    wil::details::FreeProcessHeap(v3, v2);
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))this + 13);
  v7 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 11);
  if ( v7 )
    Microsoft::BamoImpl::BamoImplObject::Release(v7, v4, v5, v6);
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))this + 10);
  v8 = *((_QWORD *)this + 9);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 8);
  v9 = *((_QWORD *)this + 7);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 6);
}
