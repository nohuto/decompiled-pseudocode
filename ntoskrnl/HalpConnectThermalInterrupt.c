/*
 * XREFs of HalpConnectThermalInterrupt @ 0x140378B60
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptFindLines @ 0x14028EE80 (HalpInterruptFindLines.c)
 *     HalpInterruptGetPriority @ 0x1403792F0 (HalpInterruptGetPriority.c)
 *     HalpInterruptSetLineStateInternal @ 0x1403796D0 (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptGetIdentifiers @ 0x140379900 (HalpInterruptGetIdentifiers.c)
 *     HalpInterruptSetIdtEntry @ 0x140379F10 (HalpInterruptSetIdtEntry.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     HalpInterruptSetProblemEx @ 0x140518598 (HalpInterruptSetProblemEx.c)
 */

__int64 __fastcall HalpConnectThermalInterrupt(ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v1; // rbx
  __int64 result; // rax
  ULONG_PTR v3; // rdi
  int v4; // r8d
  int v5; // r9d
  KPCR *Pcr; // rsi
  ULONG_PTR v7; // r10
  int v8; // [rsp+98h] [rbp+28h] BYREF
  unsigned int v9; // [rsp+A0h] [rbp+30h] BYREF
  int v10; // [rsp+A4h] [rbp+34h]

  v1 = BugCheckParameter4;
  LODWORD(BugCheckParameter4) = KeGetPcr()->Prcb.Number;
  v8 = 0;
  result = HalpInterruptGetIdentifiers(BugCheckParameter4, &v8, 0LL);
  if ( (int)result >= 0 )
  {
    v3 = HalpInterruptController;
    v9 = *(_DWORD *)(HalpInterruptController + 256);
    v10 = -2;
    if ( *(_DWORD *)(HalpInterruptController + 240) == 2 && HalpInterruptFindLines(&v9) )
    {
      Pcr = KeGetPcr();
      if ( BYTE1(Pcr->HalReserved[5]) )
      {
        if ( HalpInterruptThermalServiceRoutine != v1 )
        {
          HalpInterruptSetProblemEx(0, 36, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c", 3441);
          return 3221226021LL;
        }
      }
      else
      {
        if ( HalpInterruptThermalServiceRoutine )
        {
          if ( HalpInterruptThermalServiceRoutine != v1 )
          {
            HalpInterruptSetProblemEx(
              0,
              36,
              0,
              (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c",
              3412);
            KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, v7, v1);
          }
        }
        else
        {
          HalpInterruptThermalServiceRoutine = v1;
        }
        LOBYTE(v4) = 12;
        HalpInterruptSetIdtEntry(205, (unsigned int)HalpInterruptThermalService, v4, v5, -1LL);
        BYTE1(Pcr->HalReserved[5]) = 1;
      }
      HalpInterruptGetPriority(v3);
      return HalpInterruptSetLineStateInternal(v3, &v9);
    }
    else
    {
      return 3221225659LL;
    }
  }
  return result;
}
