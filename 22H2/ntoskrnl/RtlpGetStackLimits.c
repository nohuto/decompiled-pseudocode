/*
 * XREFs of RtlpGetStackLimits @ 0x1402D0BE0
 * Callers:
 *     RtlWalkFrameChain @ 0x14021CE70 (RtlWalkFrameChain.c)
 *     RtlpWalkFrameChain @ 0x14021D210 (RtlpWalkFrameChain.c)
 *     IoGetStackLimits @ 0x1402D0BB0 (IoGetStackLimits.c)
 *     RtlUnwindEx @ 0x14033EA40 (RtlUnwindEx.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x140585C04 (RtlEnoughStackSpaceForStackCapture.c)
 *     PspGetSetContextInternal @ 0x1406C2670 (PspGetSetContextInternal.c)
 *     MmVerifierTrimMemory @ 0x1409C5C14 (MmVerifierTrimMemory.c)
 *     ViKeWaitSanityChecks @ 0x1409DC61C (ViKeWaitSanityChecks.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x1402D0C30 (KeQueryCurrentStackInformationEx.c)
 *     KeGetCurrentStackPointer @ 0x1403FDC50 (KeGetCurrentStackPointer.c)
 */

__int64 __fastcall RtlpGetStackLimits(__int64 a1, __int64 a2)
{
  __int64 CurrentStackPointer; // rax
  __int64 result; // rax
  char v6; // [rsp+40h] [rbp+18h] BYREF

  CurrentStackPointer = KeGetCurrentStackPointer();
  result = KeQueryCurrentStackInformationEx(CurrentStackPointer, &v6, a1, a2);
  if ( !(_BYTE)result )
    __fastfail(4u);
  return result;
}
