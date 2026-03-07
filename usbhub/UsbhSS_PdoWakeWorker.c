void __fastcall UsbhSS_PdoWakeWorker(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r14
  __int64 v6; // rdi
  KIRQL v7; // al
  bool v8; // zf
  KIRQL v9; // dl
  __int64 v10; // rbx
  KIRQL v11; // al
  int v12; // ecx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  KIRQL v16; // dl
  unsigned __int8 v17; // al
  int v18; // edx
  int v19; // r8d
  char v20; // r10

  FdoExt(a1);
  v5 = PdoExt(a3);
  v6 = PdoExt(a3) + 944;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      10,
      (__int64)&WPP_20a1a4b3b64f3a3fd9fa92029fc64dd2_Traceguids,
      *(_WORD *)(v5 + 1428));
  Log(a1, 0x10000, 1936945239, a3, *(unsigned __int16 *)(v5 + 1428));
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  *(_DWORD *)(v6 + 136) = 1;
  *(_BYTE *)(v6 + 132) = v7;
  *(_DWORD *)(v6 + 88) = 2018460752;
  *(_DWORD *)(v6 + 92) = 12;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))v6;
  *(_QWORD *)(v6 + 24) = KeGetCurrentThread();
  v8 = *(_DWORD *)(PdoExt(a3) + 1124) == 3;
  *(_DWORD *)(v6 + 136) = 0;
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  *(_DWORD *)(v6 + 88) = 1734964085;
  v9 = *(_BYTE *)(v6 + 132);
  if ( v8 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v9);
    v10 = FdoExt(a1);
    v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 5056));
    v12 = *(_DWORD *)(v10 + 4172);
    *(_BYTE *)(v10 + 5064) = v11;
    *(_DWORD *)(v6 + 40) = v12;
    *(_DWORD *)(v6 + 44) = 126;
    *(_DWORD *)(v6 + 32) = 844055622;
    *(_DWORD *)(v6 + 36) = 1986356311;
    *(_QWORD *)(v6 + 24) = KeGetCurrentThread();
    *(_QWORD *)(v10 + 1344) = v6;
    FdoExt(*(_QWORD *)(v6 + 8));
    LODWORD(v10) = *(_DWORD *)(FdoExt(*(_QWORD *)(v6 + 8)) + 4172);
    v14 = *(unsigned int *)(PdoExt(a3) + 1128);
    if ( (_DWORD)v10 == 201 && ((_DWORD)v14 != 1 || (*(_DWORD *)(v5 + 1420) & 4) != 0) )
    {
      UsbhSetPdoPowerState(v6, a3, v13, v14, 12);
      v15 = FdoExt(a1);
      FdoExt(*(_QWORD *)(v6 + 8));
      *(_DWORD *)(v6 + 32) = 1734964085;
      v16 = *(_BYTE *)(v15 + 5064);
      *(_QWORD *)(v15 + 1344) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(v15 + 5056), v16);
      v17 = UsbhCompletePdoWakeIrp(a1, a3, 0LL);
      Log(a1, 0x10000, 1936938801, v17, a3);
      if ( v20
        && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_dq(
          WPP_GLOBAL_Control->DeviceExtension,
          v18,
          v19,
          11,
          (__int64)&WPP_20a1a4b3b64f3a3fd9fa92029fc64dd2_Traceguids,
          *(_WORD *)(v5 + 1428),
          a3);
      }
    }
    else
    {
      UsbhReleaseFdoPwrLock(a1, v6, v13, v14);
    }
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v9);
  }
  UsbhUnlatchPdo(a1, a3, 0LL, 0x73737057u);
}
