void __fastcall Usbh_PCE_HardwareWake_Action(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // r9
  int v7; // r10d
  int v8; // r11d
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // r10d
  __int64 v18; // rax
  int v19; // r10d
  __int64 v20; // rcx
  KIRQL v21; // dl
  __int64 v22; // r9
  int v23; // r11d
  __int64 v24; // rax
  int v25; // r10d
  __int64 NewIrql; // [rsp+50h] [rbp+18h] BYREF

  NewIrql = a3;
  LOBYTE(NewIrql) = 0;
  FdoExt(a1);
  v5 = UsbhLockPcqWithTag(a1, a2, 12, (KIRQL *)&NewIrql, 0);
  Log(a1, 512, 825389104, v5, *(unsigned __int16 *)(a2 + 4));
  if ( v7 > 10 )
  {
    switch ( v7 )
    {
      case 11:
      case 12:
      case 13:
        goto LABEL_28;
      case 14:
LABEL_27:
        Log(a1, v8, 825389105, v6, *(unsigned __int16 *)(a2 + 4));
        v18 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = v19;
        *(_DWORD *)(v18 + a2 + 1384) = v19;
        Log(a1, 16, 1886465325, *(int *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
        v20 = *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 448) = 0;
        v21 = NewIrql;
        *(_DWORD *)(32 * v20 + a2 + 1384) = *(_DWORD *)(a2 + 12);
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v21);
        return;
      case 15:
      case 16:
      case 17:
        goto LABEL_28;
    }
    if ( v7 != 18 && v7 != 20 )
      goto LABEL_25;
LABEL_26:
    Log(a1, v8, 825389110, v6, *(unsigned __int16 *)(a2 + 4));
    v16 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = v17;
    *(_DWORD *)(v16 + a2 + 1384) = v17;
    goto LABEL_30;
  }
  switch ( v7 )
  {
    case 10:
      goto LABEL_15;
    case 1:
      goto LABEL_26;
    case 2:
    case 3:
    case 4:
      goto LABEL_27;
    case 5:
    case 6:
LABEL_28:
      Log(a1, v8, 825389107, v6, *(unsigned __int16 *)(a2 + 4));
      v24 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = v25;
      *(_DWORD *)(v24 + a2 + 1384) = v25;
      if ( *(_DWORD *)(a2 + 400) == 5 )
        Log(a1, v23, 825389161, v22, *(unsigned __int16 *)(a2 + 4));
      goto LABEL_30;
    case 7:
      Log(a1, v8, 825389106, v6, *(unsigned __int16 *)(a2 + 4));
      v13 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 2;
      *(_DWORD *)(v13 + a2 + 1384) = 2;
      *(_DWORD *)(a2 + 400) = 0;
      goto LABEL_13;
    case 8:
LABEL_15:
      Log(a1, v8, 825389108, v6, *(unsigned __int16 *)(a2 + 4));
      v14 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 10;
      *(_DWORD *)(v14 + a2 + 1384) = 10;
      goto LABEL_30;
  }
  if ( v7 != 9 )
  {
LABEL_25:
    Log(a1, v8, 825389144, v6, *(unsigned __int16 *)(a2 + 4));
    v12 = 19LL;
    v15 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 19;
    *(_DWORD *)(v15 + a2 + 1384) = 19;
    goto LABEL_30;
  }
  Log(a1, v8, 825389109, v6, *(unsigned __int16 *)(a2 + 4));
  UsbhRemoveQueuedSuspend(a1, a2, v9, v10);
  v11 = 32LL * *(unsigned int *)(a2 + 2400);
  *(_DWORD *)(a2 + 12) = 4;
  *(_DWORD *)(v11 + a2 + 1384) = 4;
LABEL_13:
  UsbhSetPcqEventStatus(a1, a2, 2LL);
  KeResetEvent((PRKEVENT)(a2 + 472));
LABEL_30:
  LOBYTE(v12) = NewIrql;
  UsbhUnlockPcqWithTag(a1, a2, v12, 0LL);
}
