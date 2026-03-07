__int64 __fastcall UsbhSet_D0_wQueued_Action(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 Pool2; // rax
  __int64 v9; // rbx
  KIRQL v10; // al
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  unsigned int v13; // edi

  FdoExt(a1);
  Pool2 = ExAllocatePool2(64LL, 144LL, 1112885333LL);
  v9 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)Pool2 = 2018662224;
    *(_DWORD *)(Pool2 + 32) = 1;
    *(_QWORD *)(Pool2 + 48) = a3;
    *(_QWORD *)(Pool2 + 40) = a1;
    if ( a4 )
    {
      *(_DWORD *)(Pool2 + 28) = *(_DWORD *)(*(_QWORD *)(a4 + 184) + 24LL);
      *(_QWORD *)(Pool2 + 64) = a4;
    }
    *(_QWORD *)(Pool2 + 72) = a2;
    *(_QWORD *)(Pool2 + 80) = KeGetCurrentThread();
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    *(_DWORD *)(a2 + 136) = 1;
    *(_BYTE *)(a2 + 132) = v10;
    v11 = (_QWORD *)qword_1C006B660;
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
    v12 = (_QWORD *)(v9 + 8);
    if ( *(__int64 **)qword_1C006B660 != &qword_1C006B658 )
      __fastfail(3u);
    *(_QWORD *)(v9 + 16) = qword_1C006B660;
    *v12 = &qword_1C006B658;
    *v11 = v12;
    qword_1C006B660 = v9 + 8;
    *(_DWORD *)(a2 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a2 + 132));
    v13 = UsbhFdoScheduleDeferredPowerRequest(a1, UsbhPdoSetD0, v9, a4);
    if ( (v13 & 0xC0000000) == 0xC0000000 )
      UsbhReleasePowerContext(a1, v9);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v13;
}
