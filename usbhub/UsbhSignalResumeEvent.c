void __fastcall UsbhSignalResumeEvent(__int64 a1, __int64 a2)
{
  __int64 v4; // r9
  KIRQL v5; // r10
  __int64 v6; // [rsp+20h] [rbp-18h]

  if ( (unsigned int)UsbhLogSignalResumeEvent(a1, a2) )
  {
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
    v4 = *(int *)(a2 + 12);
    v6 = *(unsigned __int16 *)(a2 + 4);
    *(_DWORD *)(a2 + 448) = 1;
    Log(a1, 16, 1886479734, v4, v6);
    *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1396) = 30;
    *(_DWORD *)(a2 + 448) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v5);
  }
}
