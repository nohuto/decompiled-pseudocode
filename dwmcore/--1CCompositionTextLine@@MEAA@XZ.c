/*
 * XREFs of ??1CCompositionTextLine@@MEAA@XZ @ 0x180223AAC
 * Callers:
 *     ??_GCCompositionTextLine@@MEAAPEAXI@Z @ 0x1801BFBA0 (--_GCCompositionTextLine@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall CCompositionTextLine::~CCompositionTextLine(struct CResource **this)
{
  __int64 *v2; // rbx

  v2 = (__int64 *)(this + 13);
  *this = (struct CResource *)&CCompositionTextLine::`vftable';
  CResource::UnRegisterNotifierInternal((CResource *)this, this[13]);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v2);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v2);
  CTextObjectGeneratedT<CTextObject,CResource>::~CTextObjectGeneratedT<CTextObject,CResource>(this);
}
