/*
 * XREFs of HviGetHypervisorInterface @ 0x14037F18C
 * Callers:
 *     HviIsHypervisorMicrosoftCompatible @ 0x14037F140 (HviIsHypervisorMicrosoftCompatible.c)
 *     HvlpHvIdentityInfoCallback @ 0x14053DAA0 (HvlpHvIdentityInfoCallback.c)
 *     HvlQueryDetailInfo @ 0x14093DEE8 (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x14037F1D0 (HviIsAnyHypervisorPresent.c)
 */

__int64 __fastcall HviGetHypervisorInterface(_DWORD *a1)
{
  __int64 result; // rax

  result = HviIsAnyHypervisorPresent();
  if ( (_BYTE)result )
  {
    _RAX = 1073741825LL;
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
