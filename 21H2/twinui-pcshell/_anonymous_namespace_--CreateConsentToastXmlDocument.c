/*
 * XREFs of _anonymous_namespace_::CreateConsentToastXmlDocument @ 0x1801483C4
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$2 @ 0x18014A800 (RequestNotificationPinConsentAsync$_ResumeCoro$2.c)
 * Callees:
 *     ??0?$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x18008171C (--0-$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A130C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??$call@AEAV_lambda_73467e1889e99e6893efd5fb947c491d_@@@?$factory_cache_entry@UXmlDocument@Dom@Xml@Data@Windows@winrt@@UIActivationFactory@Foundation@56@@impl@winrt@@QEAA?AUXmlDocument@Dom@Xml@Data@Windows@2@AEAV_lambda_73467e1889e99e6893efd5fb947c491d_@@@Z @ 0x180146F60 (--$call@AEAV_lambda_73467e1889e99e6893efd5fb947c491d_@@@-$factory_cache_entry@UXmlDocument@Dom@X.c)
 *     _lambda_465f2d06aab28da044c16147e08ff178_::operator() @ 0x180147D38 (_lambda_465f2d06aab28da044c16147e08ff178_--operator().c)
 *     ?AppendChild@?$consume_Windows_Data_Xml_Dom_IXmlNode@UIXmlDocument@Dom@Xml@Data@Windows@winrt@@@impl@winrt@@QEBA?AUIXmlNode@Dom@Xml@Data@Windows@3@AEBU456783@@Z @ 0x180148164 (-AppendChild@-$consume_Windows_Data_Xml_Dom_IXmlNode@UIXmlDocument@Dom@Xml@Data@Windows@winrt@@@.c)
 *     ?CreateElement@?$consume_Windows_Data_Xml_Dom_IXmlDocument@UIXmlDocument@Dom@Xml@Data@Windows@winrt@@@impl@winrt@@QEBA?AUXmlElement@Dom@Xml@Data@Windows@3@AEBUhstring@param@3@@Z @ 0x180148C48 (-CreateElement@-$consume_Windows_Data_Xml_Dom_IXmlDocument@UIXmlDocument@Dom@Xml@Data@Windows@wi.c)
 *     ?CreateTextNode@?$consume_Windows_Data_Xml_Dom_IXmlDocument@UIXmlDocument@Dom@Xml@Data@Windows@winrt@@@impl@winrt@@QEBA?AUXmlText@Dom@Xml@Data@Windows@3@AEBUhstring@param@3@@Z @ 0x180149444 (-CreateTextNode@-$consume_Windows_Data_Xml_Dom_IXmlDocument@UIXmlDocument@Dom@Xml@Data@Windows@w.c)
 *     ?SetAttribute@?$consume_Windows_Data_Xml_Dom_IXmlElement@UIXmlElement@Dom@Xml@Data@Windows@winrt@@@impl@winrt@@QEBAXAEBUhstring@param@3@0@Z @ 0x18014D20C (-SetAttribute@-$consume_Windows_Data_Xml_Dom_IXmlElement@UIXmlElement@Dom@Xml@Data@Windows@winrt.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x180261164 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 */

