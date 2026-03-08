/*
 * XREFs of HviGetEnlightenmentInformation @ 0x14037E1E0
 * Callers:
 *     HvlGetImplementedPhysicalBits @ 0x14037E18C (HvlGetImplementedPhysicalBits.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x14037EC84 (KiDetectHardwareSpecControlFeatures.c)
 *     HvlpDetermineEnlightenments @ 0x140546B64 (HvlpDetermineEnlightenments.c)
 *     HvlQueryDetailInfo @ 0x14093DEE8 (HvlQueryDetailInfo.c)
 *     KiComputeDispatchInterruptCost @ 0x140B41CC8 (KiComputeDispatchInterruptCost.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x14037F140 (HviIsHypervisorMicrosoftCompatible.c)
 */

__int64 __fastcall HviGetEnlightenmentInformation(_DWORD *a1)
{
  __int64 result; // rax

  result = HviIsHypervisorMicrosoftCompatible();
  if ( (_BYTE)result )
  {
    _RAX = 1073741828LL;
    __asm { cpuid }
    *a1 = result;
    a1[1] = _RBX;
    a1[2] = _RCX;
    a1[3] = _RDX;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  return result;
}
