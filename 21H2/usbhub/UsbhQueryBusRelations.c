/*
 * XREFs of UsbhQueryBusRelations @ 0x1C000B7A0
 * Callers:
 *     UsbhFdoPnp_QueryDeviceRelations @ 0x1C000EDC0 (UsbhFdoPnp_QueryDeviceRelations.c)
 * Callees:
 *     Usbh_SSH_Event @ 0x1C0004D80 (Usbh_SSH_Event.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     UsbhEtwWrite @ 0x1C000CB00 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1C001F330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F4F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001F540 (memmove.c)
 *     UsbhNumberOfPorts @ 0x1C0028F40 (UsbhNumberOfPorts.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002D6A8 (UsbhTrapFatal_Dbg.c)
 *     SET_PDO_HWPNPSTATE @ 0x1C0035D18 (SET_PDO_HWPNPSTATE.c)
 */

__int64 __fastcall UsbhQueryBusRelations(__int64 a1, IRP *a2)
{
  unsigned int v4; // r12d
  int ActivityIdIrp; // eax
  __int64 v6; // rsi
  __int128 *v7; // rdx
  int v8; // eax
  const GUID *v9; // rdx
  __int64 v10; // r8
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rcx
  PVOID *Information; // r15
  NTSTATUS v15; // eax
  unsigned int v16; // r10d
  _DWORD *v18; // r8
  unsigned __int16 v19; // ax
  unsigned int *Pool2; // rax
  unsigned int *v21; // r13
  unsigned int v22; // r13d
  PVOID *v23; // rbx
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  _DWORD *v27; // rbx
  _DWORD *v28; // rbx
  KIRQL v29; // al
  _QWORD *v30; // r15
  _QWORD *v31; // rbx
  _DWORD *v32; // rax
  __int64 v33; // rdx
  KSPIN_LOCK **v34; // r15
  KSPIN_LOCK *v35; // rbx
  KSPIN_LOCK *v36; // rax
  KSPIN_LOCK *v37; // r13
  KIRQL v38; // al
  KSPIN_LOCK v39; // rcx
  KSPIN_LOCK **v40; // rcx
  __int64 v41; // rax
  KIRQL v42; // dl
  _DWORD *v43; // rdx
  int v44; // eax
  const GUID *v45; // rdx
  KIRQL v46; // [rsp+64h] [rbp-9Ch]
  unsigned int *v47; // [rsp+78h] [rbp-88h]
  __int128 *v48; // [rsp+80h] [rbp-80h]
  __int128 v49; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v50; // [rsp+D0h] [rbp-30h] BYREF

  v4 = 0;
  v50 = 0LL;
  if ( a2 && g_IoGetActivityIdIrp )
    ActivityIdIrp = g_IoGetActivityIdIrp(a2, &v50);
  else
    ActivityIdIrp = -1073741823;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = *(_QWORD *)(a1 + 64);
  if ( !v6 )
    goto LABEL_68;
  if ( *(_DWORD *)v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v6);
  v7 = &v50;
  if ( ActivityIdIrp < 0 )
    v7 = 0LL;
  v48 = v7;
  v49 = 0LL;
  if ( dword_1C006A690 )
  {
    if ( v7 )
    {
      v8 = 0;
      v49 = *v7;
    }
    else
    {
      v8 = -1073741823;
    }
    v9 = (const GUID *)&v49;
    if ( v8 < 0 )
      v9 = 0LL;
    UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_QUERY_BUSRELATIONS_DISPATCH, v9);
  }
  v10 = *(int *)(v6 + 1360);
  v11 = *(_DWORD *)(v6 + 1360);
  if ( (UsbhLogMask & 2) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 64);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
      *(_DWORD *)v13 = 827474513;
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_QWORD *)(v13 + 16) = a2;
      *(_QWORD *)(v13 + 24) = v10;
      v11 = *(_DWORD *)(v6 + 1360);
    }
  }
  Information = (PVOID *)a2->IoStatus.Information;
  if ( Information )
    v4 = *(_DWORD *)Information;
  if ( v11 != 5 )
  {
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    a2->IoStatus.Status = 0;
    v15 = IofCallDriver(*(PDEVICE_OBJECT *)(v6 + 1208), a2);
    Log(a1, 2, 1363300897, 0LL, v15);
    return v16;
  }
  v18 = *(_DWORD **)(a1 + 64);
  if ( !v18 )
    goto LABEL_68;
  if ( *v18 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  Usbh_SSH_Event(a1, 6u, (__int64)(v18 + 346));
  v19 = UsbhNumberOfPorts(a1);
  Pool2 = (unsigned int *)ExAllocatePool2(64LL, 8LL * (v4 + v19 - 1) + 16, 1112885333LL);
  v47 = Pool2;
  v21 = Pool2;
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
      v25 = *(_QWORD *)(a1 + 64);
      if ( v25 )
      {
        v26 = *(_QWORD *)(v25 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 880)) & *(_DWORD *)(v25 + 884));
        *(_DWORD *)v26 = 844251729;
        *(_QWORD *)(v26 + 8) = 0LL;
        *(_QWORD *)(v26 + 16) = a2;
        *(_QWORD *)(v26 + 24) = v21;
      }
    }
    v27 = *(_DWORD **)(a1 + 64);
    if ( v27 )
    {
      if ( *v27 != 541218120 )
        UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
      v28 = v27 + 346;
      v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      v28[34] = 1;
      *((_BYTE *)v28 + 132) = v29;
      v28[22] = 2018460752;
      v28[23] = 8;
      WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))v28;
      *((_QWORD *)v28 + 3) = KeGetCurrentThread();
      v30 = *(_QWORD **)(v6 + 4808);
      for ( *(_DWORD *)(v6 + 904) = 0; v30 != (_QWORD *)(v6 + 4808); v30 = (_QWORD *)*v30 )
      {
        v31 = v30 - 165;
        Log(a1, 2, 1902277169, (__int64)(v30 - 165), 0LL);
        UsbhNumberOfPorts(a1);
        if ( !v30[152] )
          v31[317] = MEMORY[0xFFFFF78000000014];
        ObfReferenceObject((PVOID)v31[105]);
        *(_QWORD *)&v21[2 * (*v21)++ + 2] = v31[105];
        v32 = PdoExt(v31[105]);
        v33 = ((unsigned __int8)v32[1] + 1) & 7;
        v32[1] = v33;
        v33 *= 32LL;
        *(_DWORD *)((char *)v32 + v33 + 16) = 8;
        *(_DWORD *)((char *)v32 + v33 + 20) = v32[281];
        *(_DWORD *)((char *)v32 + v33 + 24) = 3;
        v32[281] = 3;
      }
      v34 = (KSPIN_LOCK **)(v6 + 4824);
      while ( 1 )
      {
        v35 = *v34;
        if ( *v34 == (KSPIN_LOCK *)v34 )
          break;
        if ( (KSPIN_LOCK **)v35[1] != v34 )
          goto LABEL_54;
        v36 = (KSPIN_LOCK *)*v35;
        if ( *(KSPIN_LOCK **)(*v35 + 8) != v35 )
          goto LABEL_54;
        *v34 = v36;
        v37 = v35 - 165;
        v36[1] = (KSPIN_LOCK)v34;
        Log(a1, 2, 1902277170, (__int64)(v35 - 165), 0LL);
        SET_PDO_HWPNPSTATE(*(v35 - 60), 5LL, 9LL);
        *v35 = 0LL;
        v35[1] = 0LL;
        v38 = KeAcquireSpinLockRaiseToDpc(v35 + 186);
        v46 = v38;
        if ( *((_DWORD *)v35 + 374) == 1 )
        {
          v39 = v37[105];
          *((_DWORD *)v37 + 704) = 0;
          USBD_RemoveDeviceFromGlobalList(v39);
          v38 = v46;
        }
        KeReleaseSpinLock(v37 + 351, v38);
        v40 = *(KSPIN_LOCK ***)(v6 + 4848);
        if ( *v40 != (KSPIN_LOCK *)(v6 + 4840) )
LABEL_54:
          __fastfail(3u);
        *v35 = v6 + 4840;
        v35[1] = (KSPIN_LOCK)v40;
        *v40 = v35;
        *(_QWORD *)(v6 + 4848) = v35;
      }
      v41 = *(_QWORD *)(a1 + 64);
      if ( v41 )
      {
        if ( *(_DWORD *)v41 != 541218120 )
          UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
        *(_DWORD *)(v41 + 1520) = 0;
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        v42 = *(_BYTE *)(v41 + 1516);
        *(_DWORD *)(v41 + 1472) = 1734964085;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v42);
        ++a2->CurrentLocation;
        ++a2->Tail.Overlay.CurrentStackLocation;
        a2->IoStatus.Information = (unsigned __int64)v47;
        a2->IoStatus.Status = 0;
        v22 = IofCallDriver(*(PDEVICE_OBJECT *)(v6 + 1208), a2);
        goto LABEL_58;
      }
    }
LABEL_68:
    UsbhTrapFatal_Dbg(a1, 0LL);
  }
  v22 = -1073741670;
  Log(a1, 2, 1363300915, (__int64)a2, 0LL);
  a2->IoStatus.Information = 0LL;
  if ( v4 )
  {
    v23 = Information + 1;
    v24 = v4;
    do
    {
      ObfDereferenceObject(*v23++);
      --v24;
    }
    while ( v24 );
  }
  if ( Information )
    ExFreePoolWithTag(Information, 0);
  a2->IoStatus.Status = -1073741670;
  IofCompleteRequest(a2, 0);
LABEL_58:
  v49 = 0LL;
  if ( dword_1C006A690 )
  {
    v43 = *(_DWORD **)(a1 + 64);
    if ( !v43 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *v43 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v43);
    if ( v48 )
    {
      v44 = 0;
      v49 = *v48;
    }
    else
    {
      v44 = -1073741823;
    }
    v45 = (const GUID *)&v49;
    if ( v44 < 0 )
      v45 = 0LL;
    UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_QUERY_BUSRELATIONS_COMPLETE, v45);
  }
  return v22;
}
