void __fastcall Bulk_Cleanup(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // eax

  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  if ( Bulk_DoesDriverOwnRequests((_QWORD *)a1) && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v2 = *(_QWORD *)(a1 + 56);
    v3 = *(_DWORD *)(v2 + 144);
    LOBYTE(v2) = 2;
    WPP_RECORDER_SF_DDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
      v2,
      14,
      10,
      (__int64)&WPP_92c598da33ef340e00f5370896d293ba_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
      v3,
      *(_DWORD *)(a1 + 64));
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
}
