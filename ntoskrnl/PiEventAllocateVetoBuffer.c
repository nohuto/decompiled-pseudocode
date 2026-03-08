/*
 * XREFs of PiEventAllocateVetoBuffer @ 0x14086374C
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1408625F0 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PnpAllocateCriticalMemory @ 0x1408637CC (PnpAllocateCriticalMemory.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

char *__fastcall PiEventAllocateVetoBuffer(__int64 a1)
{
  unsigned int v1; // edi
  char *CriticalMemory; // rbx
  __int64 v3; // rax

  v1 = a1;
  CriticalMemory = (char *)PnpAllocateCriticalMemory(a1, 256LL, 24LL, 1299213904LL);
  if ( CriticalMemory )
  {
    v3 = PnpAllocateCriticalMemory(v1, 256LL, 1024LL, 1299213904LL);
    if ( v3 )
    {
      *(_DWORD *)CriticalMemory = 0;
      *(_OWORD *)(CriticalMemory + 8) = 0LL;
      *((_WORD *)CriticalMemory + 5) = 1024;
      *((_QWORD *)CriticalMemory + 2) = v3;
    }
    else
    {
      ExFreePoolWithTag(CriticalMemory, 0x4D706E50u);
      return 0LL;
    }
  }
  return CriticalMemory;
}
