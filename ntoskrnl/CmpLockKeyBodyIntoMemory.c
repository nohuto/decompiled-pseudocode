/*
 * XREFs of CmpLockKeyBodyIntoMemory @ 0x140A14838
 * Callers:
 *     CmOpenKeyForBugCheckRecovery @ 0x140A0A440 (CmOpenKeyForBugCheckRecovery.c)
 * Callees:
 *     CmpAllocatePool @ 0x140243878 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     MmProbeAndLockPages @ 0x140267B90 (MmProbeAndLockPages.c)
 *     MmUnlockPages @ 0x14027C0C0 (MmUnlockPages.c)
 */

__int64 __fastcall CmpLockKeyBodyIntoMemory(__int64 a1)
{
  __int64 v2; // r15
  struct _MDL *Pool; // rax
  struct _MDL *v4; // rbx

  v2 = *(_QWORD *)(a1 + 8);
  Pool = (struct _MDL *)CmpAllocatePool(64LL, 128LL, 876170563LL);
  v4 = Pool;
  if ( Pool )
  {
    Pool->Next = 0LL;
    Pool->Size = 8 * (((unsigned __int16)((a1 & 0xFFF) + 4207) >> 12) + 6);
    Pool->MdlFlags = 0;
    Pool->StartVa = (PVOID)(a1 & 0xFFFFFFFFFFFFF000uLL);
    Pool->ByteOffset = a1 & 0xFFF;
    Pool->ByteCount = 112;
    MmProbeAndLockPages(Pool, 0, IoModifyAccess);
    v4[1].Process = 0LL;
    LOWORD(v4[1].MappedSystemVa) = 8 * (((unsigned __int16)((v2 & 0xFFF) + 4407) >> 12) + 6);
    WORD1(v4[1].MappedSystemVa) = 0;
    v4[2].Next = (struct _MDL *)(v2 & 0xFFFFFFFFFFFFF000uLL);
    *(_DWORD *)(&v4[2].MdlFlags + 1) = v2 & 0xFFF;
    *(_DWORD *)&v4[2].Size = 312;
    MmProbeAndLockPages((struct _MDL *)((char *)v4 + 64), 0, IoModifyAccess);
    *(_QWORD *)(a1 + 104) = v4;
    *(_WORD *)(a1 + 48) |= 0x20u;
    return 0;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
}
