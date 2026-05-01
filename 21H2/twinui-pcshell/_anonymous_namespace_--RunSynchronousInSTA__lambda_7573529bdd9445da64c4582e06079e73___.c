/*
 * XREFs of _anonymous_namespace_::RunSynchronousInSTA__lambda_7573529bdd9445da64c4582e06079e73___ @ 0x18013295C
 * Callers:
 *     ??$ApplyTaskbarLayout@W4TaskbarLayoutType@@HP8CPinnedList@@EAAJW41@H@Z@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAAJW4ApiType@PinManagerTipTests@@P8CPinnedList@@EAAJW4TaskbarLayoutType@@H@Z1H@Z @ 0x18012A078 (--$ApplyTaskbarLayout@W4TaskbarLayoutType@@HP8CPinnedList@@EAAJW41@H@Z@PinManager@implementation.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_4847ee841f10e4ee6f598a9cb2b519bc___ @ 0x180132364 (Windows--Internal--ComTaskPool--QueueTask__lambda_4847ee841f10e4ee6f598a9cb2b519bc___.c)
 *     ??R_lambda_7573529bdd9445da64c4582e06079e73_@@QEBAXXZ @ 0x180136CC8 (--R_lambda_7573529bdd9445da64c4582e06079e73_@@QEBAXXZ.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x18035CBA4 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18035ED68 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall anonymous_namespace_::RunSynchronousInSTA__lambda_7573529bdd9445da64c4582e06079e73___(__int128 *a1)
{
  HRESULT ApartmentType; // eax
  wil::details::in1diag3 *v3; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rax
  _BYTE v10[16]; // [rsp+20h] [rbp-60h] BYREF
  __int128 *v11; // [rsp+30h] [rbp-50h] BYREF
  __int128 v12; // [rsp+38h] [rbp-48h]
  __int128 v13; // [rsp+48h] [rbp-38h]
  APTTYPE pAptType; // [rsp+58h] [rbp-28h] BYREF
  __int128 v15; // [rsp+60h] [rbp-20h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
  v3 = retaddr;
  if ( ApartmentType < 0 )
    goto LABEL_9;
  if ( pAptType && pAptType != APTTYPE_MAINSTA )
  {
    v15 = 0LL;
    __ExceptionPtrCreate(&v15);
    v11 = &v15;
    v12 = *a1;
    v13 = a1[1];
    CurrentThreadId = GetCurrentThreadId();
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_4847ee841f10e4ee6f598a9cb2b519bc___(
           v6,
           v5,
           CurrentThreadId,
           (__int64)&v11);
    v8 = retaddr;
    if ( v7 < 0 )
      goto LABEL_10;
    if ( !__ExceptionPtrToBool(&v15) )
    {
      __ExceptionPtrDestroy(&v15);
      return;
    }
    v9 = std::exception_ptr::exception_ptr((std::exception_ptr *)v10, (const struct std::exception_ptr *)&v15);
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
  _lambda_7573529bdd9445da64c4582e06079e73_::operator()(a1);
}
