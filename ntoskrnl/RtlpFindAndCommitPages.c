/*
 * XREFs of RtlpFindAndCommitPages @ 0x1405AAC2C
 * Callers:
 *     RtlpExtendHeap @ 0x1405AA9D8 (RtlpExtendHeap.c)
 * Callees:
 *     RtlpHpHeapCheckCommitLimit @ 0x1402B738C (RtlpHpHeapCheckCommitLimit.c)
 *     DbgPrint @ 0x1402BDD20 (DbgPrint.c)
 *     ZwAllocateVirtualMemory @ 0x140412610 (ZwAllocateVirtualMemory.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     RtlpCreateUCREntry @ 0x1405AA2DC (RtlpCreateUCREntry.c)
 *     RtlpRemoveUCRBlock @ 0x1405ABC2C (RtlpRemoveUCRBlock.c)
 *     RtlpUpdateHeapRates @ 0x1405AC014 (RtlpUpdateHeapRates.c)
 *     RtlpLogHeapFailure @ 0x1405B2884 (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x1405B28D8 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapHandleError @ 0x1405B2C0C (RtlpHeapHandleError.c)
 *     RtlpFindUCREntry @ 0x1405B302C (RtlpFindUCREntry.c)
 */

unsigned __int64 __fastcall RtlpFindAndCommitPages(__int64 a1, ULONG_PTR *a2)
{
  __int64 UCREntry; // rax
  __int64 v5; // r15
  unsigned __int64 v6; // rdi
  char v7; // bp
  __int64 v8; // rax
  __int64 v9; // rsi
  int updated; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r9
  ULONG_PTR v18; // rdx
  __int64 v19; // rdx
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF

  UCREntry = RtlpFindUCREntry(a1, *a2);
  v5 = UCREntry;
  if ( UCREntry == a1 + 240 )
    return 0LL;
  if ( RtlpHeapErrorHandlerThreshold >= 1 && *(_QWORD *)(UCREntry + 40) < *a2 )
  {
    DbgPrint("(UCRBlock->Size >= *Size)");
    RtlpHeapHandleError();
  }
  v6 = UCREntry - 16;
  v7 = 0;
  v8 = *(unsigned __int8 *)(UCREntry - 16 + 14);
  if ( (_BYTE)v8 )
    v9 = (v6 & 0xFFFFFFFFFFFF0000uLL) - (v8 << 16) + 0x10000;
  else
    v9 = a1;
  BaseAddress = *(PVOID *)(v5 + 32);
  if ( RtlpHeapKey != *(_QWORD *)(a1 + 360) )
  {
    updated = ((__int64 (__fastcall *)(__int64, PVOID *, ULONG_PTR *))(RtlpHeapKey ^ *(_QWORD *)(a1 + 360)))(
                a1,
                &BaseAddress,
                a2);
  }
  else
  {
    v14 = (*a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    *a2 = v14;
    if ( (unsigned int)RtlpHpHeapCheckCommitLimit(
                         v14,
                         *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664),
                         a1,
                         (unsigned __int64 *)(a1 + 376)) )
      ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, a2, 0x1000u, 4u);
    updated = RtlpUpdateHeapRates(a1, 2LL);
  }
  if ( updated < 0 )
  {
    ++*(_DWORD *)(a1 + 632);
    return 0LL;
  }
  if ( *(_DWORD *)(a1 + 124) )
  {
    v11 = *(unsigned int *)(a1 + 136);
    *(_DWORD *)(v6 + 8) ^= v11;
    LOBYTE(v11) = *(_BYTE *)(v6 + 8) ^ *(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10);
    if ( *(_BYTE *)(v6 + 11) != (_BYTE)v11 )
      RtlpAnalyzeHeapFailure(a1, v6);
  }
  *(_BYTE *)(v6 + 10) = 0;
  *(_BYTE *)(v6 + 15) = 0;
  RtlpRemoveUCRBlock(v11, v5, v12, v13);
  --*(_DWORD *)(v9 + 84);
  *(_DWORD *)(v9 + 80) -= *(_QWORD *)(v5 + 40) >> 12;
  *(_QWORD *)(a1 + 576) += *(_QWORD *)(v5 + 40);
  ++*(_DWORD *)(a1 + 608);
  --*(_DWORD *)(a1 + 604);
  v16 = *(_QWORD *)(v5 + 40);
  if ( v16 >= 0xFF000 )
    *(_QWORD *)(a1 + 584) -= v16;
  v17 = *(_QWORD *)(v5 + 40);
  v18 = *a2;
  if ( v17 > *a2 || v17 + *(_QWORD *)(v5 + 32) == *(_QWORD *)(v9 + 72) )
  {
    RtlpCreateUCREntry(a1, v9, v18 - 48 + *(_QWORD *)(v5 + 32), v17 - v18, v6, (__int64 *)a2);
    *a2 *= 16LL;
  }
  else
  {
    *a2 = v18 + 16LL * *(unsigned __int16 *)(v6 + 8);
  }
  *(_BYTE *)(v6 + 11) = 0;
  v19 = *(_QWORD *)(v9 + 40);
  if ( v19 != v9 )
  {
    if ( ((v6 - v9) >> 16) + 1 >= 0xFE )
      RtlpLogHeapFailure(3, v19, v6, v9, 0LL, 0LL);
    v7 = ((unsigned int)(v6 - v9) >> 16) + 1;
  }
  *(_BYTE *)(v6 + 14) = v7;
  return v6;
}
