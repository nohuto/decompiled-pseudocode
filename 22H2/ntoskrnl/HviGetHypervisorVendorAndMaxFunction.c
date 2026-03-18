/*
 * XREFs of HviGetHypervisorVendorAndMaxFunction @ 0x140615484
 * Callers:
 *     HvlpHvIdentityInfoCallback @ 0x14053FF40 (HvlpHvIdentityInfoCallback.c)
 *     HvlGetSystemPasidCapabilities @ 0x1405444F0 (HvlGetSystemPasidCapabilities.c)
 *     HviGetHardwareFeatures @ 0x140615410 (HviGetHardwareFeatures.c)
 *     HviGetIptFeatures @ 0x14061555C (HviGetIptFeatures.c)
 *     HvlQueryDetailInfo @ 0x140940F08 (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x140382EA0 (HviIsAnyHypervisorPresent.c)
 */

char __fastcall HviGetHypervisorVendorAndMaxFunction(_DWORD *a1)
{
  LOBYTE(_RAX) = HviIsAnyHypervisorPresent();
  if ( (_BYTE)_RAX )
  {
    _RAX = 0x40000000LL;
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
