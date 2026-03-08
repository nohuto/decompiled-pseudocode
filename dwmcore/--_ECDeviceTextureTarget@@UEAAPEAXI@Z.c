/*
 * XREFs of ??_ECDeviceTextureTarget@@UEAAPEAXI@Z @ 0x18003C980
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CD2DBitmap@@UEAA@XZ @ 0x18003CE18 (--1CD2DBitmap@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CDeviceTextureTarget *__fastcall CDeviceTextureTarget::`vector deleting destructor'(
        CDeviceTextureTarget *this,
        char a2)
{
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 33);
  CD2DBitmap::~CD2DBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x1A8uLL);
  return this;
}
