/*
 * XREFs of std::_Func_impl_no_alloc__lambda_88358cf897930614284adb3422b4c545__long_CD3DDevice::D3D12Resources___::_Delete_this @ 0x18028B6D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_88358cf897930614284adb3422b4c545__long_CD3DDevice::D3D12Resources___::_Delete_this(
        __int64 *a1,
        char a2)
{
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(a1 + 2);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(a1 + 1);
  if ( a2 )
    operator delete(a1);
}
