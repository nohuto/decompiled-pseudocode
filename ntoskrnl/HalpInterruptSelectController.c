/*
 * XREFs of HalpInterruptSelectController @ 0x1403AF008
 * Callers:
 *     HalpInitializeInterrupts @ 0x140B3D448 (HalpInitializeInterrupts.c)
 * Callees:
 *     HalpInterruptInitializeController @ 0x14037B24C (HalpInterruptInitializeController.c)
 *     HalpFindInterruptController @ 0x1403AF08C (HalpFindInterruptController.c)
 *     HalpInterruptSetProblemEx @ 0x140518598 (HalpInterruptSetProblemEx.c)
 */

__int64 __fastcall HalpInterruptSelectController(ULONG_PTR *a1)
{
  ULONG_PTR InterruptController; // rax
  ULONG_PTR v3; // rbx
  int v4; // r10d
  int v5; // eax
  ULONG_PTR v7; // rax

  InterruptController = HalpFindInterruptController(2LL);
  v3 = InterruptController;
  if ( InterruptController && (v4 = HalpInterruptInitializeController(InterruptController), v4 >= 0)
    || (v7 = HalpFindInterruptController(0LL), (v3 = v7) != 0) && (v4 = HalpInterruptInitializeController(v7), v4 >= 0) )
  {
    *a1 = v3;
    if ( *(_QWORD *)(v3 + 104) )
      HalPerformEndOfInterruptAtController = *(__int64 (__fastcall **)())(v3 + 104);
    v5 = *(_DWORD *)(v3 + 244);
    if ( (v5 & 1) != 0 )
    {
      HalpInterruptDirectedEoiModeDetermined = 1;
      if ( (v5 & 0x400) != 0 )
        HalpInterruptDirectedEoiModeEnabled = 1;
    }
  }
  else
  {
    HalpInterruptSetProblemEx(0, 2, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c", 371);
  }
  return (unsigned int)v4;
}
