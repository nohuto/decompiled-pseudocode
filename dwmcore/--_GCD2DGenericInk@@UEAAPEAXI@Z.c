/*
 * XREFs of ??_GCD2DGenericInk@@UEAAPEAXI@Z @ 0x180299720
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CD2DResource@@MEAA@XZ @ 0x18003D0EC (--1CD2DResource@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CD2DGenericInk *__fastcall CD2DGenericInk::`scalar deleting destructor'(CD2DGenericInk *this, char a2)
{
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 10);
  CD2DResource::~CD2DResource(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
