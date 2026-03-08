/*
 * XREFs of HalpAllocateKInterrupt @ 0x140379FF8
 * Callers:
 *     HalpCreateInterrupt @ 0x140379F48 (HalpCreateInterrupt.c)
 * Callees:
 *     HalpInterruptSetProblemEx @ 0x140518598 (HalpInterruptSetProblemEx.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

char *__fastcall HalpAllocateKInterrupt(int a1, int a2)
{
  char *v2; // r9
  char *Pool2; // r10
  unsigned __int64 v6; // rcx

  v2 = (char *)&HalpKInterruptHeap;
  Pool2 = (char *)&HalpKInterruptHeap + 288 * (unsigned int)HalpKInterruptHeapUsed;
  while ( v2 < Pool2 )
  {
    if ( *((_DWORD *)v2 + 24) == a1 && *((_DWORD *)v2 + 22) == a2 )
      return v2;
    v2 += 288;
  }
  v6 = HalpKInterruptPostPhaseZero;
  if ( HalpKInterruptPostPhaseZero )
  {
    while ( v6 < HalpKInterruptPostPhaseZero + 288 * (unsigned __int64)(unsigned int)HalpKInterruptPostPhaseZeroUsed )
    {
      if ( *(_DWORD *)(v6 + 96) == a1 && *(_DWORD *)(v6 + 88) == a2 )
        return (char *)v6;
      v6 += 288LL;
    }
  }
  if ( (unsigned int)HalpKInterruptHeapUsed < 0x10 )
  {
    ++HalpKInterruptHeapUsed;
  }
  else if ( HalpKInterruptPostPhaseZeroUsed >= (unsigned int)HalpKInterruptPostPhaseZeroTotal )
  {
    Pool2 = (char *)ExAllocatePool2(64LL, 288LL, 1265393992LL);
  }
  else
  {
    Pool2 = (char *)(HalpKInterruptPostPhaseZero + 288LL * (unsigned int)HalpKInterruptPostPhaseZeroUsed++);
  }
  if ( !Pool2 )
    HalpInterruptSetProblemEx(0, 30, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\kintrupt.c", 326);
  return Pool2;
}
