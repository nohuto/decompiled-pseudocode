/*
 * XREFs of KiAdvanceSoftParkElectionGeneration @ 0x14057DB48
 * Callers:
 *     KiSoftParkElectionDpcRoutine @ 0x14057E2E0 (KiSoftParkElectionDpcRoutine.c)
 * Callees:
 *     memset @ 0x140435400 (memset.c)
 */

void *__fastcall KiAdvanceSoftParkElectionGeneration(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 696);
  *(_DWORD *)(a1 + 704) = 0;
  *(_QWORD *)(a1 + 712) = 0LL;
  *(_QWORD *)(a1 + 696) = v1 + 1;
  return memset((void *)(a1 + 784), 0, 0x388uLL);
}
