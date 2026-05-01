/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_beeaa99da247ec9f188a411312d86a25___ @ 0x180391938
 * Callers:
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlSnapAssistViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180391F2C (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlSnapAssistViewController@@UE$AAAXPE$AAU.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801AA71C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedE.c)
 *     ?InternalAddRef@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ @ 0x180257E90 (-InternalAddRef@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180257EB0 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_059f0bb852b04a019df9882956e1093b___::CTaskWrapper__lambda_059f0bb852b04a019df9882956e1093b_____lambda_059f0bb852b04a019df9882956e1093b___ @ 0x18039184C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_059f0bb852b04a019df9882956e1093b___--CTaskW.c)
 *     _lambda_beeaa99da247ec9f188a411312d86a25_::_lambda_beeaa99da247ec9f188a411312d86a25_ @ 0x180391B10 (_lambda_beeaa99da247ec9f188a411312d86a25_--_lambda_beeaa99da247ec9f188a411312d86a25_.c)
 *     _lambda_beeaa99da247ec9f188a411312d86a25_::__lambda_beeaa99da247ec9f188a411312d86a25_ @ 0x180391D30 (_lambda_beeaa99da247ec9f188a411312d86a25_--__lambda_beeaa99da247ec9f188a411312d86a25_.c)
 */

__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_beeaa99da247ec9f188a411312d86a25___(
        __int64 a1,
        volatile int *a2)
{
  volatile int *v4; // rdx
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  unsigned int v7; // esi
  _BYTE v9[24]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10[2]; // [rsp+48h] [rbp-10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF

  v11 = a1;
  if ( a1 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *>,Microsoft::WRL::FtmBase>::InternalAddRef(
      a1,
      a2);
  lambda_beeaa99da247ec9f188a411312d86a25_::_lambda_beeaa99da247ec9f188a411312d86a25_(v9, a2);
  v10[0] = a1;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(v10, v4);
  v5 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = 0LL;
  if ( v5 )
    v6 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_059f0bb852b04a019df9882956e1093b___::CTaskWrapper__lambda_059f0bb852b04a019df9882956e1093b_____lambda_059f0bb852b04a019df9882956e1093b___(
           v5,
           (__int64)v9);
  v7 = SHTaskPoolQueueTask(3LL, 0LL, 0LL, 0LL, v6, 0LL);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(v10);
  lambda_beeaa99da247ec9f188a411312d86a25_::__lambda_beeaa99da247ec9f188a411312d86a25_(v9);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v11);
  lambda_beeaa99da247ec9f188a411312d86a25_::__lambda_beeaa99da247ec9f188a411312d86a25_(a2);
  return v7;
}
