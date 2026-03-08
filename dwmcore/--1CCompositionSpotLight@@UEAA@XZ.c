/*
 * XREFs of ??1CCompositionSpotLight@@UEAA@XZ @ 0x180012634
 * Callers:
 *     ??_GCCompositionSpotLight@@UEAAPEAXI@Z @ 0x1800125F0 (--_GCCompositionSpotLight@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180097680 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CCompositionSpotLight::~CCompositionSpotLight(CCompositionSpotLight *this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 264);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 32);
  CCompositionLight::~CCompositionLight(this);
}
