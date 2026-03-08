/*
 * XREFs of HviGetHypervisorVendorAndMaxFunction @ 0x140612FD4
 * Callers:
 *     HvlpHvIdentityInfoCallback @ 0x14053DAA0 (HvlpHvIdentityInfoCallback.c)
 *     HvlGetSystemPasidCapabilities @ 0x140542050 (HvlGetSystemPasidCapabilities.c)
 *     HviGetHardwareFeatures @ 0x140612F60 (HviGetHardwareFeatures.c)
 *     HviGetIptFeatures @ 0x1406130AC (HviGetIptFeatures.c)
 *     HvlQueryDetailInfo @ 0x14093DEE8 (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x14037F1D0 (HviIsAnyHypervisorPresent.c)
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
