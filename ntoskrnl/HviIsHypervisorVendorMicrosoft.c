/*
 * XREFs of HviIsHypervisorVendorMicrosoft @ 0x14037FCF0
 * Callers:
 *     KiIsHyperVCr3RspErrataPresent @ 0x140576E08 (KiIsHyperVCr3RspErrataPresent.c)
 *     HvipApertureDetectParameters @ 0x1405B38F0 (HvipApertureDetectParameters.c)
 *     EtwpTraceSystemInitialization @ 0x140B41904 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x14037F1D0 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

bool HviIsHypervisorVendorMicrosoft()
{
  if ( !HviIsAnyHypervisorPresent() )
    return 0;
  _RAX = 0x40000000LL;
  __asm { cpuid }
  if ( (_DWORD)_RBX != 1919117645 )
    return 0;
  return (_DWORD)_RCX == 1718580079 && (_DWORD)_RDX == 1984438388;
}
