/*
 * XREFs of ?Stop@CKstBase@@QEAAXXZ @ 0x1802824E0
 * Callers:
 *     ??1CGlobalInputManager@@UEAA@XZ @ 0x18027FCCC (--1CGlobalInputManager@@UEAA@XZ.c)
 *     ??1CKstBase@@QEAA@XZ @ 0x180282484 (--1CKstBase@@QEAA@XZ.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180032950 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800BADC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800C84A4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800CE01C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

void __fastcall CKstBase::Stop(CKstBase *this)
{
  void *v2; // rdx
  _DWORD *v3; // rcx
  __int64 v4; // rcx
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF

  v3 = (_DWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                   (__int64)this,
                   (void (__cdecl *)())_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)[1];
  if ( *v3 > 4u && tlgKeywordOn((__int64)v3, 2LL) )
    tlgWriteTransfer_EventWriteTransfer(v4, (unsigned __int8 *)dword_18037F5F1, 0LL, 0LL, (ULONG)v2, &v5);
  if ( (unsigned __int64)(*((_QWORD *)this + 2) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    wil::details::SetEvent(*((wil::details **)this + 4), v2);
    WaitForSingleObject(*((HANDLE *)this + 2), 0xFFFFFFFF);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)this + 2,
      0LL);
  }
}
