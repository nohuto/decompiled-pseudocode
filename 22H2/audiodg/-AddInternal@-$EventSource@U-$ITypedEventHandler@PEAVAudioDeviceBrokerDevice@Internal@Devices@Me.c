/*
 * XREFs of ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x140021B20
 * Callers:
 *     ?add_ModuleNotificationReceived@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x140028200 (-add_ModuleNotificationReceived@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJPEA.c)
 * Callees:
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x140010EF0 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140010F80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x14001A68C (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x140054C7C (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x14005556C (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2,
        void *a3,
        struct IUnknown **a4)
{
  _QWORD *Ptr; // rcx
  __int64 v9; // rcx
  int v10; // ebx
  _QWORD *v11; // rax
  void **v12; // rsi
  struct IUnknown **i; // rbx
  Microsoft::WRL::Details::EventTargetArray *v14; // rcx
  __int64 v16; // [rsp+20h] [rbp-10h] BYREF
  PSRWLOCK v17; // [rsp+28h] [rbp-8h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v18; // [rsp+60h] [rbp+30h] BYREF
  PSRWLOCK SRWLock; // [rsp+78h] [rbp+48h] BYREF

  *a4 = 0LL;
  v16 = 0LL;
  wil::srwlock::lock_exclusive(a1 + 2, &SRWLock);
  Ptr = a1->Ptr;
  v18 = 0LL;
  if ( Ptr )
    v9 = ((__int64)(Ptr[3] - Ptr[2]) >> 3) + 1;
  else
    v9 = 1LL;
  v17 = (PSRWLOCK)v9;
  v10 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
          &v18,
          (unsigned __int64 *)&v17);
  if ( v10 >= 0 )
  {
    v11 = a1->Ptr;
    if ( a1->Ptr )
    {
      v12 = (void **)v11[4];
      for ( i = (struct IUnknown **)v11[2]; i != (struct IUnknown **)v11[3]; ++i )
      {
        Microsoft::WRL::Details::EventTargetArray::AddTail(v18, *i, *v12);
        v11 = a1->Ptr;
        ++v12;
      }
    }
    v14 = v18;
    *a4 = a2;
    Microsoft::WRL::Details::EventTargetArray::AddTail(v14, a2, a3);
    wil::srwlock::lock_exclusive(a1 + 1, &v17);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v16, a1);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(a1, &v18);
    if ( v17 )
      ReleaseSRWLockExclusive(v17);
    if ( v18 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((__int64)v18);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    v10 = 0;
    if ( v16 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v16);
  }
  else
  {
    if ( v18 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((__int64)v18);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  return (unsigned int)v10;
}
