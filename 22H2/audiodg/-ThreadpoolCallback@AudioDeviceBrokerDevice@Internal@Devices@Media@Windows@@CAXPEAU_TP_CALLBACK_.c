/*
 * XREFs of ?ThreadpoolCallback@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1400279A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002194 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140010F80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x14001A664 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x14001A68C (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D6DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$InvokeDelegates@V_lambda_684246e06c70477e7c65fe35849694f0_@@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_684246e06c70477e7c65fe35849694f0_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x14001FB8C (--$InvokeDelegates@V_lambda_684246e06c70477e7c65fe35849694f0_@@U-$ITypedEventHandler@PEAVAudioDe.c)
 *     ??1?$com_ptr_t@VAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140020C8C (--1-$com_ptr_t@VAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@Uerr_returncod.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140043448 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@QEAA@PEAUIBuffer@Streams@Storage@4@@Z @ 0x140054534 (--0AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@QEAA@PEAUIBuffer@Streams@St.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x140054CB8 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::ThreadpoolCallback(
        PTP_CALLBACK_INSTANCE Instance,
        RTL_SRWLOCK *Context,
        PTP_WAIT Wait,
        TP_WAIT_RESULT WaitResult)
{
  HRESULT v6; // eax
  PVOID Ptr; // rcx
  struct Windows::Storage::Streams::IBuffer *v8; // rbx
  Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *v9; // rax
  RTL_SRWLOCK *v10; // rcx
  __int64 v11; // rbx
  int v12; // [rsp+20h] [rbp-60h]
  int v13; // [rsp+24h] [rbp-5Ch] BYREF
  struct Windows::Storage::Streams::IBuffer *v14; // [rsp+28h] [rbp-58h] BYREF
  RTL_SRWLOCK *v15; // [rsp+30h] [rbp-50h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-48h] BYREF
  RTL_SRWLOCK *v17; // [rsp+40h] [rbp-40h] BYREF
  __int128 v18; // [rsp+50h] [rbp-30h] BYREF
  RTL_SRWLOCK *v19; // [rsp+60h] [rbp-20h] BYREF
  __int128 v20; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v6 = CoInitializeEx(0LL, 0);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x10E9,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      (const char *)(unsigned int)v6,
      v12);
    __debugbreak();
  }
  if ( Context )
  {
    v13 = 0;
    while ( (*(int (__fastcall **)(PVOID, int *))(*(_QWORD *)Context[24].Ptr + 56LL))(Context[24].Ptr, &v13) >= 0 && v13 )
    {
      v17 = 0LL;
      Ptr = Context[24].Ptr;
      v14 = 0LL;
      (*(void (__fastcall **)(PVOID, _QWORD, struct Windows::Storage::Streams::IBuffer **))(*(_QWORD *)Ptr + 48LL))(
        Ptr,
        0LL,
        &v14);
      if ( v14 )
      {
        (*(void (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)Context[24].Ptr + 96LL))(Context[24].Ptr, 0LL);
        v8 = v14;
        v9 = (Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *)operator new(
                                                                                       0x48uLL,
                                                                                       (const struct std::nothrow_t *)&std::nothrow);
        v10 = 0LL;
        if ( v9 )
          v10 = (RTL_SRWLOCK *)Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::AudioDeviceBrokerChangedEventArgs(
                                 v9,
                                 v8);
        v17 = v10;
        if ( v10 )
        {
          v15 = v10;
          v19 = Context;
          *(_QWORD *)&v20 = &v19;
          *((_QWORD *)&v20 + 1) = &v15;
          *(_QWORD *)&v18 = 0LL;
          wil::srwlock::lock_exclusive(Context + 20, &SRWLock);
          Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v18, &Context[19]);
          if ( SRWLock )
          {
            ReleaseSRWLockExclusive(SRWLock);
            SRWLock = 0LL;
          }
          v11 = v18;
          if ( (_QWORD)v18 )
          {
            v18 = v20;
            Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_684246e06c70477e7c65fe35849694f0_,Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>(
              (_QWORD **)&v18,
              v11,
              (__int64)&Context[19]);
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v11);
          }
        }
      }
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v14);
      wil::com_ptr_t<Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs,wil::err_returncode_policy>::~com_ptr_t<Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs,wil::err_returncode_policy>(&v17);
    }
    wil::srwlock::lock_exclusive(Context + 27, &v15);
    if ( !LOBYTE(Context[28].Ptr) )
      SetThreadpoolWait(Wait, Context[23].Ptr, 0LL);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v15);
  }
  CoUninitialize();
}
