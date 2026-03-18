/*
 * XREFs of ??1CDirectFlipInfo@@QEAA@XZ @ 0x1800C8878
 * Callers:
 *     ??1COverlayContext@@QEAA@XZ @ 0x1800C93EC (--1COverlayContext@@QEAA@XZ.c)
 *     ??_GCDirectFlipInfo@@QEAAPEAXI@Z @ 0x1801DB784 (--_GCDirectFlipInfo@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?Reset@CDirectFlipInfo@@QEAAXXZ @ 0x1800CACE4 (-Reset@CDirectFlipInfo@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18012FCEA (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
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
