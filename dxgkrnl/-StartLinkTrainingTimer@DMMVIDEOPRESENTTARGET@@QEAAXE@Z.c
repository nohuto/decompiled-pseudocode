void __fastcall DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(DMMVIDEOPRESENTTARGET *this, unsigned __int8 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // rdx
  unsigned int v7; // ecx

  v3 = a2;
  v4 = *((_QWORD *)this + 67);
  if ( ((*(_DWORD *)(v4 + 152) - 1) & 0xFFFFFFFD) == 0 )
  {
    KeCancelTimer((PKTIMER)(v4 + 16));
    KeFlushQueuedDpcs();
  }
  if ( !(_BYTE)v3 && *(_DWORD *)(*((_QWORD *)this + 67) + 152LL) != 2 )
    WdLogSingleEntry0(1LL);
  WdLogSingleEntry2(
    7LL,
    v3,
    _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 67) + 152LL), (_BYTE)v3 != 0 ? 1 : 3));
  v5 = *((_QWORD *)this + 67);
  v6 = *(_QWORD *)(*(_QWORD *)v5 + 2920LL);
  v7 = *(_DWORD *)(v6 + 516);
  if ( !(_BYTE)v3 )
    v7 = *(_DWORD *)(v6 + 520) - v7;
  KeSetTimer((PKTIMER)(v5 + 16), (LARGE_INTEGER)(-100000LL * v7), (PKDPC)(v5 + 80));
}
