/*
 * XREFs of ?ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C0056C80
 * Callers:
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C00568CC (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 *     NtDCompositionConfirmFrame @ 0x1C0056920 (NtDCompositionConfirmFrame.c)
 * Callees:
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     ?ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z @ 0x1C005FC8C (-ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CApplicationChannel::ReturnProcessedBatch(
        union _SLIST_HEADER *this,
        struct _SLIST_ENTRY *a2)
{
  struct _SLIST_ENTRY *Next; // rcx
  bool v5; // zf
  ULONGLONG v6; // rcx
  ULONGLONG Region; // rsi
  unsigned int v8; // edi
  struct _ERESOURCE *v9; // rbx
  LARGE_INTEGER *Alignment; // rbx

  Next = a2[6].Next;
  if ( Next )
    ObfDereferenceObject(Next);
  LOBYTE(a2[2].Next) &= ~0x10u;
  v5 = HIDWORD(a2[1].Next) == 6;
  a2[6].Next = 0LL;
  if ( v5 )
  {
    Region = this[2].Region;
    v8 = *((_DWORD *)&this[1].HeaderX64 + 3);
    v9 = *(struct _ERESOURCE **)(Region + 72);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v9, 1u);
    DirectComposition::CLinearObjectTableBase::ReleaseHandle(
      (DirectComposition::CLinearObjectTableBase *)(Region + 16),
      v8);
    ExReleaseResourceLite(*(PERESOURCE *)(Region + 72));
    KeLeaveCriticalRegion();
    Win32FreePool((__int64)a2);
    (*(void (__fastcall **)(union _SLIST_HEADER *, __int64))(this->Alignment + 32))(this, 1LL);
  }
  else
  {
    v6 = this[22].Region;
    *((_DWORD *)&this[23].HeaderX64 + 3) = a2[1].Next;
    if ( v6 && !this[23].Alignment )
      KeSetEvent(*(PRKEVENT *)(v6 + 8), 1, 0);
    if ( ((__int64)a2[2].Next & 8) != 0 )
      *((_BYTE *)&this[15].Header8 + 2) = 0;
    if ( (this[15].Alignment & 0x400) != 0 )
    {
      Alignment = (LARGE_INTEGER *)this[45].Alignment;
      Alignment[8].LowPart = (DWORD)a2[1].Next;
      Alignment[7] = KeQueryPerformanceCounter(0LL);
    }
    ExpInterlockedPushEntrySList(this + 12, a2);
    KeSetEvent(*(PRKEVENT *)(this[13].Region + 8), 1, 0);
  }
}
