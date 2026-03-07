__int64 __fastcall UsbhPdoSystemPowerState(__int64 a1, __int64 a2, IRP *a3)
{
  __int64 v6; // r15
  __int64 v7; // rsi
  unsigned int LowPart; // r14d
  __int64 v9; // rbx
  KIRQL v10; // al
  int v11; // ecx
  __int64 v12; // r8
  int v13; // r9d
  __int64 v14; // rbx
  KIRQL v15; // dl
  int v16; // edx
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 CurrentStackLocation; // rbx
  __int64 v20; // r11
  __int64 v21; // rax
  __int64 v22; // r10
  __int64 v23; // r11
  __int64 v24; // r10
  __int64 v25; // r11

  v6 = PdoExt(a2);
  v7 = PdoExt(a2) + 944;
  Log(a1, 16, 1885622387, a2, (__int64)a3);
  LowPart = a3->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v9 = FdoExt(a1);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v9 + 5056));
  v11 = *(_DWORD *)(v9 + 4172);
  *(_BYTE *)(v9 + 5064) = v10;
  *(_DWORD *)(v7 + 40) = v11;
  *(_DWORD *)(v7 + 44) = 126;
  *(_DWORD *)(v7 + 32) = 844055622;
  *(_DWORD *)(v7 + 36) = 1937339216;
  *(_QWORD *)(v7 + 24) = KeGetCurrentThread();
  *(_QWORD *)(v9 + 1344) = v7;
  v13 = *(_DWORD *)(PdoExt(a2) + 1128);
  if ( LowPart == 1 )
    UsbhSetPdoPowerState(v7, a2, v12, v13, 10);
  else
    UsbhSetPdoPowerState(v7, a2, v12, v13, 11);
  *(_DWORD *)(v6 + 792) = LowPart;
  v14 = FdoExt(a1);
  FdoExt(*(_QWORD *)(v7 + 8));
  *(_DWORD *)(v7 + 32) = 1734964085;
  v15 = *(_BYTE *)(v14 + 5064);
  *(_QWORD *)(v14 + 1344) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v14 + 5056), v15);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dd(
      WPP_GLOBAL_Control->DeviceExtension,
      v16,
      1,
      21,
      (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids,
      *(_WORD *)(v6 + 1428),
      LowPart);
  v17 = *(_QWORD *)(PdoExt(a2) + 1184);
  v18 = PdoExt(a2);
  CurrentStackLocation = (__int64)a3->Tail.Overlay.CurrentStackLocation;
  v20 = v18;
  v21 = *(unsigned int *)(CurrentStackLocation + 16);
  if ( (unsigned int)v21 <= 1 )
  {
    Log(v17, 16, 1346653745, *(_QWORD *)(v20 + 8 * v21 + 800), (__int64)a3);
    Log(v17, 16, 1346653746, *(_QWORD *)(v23 + 8 * v22 + 816), CurrentStackLocation);
    *(_QWORD *)(v25 + 8 * v24 + 800) = 0LL;
    *(_QWORD *)(v25 + 8 * v24 + 816) = 0LL;
    *(_DWORD *)(v25 + 4 * v24 + 832) = 1757;
    PoStartNextPowerIrp(a3);
  }
  a3->IoStatus.Status = 0;
  IofCompleteRequest(a3, 0);
  return 0LL;
}
