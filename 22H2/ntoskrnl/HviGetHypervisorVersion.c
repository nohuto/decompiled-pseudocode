/*
 * XREFs of HviGetHypervisorVersion @ 0x1406154CC
 * Callers:
 *     HvlpHvIdentityInfoCallback @ 0x14053FF40 (HvlpHvIdentityInfoCallback.c)
 *     KiIsHyperVCr3RspErrataPresent @ 0x140579318 (KiIsHyperVCr3RspErrataPresent.c)
 *     HvlPhase0Initialize @ 0x1408273D8 (HvlPhase0Initialize.c)
 *     HvlQueryDetailInfo @ 0x140940F08 (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x140382E1C (HviIsHypervisorMicrosoftCompatible.c)
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
