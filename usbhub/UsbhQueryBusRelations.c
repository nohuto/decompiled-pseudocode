__int64 __fastcall UsbhQueryBusRelations(__int64 a1, IRP *a2)
{
  IRP *v2; // r14
  unsigned int v4; // r12d
  int ActivityIdIrp; // eax
  __int64 v6; // rsi
  __int128 *v7; // r8
  const GUID *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  PVOID *Information; // r15
  NTSTATUS v13; // eax
  unsigned int v14; // r10d
  _DWORD *v16; // r8
  unsigned __int16 v17; // ax
  unsigned int *Pool2; // rax
  unsigned int *v19; // r13
  unsigned int v20; // r13d
  PVOID *v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  _DWORD *v25; // rbx
  _DWORD *v26; // rbx
  KIRQL v27; // al
  _QWORD *v28; // r15
  _QWORD *v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rdx
  KSPIN_LOCK **v32; // r15
  KSPIN_LOCK *v33; // rbx
  KSPIN_LOCK *v34; // rax
  KSPIN_LOCK *v35; // r13
  KIRQL v36; // al
  KSPIN_LOCK v37; // rcx
  KSPIN_LOCK **v38; // rcx
  __int64 v39; // rax
  KIRQL v40; // dl
  _DWORD *v41; // rdx
  const GUID *v42; // rdx
  KIRQL v43; // [rsp+64h] [rbp-9Ch]
  unsigned int *v45; // [rsp+80h] [rbp-80h]
  __int128 *v46; // [rsp+88h] [rbp-78h]
  __int128 v47; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v48; // [rsp+D8h] [rbp-28h] BYREF

  v2 = a2;
  v4 = 0;
  v48 = 0LL;
  if ( a2 && g_IoGetActivityIdIrp )
    ActivityIdIrp = g_IoGetActivityIdIrp(a2, &v48);
  else
    ActivityIdIrp = -1073741823;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = *(_QWORD *)(a1 + 64);
  if ( !v6 )
    goto LABEL_67;
  if ( *(_DWORD *)v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v6);
  v7 = &v48;
  if ( ActivityIdIrp < 0 )
    v7 = 0LL;
  v46 = v7;
  v47 = 0LL;
  if ( dword_1C006B690 )
  {
    if ( v7 )
      v47 = *v7;
    v8 = (const GUID *)&v47;
    if ( !v7 )
      v8 = 0LL;
    UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_QUERY_BUSRELATIONS_DISPATCH, v8);
  }
  v9 = *(int *)(v6 + 1360);
  if ( (UsbhLogMask & 2) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 64);
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
      *(_DWORD *)v11 = 827474513;
      *(_QWORD *)(v11 + 8) = 0LL;
      *(_QWORD *)(v11 + 16) = v2;
      *(_QWORD *)(v11 + 24) = v9;
    }
  }
  Information = (PVOID *)v2->IoStatus.Information;
  if ( Information )
    v4 = *(_DWORD *)Information;
  if ( *(_DWORD *)(v6 + 1360) != 5 )
  {
    ++v2->CurrentLocation;
    ++v2->Tail.Overlay.CurrentStackLocation;
    v2->IoStatus.Status = 0;
    v13 = IofCallDriver(*(PDEVICE_OBJECT *)(v6 + 1208), v2);
    Log(a1, 2, 1363300897, 0, v13);
    return v14;
  }
  v16 = *(_DWORD **)(a1 + 64);
  if ( !v16 )
    goto LABEL_67;
  if ( *v16 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  Usbh_SSH_Event(a1, 6u, (__int64)(v16 + 346));
  v17 = UsbhNumberOfPorts(a1);
  Pool2 = (unsigned int *)ExAllocatePool2(64LL, 8LL * (v4 + v17 - 1) + 16, 1112885333LL);
  v45 = Pool2;
  v19 = Pool2;
  if ( Pool2 )
  {
    if ( v4 )
    {
      *Pool2 = v4;
      memmove(Pool2 + 4, Information + 1, 8LL * v4);
    }
    if ( Information )
      ExFreePoolWithTag(Information, 0);
    if ( (UsbhLogMask & 2) != 0 )
    {
      v23 = *(_QWORD *)(a1 + 64);
      if ( v23 )
      {
        v24 = *(_QWORD *)(v23 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v23 + 880)) & *(_DWORD *)(v23 + 884));
        *(_DWORD *)v24 = 844251729;
        *(_QWORD *)(v24 + 8) = 0LL;
        *(_QWORD *)(v24 + 16) = v2;
        *(_QWORD *)(v24 + 24) = v19;
      }
    }
    v25 = *(_DWORD **)(a1 + 64);
    if ( v25 )
    {
      if ( *v25 != 541218120 )
        UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
      v26 = v25 + 346;
      v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      v26[34] = 1;
      *((_BYTE *)v26 + 132) = v27;
      v26[22] = 2018460752;
      v26[23] = 8;
      WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))v26;
      *((_QWORD *)v26 + 3) = KeGetCurrentThread();
      v28 = *(_QWORD **)(v6 + 4808);
      *(_DWORD *)(v6 + 904) = 0;
      if ( v28 != (_QWORD *)(v6 + 4808) )
      {
        do
        {
          v29 = v28 - 165;
          Log(a1, 2, 1902277169, (_DWORD)v28 - 1320, 0LL);
          UsbhNumberOfPorts(a1);
          if ( !v28[152] )
            v29[317] = MEMORY[0xFFFFF78000000014];
          ObfReferenceObject((PVOID)v29[105]);
          *(_QWORD *)&v19[2 * (*v19)++ + 2] = v29[105];
          v30 = PdoExt(v29[105]);
          v31 = ((unsigned __int8)*(_DWORD *)(v30 + 4) + 1) & 7;
          *(_DWORD *)(v30 + 4) = v31;
          v31 *= 32LL;
          *(_DWORD *)(v31 + v30 + 16) = 8;
          *(_DWORD *)(v31 + v30 + 20) = *(_DWORD *)(v30 + 1124);
          *(_DWORD *)(v31 + v30 + 24) = 3;
          *(_DWORD *)(v30 + 1124) = 3;
          v28 = (_QWORD *)*v28;
        }
        while ( v28 != (_QWORD *)(v6 + 4808) );
        v2 = a2;
      }
      v32 = (KSPIN_LOCK **)(v6 + 4824);
      while ( 1 )
      {
        v33 = *v32;
        if ( *v32 == (KSPIN_LOCK *)v32 )
          break;
        if ( (KSPIN_LOCK **)v33[1] != v32 )
          goto LABEL_54;
        v34 = (KSPIN_LOCK *)*v33;
        if ( *(KSPIN_LOCK **)(*v33 + 8) != v33 )
          goto LABEL_54;
        *v32 = v34;
        v35 = v33 - 165;
        v34[1] = (KSPIN_LOCK)v32;
        Log(a1, 2, 1902277170, (_DWORD)v33 - 1320, 0LL);
        SET_PDO_HWPNPSTATE(*(v33 - 60), 5LL, 9LL);
        *v33 = 0LL;
        v33[1] = 0LL;
        v36 = KeAcquireSpinLockRaiseToDpc(v33 + 186);
        v43 = v36;
        if ( *((_DWORD *)v33 + 374) == 1 )
        {
          v37 = v35[105];
          *((_DWORD *)v35 + 704) = 0;
          USBD_RemoveDeviceFromGlobalList(v37);
          v36 = v43;
        }
        KeReleaseSpinLock(v35 + 351, v36);
        v38 = *(KSPIN_LOCK ***)(v6 + 4848);
        if ( *v38 != (KSPIN_LOCK *)(v6 + 4840) )
LABEL_54:
          __fastfail(3u);
        *v33 = v6 + 4840;
        v33[1] = (KSPIN_LOCK)v38;
        *v38 = v33;
        *(_QWORD *)(v6 + 4848) = v33;
      }
      v39 = *(_QWORD *)(a1 + 64);
      if ( v39 )
      {
        if ( *(_DWORD *)v39 != 541218120 )
          UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
        *(_DWORD *)(v39 + 1520) = 0;
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        v40 = *(_BYTE *)(v39 + 1516);
        *(_DWORD *)(v39 + 1472) = 1734964085;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v40);
        ++v2->CurrentLocation;
        ++v2->Tail.Overlay.CurrentStackLocation;
        v2->IoStatus.Information = (unsigned __int64)v45;
        v2->IoStatus.Status = 0;
        v20 = IofCallDriver(*(PDEVICE_OBJECT *)(v6 + 1208), v2);
        goto LABEL_58;
      }
    }
LABEL_67:
    UsbhTrapFatal_Dbg(a1, 0LL);
  }
  v20 = -1073741670;
  Log(a1, 2, 1363300915, (_DWORD)v2, 0LL);
  v2->IoStatus.Information = 0LL;
  if ( v4 )
  {
    v21 = Information + 1;
    v22 = v4;
    do
    {
      ObfDereferenceObject(*v21++);
      --v22;
    }
    while ( v22 );
  }
  if ( Information )
    ExFreePoolWithTag(Information, 0);
  v2->IoStatus.Status = -1073741670;
  IofCompleteRequest(v2, 0);
LABEL_58:
  v47 = 0LL;
  if ( dword_1C006B690 )
  {
    v41 = *(_DWORD **)(a1 + 64);
    if ( !v41 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *v41 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v41);
    if ( v46 )
      v47 = *v46;
    v42 = (const GUID *)&v47;
    if ( !v46 )
      v42 = 0LL;
    UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_QUERY_BUSRELATIONS_COMPLETE, v42);
  }
  return v20;
}
