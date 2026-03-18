/*
 * XREFs of HviGetEnlightenmentInformation @ 0x140381E54
 * Callers:
 *     HvlGetImplementedPhysicalBits @ 0x140381E00 (HvlGetImplementedPhysicalBits.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x14038294C (KiDetectHardwareSpecControlFeatures.c)
 *     HvlpDetermineEnlightenments @ 0x140549004 (HvlpDetermineEnlightenments.c)
 *     HvlQueryDetailInfo @ 0x140940F08 (HvlQueryDetailInfo.c)
 *     KiComputeDispatchInterruptCost @ 0x140B54AFC (KiComputeDispatchInterruptCost.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x140382E1C (HviIsHypervisorMicrosoftCompatible.c)
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
