/*
 * XREFs of EtwpFreeTraceBuffer @ 0x140321364
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x14032ED38 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpFreeTraceBufferPool @ 0x14069862C (EtwpFreeTraceBufferPool.c)
 *     EtwpCancelMemoryPreservation @ 0x140948560 (EtwpCancelMemoryPreservation.c)
 *     EtwpPreserveLogger @ 0x1409488AC (EtwpPreserveLogger.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x14027FB6C (MiFreePagesFromMdl.c)
 *     MmGetPhysicalAddress @ 0x140301020 (MmGetPhysicalAddress.c)
 *     EtwpFreePartitionMemory @ 0x1405B0608 (EtwpFreePartitionMemory.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeTraceBuffer(__int64 a1, char *a2, __int64 a3)
{
  char *v3; // rbx
  ULONG_PTR v4; // rdi
  unsigned __int64 *v5; // rsi
  unsigned int v6; // eax
  __int64 v7; // rbp
  PHYSICAL_ADDRESS PhysicalAddress; // rax

  v3 = a2;
  if ( *(_QWORD *)(a1 + 1304) )
  {
    EtwpFreePartitionMemory();
  }
  else if ( (*(_DWORD *)(a1 + 832) & 0x20000000) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 1312);
    *(_WORD *)(v4 + 10) |= 3u;
    v5 = (unsigned __int64 *)(v4 + 48);
    *(_QWORD *)(v4 + 24) = a2;
    v6 = *(_DWORD *)(a1 + 4) >> 12;
    if ( v6 )
    {
      v7 = v6;
      do
      {
        PhysicalAddress = MmGetPhysicalAddress(v3);
        v3 += 4096;
        *v5++ = (unsigned __int64)PhysicalAddress.QuadPart >> 12;
        --v7;
      }
      while ( v7 );
    }
    MiFreePagesFromMdl(v4, 0, a3);
  }
  else
  {
    ExFreePoolWithTag(a2, 0);
  }
}
