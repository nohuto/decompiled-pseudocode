/*
 * XREFs of RtlpGetStackLimits @ 0x1402AB970
 * Callers:
 *     MiDoStackCopy @ 0x140200230 (MiDoStackCopy.c)
 *     RtlUnwindEx @ 0x1402957A0 (RtlUnwindEx.c)
 *     RtlWalkFrameChain @ 0x140295F90 (RtlWalkFrameChain.c)
 *     RtlpWalkFrameChain @ 0x140296110 (RtlpWalkFrameChain.c)
 *     IoGetStackLimits @ 0x1402AB940 (IoGetStackLimits.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x1405E47F4 (RtlEnoughStackSpaceForStackCapture.c)
 *     PspGetSetContextInternal @ 0x1407035C0 (PspGetSetContextInternal.c)
 *     MmVerifierTrimMemory @ 0x140A81364 (MmVerifierTrimMemory.c)
 *     ViMiscValidateKeWaitUsage @ 0x140AA58C0 (ViMiscValidateKeWaitUsage.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x1402AB9C0 (KeQueryCurrentStackInformationEx.c)
 *     KeGetCurrentStackPointer @ 0x14041FAB0 (KeGetCurrentStackPointer.c)
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
