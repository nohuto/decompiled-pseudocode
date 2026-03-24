/*
 * XREFs of MouseClassPower @ 0x1C0001CF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqsd @ 0x1C0002130 (WPP_RECORDER_SF_qqsd.c)
 *     MouseClassCheckWaitWakeEnabled @ 0x1C00042E8 (MouseClassCheckWaitWakeEnabled.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0005E54 (WPP_RECORDER_SF_qq.c)
 *     MouseClassCreateWaitWakeIrp @ 0x1C000DF40 (MouseClassCreateWaitWakeIrp.c)
 */

__int64 __fastcall MouseClassPower(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  __int64 v4; // rsi
  char v5; // r13
  ULONG Options; // r14d
  __int64 LowPart; // rbx
  int v8; // edx
  int v9; // r8d
  int v10; // r9d
  NTSTATUS v11; // r15d
  UCHAR MinorFunction; // al
  const char *v13; // rax
  char v14; // bl
  struct _IO_STACK_LOCATION *v16; // rax
  struct _IO_STACK_LOCATION *v17; // rax
  KIRQL v18; // al
  bool v19; // r14
  POWER_STATE v20; // r8d
  char v21; // al
  char v22; // r14
  KIRQL v23; // al
  char v24; // bl
  KIRQL v25; // al
  KIRQL v26; // al
  int RemlockSize; // [rsp+20h] [rbp-58h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = a1;
  Options = CurrentStackLocation->Parameters.Create.Options;
  LowPart = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( v4 == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels || !*(_BYTE *)(v4 + 64) )
  {
    PoStartNextPowerIrp(a2);
    a2->IoStatus.Status = -1073741637;
    IofCompleteRequest(a2, 0);
    return 3221225659LL;
  }
  v11 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, File, 1u, 0x20u);
  if ( v11 < 0 )
  {
    PoStartNextPowerIrp(a2);
    a2->IoStatus.Status = v11;
    IofCompleteRequest(a2, 0);
    return (unsigned int)v11;
  }
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction != 2 )
  {
    if ( MinorFunction )
    {
      if ( MinorFunction == 3 )
      {
        if ( (int)LowPart >= 5
          || (int)LowPart <= *(_DWORD *)(v4 + 272)
          || ((v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 72)), !*(_QWORD *)(v4 + 280))
           || *(_BYTE *)(v4 + 288)
            ? (v24 = 0)
            : (v24 = 1),
              KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v23),
              v11 = -1073741101,
              !v24) )
        {
          v11 = 0;
        }
        a2->IoStatus.Status = v11;
        v14 = 1;
        v21 = 0;
        goto LABEL_37;
      }
      goto LABEL_42;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_qq(WPP_GLOBAL_Control->DeviceExtension, v8, 5, 92, RemlockSize, v5, (char)a2);
    }
    v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 72));
    if ( *(_QWORD *)(v4 + 280) )
    {
      *(_QWORD *)(v4 + 296) = a2;
    }
    else
    {
      *(_QWORD *)(v4 + 280) = a2;
      *(_BYTE *)(v4 + 288) = 0;
      if ( (unsigned int)(_InterlockedExchange((volatile __int32 *)(v4 + 304), 0) - 1) > 1 )
      {
        v11 = 0;
        v22 = 1;
LABEL_58:
        KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v25);
        v21 = 0;
        v14 = v22;
LABEL_38:
        if ( v11 >= 0 )
        {
          if ( v22 )
            goto LABEL_23;
          if ( !v21 )
            goto LABEL_16;
          v11 = 259;
LABEL_17:
          if ( v14 )
            IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, 0x20u);
          return (unsigned int)v11;
        }
