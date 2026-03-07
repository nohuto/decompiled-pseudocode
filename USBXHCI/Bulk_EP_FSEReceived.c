void __fastcall Bulk_EP_FSEReceived(__int64 a1)
{
  KSPIN_LOCK *v2; // rdi
  KIRQL v3; // al
  int v4; // edx
  KIRQL v5; // dl

  if ( *(_DWORD *)(a1 + 64) )
  {
    v2 = (KSPIN_LOCK *)(a1 + 96);
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v4 = *(_DWORD *)(a1 + 324);
    *(_BYTE *)(a1 + 104) = v3;
    if ( (v4 & 8) != 0 )
    {
      v5 = v3;
    }
    else
    {
      Bulk_ProcessStreamOnEndpointStopOrHalt(a1);
      *(_DWORD *)(a1 + 324) |= 8u;
      v5 = *(_BYTE *)(a1 + 104);
    }
    KeReleaseSpinLock(v2, v5);
  }
}
