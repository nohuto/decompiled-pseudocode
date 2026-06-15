/*
 * XREFs of _lambda_4718a3093fe00335c339b2b2fb133f28_::operator() @ 0x140021300
 * Callers:
 *     Windows::Foundation::Collections::Internal::SimpleVectorIterator_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice___Windows::Foundation::Collections::Internal::Vector_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice______Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice____XWinRT::IntVersionTag_0_::_DoWithInvalidationCheck__lambda_4718a3093fe00335c339b2b2fb133f28___lambda_2994aaaa7734e700a95c78f8012e8556___ @ 0x14001FF58 (Windows--Foundation--Collections--Internal--SimpleVectorIterator_Windows--Media--Devices--Intern.c)
 * Callees:
 *     XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_de5abcad9a268955ca8a59b56c59c282___lambda_2994aaaa7734e700a95c78f8012e8556___ @ 0x14001EFA4 (XWinRT--detail--AtomicUpdates--AtomicUpdate__lambda_de5abcad9a268955ca8a59b56c59c282___lambda_29.c)
 *     _lambda_de5abcad9a268955ca8a59b56c59c282_::operator() @ 0x140021368 (_lambda_de5abcad9a268955ca8a59b56c59c282_--operator().c)
 */

__int64 __fastcall lambda_4718a3093fe00335c339b2b2fb133f28_::operator()(__int64 *a1)
{
  __int64 v1; // r8
  __int64 v2; // rax
  volatile signed __int32 *v3; // rcx
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  v1 = *a1;
  v5[0] = &v6;
  v5[1] = a1[1];
  v5[2] = a1[2];
  v5[3] = a1[3];
  v2 = a1[4];
  v3 = (volatile signed __int32 *)(v1 + 40);
  v6 = v1;
  if ( *(_BYTE *)(v1 + 56) )
    return lambda_de5abcad9a268955ca8a59b56c59c282_::operator()(v5, *(unsigned int *)v3, v1 + 40);
  else
    return XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_de5abcad9a268955ca8a59b56c59c282___lambda_2994aaaa7734e700a95c78f8012e8556___(
             v3,
             (__int64)v5,
             v2);
}
