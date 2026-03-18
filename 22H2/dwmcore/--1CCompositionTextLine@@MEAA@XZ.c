/*
 * XREFs of ??1CCompositionTextLine@@MEAA@XZ @ 0x18022700C
 * Callers:
 *     ??_GCCompositionTextLine@@MEAAPEAXI@Z @ 0x1801C2DD0 (--_GCCompositionTextLine@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800047F0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800235AC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180100300 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
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
