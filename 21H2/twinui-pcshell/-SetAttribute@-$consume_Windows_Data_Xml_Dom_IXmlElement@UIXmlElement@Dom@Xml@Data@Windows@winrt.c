/*
 * XREFs of ?SetAttribute@?$consume_Windows_Data_Xml_Dom_IXmlElement@UIXmlElement@Dom@Xml@Data@Windows@winrt@@@impl@winrt@@QEBAXAEBUhstring@param@3@0@Z @ 0x18014D20C
 * Callers:
 *     _lambda_465f2d06aab28da044c16147e08ff178_::operator() @ 0x180147D38 (_lambda_465f2d06aab28da044c16147e08ff178_--operator().c)
 *     _anonymous_namespace_::CreateConsentToastXmlDocument @ 0x1801483C4 (_anonymous_namespace_--CreateConsentToastXmlDocument.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

void __fastcall winrt::impl::consume_Windows_Data_Xml_Dom_IXmlElement<winrt::Windows::Data::Xml::Dom::IXmlElement>::SetAttribute(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // eax

  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*a1 + 64LL))(*a1, *a2, *a3);
  winrt::check_hresult(v3);
}
