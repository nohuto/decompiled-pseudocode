/*
 * XREFs of UsbhHubIsr @ 0x1C0019BF0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhSignalResumeEvent @ 0x1C00015A0 (UsbhSignalResumeEvent.c)
 *     UsbhQueueWorkItemWithRetry @ 0x1C000BEB0 (UsbhQueueWorkItemWithRetry.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002EAB8 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C002EEF4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002EFC8 (WPP_RECORDER_SF_d.c)
 *     UsbhSignalSuspendEvent @ 0x1C0035C9C (UsbhSignalSuspendEvent.c)
 *     UsbhException @ 0x1C004B478 (UsbhException.c)
 */

__int64 __fastcall UsbhHubIsr(PDEVICE_OBJECT DeviceObject, PIRP Irp, _QWORD *Context)
{
  unsigned int v5; // ebx
  __int64 v6; // r14
  __int64 v7; // rbp
  __int64 v8; // rcx
  signed __int32 v9; // r12d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 Status; // r13
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rdx
  KSPIN_LOCK *v23; // rbp
  KIRQL v24; // al
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct _KEVENT *v27; // rcx
  unsigned int v29; // esi
  __int64 v30; // r8
  __int64 v31; // rbp
  KIRQL v32; // bp
  _DWORD *v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rcx
  _DWORD *v36; // rax
  _DWORD *v37; // rax
  int v38; // r10d
  _DWORD *v39; // rax
  int v40; // [rsp+48h] [rbp-50h]
  __int64 v41; // [rsp+50h] [rbp-48h]

  v5 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 16, (__int64)"FKh&");
  if ( !Context )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = Context[8];
  if ( !v6 )
