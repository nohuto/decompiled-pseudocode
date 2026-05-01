/*
 * XREFs of ?UnregisterForEvents@XamlAltTabViewController@@QE$AAAXXZ @ 0x180390B68
 * Callers:
 *     _lambda_796fecced70d9b3590d5bb3fa9fcc2e4_::operator() @ 0x18037FC6C (_lambda_796fecced70d9b3590d5bb3fa9fcc2e4_--operator().c)
 *     ?v_DismissView@XamlAltTabViewHost@@MEAAXXZ @ 0x180383550 (-v_DismissView@XamlAltTabViewHost@@MEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x18035B3DC (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18035BE6C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatcherPriority@234@PE$AAVDispatchedHandler@234@@Z @ 0x18036416C (-RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatche.c)
 *     ?get@Dispatcher@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@Core@45@XZ @ 0x18037DFBC (-get@Dispatcher@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@Core@45@XZ.c)
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_d1cd94c5db2d714c4aabf0680fb425d1___ @ 0x18038DE3C (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_d1cd94c5db2d714c4aabf0680fb425d1.c)
 *     _lambda_d1cd94c5db2d714c4aabf0680fb425d1_::_lambda_d1cd94c5db2d714c4aabf0680fb425d1_ @ 0x18038EA3C (_lambda_d1cd94c5db2d714c4aabf0680fb425d1_--_lambda_d1cd94c5db2d714c4aabf0680fb425d1_.c)
 *     _lambda_d1cd94c5db2d714c4aabf0680fb425d1_::_lambda_d1cd94c5db2d714c4aabf0680fb425d1__0 @ 0x18038EADC (_lambda_d1cd94c5db2d714c4aabf0680fb425d1_--_lambda_d1cd94c5db2d714c4aabf0680fb425d1__0.c)
 *     ??1AltTabWindowHook@@QEAA@XZ @ 0x18038F2F0 (--1AltTabWindowHook@@QEAA@XZ.c)
 *     _lambda_d1cd94c5db2d714c4aabf0680fb425d1_::operator() @ 0x18038F508 (_lambda_d1cd94c5db2d714c4aabf0680fb425d1_--operator().c)
 *     ?IsUIThread@@YA_NXZ @ 0x180390044 (-IsUIThread@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall XamlAltTabViewController::UnregisterForEvents(__int64 a1)
{
  RTL_SRWLOCK *v2; // rsi
  __int64 v3; // rsi
  std::_Ref_count_base **v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  void **v9; // r9
  __int64 v10; // r15
  _QWORD *v11; // rbx
  __int64 *v12; // rax
  _QWORD *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // [rsp+50h] [rbp-79h] BYREF
  __int64 v17; // [rsp+58h] [rbp-71h] BYREF
  __int64 v18; // [rsp+60h] [rbp-69h] BYREF
  __int64 v19; // [rsp+68h] [rbp-61h] BYREF
  __int64 v20; // [rsp+70h] [rbp-59h] BYREF
  __int64 v21; // [rsp+78h] [rbp-51h]
  __int64 v22[14]; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v23; // [rsp+130h] [rbp+67h] BYREF
  __int64 v24; // [rsp+138h] [rbp+6Fh] BYREF
  _QWORD *v25; // [rsp+140h] [rbp+77h] BYREF
  __int64 v26; // [rsp+148h] [rbp+7Fh] BYREF

  v23 = 0LL;
  v2 = (RTL_SRWLOCK *)(a1 + 224);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 224));
  v24 = (__int64)v2;
  __abi_winrt_ptr_assign(&v23, *(_QWORD *)(a1 + 232));
  __abi_winrt_ptr_assign((__int64 *)(a1 + 232), 0LL);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  v3 = v23;
  if ( v23 )
  {
    v4 = *(std::_Ref_count_base ***)(a1 + 248);
    *(_QWORD *)(a1 + 248) = 0LL;
    if ( v4 )
    {
      AltTabWindowHook::~AltTabWindowHook(v4);
      operator delete(v4, (const struct std::nothrow_t *)0x10);
    }
    v5 = __abi_winrt_ptr_ctor(*(_QWORD *)(a1 + 240));
    v19 = v5;
    v18 = *(_QWORD *)(a1 + 168);
    v17 = *(_QWORD *)(a1 + 176);
    v16 = *(_QWORD *)(a1 + 184);
    v26 = *(_QWORD *)(a1 + 192);
    v25 = *(_QWORD **)(a1 + 208);
    v24 = *(_QWORD *)(a1 + 216);
    lambda_d1cd94c5db2d714c4aabf0680fb425d1_::_lambda_d1cd94c5db2d714c4aabf0680fb425d1_(
      &v20,
      &v23,
      &v19,
      &v18,
      &v17,
      &v16,
      &v26,
      (__int64 *)&v25,
      &v24);
    if ( IsUIThread(v7, v6, v8, v9) )
    {
      lambda_d1cd94c5db2d714c4aabf0680fb425d1_::operator()(&v20);
    }
    else
    {
      v10 = Windows::UI::Xaml::IWindow::Dispatcher::get(v3);
      v24 = v10;
      v11 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
      v25 = v11;
      v12 = lambda_d1cd94c5db2d714c4aabf0680fb425d1_::_lambda_d1cd94c5db2d714c4aabf0680fb425d1__0(v22, &v20);
      v13 = Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_d1cd94c5db2d714c4aabf0680fb425d1___(
              v11,
              v12);
      v25 = v13;
      v14 = Windows::UI::Core::ICoreDispatcher::RunAsync(v10, 0LL, (__int64)v13);
      v15 = v14;
      v26 = v14;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      if ( v13 )
        (*(void (__fastcall **)(_QWORD *, __int64))(*v13 + 16LL))(v13, v15);
      if ( v10 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 16LL))(v10, v15);
    }
    *(_QWORD *)(a1 + 168) = 0LL;
    *(_QWORD *)(a1 + 176) = 0LL;
    *(_QWORD *)(a1 + 184) = 0LL;
    *(_QWORD *)(a1 + 192) = 0LL;
    *(_QWORD *)(a1 + 208) = 0LL;
    *(_QWORD *)(a1 + 216) = 0LL;
    __abi_winrt_ptr_assign((__int64 *)(a1 + 240), 0LL);
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
}
