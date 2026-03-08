/*
 * XREFs of RtlpGetStackLimits @ 0x1403129F0
 * Callers:
 *     RtlEnoughStackSpaceForStackCapture @ 0x140205D40 (RtlEnoughStackSpaceForStackCapture.c)
 *     RtlpWalkFrameChain @ 0x14027FF40 (RtlpWalkFrameChain.c)
 *     RtlUnwindEx @ 0x1402809E0 (RtlUnwindEx.c)
 *     IoGetStackLimits @ 0x1403129C0 (IoGetStackLimits.c)
 *     MiDoStackCopy @ 0x14062A990 (MiDoStackCopy.c)
 *     PspGetSetContextInternal @ 0x1406EA840 (PspGetSetContextInternal.c)
 *     ViMiscValidateKeWaitUsage @ 0x140ADE5E0 (ViMiscValidateKeWaitUsage.c)
 *     MmVerifierTrimMemory @ 0x140AE50D0 (MmVerifierTrimMemory.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x140312A40 (KeQueryCurrentStackInformationEx.c)
 *     KeGetCurrentStackPointer @ 0x1404166E0 (KeGetCurrentStackPointer.c)
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
