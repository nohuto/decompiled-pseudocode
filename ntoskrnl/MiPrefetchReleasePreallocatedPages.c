/*
 * XREFs of MiPrefetchReleasePreallocatedPages @ 0x14063008C
 * Callers:
 *     MiPrefetchVirtualMemory @ 0x140363970 (MiPrefetchVirtualMemory.c)
 *     MiPrefetchPreallocatePages @ 0x14062FD08 (MiPrefetchPreallocatePages.c)
 * Callees:
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiFreePageChain @ 0x1404646F2 (MiFreePageChain.c)
 */

void __fastcall MiPrefetchReleasePreallocatedPages(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rcx
  unsigned __int64 v9; // rbx
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v12; // zf
  signed __int32 v13; // eax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v6 = *(_QWORD *)(a2 + 88);
  if ( v6 )
  {
    MiFreePageChain(v6);
    *(_QWORD *)(a2 + 88) = 0LL;
  }
  if ( a4 && *(_DWORD *)(a1 + 16) )
  {
    v9 = 512LL;
    MiReturnCommit(a3, 512LL, a3);
    if ( (unsigned __int16 *)a3 != MiSystemPartition )
      goto LABEL_15;
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable == -1 )
      goto LABEL_15;
    if ( (unsigned __int64)(CachedResidentAvailable + 512) <= 0x100 )
    {
      do
      {
        v13 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                CachedResidentAvailable + 512,
                CachedResidentAvailable);
        v12 = (_DWORD)CachedResidentAvailable == v13;
        LODWORD(CachedResidentAvailable) = v13;
        if ( v12 )
          goto LABEL_16;
      }
      while ( v13 != -1 && (unsigned __int64)(v13 + 512LL) <= 0x100 );
    }
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v9 = (int)CachedResidentAvailable - 192 + 512LL;
    }
    if ( v9 )
LABEL_15:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 17280), v9);
LABEL_16:
    *(_DWORD *)(a1 + 16) = 0;
  }
}
