/*
 * XREFs of RtlpGetStackLimits @ 0x140350450
 * Callers:
 *     RtlWalkFrameChain @ 0x14021CEB0 (RtlWalkFrameChain.c)
 *     RtlpWalkFrameChain @ 0x14021D250 (RtlpWalkFrameChain.c)
 *     RtlUnwindEx @ 0x140275A30 (RtlUnwindEx.c)
 *     IoGetStackLimits @ 0x140350420 (IoGetStackLimits.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x140585CC4 (RtlEnoughStackSpaceForStackCapture.c)
 *     PspGetSetContextInternal @ 0x1406498B0 (PspGetSetContextInternal.c)
 *     MmVerifierTrimMemory @ 0x1409C5C04 (MmVerifierTrimMemory.c)
 *     ViKeWaitSanityChecks @ 0x1409DC60C (ViKeWaitSanityChecks.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x1403504A0 (KeQueryCurrentStackInformationEx.c)
 *     KeGetCurrentStackPointer @ 0x1403FE5D0 (KeGetCurrentStackPointer.c)
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
