/*
 * XREFs of ??1D3D12Resources@CD3DDevice@@QEAA@XZ @ 0x180288F80
 * Callers:
 *     ??1?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAA@XZ @ 0x180288ED0 (--1-$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CD3DDevice::D3D12Resources::~D3D12Resources(CD3DDevice::D3D12Resources *this)
{
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 2);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 1);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this);
}
