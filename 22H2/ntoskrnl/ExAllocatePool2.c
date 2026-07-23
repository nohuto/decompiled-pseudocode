/*
 * XREFs of ExAllocatePool2 @ 0x1409B41B0
 * Callers:
 *     EtwpAllocateFreeBuffers @ 0x14035FD48 (EtwpAllocateFreeBuffers.c)
 *     KiLogUserCetSetContextIpValidationFailure @ 0x1403F2378 (KiLogUserCetSetContextIpValidationFailure.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x1403F82C4 (SepSetProcessTrustLabelAceForToken.c)
 *     sub_1405B2D88 @ 0x1405B2D88 (sub_1405B2D88.c)
 *     NtCopyFileChunk @ 0x1405CDD80 (NtCopyFileChunk.c)
 *     RtlAddDynamicEnforcedAddressRange @ 0x1405CFDB0 (RtlAddDynamicEnforcedAddressRange.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x1405D0494 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1405D09D0 (EtwTimLogRedirectionTrustPolicy.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x1405D1528 (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     VrpPostEnumerateKey @ 0x1405D37A4 (VrpPostEnumerateKey.c)
 *     NtSetInformationProcess @ 0x140657B40 (NtSetInformationProcess.c)
 *     CmFcpManagerAllocateChangeSubscription @ 0x14087E530 (CmFcpManagerAllocateChangeSubscription.c)
 *     RtlAddDynamicEHContinuationTarget @ 0x14091A938 (RtlAddDynamicEHContinuationTarget.c)
 *     SepAddTokenOriginClaim @ 0x140922BA0 (SepAddTokenOriginClaim.c)
 *     VerifierExAllocatePool2 @ 0x1409D49F0 (VerifierExAllocatePool2.c)
 *     SepVariableInitialization @ 0x140A48B6C (SepVariableInitialization.c)
 *     VslConnectSwInterrupt @ 0x140A5F044 (VslConnectSwInterrupt.c)
 * Callees:
 *     ExpAllocatePoolWithTagFromNode @ 0x1402BC810 (ExpAllocatePoolWithTagFromNode.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1402D37D0 (ExAllocatePoolWithQuotaTag.c)
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     ExpPoolFlagsToPoolType @ 0x1409B4010 (ExpPoolFlagsToPoolType.c)
 */

PVOID __fastcall ExAllocatePool2(__int64 a1, SIZE_T a2, ULONG a3)
{
  NTSTATUS v5; // eax
  POOL_TYPE PoolType[6]; // [rsp+30h] [rbp-18h] BYREF
  char v8; // [rsp+60h] [rbp+18h] BYREF
  char v9; // [rsp+68h] [rbp+20h] BYREF

  PoolType[0] = NonPagedPool;
  v9 = 0;
  v8 = 0;
  if ( a3 )
  {
    v5 = ExpPoolFlagsToPoolType(a1, 0, (int *)PoolType, &v9, &v8);
    if ( v5 >= 0 )
    {
      if ( v9 )
        return ExAllocatePoolWithQuotaTag(PoolType[0], a2, a3);
      else
        return (PVOID)ExpAllocatePoolWithTagFromNode(
                        PoolType[0],
                        a2,
                        a3,
                        KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0] | 0x80000000,
                        v8 != 0);
    }
  }
  else
  {
    v5 = -1073741811;
  }
  if ( (a1 & 0x20) != 0 )
    RtlRaiseStatus(v5);
  return 0LL;
}
