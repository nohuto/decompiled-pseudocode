__int64 __fastcall HalpAcpiInitializePmRegisters(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) >= 5u && (*(_DWORD *)(a1 + 112) & 0x100000) != 0 )
    return 3221225659LL;
  if ( (int)HalpAcpiSetupPmRegisterLegacy(
              a1,
              *(unsigned int *)(a1 + 56),
              a1 + 148,
              *(unsigned __int8 *)(a1 + 88),
              2,
              PmRegisters) < 0 )
    KeBugCheckEx(0x5Cu, 0x8200uLL, 0LL, (ULONG_PTR)"minkernel\\hals\\lib\\acpi\\pmregs.c", 0xC2uLL);
  if ( (int)HalpAcpiSetupPmRegisterLegacy(
              a1,
              *(unsigned int *)(a1 + 64),
              a1 + 172,
              *(unsigned __int8 *)(a1 + 89),
              2,
              &byte_140C60130) < 0 )
    KeBugCheckEx(0x5Cu, 0x8200uLL, 1uLL, (ULONG_PTR)"minkernel\\hals\\lib\\acpi\\pmregs.c", 0xD1uLL);
  HalpAcpiSetupPmRegisterLegacy(
    a1,
    *(unsigned int *)(a1 + 76),
    a1 + 208,
    *(unsigned __int8 *)(a1 + 91),
    4,
    &unk_140C60160);
  HalpAcpiSetupPmRegisterLegacy(
    a1,
    *(unsigned int *)(a1 + 60),
    a1 + 160,
    *(unsigned __int8 *)(a1 + 88),
    2,
    &byte_140C60190);
  HalpAcpiSetupPmRegisterLegacy(
    a1,
    *(unsigned int *)(a1 + 68),
    a1 + 184,
    *(unsigned __int8 *)(a1 + 89),
    2,
    &byte_140C601C0);
  HalpAcpiSetupPmRegisterLegacy(
    a1,
    *(unsigned int *)(a1 + 72),
    a1 + 196,
    *(unsigned __int8 *)(a1 + 90),
    1,
    &unk_140C601F0);
  if ( *(_BYTE *)(a1 + 8) > 1u && (*(_DWORD *)(a1 + 112) & 0x400) != 0 )
    HalpAcpiSetupPmRegister(1uLL);
  HalpAcpiSetupPmRegisterLegacy(
    a1,
    *(unsigned int *)(a1 + 80),
    a1 + 220,
    *(unsigned __int8 *)(a1 + 92),
    1,
    &unk_140C60220);
  return HalpAcpiSetupPmRegisterLegacy(
           a1,
           *(unsigned int *)(a1 + 84),
           a1 + 232,
           *(unsigned __int8 *)(a1 + 93),
           1,
           &unk_140C60250);
}
