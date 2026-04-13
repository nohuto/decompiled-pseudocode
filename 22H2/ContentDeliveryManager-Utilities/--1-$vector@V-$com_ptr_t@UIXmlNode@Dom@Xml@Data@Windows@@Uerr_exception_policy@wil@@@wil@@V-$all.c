/*
 * XREFs of ??1?$vector@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18004EBD0
 * Callers:
 *     _MobilityExperience::CDPActivityHelper::GetActivityStoresForSupportedWebAccounts_::_1_::dtor$0 @ 0x1800D3914 (_MobilityExperience--CDPActivityHelper--GetActivityStoresForSupportedWebAccounts_--_1_--dtor$0.c)
 *     __lambda_ff7cfae8cddf8b4979caf74bf72ddb07_::operator()_::_1_::dtor$11 @ 0x1800D3C88 (__lambda_ff7cfae8cddf8b4979caf74bf72ddb07_--operator()_--_1_--dtor$11.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::TargetedContentLayoutXmlUtilities::GetTargetedContentNodes_::_1_::dtor$1 @ 0x1800D902A (_CreativeFramework--TargetedContentLayoutHelpers--TargetedContentLayoutXmlUtilities_ea_1800D902A.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ExtractTargetedContentTilesInLayout_::_1_::dtor$11 @ 0x1800D9A05 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--ExtractTargetedCo_ea_1800D9A05.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>>::~vector<wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>>(
        __int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v3; // rsi

  v1 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(_QWORD **)(a1 + 8);
    if ( v1 != v3 )
    {
      do
      {
        if ( *v1 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 16LL))(*v1);
        ++v1;
      }
      while ( v1 != v3 );
      v1 = *(_QWORD **)a1;
    }
    operator delete(v1);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
