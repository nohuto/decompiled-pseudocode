void __noreturn HalpInterruptResetThisProcessor()
{
  unsigned int Number; // esi
  ULONG_PTR *v1; // rdi
  ULONG_PTR v2; // rbx
  int v3; // eax
  __int64 (__fastcall *v4)(_QWORD); // rax
  int v5; // eax
  int v6; // ebx
  __int64 (__fastcall *v7)(_QWORD); // rax
  int v8; // eax

  Number = KeGetPcr()->Prcb.Number;
  _disable();
  HalpInterruptInitializeLocalUnit(HalpInterruptController);
  HalpInterruptSetProblemEx(0, 12, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\start.c", 996);
  if ( !Number )
  {
    _InterlockedDecrement(&HalpInterruptProcessorsStarted);
    while ( _InterlockedExchangeAdd(&HalpInterruptProcessorsStarted, 0) )
      _mm_pause();
    KeStallExecutionProcessor(0x64u);
    v1 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
    while ( v1 != &HalpRegisteredInterruptControllers )
    {
      v2 = (ULONG_PTR)v1;
      v1 = (ULONG_PTR *)*v1;
      v3 = *(_DWORD *)(v2 + 248);
      if ( (v3 & 1) != 0 )
      {
        *(_DWORD *)(v2 + 248) = v3 & 0xFFFFFFFE;
        HalpInterruptInitializeController(v2);
        v4 = *(__int64 (__fastcall **)(_QWORD))(v2 + 176);
        if ( v4 && (v5 = v4(*(_QWORD *)(v2 + 16)), v5 < 0) )
          HalpInterruptSetProblemEx(
            v2,
            35,
            v5,
            (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c",
            3033);
        else
          *(_DWORD *)(v2 + 248) &= ~1u;
      }
    }
    KeStallExecutionProcessor(0x64u);
  }
  HalPerformEndOfInterruptAtController();
  v6 = HalpInterruptController;
  v7 = *(__int64 (__fastcall **)(_QWORD))(HalpInterruptController + 168);
  if ( v7 )
  {
    v8 = v7(*(_QWORD *)(HalpInterruptController + 16));
    if ( v8 < 0 )
      HalpInterruptSetProblemEx(v6, 34, v8, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c", 3082);
  }
  HalpPowerWriteResetCommand(Number, (unsigned __int64)&HalpInterruptProcessorsStarted & -(__int64)(Number != 0));
  JUMPOUT(0x140502FC4LL);
}
