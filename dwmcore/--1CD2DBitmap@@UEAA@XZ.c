/*
 * XREFs of ??1CD2DBitmap@@UEAA@XZ @ 0x18003CE18
 * Callers:
 *     ??_ECDeviceTextureTarget@@UEAAPEAXI@Z @ 0x18003C980 (--_ECDeviceTextureTarget@@UEAAPEAXI@Z.c)
 *     ??_GCD2DBitmap@@UEAAPEAXI@Z @ 0x18003DC40 (--_GCD2DBitmap@@UEAAPEAXI@Z.c)
 *     ??_ECSecondaryD2DBitmap@@UEAAPEAXI@Z @ 0x1800FD830 (--_ECSecondaryD2DBitmap@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003CE64 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CD2DBitmap::~CD2DBitmap(CD2DBitmap *this)
{
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((char *)this + 144);
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((char *)this + 136);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 16);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 15);
  CD2DResource::~CD2DResource(this);
}
