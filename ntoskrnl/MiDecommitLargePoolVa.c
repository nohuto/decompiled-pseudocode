/*
 * XREFs of MiDecommitLargePoolVa @ 0x14020FF88
 * Callers:
 *     MiDeleteNonPagedPoolPte @ 0x14020E220 (MiDeleteNonPagedPoolPte.c)
 * Callees:
 *     MiWriteTopLevelPxe @ 0x140201C64 (MiWriteTopLevelPxe.c)
 *     MiLockAndDecrementShareCount @ 0x140210114 (MiLockAndDecrementShareCount.c)
 *     MiInsertLargeTbFlushEntry @ 0x140210194 (MiInsertLargeTbFlushEntry.c)
 *     MiGetContainingPageTable @ 0x140289FE0 (MiGetContainingPageTable.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MiFreeLargePageMemory @ 0x1403505C0 (MiFreeLargePageMemory.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14061B438 (MiLogPerfMemoryRangeEvent.c)
 */

__int64 __fastcall MiDecommitLargePoolVa(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned int v6; // edi
  unsigned __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 ContainingPageTable; // rax
  unsigned __int64 v11; // rbx
  int v12; // r14d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 *v16; // rax
  __int64 result; // rax
  bool v18; // zf
  __int64 v19; // [rsp+20h] [rbp-108h] BYREF
  _QWORD v20[24]; // [rsp+30h] [rbp-F8h] BYREF

  memset(v20, 0, 0xB8uLL);
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogPerfMemoryRangeEvent(a1, 0LL, 10LL, a3);
  v6 = 0;
  LODWORD(v20[1]) = 20;
  v20[3] = 0LL;
  v19 = MI_READ_PTE_LOCK_FREE(a2);
  v7 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v19) >> 12) & 0xFFFFFFFFFFLL;
  *(_QWORD *)(48 * v7 - 0x220000000000LL) = 0LL;
  ContainingPageTable = MiGetContainingPageTable(a2, v8, v9);
  MiLockAndDecrementShareCount(48 * ContainingPageTable - 0x220000000000LL, 0LL);
  if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    MiWriteTopLevelPxe(a2, ZeroPte);
    goto LABEL_7;
  }
  v11 = ZeroPte;
  v12 = 0;
  if ( (unsigned int)MiPteInShadowRange(a2) )
  {
    if ( (unsigned int)MiPteHasShadow(v14, v13, v15) )
    {
      v12 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_5;
      v18 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_5;
      v18 = (ZeroPte & 1) == 0;
    }
    if ( !v18 )
      v11 = ZeroPte | 0x8000000000000000uLL;
  }
LABEL_5:
  *a2 = v11;
  if ( v12 )
    MiWritePteShadow(a2, v11);
LABEL_7:
  MiInsertLargeTbFlushEntry(v20, 1LL, a2);
  MiFlushTbList(v20);
  v16 = MiLargePageSizes;
  do
  {
    if ( *v16 == a3 )
      break;
    ++v6;
    ++v16;
  }
  while ( v6 < 3 );
  result = MiFreeLargePageMemory(v7, v6, 4LL);
  _InterlockedExchangeAdd64(&qword_140C69618, -a3);
  return result;
}
