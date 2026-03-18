/*
 * XREFs of SmStoreCompressionStart @ 0x1407F584C
 * Callers:
 *     MmProcessWorkingSetControl @ 0x1407F5540 (MmProcessWorkingSetControl.c)
 * Callees:
 *     SmpKeyedStoreEntryGet @ 0x1402A1124 (SmpKeyedStoreEntryGet.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x1402A188C (MmQueryProcessWorkingSetSwapPages.c)
 *     MmStoreFlushOutstandingEvictions @ 0x140373D18 (MmStoreFlushOutstandingEvictions.c)
 *     SmSwapStore @ 0x1406EBF2C (SmSwapStore.c)
 */

int SmStoreCompressionStart()
{
  _KPROCESS *Process; // rdi
  __int64 v1; // rax
  __int64 v2; // rbx
  _KPROCESS *v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = Process;
  v1 = SmpKeyedStoreEntryGet((ULONG_PTR)&qword_140D321C8, &v4, 0LL, 0);
  v2 = v1;
  if ( v1 || dword_140D321F0 != -1 )
  {
    LODWORD(v1) = MmStoreFlushOutstandingEvictions();
    if ( v2 )
    {
      LODWORD(v1) = MmQueryProcessWorkingSetSwapPages((__int64)Process, &v5);
      if ( (int)v1 >= 0 )
        LODWORD(v1) = SmSwapStore(0);
    }
  }
  return v1;
}
