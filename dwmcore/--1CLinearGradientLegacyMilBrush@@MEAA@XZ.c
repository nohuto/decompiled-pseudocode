/*
 * XREFs of ??1CLinearGradientLegacyMilBrush@@MEAA@XZ @ 0x18021AEF4
 * Callers:
 *     ??_GCLinearGradientLegacyMilBrush@@MEAAPEAXI@Z @ 0x1801C0010 (--_GCLinearGradientLegacyMilBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800D5814 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CLinearGradientLegacyMilBrush::~CLinearGradientLegacyMilBrush(CLinearGradientLegacyMilBrush *this)
{
  __int64 v2; // rcx
  void *v3; // rcx

  *(_QWORD *)this = &CLinearGradientLegacyMilBrush::`vftable';
  v2 = *((_QWORD *)this + 23);
  if ( v2 )
    CPtrArrayBase::Remove((CPtrArrayBase *)(v2 + 24), (unsigned __int64 *)this);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 26);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 25);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 24);
  v3 = (void *)*((_QWORD *)this + 14);
  if ( v3 )
  {
    std::_Deallocate<16,0>(v3, 8 * ((__int64)(*((_QWORD *)this + 16) - (_QWORD)v3) >> 3));
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
    *((_QWORD *)this + 16) = 0LL;
  }
  CLegacyMilBrushGeneratedT<CLegacyMilBrush,CResource>::~CLegacyMilBrushGeneratedT<CLegacyMilBrush,CResource>((struct CResource **)this);
}
