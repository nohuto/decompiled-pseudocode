void __fastcall UsbhPdoIdleCC_Worker(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  _DWORD *v5; // rbp
  KIRQL v6; // al
  int v7; // ebx
  PIRP v8; // rbx
  __int64 *v9; // r10
  __int64 v10; // r10

  FdoExt(a1);
  v5 = PdoExt(a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xCu,
      (__int64)&WPP_20a1a4b3b64f3a3fd9fa92029fc64dd2_Traceguids,
      *((unsigned __int16 *)v5 + 714));
  Log(a1, 0x10000, 1768189015, a3, *((unsigned __int16 *)v5 + 714));
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v5 + 256);
  v7 = v5[384];
  KeReleaseSpinLock((PKSPIN_LOCK)v5 + 256, v6);
  if ( v7 == 1 )
  {
    KeWaitForSingleObject(v5 + 514, Executive, 0, 0, 0LL);
    v8 = IoCsqRemoveNextIrp((PIO_CSQ)(v5 + 366), 0LL);
    Log(a1, 16, 1919764785, a3, (__int64)v8);
    if ( v8 )
    {
      UsbhIdleIrp_Event(a1, a3, v8, 2u, 0);
      KeSetEvent((PRKEVENT)(v5 + 514), 0, 0);
      if ( v5[198] == 1 )
      {
        Log(
          a1,
          16,
          1231249969,
          (__int64)v8->Tail.Overlay.CurrentStackLocation->Parameters.CreatePipe.Parameters,
          (__int64)v8);
        if ( v9 )
        {
          if ( *v9 )
          {
            Log(a1, 16, 1231249970, *v9, v9[1]);
            (*(void (__fastcall **)(_QWORD))v10)(*(_QWORD *)(v10 + 8));
          }
        }
      }
      KeWaitForSingleObject(v5 + 514, Executive, 0, 0, 0LL);
      UsbhIdleIrp_Event(a1, a3, v8, 4u, v5[360]);
      KeSetEvent((PRKEVENT)(v5 + 514), 0, 0);
    }
    else
    {
      KeSetEvent((PRKEVENT)(v5 + 514), 0, 0);
      UsbhIdleIrp_Event(a1, a3, 0LL, 3u, 0);
    }
    UsbhUnlatchPdo(a1, a3, (__int64)v5, 0x656C6449u);
  }
  else
  {
    UsbhUnlatchPdo(a1, a3, (__int64)v5, 0x656C6449u);
    Log(a1, 0x10000, 1768189006, a3, *((unsigned __int16 *)v5 + 714));
  }
}
