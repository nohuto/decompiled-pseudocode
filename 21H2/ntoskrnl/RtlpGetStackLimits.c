/*
 * XREFs of RtlpGetStackLimits @ 0x14035B1A0
 * Callers:
 *     RtlUnwindEx @ 0x1402639D0 (RtlUnwindEx.c)
 *     RtlWalkFrameChain @ 0x1402C17B0 (RtlWalkFrameChain.c)
 *     RtlpWalkFrameChain @ 0x1402C1B50 (RtlpWalkFrameChain.c)
 *     IoGetStackLimits @ 0x14035B170 (IoGetStackLimits.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x140585EF4 (RtlEnoughStackSpaceForStackCapture.c)
 *     PspGetSetContextInternal @ 0x14063E6D0 (PspGetSetContextInternal.c)
 *     MmVerifierTrimMemory @ 0x1409C6C04 (MmVerifierTrimMemory.c)
 *     ViKeWaitSanityChecks @ 0x1409DD60C (ViKeWaitSanityChecks.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x14035B1F0 (KeQueryCurrentStackInformationEx.c)
 *     KeGetCurrentStackPointer @ 0x1403FE7B0 (KeGetCurrentStackPointer.c)
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
