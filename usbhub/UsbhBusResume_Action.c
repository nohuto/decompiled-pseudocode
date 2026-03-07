LONG __fastcall UsbhBusResume_Action(PDEVICE_OBJECT DeviceObject, int a2)
{
  _DWORD *DeviceExtension; // rbx
  __int64 v5; // rcx
  unsigned __int16 i; // bp
  unsigned __int8 *v7; // rdx
  void *v8; // rdx
  __int64 v9; // rcx
  void *v10; // rdx
  __int64 v11; // rcx
  unsigned __int8 *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r10
  __int64 v15; // rcx
  _DWORD *v16; // rdx
  void *v17; // rdx
  __int64 v18; // rcx
  void *v19; // rdx
  __int64 v20; // rcx
  unsigned __int8 *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r10
  __int64 v24; // rcx
  __int64 v25; // r15
  void *v26; // rdx
  __int64 v27; // rcx
  KIRQL v28; // bl
  void *v29; // rdx
  __int64 v30; // rcx
  unsigned __int8 *v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  volatile __int64 *v34; // rax
  _QWORD *v35; // rsi
  __int64 v36; // rdx
  _DWORD *v38; // rbx
  KIRQL v39; // al

  if ( !DeviceObject )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  DeviceExtension = DeviceObject->DeviceExtension;
  if ( !DeviceExtension )
    goto LABEL_79;
  if ( *DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceExtension);
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    v5 = *((_QWORD *)DeviceExtension + 111)
       + 32LL * ((unsigned int)_InterlockedDecrement(DeviceExtension + 220) & DeviceExtension[221]);
    *(_DWORD *)v5 = 1047750002;
    *(_QWORD *)(v5 + 8) = 0LL;
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_QWORD *)(v5 + 24) = 0LL;
  }
  DeviceExtension[664] = 0;
  KeResetEvent((PRKEVENT)DeviceExtension + 112);
  DeviceExtension[678] = 0;
  for ( i = 1; ; ++i )
  {
    v7 = (unsigned __int8 *)DeviceObject->DeviceExtension;
    if ( !v7 )
      goto LABEL_79;
    if ( *(_DWORD *)v7 != 541218120 )
      UsbhTrapFatal_Dbg(DeviceObject, v7);
    if ( i > v7[2938] )
      break;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        59,
        (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
        i);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v8 = DeviceObject->DeviceExtension;
      if ( v8 )
      {
        v9 = *((_QWORD *)v8 + 111)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v8 + 220) & *((_DWORD *)v8 + 221));
        *(_DWORD *)v9 = 858801488;
        *(_QWORD *)(v9 + 24) = i;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = 0LL;
      }
    }
    if ( (UsbhLogMask & 8) != 0 )
    {
      v10 = DeviceObject->DeviceExtension;
      if ( v10 )
      {
        v11 = *((_QWORD *)v10 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v10 + 220) & *((_DWORD *)v10 + 221));
        *(_DWORD *)v11 = 1413771367;
        *(_QWORD *)(v11 + 16) = i;
        *(_QWORD *)(v11 + 8) = 0LL;
        *(_QWORD *)(v11 + 24) = 0LL;
      }
    }
    if ( i )
    {
      v12 = (unsigned __int8 *)DeviceObject->DeviceExtension;
      if ( !v12 )
        goto LABEL_79;
      if ( *(_DWORD *)v12 != 541218120 )
        UsbhTrapFatal_Dbg(DeviceObject, v12);
      if ( i <= v12[2938] )
      {
        v13 = *((_QWORD *)v12 + 382);
        if ( v13 )
        {
          v14 = 2928LL * i + v13 - 2928;
          if ( (UsbhLogMask & 8) != 0 )
          {
            v15 = *((_QWORD *)v12 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v12 + 220) & *((_DWORD *)v12 + 221));
            *(_DWORD *)v15 = 1044672615;
            *(_QWORD *)(v15 + 8) = 0LL;
            *(_QWORD *)(v15 + 16) = i;
            *(_QWORD *)(v15 + 24) = v14;
          }
          if ( v14 )
            UsbhDispatch_PortChangeQueueEventEx((_DWORD)DeviceObject, v14, 3, a2, 0LL, 0, 0LL, 0LL);
        }
      }
    }
    v16 = DeviceObject->DeviceExtension;
    if ( !v16 )
      goto LABEL_79;
    if ( *v16 != 541218120 )
      UsbhTrapFatal_Dbg(DeviceObject, v16);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        56,
        (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
        i);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v17 = DeviceObject->DeviceExtension;
      if ( v17 )
      {
        v18 = *((_QWORD *)v17 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v17 + 220) & *((_DWORD *)v17 + 221));
        *(_DWORD *)v18 = 825247056;
        *(_QWORD *)(v18 + 24) = i;
        *(_QWORD *)(v18 + 8) = 0LL;
        *(_QWORD *)(v18 + 16) = 0LL;
      }
    }
    if ( (UsbhLogMask & 8) != 0 )
    {
      v19 = DeviceObject->DeviceExtension;
      if ( v19 )
      {
        v20 = *((_QWORD *)v19 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v19 + 220) & *((_DWORD *)v19 + 221));
        *(_DWORD *)v20 = 1413771367;
        *(_QWORD *)(v20 + 16) = i;
        *(_QWORD *)(v20 + 8) = 0LL;
        *(_QWORD *)(v20 + 24) = 0LL;
      }
    }
    if ( i )
    {
      v21 = (unsigned __int8 *)DeviceObject->DeviceExtension;
      if ( !v21 )
        goto LABEL_79;
      if ( *(_DWORD *)v21 != 541218120 )
        UsbhTrapFatal_Dbg(DeviceObject, v21);
      if ( i <= v21[2938] )
      {
        v22 = *((_QWORD *)v21 + 382);
        if ( v22 )
        {
          v23 = 2928LL * i + v22 - 2928;
          if ( (UsbhLogMask & 8) != 0 )
          {
            v24 = *((_QWORD *)v21 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v21 + 220) & *((_DWORD *)v21 + 221));
            *(_DWORD *)v24 = 1044672615;
            *(_QWORD *)(v24 + 8) = 0LL;
            *(_QWORD *)(v24 + 16) = i;
            *(_QWORD *)(v24 + 24) = v23;
          }
          if ( v23 )
            UsbhDispatch_PortChangeQueueEventEx((_DWORD)DeviceObject, v23, 1, a2, 0LL, 0, 0LL, 0LL);
        }
      }
    }
    v25 = 0LL;
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      v26 = DeviceObject->DeviceExtension;
      if ( v26 )
      {
        v27 = *((_QWORD *)v26 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v26 + 220) & *((_DWORD *)v26 + 221));
        *(_DWORD *)v27 = 1329877100;
        *(_QWORD *)(v27 + 16) = i;
        *(_QWORD *)(v27 + 8) = 0LL;
        *(_QWORD *)(v27 + 24) = 1382380368LL;
      }
    }
    v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v29 = DeviceObject->DeviceExtension;
      if ( v29 )
      {
        v30 = *((_QWORD *)v29 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v29 + 220) & *((_DWORD *)v29 + 221));
        *(_DWORD *)v30 = 1413771367;
        *(_QWORD *)(v30 + 16) = i;
        *(_QWORD *)(v30 + 8) = 0LL;
        *(_QWORD *)(v30 + 24) = 0LL;
      }
    }
    if ( !i )
      goto LABEL_70;
    v31 = (unsigned __int8 *)DeviceObject->DeviceExtension;
    if ( !v31 )
      goto LABEL_79;
    if ( *(_DWORD *)v31 != 541218120 )
      UsbhTrapFatal_Dbg(DeviceObject, v31);
    if ( i > v31[2938] )
      goto LABEL_70;
    v32 = *((_QWORD *)v31 + 382);
    if ( !v32 )
      goto LABEL_70;
    v33 = 2928LL * i + v32 - 2928;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v32 = *((_QWORD *)v31 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v31 + 220) & *((_DWORD *)v31 + 221));
      *(_DWORD *)v32 = 1044672615;
      *(_QWORD *)(v32 + 8) = 0LL;
      *(_QWORD *)(v32 + 16) = i;
      *(_QWORD *)(v32 + 24) = v33;
    }
    if ( v33 )
    {
      v25 = *(_QWORD *)(v33 + 392);
      if ( v25 )
        v25 = UsbhRefPdo(v32, v25, 0LL, 1382380368);
    }
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v28);
    if ( v25 )
    {
      v38 = PdoExt(v25);
      KeWaitForSingleObject(v38 + 724, Executive, 0, 0, 0LL);
      v38[355] &= ~0x10000000u;
      KeSetEvent((PRKEVENT)(v38 + 724), 0, 0);
      Log((__int64)DeviceObject, 256, 1968194639, v25, 1382380368LL);
      v39 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
      v28 = v39;
      UsbhDerefPdo((__int64)DeviceObject, v25, 0LL, 0x52657350u);
LABEL_70:
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v28);
    }
  }
  UsbhPostInterrupt(DeviceObject);
  v34 = (volatile __int64 *)DeviceObject->DeviceExtension;
  if ( !v34 )
LABEL_79:
    UsbhTrapFatal_Dbg(DeviceObject, 0LL);
  if ( *(_DWORD *)v34 != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
  v35 = (_QWORD *)_InterlockedExchange64(v34 + 411, 0LL);
  Log((__int64)DeviceObject, 2048, 1114863917, 0LL, (__int64)v35);
  return UsbhDecHubBusy((__int64)DeviceObject, v36, v35);
}
