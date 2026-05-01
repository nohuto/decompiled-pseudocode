/*
 * XREFs of ?EnsurePropertySet@PropertySetAssembler@@AEAAXXZ @ 0x1803EB604
 * Callers:
 *     ?Insert@PropertySetAssembler@@QEAA_NPEB_WPEAUIInspectable@@1@Z @ 0x1803EBF5C (-Insert@PropertySetAssembler@@QEAA_NPEB_WPEAUIInspectable@@1@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEB_WII@Z @ 0x18035D290 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEB_WII@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1803EB094 (--$ActivateInstance@V-$ComPtr@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@W.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall PropertySetAssembler::EnsurePropertySet(PropertySetAssembler *this)
{
  int v2; // eax
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( !*(_QWORD *)this )
  {
    v4 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Collections.PropertySet",
      0x2Bu,
      0x2Au);
    v2 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>>(
           v4,
           (__int64 *)this);
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        228LL,
        (__int64)"internal\\shellcommonshell\\inc\\propertysetassembler.h",
        (const char *)(unsigned int)v2);
  }
}
