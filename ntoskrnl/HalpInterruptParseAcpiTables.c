/*
 * XREFs of HalpInterruptParseAcpiTables @ 0x140376A1C
 * Callers:
 *     HalpInitializeInterrupts @ 0x140B3D448 (HalpInitializeInterrupts.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x14029C550 (HalpAcpiGetTable.c)
 *     HalpInterruptParseMadt @ 0x140376468 (HalpInterruptParseMadt.c)
 *     HalpInterruptSetProblemEx @ 0x140518598 (HalpInterruptSetProblemEx.c)
 */

__int64 __fastcall HalpInterruptParseAcpiTables(__int64 a1, int a2)
{
  unsigned int v3; // ebx
  __int64 Table; // rax
  int v5; // eax
  ULONG_PTR v6; // rcx
  ULONG_PTR *v7; // rax

  v3 = 0;
  Table = HalpAcpiGetTable(a1, 1128878145, 0, 0);
  if ( Table && (v5 = HalpInterruptParseMadt(Table, a2), v3 = v5, v5 < 0) )
  {
    HalpInterruptSetProblemEx(0, 1, v5, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c", 268);
  }
  else
  {
    if ( !HalpInterruptMaxProcessors )
      HalpInterruptMaxProcessors = 1;
    if ( a2 == 1 )
    {
      v6 = HalpInterruptProcessorState;
      v7 = (ULONG_PTR *)HalpInterruptProcessorStateByNtIndex;
      HalpInterruptProcessorStateInitialized = 1;
      *(_WORD *)(HalpInterruptProcessorState + 12) = 257;
      *v7 = v6;
    }
  }
  return v3;
}
