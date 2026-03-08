/*
 * XREFs of HviGetHypervisorFeatures @ 0x1C005ED10
 * Callers:
 *     ACPIRootInitialize @ 0x1C0093768 (ACPIRootInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     HviIsAnyHypervisorPresent @ 0x1C005ED90 (HviIsAnyHypervisorPresent.c)
 */

__int64 HviGetHypervisorFeatures()
{
  _DWORD *v0; // r10
  __int64 result; // rax

  if ( (unsigned __int8)HviIsAnyHypervisorPresent() )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
  }
  else
  {
    result = 0LL;
  }
  if ( (_DWORD)result == 824407624 )
  {
    _RAX = 1073741827LL;
    __asm { cpuid }
    *v0 = result;
    v0[1] = _RBX;
    v0[2] = _RCX;
    v0[3] = _RDX;
  }
  else
  {
    *(_QWORD *)v0 = 0LL;
    *((_QWORD *)v0 + 1) = 0LL;
  }
  return result;
}
