/*
 * XREFs of HviGetImplementationLimits @ 0x140613064
 * Callers:
 *     HvlIsSingleGroupRequired @ 0x1403A4F6C (HvlIsSingleGroupRequired.c)
 *     HvlpSelectLpSet @ 0x14053F128 (HvlpSelectLpSet.c)
 *     HvlpSelectVpSet @ 0x14053F57C (HvlpSelectVpSet.c)
 *     HvlQueryDetailInfo @ 0x14093DEE8 (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x14037F140 (HviIsHypervisorMicrosoftCompatible.c)
 */

char __fastcall HviGetImplementationLimits(_DWORD *a1)
{
  LOBYTE(_RAX) = HviIsHypervisorMicrosoftCompatible();
  if ( (_BYTE)_RAX )
  {
    _RAX = 1073741829LL;
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
