/*
 * XREFs of ??1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x1801B5A04
 * Callers:
 *     ??1DiagnosticCallbacksManager@@EEAA@XZ @ 0x1801B5C4C (--1DiagnosticCallbacksManager@@EEAA@XZ.c)
 *     ??_EBamoConnection@dataprovider_AutoBamos@@MEAAPEAXI@Z @ 0x1801B5D30 (--_EBamoConnection@dataprovider_AutoBamos@@MEAAPEAXI@Z.c)
 *     ??_GBamoConnectionImpl@dataprovider_AutoBamos@BamoImpl@@UEAAPEAXI@Z @ 0x1801B5D80 (--_GBamoConnectionImpl@dataprovider_AutoBamos@BamoImpl@@UEAAPEAXI@Z.c)
 *     ??_EDataProviderRegistrarConnection@@UEAAPEAXI@Z @ 0x1801DD040 (--_EDataProviderRegistrarConnection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800AD490 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x180103C70 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VBufferingMessageCallHost@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801B5990 (--1-$com_ptr_t@VBufferingMessageCallHost@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::~BaseBamoConnectionImpl(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this)
{
  __int64 v2; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx
  void *v5; // rdx
  __int64 v6; // r8
  const char *v7; // r9
  void *v8; // rcx
  wil::details *v9; // rcx
  __int64 v10; // rcx
  Microsoft::BamoImpl::BamoImplObject *v11; // rcx
  __int64 v12; // rcx

  *(_QWORD *)this = &Microsoft::BamoImpl::BaseBamoConnectionImpl::`vftable';
  v2 = *((_QWORD *)this + 28);
  if ( v2 )
  {
    v3 = *(_QWORD **)(v2 + 528);
    *(_QWORD *)(v2 + 528) = 0LL;
    *((_QWORD *)this + 28) = 0LL;
    if ( v3 )
    {
      do
      {
        v4 = (_QWORD *)v3[66];
        operator delete(v3);
        v3 = v4;
      }
      while ( v4 );
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  v8 = (void *)*((_QWORD *)this + 24);
  if ( v8 )
  {
    std::_Deallocate<16,0>(v8, (*((_QWORD *)this + 26) - (_QWORD)v8) & 0xFFFFFFFFFFFFFFFCuLL);
    *((_QWORD *)this + 24) = 0LL;
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
  }
  v9 = (wil::details *)*((_QWORD *)this + 16);
  *((_QWORD *)this + 16) = 0LL;
  if ( v9 )
    wil::details::FreeProcessHeap(v9, v5);
  v10 = *((_QWORD *)this + 15);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v11 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 13);
  if ( v11 )
    Microsoft::BamoImpl::BamoImplObject::Release(v11, (__int64)v5, v6, v7);
  wil::com_ptr_t<Microsoft::BamoImpl::BufferingMessageCallHost,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::BufferingMessageCallHost,wil::err_returncode_policy>((__int64 *)this + 11);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 10);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 9);
  v12 = *((_QWORD *)this + 8);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 7);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 6);
}
