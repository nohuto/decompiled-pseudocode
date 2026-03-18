/*
 * XREFs of RtlpGetStackLimits @ 0x14022E980
 * Callers:
 *     RtlEnoughStackSpaceForStackCapture @ 0x140227820 (RtlEnoughStackSpaceForStackCapture.c)
 *     IoGetStackLimits @ 0x14022E950 (IoGetStackLimits.c)
 *     RtlpWalkFrameChain @ 0x1402A4180 (RtlpWalkFrameChain.c)
 *     RtlUnwindEx @ 0x1402A4C20 (RtlUnwindEx.c)
 *     MiDoStackCopy @ 0x14062CE10 (MiDoStackCopy.c)
 *     PspGetSetContextInternal @ 0x140724A70 (PspGetSetContextInternal.c)
 *     ViMiscValidateKeWaitUsage @ 0x140AE25E0 (ViMiscValidateKeWaitUsage.c)
 *     MmVerifierTrimMemory @ 0x140AE90D0 (MmVerifierTrimMemory.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x14022E9D0 (KeQueryCurrentStackInformationEx.c)
 *     KeGetCurrentStackPointer @ 0x14041EA70 (KeGetCurrentStackPointer.c)
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
