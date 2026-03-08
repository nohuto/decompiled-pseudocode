/*
 * XREFs of HalpAcpiAccessSecureAddress @ 0x140456300
 * Callers:
 *     <none>
 * Callees:
 *     MmGetPhysicalAddress @ 0x14030C850 (MmGetPhysicalAddress.c)
 *     HalpPciHandleSecureAccess @ 0x140456190 (HalpPciHandleSecureAccess.c)
 */

__int64 __fastcall HalpAcpiAccessSecureAddress(char a1, void *a2, void *a3, unsigned int a4, unsigned int *a5)
{
  __int16 v8; // bp
  PHYSICAL_ADDRESS PhysicalAddress; // rax

  v8 = (__int16)a2;
  *a5 = 0;
  PhysicalAddress = MmGetPhysicalAddress(a2);
  return HalpPciHandleSecureAccess(a1, v8, PhysicalAddress.QuadPart, a3, a4, a5) == 0 ? 0xC0000141 : 0;
}
