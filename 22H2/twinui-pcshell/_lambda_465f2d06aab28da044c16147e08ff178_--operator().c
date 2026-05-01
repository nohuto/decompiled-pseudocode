/*
 * XREFs of _lambda_465f2d06aab28da044c16147e08ff178_::operator() @ 0x180147BC8
 * Callers:
 *     _anonymous_namespace_::CreateConsentToastXmlDocument @ 0x180148254 (_anonymous_namespace_--CreateConsentToastXmlDocument.c)
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005E140 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180080E44 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A12EC (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?CreateElement@?$consume_Windows_Data_Xml_Dom_IXmlDocument@UIXmlDocument@Dom@Xml@Data@Windows@winrt@@@impl@winrt@@QEBA?AUXmlElement@Dom@Xml@Data@Windows@3@AEBUhstring@param@3@@Z @ 0x180148AD8 (-CreateElement@-$consume_Windows_Data_Xml_Dom_IXmlDocument@UIXmlDocument@Dom@Xml@Data@Windows@wi.c)
 *     ?SetAttribute@?$consume_Windows_Data_Xml_Dom_IXmlElement@UIXmlElement@Dom@Xml@Data@Windows@winrt@@@impl@winrt@@QEBAXAEBUhstring@param@3@0@Z @ 0x18014D09C (-SetAttribute@-$consume_Windows_Data_Xml_Dom_IXmlElement@UIXmlElement@Dom@Xml@Data@Windows@winrt.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x180260FB4 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?FindAndSize@ResourceString@Internal@Windows@@SA_NPEAUHINSTANCE__@@IGPEAPEBGPEAG@Z @ 0x1802DE80C (-FindAndSize@ResourceString@Internal@Windows@@SA_NPEAUHINSTANCE__@@IGPEAPEBGPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=3
HSTRING __fastcall lambda_465f2d06aab28da044c16147e08ff178_::operator()(
        __int64 a1,
        HSTRING a2,
        __int64 *a3,
        unsigned int a4,
        const WCHAR *sourceString)
{
  const WCHAR *v7; // rsi
  int v8; // ebx
  unsigned __int16 v10[2]; // [rsp+30h] [rbp-51h] BYREF
  int v11; // [rsp+34h] [rbp-4Dh]
  unsigned __int16 *v12; // [rsp+38h] [rbp-49h] BYREF
  HSTRING string[4]; // [rsp+40h] [rbp-41h] BYREF
  HSTRING v14[6]; // [rsp+60h] [rbp-21h] BYREF
  __int128 v15; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v16; // [rsp+A0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]

  v14[4] = a2;
  v14[5] = (HSTRING)a3;
  v11 = 0;
  v16 = 0LL;
  v7 = 0LL;
  v15 = 0uLL;
  v8 = -2147467259;
  if ( Windows::Internal::ResourceString::FindAndSize(
         &_ImageBase,
         a4,
         (unsigned __int16)a3,
         (const unsigned __int16 **)&v12,
         v10) )
  {
    v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
           (LPVOID *)&v15,
           (__int64)v12,
           v10[0]);
    v7 = (const WCHAR *)v15;
  }
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      197LL,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  winrt::param::hstring::hstring(string, L"action");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlDocument<winrt::Windows::Data::Xml::Dom::IXmlDocument>::CreateElement(
    a3,
    a2,
    string);
  v11 = 1;
  winrt::param::hstring::hstring(string, sourceString);
  winrt::param::hstring::hstring(v14, L"id");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlElement<winrt::Windows::Data::Xml::Dom::IXmlElement>::SetAttribute(
    a2,
    v14,
    string);
  winrt::param::hstring::hstring(v14, sourceString);
  winrt::param::hstring::hstring(string, L"arguments");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlElement<winrt::Windows::Data::Xml::Dom::IXmlElement>::SetAttribute(
    a2,
    string,
    v14);
  winrt::param::hstring::hstring(v14, v7);
  winrt::param::hstring::hstring(string, L"content");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlElement<winrt::Windows::Data::Xml::Dom::IXmlElement>::SetAttribute(
    a2,
    string,
    v14);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v15);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(a3);
  return a2;
}