// Hidden C++ exception states: #wind=23
struct IUnknown *__fastcall anonymous_namespace_::CreateConsentToastXmlDocument(
        struct IUnknown *a1,
        const WCHAR *a2,
        const WCHAR *a3,
        const WCHAR *a4)
{
  void (__fastcall ***v8)(_QWORD, void *, _QWORD); // rcx
  void (__fastcall ***v9)(_QWORD, void *, _QWORD); // rcx
  __int64 v10; // rcx
  void (__fastcall ***v11)(_QWORD, void *, _QWORD); // rcx
  __int64 v12; // rcx
  void (__fastcall ***v13)(_QWORD, void *, _QWORD); // rcx
  void (__fastcall ***v15)(_QWORD, void *, __int64 *); // [rsp+30h] [rbp-D0h] BYREF
  void (__fastcall ***v16)(_QWORD, void *, __int64 *); // [rsp+38h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C0h] BYREF
  void (__fastcall ***v18)(_QWORD, void *, __int64 *); // [rsp+48h] [rbp-B8h] BYREF
  void (__fastcall ***v19)(_QWORD, void *, __int64 *); // [rsp+50h] [rbp-B0h] BYREF
  void (__fastcall ***v20)(_QWORD, void *, __int64 *); // [rsp+58h] [rbp-A8h] BYREF
  void (__fastcall ***v21)(_QWORD, void *, _QWORD); // [rsp+60h] [rbp-A0h] BYREF
  int v22; // [rsp+68h] [rbp-98h]
  void (__fastcall ***v23)(_QWORD, void *, __int64 *); // [rsp+70h] [rbp-90h] BYREF
  __int64 v24; // [rsp+78h] [rbp-88h] BYREF
  HSTRING v25[4]; // [rsp+80h] [rbp-80h] BYREF
  HSTRING v26[4]; // [rsp+A0h] [rbp-60h] BYREF
  HSTRING string[5]; // [rsp+C0h] [rbp-40h] BYREF
  void (__fastcall ***v28)(_QWORD, void *, __int64 *); // [rsp+E8h] [rbp-18h] BYREF
  void (__fastcall ***v29)(_QWORD, void *, __int64 *); // [rsp+F0h] [rbp-10h] BYREF
  void (__fastcall ***v30)(_QWORD, void *, __int64 *); // [rsp+F8h] [rbp-8h] BYREF

  string[4] = (HSTRING)a1;
  winrt::impl::factory_cache_entry<winrt::Windows::Data::Xml::Dom::XmlDocument,winrt::Windows::Foundation::IActivationFactory>::call<_lambda_73467e1889e99e6893efd5fb947c491d_ &>(
    (__int64)a1,
    a1);
  v22 = 3;
  winrt::param::hstring::hstring(string, L"toast");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlDocument<winrt::Windows::Data::Xml::Dom::IXmlDocument>::CreateElement(
    a1,
    &v20,
    string);
  winrt::param::hstring::hstring(v25, L"systemDialog");
  winrt::param::hstring::hstring(v26, L"scenario");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlElement<winrt::Windows::Data::Xml::Dom::IXmlElement>::SetAttribute(
    &v20,
    v26,
    v25);
  winrt::param::hstring::hstring(v26, L"visual");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlDocument<winrt::Windows::Data::Xml::Dom::IXmlDocument>::CreateElement(
    a1,
    &v23,
    v26);
  winrt::param::hstring::hstring(v25, L"binding");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlDocument<winrt::Windows::Data::Xml::Dom::IXmlDocument>::CreateElement(
    a1,
    &v19,
    v25);
  winrt::param::hstring::hstring(v26, L"ToastGeneric");
  winrt::param::hstring::hstring(string, L"template");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlElement<winrt::Windows::Data::Xml::Dom::IXmlElement>::SetAttribute(
    &v19,
    string,
    v26);
  winrt::param::hstring::hstring(v26, L"image");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlDocument<winrt::Windows::Data::Xml::Dom::IXmlDocument>::CreateElement(
    a1,
    &v21,
    v26);
  winrt::param::hstring::hstring(v25, L"appLogoOverride");
  winrt::param::hstring::hstring(string, L"placement");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlElement<winrt::Windows::Data::Xml::Dom::IXmlElement>::SetAttribute(
    &v21,
    string,
    v25);
  winrt::param::hstring::hstring(v25, a4);
  winrt::param::hstring::hstring(string, L"src");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlElement<winrt::Windows::Data::Xml::Dom::IXmlElement>::SetAttribute(
    &v21,
    string,
    v25);
  if ( v21 )
  {
    v28 = 0LL;
    (**v21)(v21, &winrt::impl::guid_storage<winrt::Windows::Data::Xml::Dom::IXmlNode>::value, &v28);
    v18 = v28;
  }
  else
  {
    v18 = 0LL;
  }
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlDocument>::AppendChild(
    &v19,
    &v29,
    &v18);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v29);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v18);
  winrt::param::hstring::hstring(v25, L"text");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlDocument<winrt::Windows::Data::Xml::Dom::IXmlDocument>::CreateElement(
    a1,
    &v18,
    v25);
  winrt::param::hstring::hstring(v26, L"header");
  winrt::param::hstring::hstring(string, L"hint-style");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlElement<winrt::Windows::Data::Xml::Dom::IXmlElement>::SetAttribute(
    &v18,
    string,
    v26);
  winrt::param::hstring::hstring(v26, a2);
  v8 = *(void (__fastcall ****)(_QWORD, void *, _QWORD))winrt::impl::consume_Windows_Data_Xml_Dom_IXmlDocument<winrt::Windows::Data::Xml::Dom::IXmlDocument>::CreateTextNode(
                                                          a1,
                                                          &v30,
                                                          v26);
  if ( v8 )
  {
    v28 = 0LL;
    (**v8)(v8, &winrt::impl::guid_storage<winrt::Windows::Data::Xml::Dom::IXmlNode>::value, &v28);
    v16 = v28;
  }
  else
  {
    v16 = 0LL;
  }
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlDocument>::AppendChild(
    &v18,
    &v29,
    &v16);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v29);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v16);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v30);
  if ( v18 )
  {
    v28 = 0LL;
    (**v18)(v18, &winrt::impl::guid_storage<winrt::Windows::Data::Xml::Dom::IXmlNode>::value, (__int64 *)&v28);
    v16 = v28;
  }
  else
  {
    v16 = 0LL;
  }
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlDocument>::AppendChild(
    &v19,
    &v29,
    &v16);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v29);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v16);
  winrt::param::hstring::hstring(v26, L"text");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlDocument<winrt::Windows::Data::Xml::Dom::IXmlDocument>::CreateElement(
    a1,
    &v16,
    v26);
  winrt::param::hstring::hstring(v25, L"body");
  winrt::param::hstring::hstring(string, L"hint-style");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlElement<winrt::Windows::Data::Xml::Dom::IXmlElement>::SetAttribute(
    &v16,
    string,
    v25);
  winrt::param::hstring::hstring(v25, a3);
  v9 = *(void (__fastcall ****)(_QWORD, void *, _QWORD))winrt::impl::consume_Windows_Data_Xml_Dom_IXmlDocument<winrt::Windows::Data::Xml::Dom::IXmlDocument>::CreateTextNode(
                                                          a1,
                                                          &v30,
                                                          v25);
  if ( v9 )
  {
    v28 = 0LL;
    (**v9)(v9, &winrt::impl::guid_storage<winrt::Windows::Data::Xml::Dom::IXmlNode>::value, &v28);
    v15 = v28;
  }
  else
  {
    v15 = 0LL;
  }
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlDocument>::AppendChild(
    &v16,
    &v29,
    &v15);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v29);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v15);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v30);
  if ( v16 )
  {
    v28 = 0LL;
    (**v16)(v16, &winrt::impl::guid_storage<winrt::Windows::Data::Xml::Dom::IXmlNode>::value, (__int64 *)&v28);
    v15 = v28;
  }
  else
  {
    v15 = 0LL;
  }
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlDocument>::AppendChild(
    &v19,
    &v29,
    &v15);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v29);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v15);
  if ( v19 )
  {
    v28 = 0LL;
    (**v19)(v19, &winrt::impl::guid_storage<winrt::Windows::Data::Xml::Dom::IXmlNode>::value, (__int64 *)&v28);
    v15 = v28;
  }
  else
  {
    v15 = 0LL;
  }
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlDocument>::AppendChild(
    &v23,
    &v29,
    &v15);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v29);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v15);
  if ( v23 )
  {
    v28 = 0LL;
    (**v23)(v23, &winrt::impl::guid_storage<winrt::Windows::Data::Xml::Dom::IXmlNode>::value, (__int64 *)&v28);
    v15 = v28;
  }
  else
  {
    v15 = 0LL;
  }
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlDocument>::AppendChild(
    &v20,
    &v29,
    &v15);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v29);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v15);
  winrt::param::hstring::hstring(v25, L"actions");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlDocument<winrt::Windows::Data::Xml::Dom::IXmlDocument>::CreateElement(
    a1,
    &v15,
    v25);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>::AsyncOperationCompletedHandler<bool>(
    (__int64 *)&v30,
    (__int64 *)a1);
  v11 = *(void (__fastcall ****)(_QWORD, void *, _QWORD))lambda_465f2d06aab28da044c16147e08ff178_::operator()(
                                                           v10,
                                                           (HSTRING)&v17,
                                                           (__int64 *)&v30,
                                                           0x38A5u,
                                                           L"allow");
  if ( v11 )
  {
    v29 = 0LL;
    (**v11)(v11, &winrt::impl::guid_storage<winrt::Windows::Data::Xml::Dom::IXmlNode>::value, &v29);
    v28 = v29;
  }
  else
  {
    v28 = 0LL;
  }
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlDocument>::AppendChild(
    &v15,
    &v24,
    &v28);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v24);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v28);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v17);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>::AsyncOperationCompletedHandler<bool>(
    (__int64 *)&v29,
    (__int64 *)a1);
  v13 = *(void (__fastcall ****)(_QWORD, void *, _QWORD))lambda_465f2d06aab28da044c16147e08ff178_::operator()(
                                                           v12,
                                                           (HSTRING)&v24,
                                                           (__int64 *)&v29,
                                                           0x38A6u,
                                                           L"deny");
  if ( v13 )
  {
    v30 = 0LL;
    (**v13)(v13, &winrt::impl::guid_storage<winrt::Windows::Data::Xml::Dom::IXmlNode>::value, &v30);
    v28 = v30;
  }
  else
  {
    v28 = 0LL;
  }
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlDocument>::AppendChild(
    &v15,
    &v17,
    &v28);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v17);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v28);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v24);
  if ( v15 )
  {
    v29 = 0LL;
    (**v15)(v15, &winrt::impl::guid_storage<winrt::Windows::Data::Xml::Dom::IXmlNode>::value, (__int64 *)&v29);
    v28 = v29;
  }
  else
  {
    v28 = 0LL;
  }
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlDocument>::AppendChild(
    &v20,
    &v17,
    &v28);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v17);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v28);
  if ( v20 )
  {
    v29 = 0LL;
    (**v20)(v20, &winrt::impl::guid_storage<winrt::Windows::Data::Xml::Dom::IXmlNode>::value, (__int64 *)&v29);
    v28 = v29;
  }
  else
  {
    v28 = 0LL;
  }
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlDocument>::AppendChild(
    a1,
    &v17,
    &v28);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v17);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v28);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v15);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v16);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v18);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v21);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v19);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v23);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v20);
  return a1;
}
