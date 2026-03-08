/*
 * XREFs of ??1CCaptureController@@EEAA@XZ @ 0x18021D0A4
 * Callers:
 *     ??_ECCaptureController@@EEAAPEAXI@Z @ 0x1801BF9C0 (--_ECCaptureController@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1801BB140 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@s.c)
 *     ?SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z @ 0x1801EAD74 (-SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z.c)
 */

void __fastcall CCaptureController::~CCaptureController(CCaptureController *this)
{
  CCaptureRenderTarget **v2; // rcx
  __int64 *v3; // rcx

  *(_QWORD *)this = &CCaptureController::`vftable';
  while ( 1 )
  {
    v2 = (CCaptureRenderTarget **)*((_QWORD *)this + 8);
    if ( v2 == *((CCaptureRenderTarget ***)this + 9) )
      break;
    CCaptureRenderTarget::SetController(*v2, 0LL);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 15);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 12);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 11);
  v3 = (__int64 *)*((_QWORD *)this + 8);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>>(
      v3,
      *((__int64 **)this + 9));
    std::_Deallocate<16,0>(
      *((void **)this + 8),
      (*((_QWORD *)this + 10) - *((_QWORD *)this + 8)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
  }
  CResource::~CResource(this);
}
