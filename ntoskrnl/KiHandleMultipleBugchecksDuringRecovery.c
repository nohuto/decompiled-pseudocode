/*
 * XREFs of KiHandleMultipleBugchecksDuringRecovery @ 0x140578C10
 * Callers:
 *     KeBugCheck2 @ 0x140565E90 (KeBugCheck2.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalReturnToFirmware @ 0x140504990 (HalReturnToFirmware.c)
 *     KiRecordRecoveryFailure @ 0x140578E50 (KiRecordRecoveryFailure.c)
 *     KiSaveBugCheckRecoveryStatusMultipleBugChecks @ 0x140578E88 (KiSaveBugCheckRecoveryStatusMultipleBugChecks.c)
 */

__int64 __fastcall KiHandleMultipleBugchecksDuringRecovery(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int Number; // edx
  bool v5; // al
  __int64 v6; // rcx
  __int64 v7; // rdx

  result = (unsigned int)KiRecoveryCallbackCount;
  if ( KiRecoveryCallbackCount > 0 )
  {
    while ( 1 )
    {
      result = (unsigned int)KiBugcheckRecoveryActiveEvaluated;
      if ( KiBugcheckRecoveryActiveEvaluated )
        break;
      _mm_pause();
    }
    if ( KiBugcheckRecoveryActive )
    {
      Number = KeGetPcr()->Prcb.Number;
      v5 = a1 >> 4 == Number;
      LOBYTE(a3) = KiBugcheckRecoveryOwner == Number;
      v6 = a1 >> 2;
      LOBYTE(v6) = v6 & 3;
      v7 = (unsigned int)(v6 + 1);
      LOBYTE(v6) = v5;
      if ( (int)KiSaveBugCheckRecoveryStatusMultipleBugChecks(v6, v7, a3) < 0 )
        KiRecordRecoveryFailure(5LL);
      ((void (__fastcall *)(_QWORD))off_140C01CB8[0])(0LL);
      HalReturnToFirmware(3);
    }
  }
  return result;
}
