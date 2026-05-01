/*
 * XREFs of _anonymous_namespace_::RunSynchronousInSTA__lambda_5284c52766b4bd9adb216c46a73dea2b___ @ 0x180132830
 * Callers:
 *     ??$ApplyTaskbarLayout@$$VP8CPinnedList@@EAAJXZ@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAAJW4ApiType@PinManagerTipTests@@P8CPinnedList@@EAAJXZ@Z @ 0x180129F38 (--$ApplyTaskbarLayout@$$VP8CPinnedList@@EAAJXZ@PinManager@implementation@Shell@Internal@Windows@.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_f1acb3e88a7ee276e5be409f1eb050f8___ @ 0x1801324D4 (Windows--Internal--ComTaskPool--QueueTask__lambda_f1acb3e88a7ee276e5be409f1eb050f8___.c)
 *     ??R_lambda_5284c52766b4bd9adb216c46a73dea2b_@@QEBAXXZ @ 0x180136BB0 (--R_lambda_5284c52766b4bd9adb216c46a73dea2b_@@QEBAXXZ.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x18035CBA4 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18035ED68 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall anonymous_namespace_::RunSynchronousInSTA__lambda_5284c52766b4bd9adb216c46a73dea2b___(__int128 *a1)
{
  HRESULT ApartmentType; // eax
  wil::details::in1diag3 *v3; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rax
  __int128 *v10; // [rsp+20h] [rbp-40h] BYREF
  __int128 v11; // [rsp+28h] [rbp-38h]
  APTTYPE pAptType; // [rsp+38h] [rbp-28h] BYREF
  __int128 v13; // [rsp+40h] [rbp-20h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
  v3 = retaddr;
  if ( ApartmentType < 0 )
    goto LABEL_9;
  if ( pAptType && pAptType != APTTYPE_MAINSTA )
  {
    v13 = 0LL;
    __ExceptionPtrCreate(&v13);
    v10 = &v13;
    v11 = *a1;
    CurrentThreadId = GetCurrentThreadId();
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_f1acb3e88a7ee276e5be409f1eb050f8___(
           v6,
           v5,
           CurrentThreadId,
           (__int64)&v10);
    v8 = retaddr;
    if ( v7 < 0 )
      goto LABEL_10;
    if ( !__ExceptionPtrToBool(&v13) )
    {
      __ExceptionPtrDestroy(&v13);
      return;
    }
    v9 = std::exception_ptr::exception_ptr((std::exception_ptr *)&v10, (const struct std::exception_ptr *)&v13);
    ApartmentType = std::rethrow_exception(v9);
LABEL_9:
    wil::details::in1diag3::Throw_Hr(
      v3,
      85LL,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
      (const char *)(unsigned int)ApartmentType);
LABEL_10:
    wil::details::in1diag3::Throw_Hr(
      v8,
      105LL,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  _lambda_5284c52766b4bd9adb216c46a73dea2b_::operator()(a1);
}
