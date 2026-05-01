/*
 * XREFs of ?PinnedListPlaceholderProcessed@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG_N@Z @ 0x18015AC9C
 * Callers:
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180158470 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18005755C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18008F040 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?CensorAppIdBuffer@AppIdCensorUtility@LoggingUtil@@SAJPEBGPEAPEAG@Z @ 0x1801D82D4 (-CensorAppIdBuffer@AppIdCensorUtility@LoggingUtil@@SAJPEBGPEAPEAG@Z.c)
 *     ?Provider@TaskbarLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18020E6F0 (-Provider@TaskbarLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1804C2A04 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TaskbarPinningTelemetry::PinningActivity::PinnedListPlaceholderProcessed(
        TaskbarPinningTelemetry::PinningActivity *this,
        const unsigned __int16 *a2,
        char a3)
{
  const struct _tlgProvider_t *v5; // rax
  int v6; // r9d
  __int64 v7; // [rsp+40h] [rbp-38h] BYREF
  __int64 v8; // [rsp+48h] [rbp-30h] BYREF
  __int64 v9; // [rsp+50h] [rbp-28h] BYREF
  unsigned __int16 *v10; // [rsp+58h] [rbp-20h] BYREF

  v10 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&v10,
    0LL);
  LoggingUtil::AppIdCensorUtility::CensorAppIdBuffer(a2, &v10);
  v5 = TaskbarLogging::Provider();
  if ( *(_DWORD *)v5 > 5u && tlgKeywordOn((__int64)v5, 0x400000000000LL) )
  {
    v8 = 0x2000000LL;
    LOBYTE(v7) = a3;
    v9 = (__int64)v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
      v6,
      (int)&dword_1805A4D9F,
      (__int64)&v9,
      (__int64)&v7,
      (__int64)&v8);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v10);
}
