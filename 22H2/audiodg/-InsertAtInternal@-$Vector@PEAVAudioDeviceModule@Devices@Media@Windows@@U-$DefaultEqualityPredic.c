/*
 * XREFs of ?InsertAtInternal@?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUIAudioDeviceModule@Devices@Media@5@_N@Z @ 0x1400580A0
 * Callers:
 *     ?Append@?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIAudioDeviceModule@Devices@Media@5@@Z @ 0x140055600 (-Append@-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEAVAu.c)
 *     ?InsertAt@?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIAudioDeviceModule@Devices@Media@5@@Z @ 0x140058090 (-InsertAt@-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEAV.c)
 * Callees:
 *     ??$?0PEAUIBuffer@Streams@Storage@Windows@@@?$AutoValue@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@@XWinRT@@QEAA@AEBQEAUIBuffer@Streams@Storage@Windows@@PEAJ@Z @ 0x14001ED70 (--$-0PEAUIBuffer@Streams@Storage@Windows@@@-$AutoValue@PEAUIBuffer@Streams@Storage@Windows@@U-$D.c)
 *     ??$Destroy@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@Z @ 0x14001F220 (--$Destroy@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@InterfaceLifetimeTraits@XW.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIBuffer@Streams@Storage@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x140025964 (-RaiseEvent@-$VectorOptions@PEAUIBuffer@Streams@Storage@Windows@@$0A@$0A@$0A@@Internal@Collectio.c)
 *     ?ResizeStorage@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x140026C88 (-ResizeStorage@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@M.c)
 *     memmove_s @ 0x140041F14 (memmove_s.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x1400541DC (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x14005A4D0 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  int v7; // ebx
  unsigned int v8; // eax
  unsigned int v9; // r9d
  int v10; // edx
  unsigned int v11; // eax
  RTL_SRWLOCK *v12; // rcx
  char v14[4]; // [rsp+30h] [rbp-20h] BYREF
  int v15; // [rsp+34h] [rbp-1Ch] BYREF
  __int64 v16; // [rsp+38h] [rbp-18h] BYREF
  RTL_SRWLOCK *v17; // [rsp+40h] [rbp-10h] BYREF
  __int64 v18; // [rsp+80h] [rbp+30h] BYREF

  v18 = a3;
  v15 = 0;
  XWinRT::AutoValue<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>>::AutoValue<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>>(
    &v16,
    &v18,
    &v15);
  v7 = v15;
  if ( v15 >= 0 )
  {
    XWinRT::SerializingLockPolicy::Write(&v17, a1 + 72, &v15);
    v7 = v15;
    if ( v15 >= 0 )
    {
      v8 = *(_DWORD *)(a1 + 40);
      if ( a4 )
        a2 = *(_DWORD *)(a1 + 40);
      if ( a2 <= v8 )
      {
        if ( v8 >= 0x7FFFFFFF )
          v7 = -2147024882;
        if ( v7 >= 0 )
        {
          XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)v14);
          v7 = 0;
          v9 = *(_DWORD *)(a1 + 44);
          if ( *(_DWORD *)(a1 + 40) + 1 <= v9 )
            goto LABEL_14;
          v10 = 1;
          if ( v9 + 1 <= (v9 >> 1) + v9 )
            v10 = v9 >> 1;
          v7 = Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::ResizeStorage(
                 a1,
                 v9 + v10);
          if ( v7 >= 0 )
          {
LABEL_14:
            v11 = *(_DWORD *)(a1 + 40);
            if ( a2 < v11
              && memmove_s(
                   (void *const)(*(_QWORD *)(a1 + 56) + 8LL * (a2 + 1)),
                   8LL * (*(_DWORD *)(a1 + 44) - a2 - 1),
                   (const void *const)(*(_QWORD *)(a1 + 56) + 8LL * a2),
                   8LL * (v11 - a2)) )
            {
              v7 = -2147418113;
              RoOriginateError(2147549183LL, 0LL);
            }
            if ( v7 >= 0 )
            {
              *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * a2) = v16;
              v16 = 0LL;
              ++*(_DWORD *)(a1 + 40);
              ++*(_DWORD *)(a1 + 88);
            }
          }
        }
      }
      else
      {
        v7 = -2147483637;
        RoOriginateError(2147483659LL, 0LL);
      }
    }
    if ( v17 )
    {
      v12 = v17 + 1;
      if ( LODWORD(v17->Ptr) == 1 )
        LODWORD(v12->Ptr) += 0x10000000;
      else
        ReleaseSRWLockExclusive(v12);
    }
    if ( v7 >= 0 )
      v7 = Windows::Foundation::Collections::Internal::VectorOptions<Windows::Storage::Streams::IBuffer *,0,0,0>::RaiseEvent();
  }
  XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice>(&v16);
  return (unsigned int)v7;
}
