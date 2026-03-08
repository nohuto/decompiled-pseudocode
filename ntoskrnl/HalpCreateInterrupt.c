/*
 * XREFs of HalpCreateInterrupt @ 0x140379F48
 * Callers:
 *     HalpInterruptSetIdtEntry @ 0x140379F10 (HalpInterruptSetIdtEntry.c)
 * Callees:
 *     HalpAllocateKInterrupt @ 0x140379FF8 (HalpAllocateKInterrupt.c)
 *     KeConnectInterruptForHal @ 0x14037A0E0 (KeConnectInterruptForHal.c)
 *     KeInitializeInterrupt @ 0x14037A150 (KeInitializeInterrupt.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall HalpCreateInterrupt(int a1, int a2, char a3, __int64 a4, __int64 a5)
{
  unsigned int Number; // ebp
  __int64 KInterrupt; // rbx

  Number = KeGetPcr()->Prcb.Number;
  KInterrupt = HalpAllocateKInterrupt(Number);
  if ( !KInterrupt )
    KeBugCheckEx(0xACu, 0x120uLL, 3uLL, (ULONG_PTR)"minkernel\\hals\\lib\\interrupts\\common\\kintrupt.c", 0x190uLL);
  KeInitializeInterrupt(KInterrupt, a1, 0, 0, 0, a5, a2, a3, a3, 1, 0, Number);
  KeConnectInterruptForHal(KInterrupt);
  return KInterrupt;
}
