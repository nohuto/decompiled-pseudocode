void __fastcall DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(
        DMMVIDEOPRESENTTARGET *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  signed __int32 v7; // eax

  v5 = *((_QWORD *)this + 67);
  if ( ((*(_DWORD *)(v5 + 152) - 1) & 0xFFFFFFFD) == 0 )
  {
    KeCancelTimer((PKTIMER)(v5 + 16));
    KeFlushQueuedDpcs();
  }
  if ( ((_InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 67) + 152LL), 5) - 2) & 0xFFFFFFFD) != 0 )
  {
    v6 = *((_QWORD *)this + 67);
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 152), 0, 5);
    if ( v7 != 5 )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v6, 0LL, 152LL, a4) + 24) = v7;
  }
}
