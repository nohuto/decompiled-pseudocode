/*
 * XREFs of XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_EventRegistrationToken_Windows::Media::Devices::Internal::EventRegistrationTokenEqual_XWinRT::PodLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_EventRegistrationToken____XWinRT::IntVersionTag_::Do__lambda_a1abafb90744ae9b01c4cbc40f730f27___lambda_db410fc95b55691920d4e5837927db01___ @ 0x14001F960
 * Callers:
 *     ?get_Current@?$SimpleVectorIterator@UEventRegistrationToken@@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UPodLifetimeTraits@XWinRT@@UIntVersionTag@8@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAUEventRegistrationToken@@@Z @ 0x140028340 (-get_Current@-$SimpleVectorIterator@UEventRegistrationToken@@V-$Vector@UEventRegistrationToken@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_EventRegistrationToken_Windows::Media::Devices::Internal::EventRegistrationTokenEqual_XWinRT::PodLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_EventRegistrationToken____XWinRT::IntVersionTag_::Do__lambda_a1abafb90744ae9b01c4cbc40f730f27___lambda_db410fc95b55691920d4e5837927db01___(
        unsigned int *a1,
        __int64 a2,
        _QWORD **a3,
        _QWORD ***a4)
{
  unsigned int v4; // ebx
  int v8; // eax

  v4 = *a1;
  if ( (*a1 & 0x80000000) == 0 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*a3)[4] + 48LL))(
           (*a3)[4],
           *((unsigned int *)*a3 + 10),
           *a3[1]);
    v4 = v8;
    if ( a1[1] != *(_DWORD *)(a2 + 88) )
    {
      *a1 = -2147483636;
      if ( v8 < 0 )
      {
        RoTransformError((unsigned int)v8, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        ***a4 = 0LL;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError(v4, 0LL);
  }
  return v4;
}
