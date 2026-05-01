/*
 * XREFs of ?CreateTextNode@?$consume_Windows_Data_Xml_Dom_IXmlDocument@UIXmlDocument@Dom@Xml@Data@Windows@winrt@@@impl@winrt@@QEBA?AUXmlText@Dom@Xml@Data@Windows@3@AEBUhstring@param@3@@Z @ 0x180149444
 * Callers:
 *     _anonymous_namespace_::CreateConsentToastXmlDocument @ 0x1801483C4 (_anonymous_namespace_--CreateConsentToastXmlDocument.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6DC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Data_Xml_Dom_IXmlDocument<winrt::Windows::Data::Xml::Dom::IXmlDocument>::CreateTextNode(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  unsigned int v5; // eax
  _QWORD *result; // rax
  _QWORD *v7; // [rsp+20h] [rbp-18h] BYREF

  v7 = a2;
  v3 = *a1;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD **))(*(_QWORD *)v3 + 88LL))(v3, *a3, &v7);
  winrt::check_hresult(v5);
  result = a2;
  *a2 = v7;
  return result;
}
