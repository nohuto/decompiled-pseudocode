/*
 * XREFs of MiGetWorkingSetInfo @ 0x1402F7C60
 * Callers:
 *     MmQueryVirtualMemory @ 0x1407C6390 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x140242114 (MiProbeAndLockPages.c)
 *     MmUnlockPages @ 0x14027C0C0 (MmUnlockPages.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MiGetWorkingSetInfoEx @ 0x1402F7DFC (MiGetWorkingSetInfoEx.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiGetWorkingSetInfo(__int64 a1, int a2, __int64 a3, unsigned __int64 a4, _QWORD *P)
{
  struct _MDL *Pool; // rax
  struct _MDL *v10; // rbx
  _QWORD *MappedSystemVa; // rsi
  int WorkingSetInfo; // edi

  *P = 0LL;
  if ( a4 > 0xFFFFFFFF )
    return 3221225990LL;
  Pool = (struct _MDL *)MiAllocatePool(
                          64,
                          8 * ((a4 >> 12) + 7 - ((unsigned __int128)-(__int128)(a4 & 0xFFF) >> 64)),
                          0x20206D4Du);
  v10 = Pool;
  if ( !Pool )
    return 3221225626LL;
  Pool->Next = 0LL;
  Pool->Size = 8 * ((((a3 & 0xFFF) + a4 + 4095) >> 12) + 6);
  Pool->MdlFlags = 0;
  Pool->StartVa = (PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL);
  Pool->ByteOffset = a3 & 0xFFF;
  Pool->ByteCount = a4;
  MiProbeAndLockPages(Pool, KeGetCurrentThread()->PreviousMode != 0, 1);
  if ( (v10->MdlFlags & 5) != 0 )
    MappedSystemVa = v10->MappedSystemVa;
  else
    MappedSystemVa = MmMapLockedPagesSpecifyCache(v10, 0, MmCached, 0LL, 0, 0x40000010u);
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
  MmUnlockPages(v10);
  ExFreePoolWithTag(v10, 0);
  return (unsigned int)WorkingSetInfo;
}
