/*
 * XREFs of ?AppendChild@?$consume_Windows_Data_Xml_Dom_IXmlNode@UIXmlDocument@Dom@Xml@Data@Windows@winrt@@@impl@winrt@@QEBA?AUIXmlNode@Dom@Xml@Data@Windows@3@AEBU456783@@Z @ 0x180148164
 * Callers:
 *     _anonymous_namespace_::CreateConsentToastXmlDocument @ 0x1801483C4 (_anonymous_namespace_--CreateConsentToastXmlDocument.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6DC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A130C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlDocument>::AppendChild(
        void (__fastcall ****a1)(_QWORD, void *, __int64 *),
        _QWORD *a2,
        _QWORD *a3)
{
  void (__fastcall ***v5)(_QWORD, void *, __int64 *); // r9
  __int64 v6; // rcx
  unsigned int v7; // eax
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF

  v5 = *a1;
  v6 = 0LL;
  v10 = 0LL;
  if ( v5 )
  {
    v11 = 0LL;
    (**v5)(v5, &winrt::impl::guid_storage<winrt::Windows::Data::Xml::Dom::IXmlNode>::value, &v11);
    v6 = v11;
  }
  v9 = v6;
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v6 + 176LL))(v6, *a3, &v10);
  winrt::check_hresult(v7);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v9);
  *a2 = v10;
  return a2;
}
