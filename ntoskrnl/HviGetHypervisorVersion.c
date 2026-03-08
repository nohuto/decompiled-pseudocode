/*
 * XREFs of HviGetHypervisorVersion @ 0x14061301C
 * Callers:
 *     HvlpHvIdentityInfoCallback @ 0x14053DAA0 (HvlpHvIdentityInfoCallback.c)
 *     KiIsHyperVCr3RspErrataPresent @ 0x140576E08 (KiIsHyperVCr3RspErrataPresent.c)
 *     HvlPhase0Initialize @ 0x14080D7C8 (HvlPhase0Initialize.c)
 *     HvlQueryDetailInfo @ 0x14093DEE8 (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x14037F140 (HviIsHypervisorMicrosoftCompatible.c)
 */

char __fastcall HviGetHypervisorVersion(_DWORD *a1)
{
  LOBYTE(_RAX) = HviIsHypervisorMicrosoftCompatible();
  if ( (_BYTE)_RAX )
  {
    _RAX = 1073741826LL;
    __asm { cpuid }
    *a1 = _RAX;
    a1[1] = _RBX;
    a1[2] = _RCX;
    a1[3] = _RDX;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  return _RAX;
}
