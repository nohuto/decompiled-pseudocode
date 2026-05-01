/*
 * XREFs of ?RequestPinItemAsync@?$produce@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIPinManager@3456@@impl@winrt@@UEAAHPEAX00PEAPEAX@Z @ 0x18013F920
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x18008171C (--0-$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A12EC (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800F4434 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?RequestPinItemAsync@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@Uhstring@6@0USecondaryTile@StartScreen@UI@56@@Z @ 0x18013FA44 (-RequestPinItemAsync@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA-AU-$IAsyncOper.c)
 */

// Hidden C++ exception states: #wind=2
__int64 winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::PinManager,winrt::Windows::Internal::Shell::IPinManager>::RequestPinItemAsync(
        __int64 a1,
        winrt::impl *a2,
        winrt::impl *a3,
        ...)
{
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  winrt::hstring *v5; // rsi
  winrt::hstring *v6; // rax
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v11[8]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v12[8]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v13[3]; // [rsp+48h] [rbp-50h] BYREF
  winrt::impl *v14; // [rsp+60h] [rbp-38h] BYREF
  winrt::impl *v15; // [rsp+68h] [rbp-30h] BYREF
  __int64 v16; // [rsp+B8h] [rbp+20h] BYREF
  va_list va; // [rsp+B8h] [rbp+20h]
  _QWORD *v18; // [rsp+C0h] [rbp+28h]
  va_list va1; // [rsp+C8h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v16 = va_arg(va1, _QWORD);
  v18 = va_arg(va1, _QWORD *);
  v15 = a2;
  v14 = a3;
  v3 = v18;
  *v18 = 0LL;
  v4 = (a1 - 8) & -(__int64)(a1 != 0);
  v13[1] = (__int64)&v10;
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>::AsyncOperationCompletedHandler<bool>(
    &v10,
    (__int64 *)va);
  try
  {
    v13[2] = (__int64)v11;
    v5 = winrt::hstring::hstring((winrt::hstring *)v11, &v14);
    v6 = winrt::hstring::hstring((winrt::hstring *)v12, &v15);
    v7 = (__int64 *)winrt::Windows::Internal::Shell::implementation::PinManager::RequestPinItemAsync(
                      v4,
                      v13,
                      v6,
                      v5,
                      &v10);
    v8 = *v7;
    *v7 = 0LL;
    *v3 = v8;
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(v13);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v10);
  }
  return result;
}