LABEL_83:
    UsbhTrapFatal_Dbg(Context, 0LL);
  if ( *(_DWORD *)v6 != 541218120 )
    UsbhTrapFatal_Dbg(Context, v6);
  v7 = *(_QWORD *)(v6 + 2672);
  v41 = v7;
  if ( (UsbhLogMask & 4) != 0 )
  {
    v8 = *(_QWORD *)(v6 + 888)
       + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
    *(_DWORD *)v8 = 1145661539;
    *(_QWORD *)(v8 + 8) = 0LL;
    *(_QWORD *)(v8 + 16) = v7;
    *(_QWORD *)(v8 + 24) = Irp;
  }
  v9 = _InterlockedDecrement((volatile signed __int32 *)(v6 + 2712));
  if ( (UsbhLogMask & 4) != 0 )
  {
    v10 = Context[8];
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
      *(_DWORD *)v11 = 1717790819;
      *(_QWORD *)(v11 + 24) = v9;
      *(_QWORD *)(v11 + 8) = 0LL;
      *(_QWORD *)(v11 + 16) = v7;
    }
  }
  Status = Irp->IoStatus.Status;
  v13 = *(int *)(v7 + 4);
  if ( (UsbhLogMask & 4) != 0 )
  {
    v14 = Context[8];
    if ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
      *(_DWORD *)v15 = 843671651;
      *(_QWORD *)(v15 + 8) = 0LL;
      *(_QWORD *)(v15 + 16) = Status;
      *(_QWORD *)(v15 + 24) = v13;
    }
  }
  if ( (int)Status >= 0 && !*(_DWORD *)(v7 + 36) )
  {
    Log((__int64)Context, 4, 1769101906, Status, *(int *)(v7 + 4));
    LOBYTE(v40) = 0;
    UsbhException((int)Context, 0, 116, 0, v38, Status, *(_DWORD *)(v7 + 4), usbfile_bus_c, 1094, v40);
  }
  if ( (Status & 0xC0000000) != 0xC0000000 && *(int *)(v7 + 4) >= 0 && v9 != -1 )
  {
    *(_DWORD *)(v6 + 2656) = 0;
    v29 = 0;
    v30 = Context[8];
    while ( 1 )
    {
      if ( !v30 )
        goto LABEL_83;
      if ( *(_DWORD *)v30 != 541218120 )
        UsbhTrapFatal_Dbg(Context, Context[8]);
      v31 = v29;
      if ( v29 > *(unsigned __int8 *)(v30 + 2938)
        || ((unsigned __int8)(1 << (v29 & 7)) & *(_BYTE *)(((unsigned __int64)v29 >> 3) + *(_QWORD *)(v6 + 2680))) != 0 )
      {
        break;
      }
      ++v29;
    }
    if ( v29 > *((unsigned __int8 *)FdoExt((__int64)Context) + 2938) )
    {
      v29 = 0;
      Log((__int64)Context, 4, 1113870435, v31, 0LL);
      LOBYTE(v40) = 0;
      UsbhException((int)Context, 0, 117, 0, 0, 0, 0, usbfile_bus_c, 1190, v40);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 17, (__int64)"FKh&", v29);
    v32 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    v33 = FdoExt((__int64)Context);
    v33[383] = v29;
    v33[384] = 1;
    v34 = v33 + 386;
    v35 = (_QWORD *)qword_1C006C608;
    if ( *(__int64 **)qword_1C006C608 != &qword_1C006C600 )
      __fastfail(3u);
    v34[1] = qword_1C006C608;
    *v34 = &qword_1C006C600;
    *v35 = v34;
    qword_1C006C608 = (__int64)v34;
    v36 = FdoExt((__int64)Context);
    _InterlockedIncrement(v36 + 685);
    Log((__int64)Context, 4, 1212764715, (__int64)Context, (int)v36[685]);
    KeReleaseSpinLock(&SpinLock, v32);
    v37 = FdoExt((__int64)Context);
    UsbhQueueWorkItemWithRetry(
      (__int64)Context,
      *(_QWORD *)(v6 + 2720),
      (int)UsbhHubIsrWorker,
      0,
      (__int64)(v37 + 346),
      v29,
      1230467945);
    v27 = &stru_1C006C610;
    goto LABEL_43;
  }
  if ( (_DWORD)Status == -1073741536 )
  {
    if ( *(_DWORD *)(v7 + 4) == -1073676288 )
      goto LABEL_19;
    goto LABEL_39;
  }
  if ( (_DWORD)Status == -1073741823 )
  {
    if ( *(_DWORD *)(v7 + 4) != -1073741819 )
      goto LABEL_79;
    while ( 1 )
    {
LABEL_19:
      v16 = Context[8];
      if ( !v16 )
        goto LABEL_83;
      if ( *(_DWORD *)v16 != 541218120 )
        UsbhTrapFatal_Dbg(Context, v16);
      if ( v5 > *(unsigned __int8 *)(v16 + 2938) )
        break;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v17 = *(_QWORD *)(v16 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
        *(_DWORD *)v17 = 1413771367;
        *(_QWORD *)(v17 + 16) = (unsigned __int16)v5;
        *(_QWORD *)(v17 + 8) = 0LL;
        *(_QWORD *)(v17 + 24) = 0LL;
      }
      if ( (_WORD)v5 )
      {
        v18 = Context[8];
        if ( !v18 )
          goto LABEL_83;
        if ( *(_DWORD *)v18 != 541218120 )
          UsbhTrapFatal_Dbg(Context, v18);
        if ( (unsigned __int16)v5 > *(unsigned __int8 *)(v18 + 2938) )
        {
          v20 = 0LL;
        }
        else
        {
          v19 = *(_QWORD *)(v18 + 3056);
          if ( v19 )
          {
            v20 = 2928LL * (unsigned __int16)v5 + v19 - 2928;
            if ( (UsbhLogMask & 8) != 0 )
            {
              v21 = *(_QWORD *)(v18 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v18 + 880)) & *(_DWORD *)(v18 + 884));
              *(_DWORD *)v21 = 1044672615;
              *(_QWORD *)(v21 + 8) = 0LL;
              *(_QWORD *)(v21 + 16) = (unsigned __int16)v5;
              *(_QWORD *)(v21 + 24) = v20;
            }
          }
          else
          {
            v20 = 0LL;
          }
        }
      }
      else
      {
        v20 = 0LL;
      }
      v22 = Context[8];
      if ( !v22 )
        goto LABEL_83;
      if ( *(_DWORD *)v22 != 541218120 )
        UsbhTrapFatal_Dbg(Context, v22);
      v23 = (KSPIN_LOCK *)(v22 + 4944);
      v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v22 + 4944));
      if ( *(_DWORD *)(v20 + 696) == 2 )
      {
        KeReleaseSpinLock(v23, v24);
        Log((__int64)Context, 16, 1666207794, (__int64)Context, *(unsigned __int16 *)(v20 + 4));
        UsbhSignalSuspendEvent(Context, v20);
      }
      else if ( *(_DWORD *)(v20 + 696) == 3 )
      {
        KeReleaseSpinLock(v23, v24);
        Log((__int64)Context, 16, 1666207793, (__int64)Context, *(unsigned __int16 *)(v20 + 4));
        UsbhSignalResumeEvent((__int64)Context, v20);
      }
      else
      {
        KeReleaseSpinLock(v23, v24);
      }
      ++v5;
    }
    v7 = v41;
  }
  if ( (_DWORD)Status == -1073741536 )
  {
LABEL_39:
    if ( (UsbhLogMask & 4) != 0 )
    {
      v25 = Context[8];
      if ( v25 )
      {
        v26 = *(_QWORD *)(v25 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 880)) & *(_DWORD *)(v25 + 884));
        *(_DWORD *)v26 = 860448867;
        *(_QWORD *)(v26 + 24) = v9;
        *(_QWORD *)(v26 + 8) = 0LL;
        *(_QWORD *)(v26 + 16) = Status;
      }
    }
    goto LABEL_42;
  }
  if ( (_DWORD)Status == -1073741810 || (_DWORD)Status == -1073741667 )
  {
LABEL_42:
    v27 = (struct _KEVENT *)(v6 + 2688);
LABEL_43:
    KeSetEvent(v27, 0, 0);
    return 3221225494LL;
  }
LABEL_79:
  if ( v9 == -1 )
    goto LABEL_39;
  if ( ++*(_DWORD *)(v6 + 2656) < 3u )
  {
    *(_DWORD *)(v6 + 2560) |= 0x1000u;
    v39 = FdoExt((__int64)Context);
    UsbhQueueWorkItemWithRetry(
      (__int64)Context,
      *(_QWORD *)(v6 + 2728),
      (int)UsbhHubResetIrqPipeWorker,
      0,
      (__int64)(v39 + 346),
      0,
      1230467689);
  }
  else
  {
    KeSetEvent((PRKEVENT)(v6 + 2688), 0, 0);
    LOBYTE(v40) = 0;
    UsbhException((int)Context, 0, 7, 0, 0, Status, *(_DWORD *)(v7 + 4), usbfile_bus_c, 1147, v40);
  }
  return 3221225494LL;
}