LABEL_65:
        a2->IoStatus.Status = v11;
        PoStartNextPowerIrp(a2);
        IofCompleteRequest(a2, 0);
        goto LABEL_17;
      }
    }
    v22 = 0;
    v11 = -1073741436;
    goto LABEL_58;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = "S";
    if ( Options )
      v13 = "D";
    WPP_RECORDER_SF_qqsd(
      WPP_GLOBAL_Control->DeviceExtension,
      (unsigned int)"D",
      v9,
      v10,
      RemlockSize,
      v5,
      (char)a2,
      (__int64)v13,
      LowPart - 1);
  }
  if ( Options )
  {
    if ( Options == 1 )
    {
      a2->IoStatus.Status = 0;
      if ( *(_DWORD *)(v4 + 172) < (int)LowPart )
      {
        PoSetPowerState(*(PDEVICE_OBJECT *)v4, DevicePowerState, (POWER_STATE)LowPart);
        *(_DWORD *)(v4 + 172) = LowPart;
LABEL_15:
        v14 = 1;
LABEL_16:
        PoStartNextPowerIrp(a2);
        ++a2->CurrentLocation;
        ++a2->Tail.Overlay.CurrentStackLocation;
        v11 = PoCallDriver(*(PDEVICE_OBJECT *)(v4 + 16), a2);
        goto LABEL_17;
      }
      if ( *(_DWORD *)(v4 + 172) <= (int)LowPart )
        goto LABEL_15;
      goto LABEL_22;
    }
LABEL_42:
    v14 = 1;
    v21 = 0;
    goto LABEL_37;
  }
  if ( *(_DWORD *)(v4 + 176) >= (int)LowPart )
  {
    if ( *(_DWORD *)(v4 + 176) <= (int)LowPart )
    {
      if ( (_DWORD)LowPart == 1 && *(int *)(v4 + 268) > 1 && *(int *)(v4 + 272) > 1 )
      {
        v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 72));
        if ( !*(_QWORD *)(v4 + 280) || *(_BYTE *)(v4 + 288) )
          LOBYTE(LowPart) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v26);
        if ( !(_BYTE)LowPart && (unsigned __int8)MouseClassCheckWaitWakeEnabled(v4) )
          MouseClassCreateWaitWakeIrp((PVOID)v4);
      }
      a2->IoStatus.Status = 0;
      goto LABEL_15;
    }
    a2->IoStatus.Status = 0;
LABEL_22:
    v14 = 1;
LABEL_23:
    IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, File, 1u, 0x20u);
    v16 = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v16[-1].MajorFunction = *(_OWORD *)&v16->MajorFunction;
    *(_OWORD *)&v16[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v16->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v16[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v16->Parameters.SetQuota + 6);
    v16[-1].FileObject = v16->FileObject;
    v16[-1].Control = 0;
    v17 = a2->Tail.Overlay.CurrentStackLocation;
    v17[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)MouseClassPowerComplete;
    v17[-1].Context = 0LL;
    v17[-1].Control = -32;
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    PoCallDriver(*(PDEVICE_OBJECT *)(v4 + 16), a2);
    v11 = 259;
    goto LABEL_17;
  }
  v11 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, File, 1u, 0x20u);
  if ( v11 < 0 )
  {
    v14 = 1;
    goto LABEL_65;
  }
  v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 72));
  v19 = *(_QWORD *)(v4 + 280) && !*(_BYTE *)(v4 + 288);
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v18);
  if ( v19 && (int)LowPart < 5 )
    v20.SystemState = *(SYSTEM_POWER_STATE *)(v4 + 4 * LowPart + 248);
  else
    v20.SystemState = PowerSystemSleeping3;
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  v11 = PoRequestPowerIrp(*(PDEVICE_OBJECT *)v4, 2u, v20, (PREQUEST_POWER_COMPLETE)MouseClassPoRequestComplete, a2, 0LL);
  if ( v11 >= 0 )
  {
    v21 = 1;
    v14 = 1;
LABEL_37:
    v22 = 0;
    goto LABEL_38;
  }
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, 0x20u);
  PoStartNextPowerIrp(a2);
  a2->IoStatus.Status = v11;
  IofCompleteRequest(a2, 0);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, 0x20u);
  return 259LL;
}
