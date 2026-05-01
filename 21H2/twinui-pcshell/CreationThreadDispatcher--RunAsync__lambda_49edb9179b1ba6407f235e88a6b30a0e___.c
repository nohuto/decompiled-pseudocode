/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_49edb9179b1ba6407f235e88a6b30a0e___ @ 0x1803DE01C
 * Callers:
 *     ?SetWindowPosition@AccessibilityExperienceManager@@UEAAXIIII@Z @ 0x1803E07A0 (-SetWindowPosition@AccessibilityExperienceManager@@UEAAXIIII@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801AA8CC (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedE.c)
 *     ?InternalAddRef@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ @ 0x180258040 (-InternalAddRef@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180258060 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e5ec5a2f5be6774a4b968c7ab4405170___::CTaskWrapper__lambda_e5ec5a2f5be6774a4b968c7ab4405170_____lambda_e5ec5a2f5be6774a4b968c7ab4405170___ @ 0x1803DD67C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e5ec5a2f5be6774a4b968c7ab4405170___--CTaskW.c)
 */

__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_49edb9179b1ba6407f235e88a6b30a0e___(
        __int64 a1,
        volatile int *a2)
{
  volatile int *v2; // r11
  __int64 v3; // r10
  __int128 v4; // xmm0
  __int64 v5; // xmm1_8
  void *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]
  __int64 v12[2]; // [rsp+48h] [rbp-10h] BYREF
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = a1;
  v2 = a2;
  v3 = a1;
  if ( a1 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *>,Microsoft::WRL::FtmBase>::InternalAddRef(
      a1,
      a2);
  v4 = *(_OWORD *)v2;
  v12[0] = v3;
  v5 = *((_QWORD *)v2 + 2);
  v10 = v4;
  v11 = v5;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(v12, a2);
  v6 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e5ec5a2f5be6774a4b968c7ab4405170___::CTaskWrapper__lambda_e5ec5a2f5be6774a4b968c7ab4405170_____lambda_e5ec5a2f5be6774a4b968c7ab4405170___(
           (__int64)v6,
           (__int64)&v10);
  v8 = SHTaskPoolQueueTask(3LL, 0LL, 0LL, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(v12);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v13);
  return v8;
}
