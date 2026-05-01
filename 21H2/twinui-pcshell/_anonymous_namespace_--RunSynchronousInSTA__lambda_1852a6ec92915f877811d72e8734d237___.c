/*
 * XREFs of _anonymous_namespace_::RunSynchronousInSTA__lambda_1852a6ec92915f877811d72e8734d237___ @ 0x1801326F8
 * Callers:
 *     ??$ApplyTaskbarLayout@W4TaskbarLayoutType@@P8CPinnedList@@EAAJW41@@Z@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAAJW4ApiType@PinManagerTipTests@@P8CPinnedList@@EAAJW4TaskbarLayoutType@@@Z1@Z @ 0x18012A1D0 (--$ApplyTaskbarLayout@W4TaskbarLayoutType@@P8CPinnedList@@EAAJW41@@Z@PinManager@implementation@S.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_6e497bc91bd1b514200f3fa30e5ef36f___ @ 0x180132420 (Windows--Internal--ComTaskPool--QueueTask__lambda_6e497bc91bd1b514200f3fa30e5ef36f___.c)
 *     ??R_lambda_1852a6ec92915f877811d72e8734d237_@@QEBAXXZ @ 0x1801367F4 (--R_lambda_1852a6ec92915f877811d72e8734d237_@@QEBAXXZ.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x18035CBA4 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18035ED68 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall anonymous_namespace_::RunSynchronousInSTA__lambda_1852a6ec92915f877811d72e8734d237___(__int128 *a1)
{
  HRESULT ApartmentType; // eax
  wil::details::in1diag3 *v3; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rax
  __int128 *v10; // [rsp+20h] [rbp-50h] BYREF
  __int128 v11; // [rsp+28h] [rbp-48h]
  __int64 v12; // [rsp+38h] [rbp-38h]
  APTTYPE pAptType; // [rsp+40h] [rbp-30h] BYREF
  __int128 v14; // [rsp+48h] [rbp-28h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
  v3 = retaddr;
  if ( ApartmentType < 0 )
    goto LABEL_9;
  if ( pAptType && pAptType != APTTYPE_MAINSTA )
  {
    v14 = 0LL;
    __ExceptionPtrCreate(&v14);
    v10 = &v14;
    v11 = *a1;
    v12 = *((_QWORD *)a1 + 2);
    CurrentThreadId = GetCurrentThreadId();
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_6e497bc91bd1b514200f3fa30e5ef36f___(
           v6,
           v5,
           CurrentThreadId,
           &v10);
    v8 = retaddr;
    if ( v7 < 0 )
      goto LABEL_10;
    if ( !__ExceptionPtrToBool(&v14) )
    {
      __ExceptionPtrDestroy(&v14);
      return;
    }
    v9 = std::exception_ptr::exception_ptr((std::exception_ptr *)&v10, (const struct std::exception_ptr *)&v14);
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
  _lambda_1852a6ec92915f877811d72e8734d237_::operator()(a1);
}
