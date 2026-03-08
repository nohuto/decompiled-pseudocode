/*
 * XREFs of UsbhWaitConnect @ 0x1C0018530
 * Callers:
 *     UsbhHubDispatchPortEvent @ 0x1C0017430 (UsbhHubDispatchPortEvent.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhRequestPortSuspend @ 0x1C0018D14 (UsbhRequestPortSuspend.c)
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     UsbhAcquirePdoStateLock @ 0x1C0031CB0 (UsbhAcquirePdoStateLock.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C00484FC (WPP_RECORDER_SF_dDD.c)
 *     UsbhBusUnlatchPdo @ 0x1C004C9E8 (UsbhBusUnlatchPdo.c)
 *     UsbhHandleOvercurrent @ 0x1C004CC94 (UsbhHandleOvercurrent.c)
 *     UsbhDeletePdo @ 0x1C005409C (UsbhDeletePdo.c)
 */

__int64 __fastcall UsbhWaitConnect(PDEVICE_OBJECT a1, unsigned int a2, unsigned __int8 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r14d
  __int64 v7; // r15
  __int64 v9; // rdi
  void *DeviceExtension; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  KSPIN_LOCK *v17; // rbx
  KIRQL v18; // r15
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rdx
  KIRQL v26; // al
  __int64 v27; // r9
  __int64 v28; // r10
  __int64 v29; // rcx
  __int64 v30; // rdx
  int v31; // edx
  unsigned int v32; // ebx
  unsigned int v33; // ebx
  unsigned int v34; // ebx
  __int64 v35; // r9
  __int64 (__fastcall *v36)(); // rax
  __int64 v38; // r9
  __int64 v39; // r9
  __int64 v40; // r9
  __int64 v41; // r9
  __int64 v42; // r9
  __int64 v43; // rbp
  int v44; // r9d
  __int64 v45; // rax
  KIRQL v46; // dl

  v5 = *(_DWORD *)(a4 + 400);
  v7 = a3;
  v9 = (__int64)a1;
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      DeviceExtension = a1->DeviceExtension;
      if ( DeviceExtension )
      {
        a1 = (PDEVICE_OBJECT)(*((_QWORD *)DeviceExtension + 111)
                            + 32LL
                            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221)));
        *(_DWORD *)&a1->Type = 1313754947;
        a1->AttachedDevice = (_DEVICE_OBJECT *)a2;
        a1->DriverObject = 0LL;
        a1->NextDevice = (_DEVICE_OBJECT *)a4;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a1 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dDD(
        WPP_GLOBAL_Control->DeviceExtension,
        *(unsigned __int16 *)(a4 + 4),
        a3,
        10,
        (__int64)&WPP_514d3d48908635b064432894a9af1f2f_Traceguids,
        *(_WORD *)(a4 + 4),
        a3,
        a2);
  }
  if ( a2 == 0x80000 )
  {
    if ( (UsbhLogMask & 4) != 0 )
    {
      if ( v9 )
      {
        v11 = *(_QWORD *)(v9 + 64);
        if ( v11 )
        {
          a1 = (PDEVICE_OBJECT)(*(_QWORD *)(v11 + 888)
                              + 32LL
                              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884)));
          *(_DWORD *)&a1->Type = 1884180291;
          a1->DriverObject = 0LL;
          a1->NextDevice = (_DEVICE_OBJECT *)v7;
          a1->AttachedDevice = 0LL;
        }
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      a1 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          43,
          (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
          *(_WORD *)(a4 + 4));
    }
    if ( (UsbhLogMask & 0x400) != 0 )
    {
      if ( v9 )
      {
        v12 = *(_QWORD *)(v9 + 64);
        if ( v12 )
        {
          a1 = (PDEVICE_OBJECT)(*(_QWORD *)(v12 + 888)
                              + 32LL
                              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884)));
          *(_DWORD *)&a1->Type = 1313175651;
          a1->DriverObject = 0LL;
          a1->NextDevice = (_DEVICE_OBJECT *)a4;
          a1->AttachedDevice = 0LL;
        }
      }
    }
    if ( a5 )
    {
      v43 = *(_QWORD *)(a4 + 376);
      UsbhAcquirePdoStateLock(a1, v43, 19LL);
      if ( PdoExt(a5)[281] == 2 )
      {
        UsbhBusUnlatchPdo(v9, a5, a4, v44, v43 + 132);
        UsbhDeletePdo(v9, a5, 2LL);
      }
      else
      {
        v45 = *(_QWORD *)(a4 + 376);
        *(_DWORD *)(v45 + 136) = 0;
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        v46 = *(_BYTE *)(v45 + 132);
        *(_DWORD *)(v45 + 88) = 1734964085;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v46);
      }
    }
    return 4;
  }
  if ( a2 == 0x100000 )
  {
    if ( (UsbhLogMask & 4) != 0 )
    {
      if ( v9 )
      {
        v14 = *(_QWORD *)(v9 + 64);
        if ( v14 )
        {
          v15 = *(_QWORD *)(v14 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
          *(_DWORD *)v15 = 1833848643;
          *(_QWORD *)(v15 + 8) = 0LL;
          *(_QWORD *)(v15 + 16) = v7;
          *(_QWORD *)(v15 + 24) = 0LL;
        }
        goto LABEL_28;
      }
    }
    else if ( v9 )
    {
LABEL_28:
      v16 = *(_QWORD *)(v9 + 64);
      if ( !v16 )
        UsbhTrapFatal_Dbg(v9, 0LL);
      if ( *(_DWORD *)v16 != 541218120 )
        UsbhTrapFatal_Dbg(v9, *(_QWORD *)(v9 + 64));
      v17 = (KSPIN_LOCK *)(v16 + 4944);
      v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v16 + 4944));
      v19 = *(unsigned __int16 *)(a4 + 4);
      v20 = *(int *)(a4 + 696);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v21 = *(_QWORD *)(v9 + 64);
        if ( v21 )
        {
          v22 = *(_QWORD *)(v21 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 880)) & *(_DWORD *)(v21 + 884));
          *(_DWORD *)v22 = 1397909875;
          *(_QWORD *)(v22 + 8) = 0LL;
          *(_QWORD *)(v22 + 16) = v20;
          *(_QWORD *)(v22 + 24) = v19;
        }
      }
      if ( *(_DWORD *)(a4 + 696) == 3 )
      {
        v23 = *(unsigned __int16 *)(a4 + 4);
        if ( (UsbhLogMask & 0x10) != 0 )
        {
          v24 = *(_QWORD *)(v9 + 64);
          if ( v24 )
          {
            v25 = *(_QWORD *)(v24 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v24 + 880)) & *(_DWORD *)(v24 + 884));
            *(_DWORD *)v25 = 2018666867;
            *(_QWORD *)(v25 + 8) = 0LL;
            *(_QWORD *)(v25 + 16) = 3LL;
            *(_QWORD *)(v25 + 24) = v23;
          }
        }
        *(_DWORD *)(a4 + 696) = 0;
        KeSetEvent((PRKEVENT)(a4 + 712), 0, 0);
        KeReleaseSpinLock(v17, v18);
        v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a4 + 440));
        v27 = *(unsigned __int16 *)(a4 + 4);
        v28 = *(int *)(a4 + 12);
        *(_DWORD *)(a4 + 448) = 1;
        if ( (UsbhLogMask & 0x10) != 0 )
        {
          v29 = *(_QWORD *)(v9 + 64);
          if ( v29 )
          {
            v30 = *(_QWORD *)(v29 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v29 + 880)) & *(_DWORD *)(v29 + 884));
            *(_DWORD *)v30 = 1986359664;
            *(_QWORD *)(v30 + 8) = 0LL;
            *(_QWORD *)(v30 + 16) = v28;
            *(_QWORD *)(v30 + 24) = v27;
          }
        }
        *(_DWORD *)(32 * (*(unsigned int *)(a4 + 2400) + 43LL) + a4 + 20) = 30;
        *(_DWORD *)(a4 + 448) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(a4 + 440), v26);
      }
      else
      {
        KeReleaseSpinLock(v17, v18);
      }
      return v5;
    }
    UsbhTrapFatal_Dbg(0LL, 0LL);
  }
  if ( a2 <= 0x10 )
  {
    if ( a2 == 16 )
    {
      Log(v9, 4, 1129270898, v7, 0LL);
      v36 = off_1C0060568[2 * v41];
    }
    else
    {
      v32 = a2 - 1;
      if ( v32 )
      {
        v33 = v32 - 1;
        if ( v33 )
        {
          v34 = v33 - 2;
          if ( v34 )
          {
            if ( v34 != 4 )
              return v5;
            Log(v9, 4, 1129270902, v7, 0LL);
            return (unsigned int)UsbhHandleOvercurrent(v9, a5);
          }
          Log(v9, 4, 1129270899, v7, 0LL);
          v36 = (__int64 (__fastcall *)())qword_1C005F2D8[2 * v35];
        }
        else
        {
          Log(v9, 4, 1129270885, v7, 0LL);
          v36 = off_1C0060768[2 * v39];
        }
      }
      else
      {
        Log(v9, 4, 1129270883, v7, 0LL);
        v36 = off_1C0060B68[2 * v40];
      }
    }
LABEL_51:
    if ( !v36 )
      return v5;
    return ((unsigned int (__fastcall *)(__int64, __int64, __int64))v36)(v9, a4, a5);
  }
  switch ( a2 )
  {
    case 0x20000u:
      Log(v9, 4, 1129270904, v7, 0LL);
      v36 = (__int64 (__fastcall *)())qword_1C005F0D8[2 * v38];
      goto LABEL_51;
    case 0x10000u:
      Log(v9, 4, 1129270900, v7, 0LL);
      v36 = off_1C0060968[2 * v42];
      goto LABEL_51;
    case 0x40000u:
      Log(v9, 4, 1129270867, v7, 0LL);
      return (unsigned int)UsbhRequestPortSuspend(v9, v31, (unsigned __int8)v7, a4, a5);
  }
  return v5;
}
