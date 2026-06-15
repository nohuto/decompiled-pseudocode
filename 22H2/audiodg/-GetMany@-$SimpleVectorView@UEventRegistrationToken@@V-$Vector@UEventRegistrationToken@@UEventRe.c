/*
 * XREFs of ?GetMany@?$SimpleVectorView@UEventRegistrationToken@@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UPodLifetimeTraits@XWinRT@@UIntVersionTag@8@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAUEventRegistrationToken@@PEAI@Z @ 0x140023420
 * Callers:
 *     <none>
 * Callees:
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_EventRegistrationToken_Windows::Media::Devices::Internal::EventRegistrationTokenEqual_XWinRT::PodLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_EventRegistrationToken____XWinRT::IntVersionTag_::Do__lambda_79247182bc0b881ffa6095ac59af2c07___lambda_677c1c58563eaa19a31fa5f7b1b4e51a___ @ 0x14001F7AC (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_14001F7AC.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<EventRegistrationToken,Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>,XWinRT::PodLifetimeTraits,XWinRT::IntVersionTag,0>::GetMany(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5)
{
  __int64 v5; // rdx
  __int64 v6; // rdx
  _QWORD *v8[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v9[6]; // [rsp+30h] [rbp-30h] BYREF
  int v10; // [rsp+78h] [rbp+18h] BYREF
  unsigned int v11; // [rsp+80h] [rbp+20h] BYREF
  __int64 v12; // [rsp+88h] [rbp+28h] BYREF

  v12 = a4;
  v11 = a3;
  v10 = a2;
  v5 = 0LL;
  if ( a3 )
  {
    while ( 1 )
    {
      *(_QWORD *)(a4 + 8 * v5) = 0LL;
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= v11 )
        break;
      a4 = v12;
    }
  }
  v9[0] = a1;
  *a5 = 0;
  v6 = *(_QWORD *)(a1 + 40);
  v8[0] = &a5;
  v8[1] = &v12;
  v9[1] = &v10;
  v9[2] = &v11;
  v9[3] = &v12;
  v9[4] = &a5;
  return XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_EventRegistrationToken_Windows::Media::Devices::Internal::EventRegistrationTokenEqual_XWinRT::PodLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_EventRegistrationToken____XWinRT::IntVersionTag_::Do__lambda_79247182bc0b881ffa6095ac59af2c07___lambda_677c1c58563eaa19a31fa5f7b1b4e51a___(
           (unsigned int *)(a1 + 48),
           v6,
           (__int64)v9,
           v8);
}
