/*
 * XREFs of ?Clear@?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x140055AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAUIBuffer@Streams@Storage@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x140025964 (-RaiseEvent@-$VectorOptions@PEAUIBuffer@Streams@Storage@Windows@@$0A@$0A@$0A@@Internal@Collectio.c)
 *     ?_EraseAll@?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@AEAAXPEAPEAPEAUIBuffer@Streams@Storage@5@PEAI@Z @ 0x1400280CC (-_EraseAll@-$Vector@PEAUIBuffer@Streams@Storage@Windows@@U-$DefaultEqualityPredicate@PEAUIBuffer.c)
 *     ?_Free@?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@Internal@Collections@Foundation@Windows@@CAXPEAPEAUIAudioDeviceBrokerDevice@2Devices@Media@5@I@Z @ 0x14002813C (-_Free@-$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U-$DefaultEqualityPr.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x1400541DC (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x14005A4D0 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>::Clear(
        __int64 a1)
{
  bool v2; // r15
  __int64 *v3; // rbx
  unsigned int v4; // r14d
  int v5; // edi
  int v6; // ebx
  RTL_SRWLOCK *v7; // rcx
  int v9; // [rsp+70h] [rbp+38h] BYREF
  unsigned int v10; // [rsp+78h] [rbp+40h] BYREF
  __int64 *v11; // [rsp+80h] [rbp+48h] BYREF
  RTL_SRWLOCK *v12; // [rsp+88h] [rbp+50h] BYREF

  v2 = 0;
  v3 = 0LL;
  v11 = 0LL;
  v4 = 0;
  v10 = 0;
  XWinRT::SerializingLockPolicy::Write(&v12, a1 + 72, &v9);
  v5 = v9;
  if ( v9 >= 0 )
  {
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v9);
    v5 = 0;
    v6 = *(_DWORD *)(a1 + 40);
    Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>::_EraseAll(
      a1,
      &v11,
      &v10);
    v2 = v6 != 0;
    v3 = v11;
    v4 = v10;
  }
  if ( v12 )
  {
    v7 = v12 + 1;
    if ( LODWORD(v12->Ptr) == 1 )
      LODWORD(v7->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v7);
  }
  Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>>::_Free(
    v3,
    v4);
  if ( v5 >= 0 && v2 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Storage::Streams::IBuffer *,0,0,0>::RaiseEvent();
  return (unsigned int)v5;
}
