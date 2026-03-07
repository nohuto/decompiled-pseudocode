void __fastcall DirectComposition::CApplicationChannel::ReturnProcessedBatch(
        union _SLIST_HEADER *this,
        struct DirectComposition::CBatch *a2)
{
  ULONGLONG v4; // rcx
  ULONGLONG Region; // rsi
  unsigned int v6; // edi
  struct _ERESOURCE *v7; // rbx
  struct _SLIST_HEADER::$81D0B81343CD6A575F52E6033C50E59F v8; // [rsp+20h] [rbp-18h]

  DirectComposition::CBatch::SetSynchronizationObject(a2, 0LL);
  if ( *((_DWORD *)a2 + 5) == 6 )
  {
    Region = this[2].Region;
    v6 = *((_DWORD *)&this[1].HeaderX64 + 3);
    v7 = *(struct _ERESOURCE **)(Region + 72);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v7, 1u);
    DirectComposition::CLinearObjectTableBase::ReleaseHandle(
      (DirectComposition::CLinearObjectTableBase *)(Region + 16),
      v6);
    ExReleaseResourceLite(*(PERESOURCE *)(Region + 72));
    KeLeaveCriticalRegion();
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, a2);
    (*(void (__fastcall **)(union _SLIST_HEADER *, __int64))(this->Alignment + 32))(this, 1LL);
  }
  else
  {
    *((_DWORD *)&this[24].HeaderX64 + 1) = *((_DWORD *)a2 + 4);
    *(_QWORD *)&v8 = *((unsigned int *)a2 + 4);
    *((_QWORD *)&v8 + 1) = *((_QWORD *)a2 + 7);
    *(struct _SLIST_HEADER::$81D0B81343CD6A575F52E6033C50E59F *)((char *)&this[(*((_DWORD *)a2 + 4) & 0x7F) + 33].HeaderX64
                                                               + 8) = v8;
    v4 = this[22].Region;
    if ( v4 && !this[23].Alignment )
      KeSetEvent(*(PRKEVENT *)(v4 + 8), 1, 0);
    if ( (*((_BYTE *)a2 + 32) & 8) != 0 )
      *((_BYTE *)&this[15].Header8 + 2) = 0;
    ExpInterlockedPushEntrySList(this + 12, (PSLIST_ENTRY)a2);
    KeSetEvent(*(PRKEVENT *)(this[13].Region + 8), 1, 0);
  }
}
