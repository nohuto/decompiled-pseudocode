/*
 * XREFs of EtwpFreeTraceBuffer @ 0x14028DAD0
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x1402067AC (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpFreeTraceBufferPool @ 0x1406F2CFC (EtwpFreeTraceBufferPool.c)
 *     EtwpCancelMemoryPreservation @ 0x1409EA4E0 (EtwpCancelMemoryPreservation.c)
 *     EtwpPreserveLogger @ 0x1409EA82C (EtwpPreserveLogger.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x1402C0DD0 (MiFreePagesFromMdl.c)
 *     MmGetPhysicalAddress @ 0x14030C850 (MmGetPhysicalAddress.c)
 *     EtwpFreePartitionMemory @ 0x1405FEFB0 (EtwpFreePartitionMemory.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeTraceBuffer(__int64 a1, char *a2)
{
  char *v2; // rbx
  ULONG_PTR v3; // rdi
  unsigned __int64 *v4; // rsi
  unsigned int v5; // eax
  __int64 v6; // rbp
  PHYSICAL_ADDRESS PhysicalAddress; // rax

  v2 = a2;
  if ( *(_QWORD *)(a1 + 1320) )
  {
    EtwpFreePartitionMemory();
  }
  else if ( (*(_DWORD *)(a1 + 816) & 0x20000000) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 1328);
    *(_WORD *)(v3 + 10) |= 3u;
    v4 = (unsigned __int64 *)(v3 + 48);
    *(_QWORD *)(v3 + 24) = a2;
    v5 = *(_DWORD *)(a1 + 4) >> 12;
    if ( v5 )
    {
      v6 = v5;
      do
      {
        PhysicalAddress = MmGetPhysicalAddress(v2);
        v2 += 4096;
        *v4++ = (unsigned __int64)PhysicalAddress.QuadPart >> 12;
        --v6;
      }
      while ( v6 );
    }
    MiFreePagesFromMdl(v3);
  }
  else
  {
    ExFreePoolWithTag(a2, 0);
  }
}
