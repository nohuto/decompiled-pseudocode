/*
 * XREFs of ??1CCompositionSwapchainStatistics@@MEAA@XZ @ 0x180269FEC
 * Callers:
 *     ??_ECCompositionSwapchainStatistics@@MEAAPEAXI@Z @ 0x18026A060 (--_ECCompositionSwapchainStatistics@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CCompositionSwapchainStatistics::~CCompositionSwapchainStatistics(
        CCompositionSwapchainStatistics *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CCompositionSwapchainStatistics::`vftable';
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 8);
  v2 = (void *)*((_QWORD *)this + 3);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, 4 * ((__int64)(*((_QWORD *)this + 5) - (_QWORD)v2) >> 2));
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
  }
}
