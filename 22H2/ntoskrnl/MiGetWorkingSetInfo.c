/*
 * XREFs of MiGetWorkingSetInfo @ 0x140546B78
 * Callers:
 *     MmQueryVirtualMemory @ 0x14061ED50 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x14020A820 (MiProbeAndLockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140226C80 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnlockPages @ 0x1402443E0 (MmUnlockPages.c)
 *     MiAllocatePool @ 0x14025A5D0 (MiAllocatePool.c)
 *     MiGetWorkingSetInfoEx @ 0x140546D20 (MiGetWorkingSetInfoEx.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiGetWorkingSetInfo(__int64 a1, int a2, __int64 a3, unsigned __int64 a4, _QWORD *P)
{
  struct _MDL *Pool; // rax
  struct _MDL *v11; // rbx
  _QWORD *MappedSystemVa; // rsi
  int WorkingSetInfo; // edi

  *P = 0LL;
  if ( a4 > 0xFFFFFFFF )
    return 3221225990LL;
  Pool = (struct _MDL *)MiAllocatePool(
                          64,
                          8 * ((a4 >> 12) + 7 - ((unsigned __int128)-(__int128)(a4 & 0xFFF) >> 64)),
                          0x20206D4Du);
  v11 = Pool;
  if ( !Pool )
    return 3221225626LL;
  Pool->Next = 0LL;
  Pool->Size = 8 * ((((a3 & 0xFFF) + a4 + 4095) >> 12) + 6);
  Pool->MdlFlags = 0;
  Pool->StartVa = (PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL);
  Pool->ByteOffset = a3 & 0xFFF;
  Pool->ByteCount = a4;
  MiProbeAndLockPages((__int64)Pool, KeGetCurrentThread()->PreviousMode != 0, 1u);
  if ( (v11->MdlFlags & 5) != 0 )
    MappedSystemVa = v11->MappedSystemVa;
  else
    MappedSystemVa = MmMapLockedPagesSpecifyCache(v11, 0, MmCached, 0LL, 0, 0x40000010u);
  if ( MappedSystemVa )
  {
    WorkingSetInfo = MiGetWorkingSetInfoEx(a1 + 1664, a2 | 0x80000000, MappedSystemVa, a4);
    if ( WorkingSetInfo >= 0 )
      *P = *MappedSystemVa;
  }
  else
  {
    WorkingSetInfo = -1073741670;
  }
  MmUnlockPages(v11);
  ExFreePoolWithTag(v11, 0);
  return (unsigned int)WorkingSetInfo;
}
