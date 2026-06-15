/*
 * XREFs of Windows::Foundation::Collections::Internal::SimpleVectorIterator_EventRegistrationToken_Windows::Foundation::Collections::Internal::Vector_EventRegistrationToken_Windows::Media::Devices::Internal::EventRegistrationTokenEqual_XWinRT::PodLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_EventRegistrationToken____XWinRT::PodLifetimeTraits_XWinRT::IntVersionTag_0_::_DoWithInvalidationCheck__lambda_7d6f68d31115486fe66f015c3efdf151___lambda_cdc67ce79880dc59329b171674cbd71c___ @ 0x14001FFFC
 * Callers:
 *     ?GetMany@?$SimpleVectorIterator@UEventRegistrationToken@@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UPodLifetimeTraits@XWinRT@@UIntVersionTag@8@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUEventRegistrationToken@@PEAI@Z @ 0x140023300 (-GetMany@-$SimpleVectorIterator@UEventRegistrationToken@@V-$Vector@UEventRegistrationToken@@UEve.c)
 * Callees:
 *     _lambda_7d6f68d31115486fe66f015c3efdf151_::operator() @ 0x1400213DC (_lambda_7d6f68d31115486fe66f015c3efdf151_--operator().c)
 *     _lambda_cdc67ce79880dc59329b171674cbd71c_::operator() @ 0x1400214CC (_lambda_cdc67ce79880dc59329b171674cbd71c_--operator().c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator_EventRegistrationToken_Windows::Foundation::Collections::Internal::Vector_EventRegistrationToken_Windows::Media::Devices::Internal::EventRegistrationTokenEqual_XWinRT::PodLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_EventRegistrationToken____XWinRT::PodLifetimeTraits_XWinRT::IntVersionTag_0_::_DoWithInvalidationCheck__lambda_7d6f68d31115486fe66f015c3efdf151___lambda_cdc67ce79880dc59329b171674cbd71c___(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v3; // ebx
  __int64 v5; // rbp
  int v7; // eax

  v3 = *(_DWORD *)(a1 + 48);
  v5 = *(_QWORD *)(a1 + 32);
  if ( v3 >= 0 )
  {
    v7 = lambda_7d6f68d31115486fe66f015c3efdf151_::operator()(a2);
    v3 = v7;
    if ( *(_DWORD *)(a1 + 52) != *(_DWORD *)(v5 + 88) )
    {
      *(_DWORD *)(a1 + 48) = -2147483636;
      if ( v7 < 0 )
      {
        RoTransformError((unsigned int)v7, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        lambda_cdc67ce79880dc59329b171674cbd71c_::operator()(a3);
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v3, 0LL);
  }
  return (unsigned int)v3;
}
