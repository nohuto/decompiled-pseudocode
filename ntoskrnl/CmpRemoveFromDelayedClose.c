/*
 * XREFs of CmpRemoveFromDelayedClose @ 0x14074BFBC
 * Callers:
 *     CmpCleanUpKCBCacheTable @ 0x14074B9E4 (CmpCleanUpKCBCacheTable.c)
 *     CmpReferenceKeyControlBlock @ 0x14074BF00 (CmpReferenceKeyControlBlock.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140A14AA4 (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 */

void __fastcall CmpRemoveFromDelayedClose(__int64 a1)
{
  char v2; // al
  __int64 v3; // rdx
  _BYTE *v4; // rcx
  _QWORD *v5; // rax
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayedCloseTableLock);
  v2 = *(_BYTE *)(a1 + 64);
  if ( (v2 & 2) != 0 )
  {
    v3 = a1 + 224;
    if ( (v2 & 4) != 0 )
    {
      **(_BYTE **)v3 = 1;
      *(_BYTE *)(a1 + 64) &= ~4u;
    }
    else
    {
      v4 = *(_BYTE **)v3;
      if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3 || (v5 = *(_QWORD **)(a1 + 232), *v5 != v3) )
        __fastfail(3u);
      --CmpDelayedCloseElements;
      *v5 = v4;
      *((_QWORD *)v4 + 1) = v5;
      --qword_140D552E8;
    }
    *(_QWORD *)(a1 + 232) = a1 + 224;
    *(_QWORD *)v3 = v3;
    _InterlockedOr(v6, 0);
    *(_BYTE *)(a1 + 64) &= ~2u;
  }
  ExReleaseFastMutex((PFAST_MUTEX)&CmpDelayedCloseTableLock);
}
