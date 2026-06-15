/*
 * XREFs of _lambda_a16af002d07ace4fe9b089da77d4d3b3_::operator() @ 0x1400212A8
 * Callers:
 *     Windows::Foundation::Collections::Internal::SimpleVectorIterator_EventRegistrationToken_Windows::Foundation::Collections::Internal::Vector_EventRegistrationToken_Windows::Media::Devices::Internal::EventRegistrationTokenEqual_XWinRT::PodLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_EventRegistrationToken____XWinRT::PodLifetimeTraits_XWinRT::IntVersionTag_0_::_DoWithInvalidationCheck__lambda_a16af002d07ace4fe9b089da77d4d3b3___lambda_e7f9a9833f543183a86b640d7a18f225___ @ 0x14001FEB4 (Windows--Foundation--Collections--Internal--SimpleVectorIterator_EventRegistrationToken_Windows-.c)
 * Callees:
 *     XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_ff31f237a5f513eedfcdc5d7eb333a7b___lambda_0cfc5fd44ccd4c79b3f4a5312d4a07b3___ @ 0x14001F010 (XWinRT--detail--AtomicUpdates--AtomicUpdate__lambda_ff31f237a5f513eedfcdc5d7eb333a7b___lambda_0c.c)
 *     _lambda_ff31f237a5f513eedfcdc5d7eb333a7b_::operator() @ 0x140021504 (_lambda_ff31f237a5f513eedfcdc5d7eb333a7b_--operator().c)
 */

__int64 __fastcall lambda_a16af002d07ace4fe9b089da77d4d3b3_::operator()(__int64 *a1)
{
  __int64 v1; // r8
  _BYTE ***v2; // rax
  volatile signed __int32 *v3; // rcx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = *a1;
  v5[0] = a1[1];
  v5[1] = &v6;
  v2 = (_BYTE ***)a1[2];
  v6 = v1;
  v3 = (volatile signed __int32 *)(v1 + 40);
  if ( *(_BYTE *)(v1 + 56) )
    return lambda_ff31f237a5f513eedfcdc5d7eb333a7b_::operator()(v5, *(unsigned int *)v3, v1 + 40);
  else
    return XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_ff31f237a5f513eedfcdc5d7eb333a7b___lambda_0cfc5fd44ccd4c79b3f4a5312d4a07b3___(
             v3,
             (__int64)v5,
             v2);
}
