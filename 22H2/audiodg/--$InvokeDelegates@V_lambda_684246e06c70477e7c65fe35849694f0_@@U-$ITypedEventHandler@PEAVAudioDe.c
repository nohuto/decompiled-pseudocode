/*
 * XREFs of ??$InvokeDelegates@V_lambda_684246e06c70477e7c65fe35849694f0_@@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_684246e06c70477e7c65fe35849694f0_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x14001FB8C
 * Callers:
 *     ?ThreadpoolCallback@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1400279A0 (-ThreadpoolCallback@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@CAXPEAU_TP_CALLBACK_.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140010F80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140012E5C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1400264DC (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@W.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x140054CFC (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 */

__int64 __fastcall Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_684246e06c70477e7c65fe35849694f0_,Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>(
        _QWORD **a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v5; // esi
  unsigned int v6; // edi
  __int64 v7; // rbx
  _QWORD *v8; // r15
  _QWORD *i; // r14
  unsigned int v10; // eax
  int MatchingRestrictedErrorInfo; // ebx
  _QWORD v13[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  v5 = 0;
  v6 = 0;
  v13[0] = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(v13);
  v7 = v13[0];
  v8 = *(_QWORD **)(v13[0] + 32LL);
  for ( i = *(_QWORD **)(v13[0] + 16LL); i != *(_QWORD **)(v7 + 24); ++i )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*i + 24LL))(*i, **a1, *a1[1]);
    v6 = v10;
    if ( v10 == -2147417848 || v10 == -2147023174 || v10 == -1996357631 || v10 == -2147418105 || v10 == -2147418094 )
    {
      RoTransformError(v10, 0LL, 0LL);
      Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        a3,
        *i);
      v6 = 0;
    }
    if ( (v6 & 0x80000000) != 0 )
    {
      if ( (unsigned int)IsErrorPropagationEnabled() )
      {
        v13[1] = *v8;
        v14 = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
        MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo(v6, &v14);
        if ( MatchingRestrictedErrorInfo >= 0 )
          MatchingRestrictedErrorInfo = RoReportFailedDelegate(*i, v14);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
        if ( MatchingRestrictedErrorInfo < 0 )
          v5 = v6;
        v6 = v5;
        v7 = v13[0];
        break;
      }
      RoTransformError(v6, 0LL, 0LL);
      v6 = 0;
    }
    ++v8;
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v7);
  return v6;
}
