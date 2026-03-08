/*
 * XREFs of MiFreePhysicalPageChain @ 0x140647BC4
 * Callers:
 *     MiDeletePagablePteRange @ 0x1403244A0 (MiDeletePagablePteRange.c)
 *     NtFreeUserPhysicalPages @ 0x140A3F6B0 (NtFreeUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x140A3FC10 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140A3FEC0 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiFreePagesFromMdl @ 0x1402C0DD0 (MiFreePagesFromMdl.c)
 *     MiGetLeafPfnBuddy @ 0x140386E8C (MiGetLeafPfnBuddy.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreeContiguousLargePageRun @ 0x14064780C (MiFreeContiguousLargePageRun.c)
 *     MiFreePhysicalRange @ 0x140648248 (MiFreePhysicalRange.c)
 *     MiGetAweInfoPartition @ 0x1406482AC (MiGetAweInfoPartition.c)
 *     MiReadyLargeAwePageForFree @ 0x1406496AC (MiReadyLargeAwePageForFree.c)
 *     MiReturnProcessPhysicalPages @ 0x140A40FBC (MiReturnProcessPhysicalPages.c)
 */

unsigned __int64 __fastcall MiFreePhysicalPageChain(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // r15
  unsigned int v6; // r13d
  unsigned __int64 result; // rax
  unsigned __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rdx
  __int64 v14; // rdi
  ULONG_PTR *v15; // r12
  _QWORD *v16; // rdi
  __int64 v17; // rsi
  unsigned __int8 v18; // al
  __int64 v19; // r8
  unsigned __int8 v20; // r10
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  bool v25; // zf
  unsigned __int16 *v26; // rdx
  unsigned __int64 v27; // r8
  unsigned __int8 v28; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v30; // [rsp+30h] [rbp-D0h]
  unsigned __int64 LeafPfnBuddy; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v32; // [rsp+40h] [rbp-C0h]
  ULONG_PTR BugCheckParameter2[518]; // [rsp+50h] [rbp-B0h] BYREF

  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  result = MiGetAweInfoPartition(a1);
  v8 = *(_QWORD *)(a1 + 16);
  v32 = result;
  v30 = v8;
  if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
  {
    if ( a2 )
    {
      v9 = ((__int64)a2 - qword_140C67A70) >> 3;
      if ( (v9 & 0x3FFFFF) != 0 )
      {
        do
        {
          v9 &= 0x3FFFFFuLL;
          v10 = (v4 ^ (*(_QWORD *)(qword_140C67A70 + 8 * v9) >> 17)) & 0x3FFFFF;
          v4 ^= v10;
          result = MiFreePhysicalRange(v10, v8 * v9);
          LODWORD(v9) = v4;
        }
        while ( (v4 & 0x3FFFFF) != 0 );
      }
    }
    return result;
  }
  if ( v8 == 1 )
  {
    if ( !a2 )
      return result;
    v15 = &BugCheckParameter2[6];
    do
    {
      v16 = a2 + 2;
      v17 = (__int64)a2;
      a2 = (_QWORD *)a2[2];
      v18 = MiLockPageInline(v17);
      v19 = *(_QWORD *)(v17 + 24);
      v20 = v18;
      v28 = v18;
      *v16 = 0LL;
      *(_QWORD *)(v17 + 24) = v19 ^ ((v19 + 1) ^ v19) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v20 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v24 = ~(unsigned __int16)(-1LL << (v20 + 1));
          v25 = (v24 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v24;
          if ( v25 )
          {
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            v20 = v28;
          }
        }
      }
      __writecr8(v20);
      if ( v6 == 512 )
      {
        BugCheckParameter2[0] = 0LL;
        LODWORD(BugCheckParameter2[1]) = 135216;
        BugCheckParameter2[4] = 0LL;
        BugCheckParameter2[5] = 0x200000LL;
        MiFreePagesFromMdl((ULONG_PTR)BugCheckParameter2, 0);
        v5 += 512LL;
        v15 = &BugCheckParameter2[6];
        v6 = 0;
      }
      ++v6;
      *v15++ = 0xAAAAAAAAAAAAAAABuLL * ((v17 + 0x220000000000LL) >> 4);
      result = 0xFFFFDE0000000000uLL;
    }
    while ( a2 );
    v8 = v30;
    if ( v6 )
    {
      BugCheckParameter2[0] = 0LL;
      BugCheckParameter2[5] = v6 << 12;
      LOWORD(BugCheckParameter2[1]) = 8 * ((BugCheckParameter2[5] >> 12) + 6);
      BugCheckParameter2[4] = 0LL;
      WORD1(BugCheckParameter2[1]) = 2;
      MiFreePagesFromMdl((ULONG_PTR)BugCheckParameter2, 0);
      result = v6;
      v5 += v6;
    }
  }
  else
  {
    v11 = 0LL;
    v12 = -1LL;
    if ( !a2 )
      return result;
    do
    {
      LeafPfnBuddy = MiGetLeafPfnBuddy(a2);
      v5 += v8;
      MiReadyLargeAwePageForFree(a2);
      if ( v12 == -1LL )
      {
        v11 = v8;
        v12 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x44000000000LL) >> 4);
      }
      else
      {
        v11 += v8;
      }
      if ( &a2[6 * v8] != (_QWORD *)LeafPfnBuddy && v11 )
      {
        MiFreeContiguousLargePageRun(a1, v12, v11);
        v12 = -1LL;
        v11 = 0LL;
      }
      result = LeafPfnBuddy;
      a2 = (_QWORD *)LeafPfnBuddy;
    }
    while ( LeafPfnBuddy );
    if ( v11 )
    {
      v13 = v12;
      v14 = a1;
      result = MiFreeContiguousLargePageRun(a1, v13, v11);
      goto LABEL_32;
    }
  }
  v14 = a1;
LABEL_32:
  if ( v5 )
  {
    v26 = (unsigned __int16 *)v32;
    v27 = -v5;
    result = _InterlockedExchangeAdd64((volatile signed __int64 *)(v32 + 17832), -v5);
    if ( (*(_DWORD *)(v14 + 8) & 1) != 0 )
    {
      result = MiReturnProcessPhysicalPages(KeGetCurrentThread()->ApcState.Process, v5);
      v26 = (unsigned __int16 *)v32;
    }
    if ( v8 != 1 )
    {
      result = (unsigned __int64)MiSystemPartition;
      if ( v26 == MiSystemPartition )
        _InterlockedExchangeAdd64(&qword_140C69630, v27);
    }
  }
  return result;
}
