__int64 __fastcall VIDMM_GLOBAL::UncommitVirtualAddressRangeSystemCommand(
        VIDMM_GLOBAL *this,
        struct _VIDMM_SYSTEM_COMMAND *a2)
{
  struct _LIST_ENTRY *v2; // rsi
  __int64 v5; // rcx
  __int64 v6; // rbx
  VIDMM_GLOBAL *v7; // rcx
  struct VIDMM_ALLOC *v8; // [rsp+60h] [rbp+8h] BYREF

  v8 = this;
  v2 = (struct _LIST_ENTRY *)*((_QWORD *)a2 + 7);
  if ( !v2 )
    goto LABEL_2;
  if ( v2[1].Flink->Flink )
  {
    v6 = *((_QWORD *)a2 + 5);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v6 + 56));
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v7, v2);
    *(_QWORD *)(v6 + 64) = 0LL;
    ExReleasePushLockExclusiveEx(v6 + 56, 0LL);
    KeLeaveCriticalRegion();
    operator delete(*((void **)a2 + 7));
LABEL_2:
    v8 = 0LL;
    return CVirtualAddressAllocator::UncommitVirtualAddressRange(
             *((CVirtualAddressAllocator **)a2 + 5),
             *((struct VIDMM_MAPPED_VA_RANGE **)a2 + 6),
             &v8,
             1u);
  }
  WdLogSingleEntry1(1LL, 22394LL);
  DxgkLogInternalTriageEvent(v5, 0x40000LL);
  return 0LL;
}
