/*
 * XREFs of _lambda_8d958b4643e24e2ce219100e0108e65c_::operator() @ 0x180096FC4
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_8d958b4643e24e2ce219100e0108e65c___::operator() @ 0x180097270 (CDelayIAMOperations--CDelayedOperation__lambda_8d958b4643e24e2ce219100e0108e65c___--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_2e6c0e67d25ef7981bec7826e7d1a764___ @ 0x180096A04 (Windows--Internal--ComTaskPool--QueueTask__lambda_2e6c0e67d25ef7981bec7826e7d1a764___.c)
 *     _lambda_b97f6338922ac33e763b003ae07478e0_::__lambda_b97f6338922ac33e763b003ae07478e0_ @ 0x180096EB0 (_lambda_b97f6338922ac33e763b003ae07478e0_--__lambda_b97f6338922ac33e763b003ae07478e0_.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801BD998 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

void __fastcall lambda_8d958b4643e24e2ce219100e0108e65c_::operator()(__int64 *a1)
{
  __int64 v2; // rbx
  PSRWLOCK v3; // rdi
  int v4; // ebx
  unsigned int Ptr; // r8d
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *a1;
  v11 = *a1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v11);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  if ( CApplicationManagerUtility::g_pIAMGlobals[14].Ptr )
  {
    *(RTL_SRWLOCK *)v8 = CApplicationManagerUtility::g_pIAMGlobals[14];
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v8);
    Ptr = (unsigned int)v3[15].Ptr;
    v11 = 0LL;
    v9 = v2;
    v4 = Windows::Internal::ComTaskPool::QueueTask__lambda_2e6c0e67d25ef7981bec7826e7d1a764___(v7, v6, Ptr, v8);
    lambda_b97f6338922ac33e763b003ae07478e0_::__lambda_b97f6338922ac33e763b003ae07478e0_((__int64 *)v8);
  }
  else
  {
    v4 = -2147023728;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x12DE,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v4,
      v8[0]);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, (unsigned int)v4);
  }
}
