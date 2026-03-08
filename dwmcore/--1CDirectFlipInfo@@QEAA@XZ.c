/*
 * XREFs of ??1CDirectFlipInfo@@QEAA@XZ @ 0x1800C7E18
 * Callers:
 *     ??1COverlayContext@@QEAA@XZ @ 0x1800C898C (--1COverlayContext@@QEAA@XZ.c)
 *     ??_GCDirectFlipInfo@@QEAAPEAXI@Z @ 0x1801D84B4 (--_GCDirectFlipInfo@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?Reset@CDirectFlipInfo@@QEAAXXZ @ 0x1800CA284 (-Reset@CDirectFlipInfo@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18012BB3A (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall CDirectFlipInfo::~CDirectFlipInfo(CDirectFlipInfo *this)
{
  std::_Ref_count_base *v2; // rcx

  CDirectFlipInfo::Reset(this);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 5);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 2);
}
