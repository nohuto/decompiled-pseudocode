/*
 * XREFs of Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C0046FFC
 * Callers:
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C000DAC4 (Bulk_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C0011324 (Bulk_ProcessTransferEventWithED1.c)
 * Callees:
 *     ESM_AddEvent @ 0x1C000C3E8 (ESM_AddEvent.c)
 *     StageQueue_Release @ 0x1C0011840 (StageQueue_Release.c)
 *     TR_ReleaseSegments @ 0x1C001187C (TR_ReleaseSegments.c)
 *     Bulk_Stage_FreeScatterGatherList @ 0x1C00118C4 (Bulk_Stage_FreeScatterGatherList.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x1C0012F30 (Bulk_Transfer_CompleteCancelable.c)
 *     memmove @ 0x1C0020400 (memmove.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0033774 (Controller_HwVerifierBreakIfEnabled.c)
 */

void __fastcall Bulk_ProcessTransferEventWithHaltedCompletion(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  KSPIN_LOCK *v4; // r14
  size_t v5; // rbp
  KIRQL v9; // al
  __int64 v10; // r10
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rbp
  KIRQL v14; // dl
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx

  v4 = (KSPIN_LOCK *)(a1 + 96);
  v5 = a4;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_DWORD *)(a1 + 324) |= 4u;
  *(_BYTE *)(a1 + 104) = v9;
  *(_DWORD *)(a1 + 352) = 1;
  KeReleaseSpinLock(v4, v9);
  v10 = *(_QWORD *)(a1 + 56);
  _m_prefetchw((const void *)(v10 + 32));
  if ( (_InterlockedOr((volatile signed __int32 *)(v10 + 32), 0x20u) & 0x20) != 0 )
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD **)v10,
      *(_QWORD *)(v10 + 8),
      *(_QWORD *)(v10 + 24),
      0x2000000LL,
      "Received duplicate Transfer Event TRB with Halted Completion Code",
      0LL,
      0LL);
  else
    ESM_AddEvent((KSPIN_LOCK *)(v10 + 296), 154);
  v11 = *(_QWORD *)a2;
  *(_DWORD *)(v11 + 108) += v5;
  v12 = *(_QWORD *)(v11 + 48);
  *(_DWORD *)(v11 + 68) = a3;
  if ( (*(_DWORD *)(v12 + 32) & 1) != 0 && *(_DWORD *)(v11 + 76) == 2 )
    memmove(*(void **)(a2 + 64), *(const void **)(*(_QWORD *)(a2 + 72) + 16LL), v5);
  Bulk_Stage_FreeScatterGatherList(a1, a2);
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc(v4);
  v13 = *(_QWORD *)a2;
  if ( *(_BYTE *)(a2 + 44) )
  {
    IoFreeMdl(*(PMDL *)(a2 + 48));
    *(_QWORD *)(a2 + 48) = 0LL;
    *(_BYTE *)(a2 + 44) = 0;
  }
  TR_ReleaseSegments(a1, (const signed __int64 **)(a2 + 8), 1);
  TR_ReleaseSegments(a1, (const signed __int64 **)(a2 + 24), 0);
  StageQueue_Release((unsigned __int8 *)(v13 + 128), (unsigned __int8 *)a2);
  ++*(_DWORD *)(v11 + 116);
  Bulk_Transfer_CompleteCancelable(a1, v11, 0xFFFFFFFF, 0);
  v14 = *(_BYTE *)(a1 + 104);
  --*(_DWORD *)(a1 + 348);
  --*(_DWORD *)(a1 + 352);
  v15 = *(_DWORD *)(a1 + 324);
  KeReleaseSpinLock(v4, v14);
  if ( (v15 & 2) != 0 )
  {
    v16 = *(_QWORD *)(a1 + 56);
    if ( !*(_BYTE *)(v16 + 37)
      || (v17 = *(_QWORD *)(v16 + 136),
          _InterlockedIncrement((volatile signed __int32 *)(v17 + 20)) == *(_DWORD *)(v17 + 8)) )
    {
      ESM_AddEvent((KSPIN_LOCK *)(v16 + 296), 150);
    }
  }
}
