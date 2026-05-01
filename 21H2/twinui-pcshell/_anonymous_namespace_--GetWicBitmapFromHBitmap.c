/*
 * XREFs of _anonymous_namespace_::GetWicBitmapFromHBitmap @ 0x180149CDC
 * Callers:
 *     _anonymous_namespace_::GetLogoFileFromContent @ 0x18014978C (_anonymous_namespace_--GetLogoFileFromContent.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800869A0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x18013DC5C (-Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall anonymous_namespace_::GetWicBitmapFromHBitmap(_QWORD *a1, __int64 a2)
{
  HRESULT Instance; // eax
  wil::details::in1diag3 *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // rcx
  int v11[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v12; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v12 = 0LL;
  Instance = CoCreateInstance(
               &CLSID_WICImagingFactory2,
               0LL,
               1u,
               &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70,
               (LPVOID *)&v12);
  v5 = retaddr;
  if ( Instance < 0 )
  {
LABEL_7:
    wil::details::in1diag3::Throw_Hr(
      v5,
      98LL,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)Instance);
    __debugbreak();
  }
  *(_QWORD *)v11 = 0LL;
  v6 = *v12;
  *(_QWORD *)v11 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD, int *))(v6 + 168))(v12, a2, 0LL, 0LL, v11);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      101LL,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_7;
  }
  v8 = PinManagerTelemetry::Provider((__int64)retaddr);
  if ( *(_DWORD *)v8 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v8,
      byte_1805A1E84,
      0LL);
  v9 = *(_QWORD *)v11;
  *(_QWORD *)v11 = 0LL;
  *a1 = v9;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v11);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v12);
  return a1;
}
