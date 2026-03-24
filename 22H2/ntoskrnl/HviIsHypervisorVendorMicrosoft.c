/*
 * XREFs of HviIsHypervisorVendorMicrosoft @ 0x1403AA5F0
 * Callers:
 *     KiIsHyperVCr3RspErrataPresent @ 0x1403F2DE0 (KiIsHyperVCr3RspErrataPresent.c)
 *     HvipApertureDetectParameters @ 0x1405946C4 (HvipApertureDetectParameters.c)
 *     HviGetDebugDeviceOptions @ 0x1405BEE70 (HviGetDebugDeviceOptions.c)
 *     EtwpTraceSystemInitialization @ 0x140A41CF8 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1403A5310 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
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
