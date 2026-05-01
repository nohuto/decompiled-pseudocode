/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_b572b7b401bca0583e7d35bf745a8e03___ @ 0x1803931FC
 * Callers:
 *     ?DismissView@XamlBaseViewController@@IE$AAAXXZ @ 0x180395A14 (-DismissView@XamlBaseViewController@@IE$AAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801AA8CC (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedE.c)
 *     ?InternalAddRef@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ @ 0x180258040 (-InternalAddRef@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180258060 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _lambda_b572b7b401bca0583e7d35bf745a8e03_::_lambda_b572b7b401bca0583e7d35bf745a8e03_ @ 0x180369DB8 (_lambda_b572b7b401bca0583e7d35bf745a8e03_--_lambda_b572b7b401bca0583e7d35bf745a8e03_.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_986ce24b7bdadb191c95143f5dacb41c___::CTaskWrapper__lambda_986ce24b7bdadb191c95143f5dacb41c_____lambda_986ce24b7bdadb191c95143f5dacb41c___ @ 0x180392B2C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_986ce24b7bdadb191c95143f5dacb41c___--CTaskW.c)
 */

__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_b572b7b401bca0583e7d35bf745a8e03___(
        __int64 a1,
        volatile int *a2)
{
  volatile int *v4; // rdx
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  unsigned int v7; // esi
  __int64 v8; // rcx
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+38h] [rbp-20h]
  __int64 v12[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = a1;
  if ( a1 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *>,Microsoft::WRL::FtmBase>::InternalAddRef(
      a1,
      a2);
  lambda_b572b7b401bca0583e7d35bf745a8e03_::_lambda_b572b7b401bca0583e7d35bf745a8e03_(&v10, (__int64 *)a2);
  v12[0] = a1;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(v12, v4);
  v5 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = 0LL;
  if ( v5 )
    v6 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_986ce24b7bdadb191c95143f5dacb41c___::CTaskWrapper__lambda_986ce24b7bdadb191c95143f5dacb41c_____lambda_986ce24b7bdadb191c95143f5dacb41c___(
           v5,
           &v10);
  v7 = SHTaskPoolQueueTask(3LL, 0LL, 0LL, 0LL, v6, 0LL);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(v12);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v13);
  v8 = *((_QWORD *)a2 + 1);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( *(_QWORD *)a2 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 16LL))(*(_QWORD *)a2);
  return v7;
}
