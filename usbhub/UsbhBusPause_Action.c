__int64 __fastcall UsbhBusPause_Action(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  __int64 v2; // r15
  char *DeviceExtension; // rdi
  __int64 v5; // rcx
  __int64 v6; // r8
  void *v7; // rdx
  __int64 v8; // rcx
  unsigned __int16 i; // r14
  unsigned __int8 *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r12
  unsigned __int8 *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  void *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  void *v20; // rdx
  __int64 v21; // rcx
  void *v22; // rdx
  __int64 v23; // rcx
  KIRQL v24; // si
  void *v25; // rdx
  __int64 v26; // rcx
  unsigned __int8 *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r15
  __int64 v30; // rcx
  __int64 v31; // r15
  _DWORD *v32; // rdi
  __int64 Pool2; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rdx
  _DWORD *v36; // rdi
  int v37; // r8d
  void *v38; // rdx
  __int64 v39; // rcx
  void *v40; // rdx
  __int64 v41; // rcx
  unsigned __int8 *v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r10
  __int64 v45; // rcx
  _DWORD *v46; // rdx
  void *v47; // rdx
  __int64 v48; // rcx
  void *v49; // rdx
  __int64 v50; // rcx
  unsigned __int8 *v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rsi
  __int64 v54; // rcx
  __int64 v55; // rdi
  void *v56; // rdx
  __int64 v57; // rcx
  KIRQL v58; // r12
  void *v59; // rdx
  __int64 v60; // rcx
  unsigned __int8 *v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r15
  __int64 v64; // rcx
  __int64 v65; // r15
  _DWORD *v66; // rdi
  __int64 v67; // rax
  _QWORD *v68; // rax
  _QWORD *v69; // rdx
  __int64 v70; // rdx
  KIRQL v71; // di
  KIRQL v72; // dl
  __int64 v73; // rcx
  __int64 v74; // [rsp+78h] [rbp-60h]
  __int64 v75; // [rsp+80h] [rbp-58h]

  v2 = a2;
  if ( !DeviceObject )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  if ( !DeviceExtension )
LABEL_135:
    UsbhTrapFatal_Dbg(DeviceObject, 0LL);
  if ( *(_DWORD *)DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceExtension);
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    v5 = *((_QWORD *)DeviceExtension + 111)
       + 32LL
       * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension
                                                                                                  + 221));
    *(_DWORD *)v5 = 829776240;
    *(_QWORD *)(v5 + 8) = 0LL;
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_QWORD *)(v5 + 24) = 0LL;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)DeviceExtension + 678, 0xFFFFFFFF) == 1 )
  {
    v6 = *((_QWORD *)DeviceExtension + 333);
    if ( (UsbhLogMask & 0x800) != 0 )
    {
      v7 = DeviceObject->DeviceExtension;
      if ( v7 )
      {
        v8 = *((_QWORD *)v7 + 111)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v7 + 220) & *((_DWORD *)v7 + 221));
        *(_DWORD *)v8 = 1363763555;
        *(_QWORD *)(v8 + 8) = 0LL;
        *(_QWORD *)(v8 + 16) = v6;
        *(_QWORD *)(v8 + 24) = 0LL;
      }
    }
    IoCancelIrp(*((PIRP *)DeviceExtension + 333));
  }
  KeWaitForSingleObject(DeviceExtension + 2688, Executive, 0, 0, 0LL);
  if ( *(_DWORD *)(v2 + 128) == 2 && (int)UsbhSsh_CheckHubIdle((__int64)DeviceObject) < 0 )
  {
    *((_DWORD *)DeviceExtension + 678) = 0;
    KeResetEvent((PRKEVENT)DeviceExtension + 112);
    UsbhPostInterrupt(DeviceObject);
    return 3221225473LL;
  }
  for ( i = 1; ; ++i )
  {
    v11 = (unsigned __int8 *)DeviceObject->DeviceExtension;
    if ( !v11 )
      goto LABEL_135;
    if ( *(_DWORD *)v11 != 541218120 )
      UsbhTrapFatal_Dbg(DeviceObject, v11);
    if ( i > v11[2938] )
      break;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v12 = *((_QWORD *)v11 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v11 + 220) & *((_DWORD *)v11 + 221));
      *(_DWORD *)v12 = 1413771367;
      *(_QWORD *)(v12 + 16) = i;
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)(v12 + 24) = 0LL;
    }
    if ( i )
    {
      v14 = (unsigned __int8 *)DeviceObject->DeviceExtension;
      if ( !v14 )
        goto LABEL_135;
      if ( *(_DWORD *)v14 != 541218120 )
        UsbhTrapFatal_Dbg(DeviceObject, v14);
      if ( i <= v14[2938] )
      {
        v15 = *((_QWORD *)v14 + 382);
        if ( v15 )
        {
          v13 = 2928LL * i + v15 - 2928;
          v74 = v13;
          if ( (UsbhLogMask & 8) != 0 )
          {
            v16 = *((_QWORD *)v14 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v14 + 220) & *((_DWORD *)v14 + 221));
            *(_DWORD *)v16 = 1044672615;
            *(_QWORD *)(v16 + 8) = 0LL;
            *(_QWORD *)(v16 + 16) = i;
            *(_QWORD *)(v16 + 24) = v13;
          }
        }
        else
        {
          v13 = 0LL;
          v74 = 0LL;
        }
      }
      else
      {
        v13 = 0LL;
        v74 = 0LL;
      }
    }
    else
    {
      v13 = 0LL;
      v74 = 0LL;
    }
    if ( (UsbhLogMask & 0x800) != 0 )
    {
      v17 = DeviceObject->DeviceExtension;
      if ( v17 )
      {
        v18 = *((_QWORD *)v17 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v17 + 220) & *((_DWORD *)v17 + 221));
        *(_DWORD *)v18 = 1467310448;
        *(_QWORD *)(v18 + 24) = i;
        *(_QWORD *)(v18 + 8) = 0LL;
        *(_QWORD *)(v18 + 16) = 0LL;
      }
    }
    if ( v13 )
    {
      v19 = *(int *)(v13 + 696);
      if ( (UsbhLogMask & 0x800) != 0 )
      {
        v20 = DeviceObject->DeviceExtension;
        if ( v20 )
        {
          v21 = *((_QWORD *)v20 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v20 + 220) & *((_DWORD *)v20 + 221));
          *(_DWORD *)v21 = 846553456;
          *(_QWORD *)(v21 + 24) = i;
          *(_QWORD *)(v21 + 8) = 0LL;
          *(_QWORD *)(v21 + 16) = v19;
        }
      }
    }
    if ( *(_DWORD *)(v2 + 128) == 6 )
      KeWaitForSingleObject((PVOID)(v13 + 520), Executive, 0, 0, 0LL);
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      v22 = DeviceObject->DeviceExtension;
      if ( v22 )
      {
        v23 = *((_QWORD *)v22 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v22 + 220) & *((_DWORD *)v22 + 221));
        *(_DWORD *)v23 = 1329877100;
        *(_QWORD *)(v23 + 16) = i;
        *(_QWORD *)(v23 + 8) = 0LL;
        *(_QWORD *)(v23 + 24) = 1348564304LL;
      }
    }
    v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v25 = DeviceObject->DeviceExtension;
      if ( v25 )
      {
        v26 = *((_QWORD *)v25 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v25 + 220) & *((_DWORD *)v25 + 221));
        *(_DWORD *)v26 = 1413771367;
        *(_QWORD *)(v26 + 16) = i;
        *(_QWORD *)(v26 + 8) = 0LL;
        *(_QWORD *)(v26 + 24) = 0LL;
      }
    }
    if ( !i )
      goto LABEL_61;
    v27 = (unsigned __int8 *)DeviceObject->DeviceExtension;
    if ( !v27 )
      goto LABEL_135;
    if ( *(_DWORD *)v27 != 541218120 )
      UsbhTrapFatal_Dbg(DeviceObject, v27);
    if ( i <= v27[2938] && (v28 = *((_QWORD *)v27 + 382)) != 0 )
    {
      v29 = 2928LL * i + v28 - 2928;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v30 = *((_QWORD *)v27 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v27 + 220) & *((_DWORD *)v27 + 221));
        *(_DWORD *)v30 = 1044672615;
        *(_QWORD *)(v30 + 8) = 0LL;
        *(_QWORD *)(v30 + 16) = i;
        *(_QWORD *)(v30 + 24) = v29;
      }
      if ( v29 && (v31 = *(_QWORD *)(v29 + 392)) != 0 )
      {
        v32 = PdoExt(v31);
        Pool2 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
        if ( Pool2 )
        {
          *(_DWORD *)Pool2 = 1668571500;
          *(_QWORD *)(Pool2 + 32) = v31;
          *(_DWORD *)(Pool2 + 24) = 1348564304;
          *(_QWORD *)(Pool2 + 40) = 0LL;
          v34 = (_QWORD *)(Pool2 + 8);
          v35 = (_QWORD *)*((_QWORD *)v32 + 160);
          if ( (_DWORD *)*v35 != v32 + 318 )
            goto LABEL_131;
          *v34 = v32 + 318;
          v34[1] = v35;
          *v35 = v34;
          *((_QWORD *)v32 + 160) = v34;
        }
        else
        {
          ++v32[322];
        }
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v24);
        v36 = PdoExt(v31);
        KeWaitForSingleObject(v36 + 724, Executive, 0, 0, 0LL);
        v36[355] |= 0x10000000u;
        KeSetEvent((PRKEVENT)(v36 + 724), 0, 0);
        Log((__int64)DeviceObject, 256, 1968194639, v31, 1348564304LL);
        LOBYTE(v36) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
        WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
        UsbhDerefPdo((__int64)DeviceObject, v31, 0LL, 0x50617550u);
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, (KIRQL)v36);
        v2 = a2;
      }
      else
      {
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v24);
        v2 = a2;
      }
    }
    else
    {
LABEL_61:
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v24);
    }
    HIDWORD(v75) = 0;
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v38 = DeviceObject->DeviceExtension;
      if ( v38 )
      {
        v39 = *((_QWORD *)v38 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v38 + 220) & *((_DWORD *)v38 + 221));
        *(_DWORD *)v39 = 829912937;
        *(_QWORD *)(v39 + 24) = i;
        *(_QWORD *)(v39 + 8) = 0LL;
        *(_QWORD *)(v39 + 16) = v2;
      }
    }
    LODWORD(v75) = 0x80000;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        79,
        (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
        i);
    if ( (UsbhLogMask & 8) != 0 )
    {
      v40 = DeviceObject->DeviceExtension;
      if ( v40 )
      {
        v41 = *((_QWORD *)v40 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v40 + 220) & *((_DWORD *)v40 + 221));
        *(_DWORD *)v41 = 1413771367;
        *(_QWORD *)(v41 + 16) = i;
        *(_QWORD *)(v41 + 8) = 0LL;
        *(_QWORD *)(v41 + 24) = 0LL;
      }
    }
    if ( i )
    {
      v42 = (unsigned __int8 *)DeviceObject->DeviceExtension;
      if ( !v42 )
        goto LABEL_135;
      if ( *(_DWORD *)v42 != 541218120 )
        UsbhTrapFatal_Dbg(DeviceObject, v42);
      if ( i <= v42[2938] )
      {
        v43 = *((_QWORD *)v42 + 382);
        if ( v43 )
        {
          v37 = i;
          v44 = 2928LL * i + v43 - 2928;
          if ( (UsbhLogMask & 8) != 0 )
          {
            v45 = *((_QWORD *)v42 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v42 + 220) & *((_DWORD *)v42 + 221));
            *(_DWORD *)v45 = 1044672615;
            *(_QWORD *)(v45 + 8) = 0LL;
            *(_QWORD *)(v45 + 16) = i;
            *(_QWORD *)(v45 + 24) = v44;
          }
          if ( v44 )
            UsbhDispatch_PortChangeQueueEventEx((_DWORD)DeviceObject, v44, 4, v2, v75, 0, 0LL, 0LL);
        }
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        80,
        (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
        i);
    v46 = DeviceObject->DeviceExtension;
    if ( !v46 )
      goto LABEL_135;
    if ( *v46 != 541218120 )
      UsbhTrapFatal_Dbg(DeviceObject, v46);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dq(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v46,
        v37,
        66,
        (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
        i,
        v2);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v47 = DeviceObject->DeviceExtension;
      if ( v47 )
      {
        v48 = *((_QWORD *)v47 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v47 + 220) & *((_DWORD *)v47 + 221));
        *(_DWORD *)v48 = 842024272;
        *(_QWORD *)(v48 + 24) = i;
        *(_QWORD *)(v48 + 8) = 0LL;
        *(_QWORD *)(v48 + 16) = 0LL;
      }
    }
    if ( (UsbhLogMask & 8) != 0 )
    {
      v49 = DeviceObject->DeviceExtension;
      if ( v49 )
      {
        v50 = *((_QWORD *)v49 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v49 + 220) & *((_DWORD *)v49 + 221));
        *(_DWORD *)v50 = 1413771367;
        *(_QWORD *)(v50 + 16) = i;
        *(_QWORD *)(v50 + 8) = 0LL;
        *(_QWORD *)(v50 + 24) = 0LL;
      }
    }
    if ( i )
    {
      v51 = (unsigned __int8 *)DeviceObject->DeviceExtension;
      if ( !v51 )
        goto LABEL_135;
      if ( *(_DWORD *)v51 != 541218120 )
        UsbhTrapFatal_Dbg(DeviceObject, v51);
      if ( i <= v51[2938] )
      {
        v52 = *((_QWORD *)v51 + 382);
        if ( v52 )
        {
          v53 = 2928LL * i + v52 - 2928;
          if ( (UsbhLogMask & 8) != 0 )
          {
            v54 = *((_QWORD *)v51 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v51 + 220) & *((_DWORD *)v51 + 221));
            *(_DWORD *)v54 = 1044672615;
            *(_QWORD *)(v54 + 8) = 0LL;
            *(_QWORD *)(v54 + 16) = i;
            *(_QWORD *)(v54 + 24) = v53;
          }
          if ( v53 )
          {
            UsbhDispatch_PortChangeQueueEventEx((_DWORD)DeviceObject, v53, 2, v2, 0LL, 0, 0LL, 0LL);
            v55 = *(unsigned __int16 *)(v53 + 4);
            if ( (UsbhLogMask & 0x100) != 0 )
            {
              v56 = DeviceObject->DeviceExtension;
              if ( v56 )
              {
                v57 = *((_QWORD *)v56 + 111)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v56 + 220) & *((_DWORD *)v56 + 221));
                *(_DWORD *)v57 = 1329877100;
                *(_QWORD *)(v57 + 8) = 0LL;
                *(_QWORD *)(v57 + 16) = v55;
                *(_QWORD *)(v57 + 24) = 1884308559LL;
              }
            }
            v58 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
            WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
            if ( (UsbhLogMask & 8) != 0 )
            {
              v59 = DeviceObject->DeviceExtension;
              if ( v59 )
              {
                v60 = *((_QWORD *)v59 + 111)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v59 + 220) & *((_DWORD *)v59 + 221));
                *(_DWORD *)v60 = 1413771367;
                *(_QWORD *)(v60 + 8) = 0LL;
                *(_QWORD *)(v60 + 16) = v55;
                *(_QWORD *)(v60 + 24) = 0LL;
              }
            }
            if ( !(_WORD)v55 )
              goto LABEL_126;
            v61 = (unsigned __int8 *)DeviceObject->DeviceExtension;
            if ( !v61 )
              goto LABEL_135;
            if ( *(_DWORD *)v61 != 541218120 )
              UsbhTrapFatal_Dbg(DeviceObject, v61);
            if ( (unsigned __int16)v55 <= v61[2938] && (v62 = *((_QWORD *)v61 + 382)) != 0 )
            {
              v63 = 2928 * v55 + v62 - 2928;
              if ( (UsbhLogMask & 8) != 0 )
              {
                v64 = *((_QWORD *)v61 + 111)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v61 + 220) & *((_DWORD *)v61 + 221));
                *(_DWORD *)v64 = 1044672615;
                *(_QWORD *)(v64 + 8) = 0LL;
                *(_QWORD *)(v64 + 16) = v55;
                *(_QWORD *)(v64 + 24) = v63;
              }
              if ( v63 && (v65 = *(_QWORD *)(v63 + 392)) != 0 )
              {
                v66 = PdoExt(v65);
                v67 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
                if ( v67 )
                {
                  *(_DWORD *)v67 = 1668571500;
                  *(_QWORD *)(v67 + 32) = v65;
                  *(_DWORD *)(v67 + 24) = 1884308559;
                  *(_QWORD *)(v67 + 40) = 0LL;
                  v68 = (_QWORD *)(v67 + 8);
                  v69 = (_QWORD *)*((_QWORD *)v66 + 160);
                  if ( (_DWORD *)*v69 != v66 + 318 )
LABEL_131:
                    __fastfail(3u);
                  *v68 = v66 + 318;
                  v68[1] = v69;
                  *v69 = v68;
                  *((_QWORD *)v66 + 160) = v68;
                }
                else
                {
                  ++v66[322];
                }
                WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
                KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v58);
                v70 = *(unsigned int *)(v53 + 400);
                *(_DWORD *)(v53 + 416) = 1;
                *(_QWORD *)(v53 + 376) = v53 + 24;
                UsbhCancelEnumeration(DeviceObject, v70, v53, v65);
                *(_QWORD *)(v53 + 376) = 0LL;
                if ( *(_DWORD *)(v53 + 416) )
                {
                  Log((__int64)DeviceObject, 1024, 1970032689, v65, v53);
                  v71 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
                  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
                  *(_DWORD *)(v53 + 416) = 0;
                  Log((__int64)DeviceObject, 1024, 1970032690, v65, v53);
                  UsbhDerefPdo((__int64)DeviceObject, v65, 0LL, 0x7050444Fu);
                  v72 = v71;
                  goto LABEL_123;
                }
                v2 = a2;
                *(_DWORD *)(v53 + 400) = 0;
              }
              else
              {
                v72 = v58;
LABEL_123:
                WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
                KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v72);
                v2 = a2;
              }
            }
            else
            {
LABEL_126:
              WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
              KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v58);
            }
            v13 = v74;
          }
        }
      }
    }
    if ( *(_DWORD *)(v2 + 128) == 6 )
      KeSetEvent((PRKEVENT)(v13 + 520), 0, 0);
  }
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    v73 = *((_QWORD *)v11 + 111)
        + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v11 + 220) & *((_DWORD *)v11 + 221));
    *(_DWORD *)v73 = 1047880048;
    *(_QWORD *)(v73 + 8) = 0LL;
    *(_QWORD *)(v73 + 16) = 0LL;
    *(_QWORD *)(v73 + 24) = 0LL;
  }
  return 0LL;
}
