/*
 * XREFs of HalpInterruptSetRemappedLineStateInternal @ 0x140379248
 * Callers:
 *     HalpInterruptEnableNmi @ 0x140378254 (HalpInterruptEnableNmi.c)
 *     HalpInterruptRemap @ 0x140378D78 (HalpInterruptRemap.c)
 *     HalpInterruptSetRemappedLineState @ 0x140502790 (HalpInterruptSetRemappedLineState.c)
 * Callees:
 *     HalpInterruptFindLines @ 0x14028EE80 (HalpInterruptFindLines.c)
 *     HalpInterruptGetPriority @ 0x1403792F0 (HalpInterruptGetPriority.c)
 *     HalpInterruptSetProblemEx @ 0x140518598 (HalpInterruptSetProblemEx.c)
 */

__int64 __fastcall HalpInterruptSetRemappedLineStateInternal(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned int v4; // ebx
  _QWORD *Lines; // rax
  __int64 v7; // rcx
  int Priority; // eax
  __int64 v9; // r11
  __int64 v10; // r9
  __int64 v11; // r10

  v4 = 0;
  Lines = HalpInterruptFindLines(a2);
  if ( Lines )
  {
    v7 = Lines[5];
    *(_OWORD *)v7 = *(_OWORD *)a3;
    *(_OWORD *)(v7 + 16) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(v7 + 32) = *(_OWORD *)(a3 + 32);
    *(_QWORD *)(v7 + 48) = *(_QWORD *)(a3 + 48);
    Priority = HalpInterruptGetPriority(a1);
    *(_DWORD *)(*(_QWORD *)(v9 + 40) + v10 + 52) = Priority;
    *(_BYTE *)(*(_QWORD *)(v9 + 48) + 16 * v11 + 12) = 1;
  }
  else
  {
    HalpInterruptSetProblemEx(a1, 18, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 3323);
    return (unsigned int)-1073741811;
  }
  return v4;
}
