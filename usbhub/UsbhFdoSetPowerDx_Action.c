__int64 __fastcall UsbhFdoSetPowerDx_Action(PDEVICE_OBJECT DeviceObject, __int64 a2, IRP *a3)
{
  int v3; // esi
  int v7; // r12d
  int v8; // r13d
  char v9; // r15
  _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  __int64 v11; // r10
  int v12; // r9d
  __int64 v13; // r10
  int v14; // eax
  int v15; // r9d
  unsigned int LowPart; // r8d
  unsigned int v17; // r8d
  _DWORD *v18; // rdi
  unsigned __int16 v19; // di
  unsigned __int8 *DeviceExtension; // rdx
  __int64 v21; // rsi
  __int64 v22; // rcx
  KIRQL v23; // r14
  void *v24; // rdx
  __int64 v25; // rcx
  unsigned __int8 *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _DWORD *v29; // r14
  int v30; // edx
  int v31; // r8d
  __int64 v32; // r10
  unsigned __int16 v33; // r14
  __int64 v34; // rax
  __int64 v35; // rsi
  int v36; // r9d
  int v37; // eax
  _DWORD *v38; // rax
  __int64 v39; // rdi
  _DWORD *v40; // r11
  __int64 v41; // rax
  __int64 v42; // r10
  __int64 v43; // r11
  __int64 v44; // r10
  __int64 v45; // r11
  unsigned int v46; // ebx
  _DWORD *v48; // [rsp+40h] [rbp-48h]
  __int64 v49; // [rsp+48h] [rbp-40h]
  int v50; // [rsp+98h] [rbp+10h]

  v3 = 0;
  v50 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v48 = FdoExt((__int64)DeviceObject);
  Log((_DWORD)DeviceObject, 16, 1349731448, a2, (__int64)a3);
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v49 = *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a2 + 64) = a3;
  Log((_DWORD)DeviceObject, 8, 1381192816, 0, 0LL);
  UsbhDispatch_HardResetEvent(DeviceObject, v11, 10LL);
  FdoExt((__int64)DeviceObject);
  Log((_DWORD)DeviceObject, 2048, 1346458174, 3, v49);
  *(_DWORD *)(v13 + 128) = v12;
  v14 = UsbhDispatch_BusEvent(DeviceObject, v13, 7LL);
  Log((_DWORD)DeviceObject, 2048, 1346458172, 0, v14);
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  *(_DWORD *)(a2 + 28) = LowPart;
  v17 = LowPart - 3;
  if ( !v17 )
  {
    v48[1054] = *(_DWORD *)(a2 + 88);
    Log((_DWORD)DeviceObject, 16, 1349280818, v15, (__int64)a3);
    if ( *(&WPP_MAIN_CB.AlignmentRequirement + 1) )
    {
      if ( *(&WPP_MAIN_CB.AlignmentRequirement + 1) == 1 )
      {
        v7 = 1;
      }
      else if ( *(&WPP_MAIN_CB.AlignmentRequirement + 1) == 3 )
      {
        v7 = HIBYTE(*(_DWORD *)(v32 + 2560)) & 1;
      }
    }
    v33 = 1;
    if ( !*((_BYTE *)FdoExt((__int64)DeviceObject) + 2938) )
    {
LABEL_51:
      if ( v7 )
        goto LABEL_52;
      UsbhDisarmHubWakeOnConnect(DeviceObject);
      if ( v3 )
      {
LABEL_54:
        UsbhArmHubForWakeDetect(DeviceObject);
        UsbdHubArmBusForWake(DeviceObject);
      }
      else
      {
        UsbhDisarmHubForWakeDetect(DeviceObject);
        UsbdHubDisarmBusForWake(DeviceObject);
      }
      goto LABEL_56;
    }
    while ( 1 )
    {
      v34 = UsbhLatchPdo(DeviceObject, v33, a3, 1180976178LL);
      v35 = v34;
      if ( v34 )
      {
        ++v8;
        if ( *((_BYTE *)PdoExt(v34) + 2740) )
          v9 = 1;
        if ( (unsigned __int8)UsbhPdoArmedForWake(v35) )
        {
          UsbhUnlatchPdo((__int64)DeviceObject, v35, (__int64)a3, 0x46644432u);
          v3 = 1;
          v50 = 1;
          if ( !*(&WPP_MAIN_CB.AlignmentRequirement + 1) )
            v7 = 1;
          goto LABEL_47;
        }
        UsbhUnlatchPdo((__int64)DeviceObject, v35, (__int64)a3, 0x46644432u);
      }
      v3 = v50;
LABEL_47:
      if ( ++v33 > *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938) )
      {
        if ( !v9 || (v48[640] & 1) == 0 && v8 != 1 )
          goto LABEL_51;
LABEL_52:
        UsbhArmHubWakeOnConnect(DeviceObject);
        goto LABEL_54;
      }
    }
  }
  if ( v17 == 1 )
  {
    v48[1054] = 0;
    Log((_DWORD)DeviceObject, 16, 1349280819, v15, (__int64)a3);
    v18 = FdoExt((__int64)DeviceObject);
    UsbhDisarmHubForWakeDetect(DeviceObject);
    if ( (v18[640] & 0x80000) != 0 && (int)UsbhSetHubRemoteWake((_DWORD)DeviceObject) >= 0 )
      v18[640] &= ~0x80000u;
    UsbhDisarmHubForWakeDetect(DeviceObject);
    UsbdHubDisarmBusForWake(DeviceObject);
    v19 = 1;
    if ( !DeviceObject )
      UsbhTrapFatal_Dbg(0LL, 0LL);
    while ( 1 )
    {
      DeviceExtension = (unsigned __int8 *)DeviceObject->DeviceExtension;
      if ( !DeviceExtension )
LABEL_61:
        UsbhTrapFatal_Dbg(DeviceObject, 0LL);
      if ( *(_DWORD *)DeviceExtension != 541218120 )
        UsbhTrapFatal_Dbg(DeviceObject, DeviceExtension);
      if ( v19 > DeviceExtension[2938] )
        goto LABEL_56;
      v21 = 0LL;
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        v22 = *((_QWORD *)DeviceExtension + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
        *(_DWORD *)v22 = 1329877100;
        *(_QWORD *)(v22 + 16) = v19;
        *(_QWORD *)(v22 + 8) = 0LL;
        *(_QWORD *)(v22 + 24) = 1180976179LL;
      }
      v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v24 = DeviceObject->DeviceExtension;
        if ( v24 )
        {
          v25 = *((_QWORD *)v24 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v24 + 220) & *((_DWORD *)v24 + 221));
          *(_DWORD *)v25 = 1413771367;
          *(_QWORD *)(v25 + 16) = v19;
          *(_QWORD *)(v25 + 8) = 0LL;
          *(_QWORD *)(v25 + 24) = 0LL;
        }
      }
      if ( !v19 )
        break;
      v26 = (unsigned __int8 *)DeviceObject->DeviceExtension;
      if ( !v26 )
        goto LABEL_61;
      if ( *(_DWORD *)v26 != 541218120 )
        UsbhTrapFatal_Dbg(DeviceObject, v26);
      if ( v19 > v26[2938] )
        break;
      v27 = *((_QWORD *)v26 + 382);
      if ( !v27 )
        break;
      v28 = 2928LL * v19 + v27 - 2928;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v27 = *((_QWORD *)v26 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v26 + 220) & *((_DWORD *)v26 + 221));
        *(_DWORD *)v27 = 1044672615;
        *(_QWORD *)(v27 + 8) = 0LL;
        *(_QWORD *)(v27 + 16) = v19;
        *(_QWORD *)(v27 + 24) = v28;
      }
      if ( v28 )
      {
        v21 = *(_QWORD *)(v28 + 392);
        if ( v21 )
          v21 = UsbhRefPdo(v27, v21, (__int64)a3, 1180976179);
      }
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v23);
      if ( v21 )
      {
        v29 = PdoExt(v21);
        if ( (unsigned __int8)UsbhCompletePdoWakeIrp(DeviceObject, v21, 3221225860LL)
          && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_dq(
              WPP_GLOBAL_Control->DeviceExtension,
              v30,
              v31,
              29,
              (__int64)&WPP_fe7d9686e7a73592f5b78ddce8c5363a_Traceguids,
              *((_WORD *)v29 + 714),
              v21);
        }
        UsbhUnlatchPdo((__int64)DeviceObject, v21, (__int64)a3, 0x46644433u);
        ++v19;
      }
      else
      {
LABEL_32:
        ++v19;
      }
    }
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v23);
    goto LABEL_32;
  }
