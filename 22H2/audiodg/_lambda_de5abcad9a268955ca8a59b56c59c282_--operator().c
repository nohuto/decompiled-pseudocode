/*
 * XREFs of _lambda_de5abcad9a268955ca8a59b56c59c282_::operator() @ 0x140021368
 * Callers:
 *     XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_7183e9ae03d95d0d634d64af3f4c35bb___lambda_cdc67ce79880dc59329b171674cbd71c___ @ 0x14001EF38 (XWinRT--detail--AtomicUpdates--AtomicUpdate__lambda_7183e9ae03d95d0d634d64af3f4c35bb___lambda_cd.c)
 *     XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_de5abcad9a268955ca8a59b56c59c282___lambda_2994aaaa7734e700a95c78f8012e8556___ @ 0x14001EFA4 (XWinRT--detail--AtomicUpdates--AtomicUpdate__lambda_de5abcad9a268955ca8a59b56c59c282___lambda_29.c)
 *     _lambda_4718a3093fe00335c339b2b2fb133f28_::operator() @ 0x140021300 (_lambda_4718a3093fe00335c339b2b2fb133f28_--operator().c)
 *     _lambda_7d6f68d31115486fe66f015c3efdf151_::operator() @ 0x1400213DC (_lambda_7d6f68d31115486fe66f015c3efdf151_--operator().c)
 *     ?GetMany@?$SimpleVectorIterator@PEAVAudioDeviceModule@Devices@Media@Windows@@V?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIAudioDeviceModule@Devices@Media@5@PEAI@Z @ 0x140056F90 (-GetMany@-$SimpleVectorIterator@PEAVAudioDeviceModule@Devices@Media@Windows@@V-$Vector@PEAVAudio.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_de5abcad9a268955ca8a59b56c59c282_::operator()(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v5; // edi
  __int64 result; // rax

  v5 = a2;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(**(_QWORD **)a1 + 32LL)
                                                                              + 128LL))(
             *(_QWORD *)(**(_QWORD **)a1 + 32LL),
             a2,
             **(unsigned int **)(a1 + 8),
             **(_QWORD **)(a1 + 16),
             **(_QWORD **)(a1 + 24));
  if ( (int)result >= 0 )
    *a3 = v5 + ***(_DWORD ***)(a1 + 24);
  return result;
}