LABEL_56:
  FdoExt((__int64)DeviceObject);
  Log((_DWORD)DeviceObject, 2048, 1112756286, 0, 0LL);
  v37 = UsbhDispatch_BusEvent(DeviceObject, v49, (unsigned int)(v36 + 6));
  Log((_DWORD)DeviceObject, 2048, 1112756284, 0, v37);
  v38 = FdoExt((__int64)DeviceObject);
  v39 = (__int64)a3->Tail.Overlay.CurrentStackLocation;
  v40 = v38;
  v41 = *(unsigned int *)(v39 + 16);
  if ( (unsigned int)v41 <= 1 )
  {
    Log((_DWORD)DeviceObject, 16, 1347374641, *(_QWORD *)&v40[2 * v41 + 210], (__int64)a3);
    Log((_DWORD)DeviceObject, 16, 1347374642, *(_QWORD *)(v43 + 8 * v42 + 856), v39);
    *(_QWORD *)(v45 + 8 * v44 + 840) = 0LL;
    *(_QWORD *)(v45 + 8 * v44 + 856) = 0LL;
    *(_DWORD *)(v45 + 4 * v44 + 872) = 4510;
    PoStartNextPowerIrp(a3);
  }
  ++a3->CurrentLocation;
  ++a3->Tail.Overlay.CurrentStackLocation;
  v46 = PoCallDriver(*((PDEVICE_OBJECT *)v48 + 151), a3);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v48 + 306), a3, 0x20u);
  return v46;
}
