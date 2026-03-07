void __fastcall UsbhHubProcessChangeWorker(PDEVICE_OBJECT DeviceObject, unsigned __int16 *Context, int a3)
{
  _DWORD *DeviceExtension; // rdx
  __int64 v6; // r13
  struct _KEVENT *v7; // rbp
  struct _KEVENT *v8; // r12
  __int64 Signalling; // r8
  void *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r14
  __int64 Pool2; // rax
  _LIST_ENTRY *p_WaitListHead; // rbp
  char *v15; // rax
  char **Blink; // rcx
  KIRQL v17; // al
  void *v18; // rdx
  __int64 v19; // rcx
  _DWORD *v20; // rdx
  KIRQL v21; // r8
  __int64 v22; // r9
  void *v23; // rcx
  __int64 v24; // rdx
  struct _KEVENT *v25; // rbp
  __int64 v26; // r8
  void *v27; // rdx
  __int64 v28; // rcx
  volatile int Lock; // eax
  __int64 v30; // rcx
  _QWORD *v31; // rax
  _QWORD *v32; // rdx
  unsigned int v33; // eax
  __int64 v34; // rdx
  union _LARGE_INTEGER Timeout; // [rsp+90h] [rbp+18h] BYREF

  if ( !DeviceObject )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  DeviceExtension = DeviceObject->DeviceExtension;
  if ( !DeviceExtension )
    goto LABEL_50;
  if ( *DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceExtension);
  v6 = Context[2];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      (unsigned int)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      a3,
      100,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v6,
      (char)Context);
  v7 = (struct _KEVENT *)DeviceObject->DeviceExtension;
  if ( !v7 )
    goto LABEL_50;
  if ( v7->Header.LockNV != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
  v8 = v7 + 139;
  v7[142].Header.Type = 1;
  KeWaitForSingleObject(&v7[139], Executive, 0, 0, 0LL);
  Signalling = v7[142].Header.Signalling;
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    v10 = DeviceObject->DeviceExtension;
    if ( v10 )
    {
      v11 = *((_QWORD *)v10 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v10 + 220) & *((_DWORD *)v10 + 221));
      *(_DWORD *)v11 = 1668172104;
      *(_QWORD *)(v11 + 8) = 0LL;
      *(_QWORD *)(v11 + 16) = 0LL;
      *(_QWORD *)(v11 + 24) = Signalling;
    }
  }
  if ( v7[142].Header.Signalling )
  {
    Pool2 = ExAllocatePool2(64LL, 40LL, 1112885333LL);
    v12 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)Pool2 = 1215918946;
      p_WaitListHead = &v7[129].Header.WaitListHead;
      *(_QWORD *)(Pool2 + 24) = Context;
      *(_DWORD *)(Pool2 + 32) = 1129345907;
      v15 = (char *)(Pool2 + 8);
      Blink = (char **)p_WaitListHead->Blink;
      if ( *Blink != (char *)p_WaitListHead )
        goto LABEL_49;
      *(_QWORD *)v15 = p_WaitListHead;
      *((_QWORD *)v15 + 1) = Blink;
      *Blink = v15;
      p_WaitListHead->Blink = (_LIST_ENTRY *)v15;
    }
    else
    {
      ++v7[130].Header.LockNV;
      v12 = 1936941672LL;
    }
    KeSetEvent(v8, 0, 0);
  }
  else
  {
    KeSetEvent(v7 + 139, 0, 0);
    v12 = 0LL;
  }
  Timeout.QuadPart = -6600000000LL - (int)(KeQueryTimeIncrement() - 1);
  if ( KeWaitForSingleObject(Context + 1232, Executive, 0, 0, &Timeout) == 258 )
  {
    v33 = *((_DWORD *)Context + 711);
    v34 = 10LL;
    if ( v33 )
      v34 = v33;
    UsbhTrapFatalTimeout_x9f(DeviceObject, v34, Context);
  }
  v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 306);
  *((_DWORD *)Context + 603) = 2;
  KeReleaseSpinLock((PKSPIN_LOCK)Context + 306, v17);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v18 = DeviceObject->DeviceExtension;
    if ( v18 )
    {
      v19 = *((_QWORD *)v18 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v18 + 220) & *((_DWORD *)v18 + 221));
      *(_DWORD *)v19 = 1464029256;
      *(_QWORD *)(v19 + 8) = 0LL;
      *(_QWORD *)(v19 + 16) = Context;
      *(_QWORD *)(v19 + 24) = v6;
    }
  }
  v20 = DeviceObject->DeviceExtension;
  if ( !v20 )
    goto LABEL_50;
  if ( *v20 != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, v20);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      57,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      Context[2]);
  UsbhDispatch_PortChangeQueueEventEx((_DWORD)DeviceObject, (_DWORD)Context, 5, (_DWORD)Context + 24, 0LL, 0, 0LL, 0LL);
  KeSetEvent((PRKEVENT)(Context + 1232), 0, 0);
  v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 306);
  v22 = *((unsigned int *)Context + 603);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v23 = DeviceObject->DeviceExtension;
    if ( v23 )
    {
      v24 = *((_QWORD *)v23 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v23 + 220) & *((_DWORD *)v23 + 221));
      *(_DWORD *)v24 = 1682133064;
      *(_QWORD *)(v24 + 8) = 0LL;
      *(_QWORD *)(v24 + 16) = v22;
      *(_QWORD *)(v24 + 24) = v6;
    }
  }
  if ( *((_DWORD *)Context + 603) == 2 )
    *((_DWORD *)Context + 603) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)Context + 306, v21);
  v25 = (struct _KEVENT *)DeviceObject->DeviceExtension;
  if ( !v25 )
LABEL_50:
    UsbhTrapFatal_Dbg(DeviceObject, 0LL);
  if ( v25->Header.LockNV != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
  v25[142].Header.Type = 1;
  KeWaitForSingleObject(&v25[139], Executive, 0, 0, 0LL);
  v26 = v25[142].Header.Signalling;
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    v27 = DeviceObject->DeviceExtension;
    if ( v27 )
    {
      v28 = *((_QWORD *)v27 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v27 + 220) & *((_DWORD *)v27 + 221));
      *(_DWORD *)v28 = 1667581000;
      *(_QWORD *)(v28 + 8) = 0LL;
      *(_QWORD *)(v28 + 16) = v12;
      *(_QWORD *)(v28 + 24) = v26;
    }
  }
  if ( v25[142].Header.Signalling )
  {
    if ( v12 == 1936941672 )
    {
      Lock = v25[130].Header.Lock;
      if ( Lock )
        v25[130].Header.LockNV = Lock - 1;
      goto LABEL_42;
    }
    if ( !v12 )
      goto LABEL_42;
    v30 = *(_QWORD *)(v12 + 8);
    v31 = (_QWORD *)(v12 + 8);
    if ( *(_QWORD *)(v30 + 8) == v12 + 8 )
    {
      v32 = *(_QWORD **)(v12 + 16);
      if ( (_QWORD *)*v32 == v31 )
      {
        *v32 = v30;
        *(_QWORD *)(v30 + 8) = v32;
        *(_QWORD *)(v12 + 16) = v12 + 8;
        *v31 = v31;
        ExFreePoolWithTag((PVOID)v12, 0);
        goto LABEL_42;
      }
    }
LABEL_49:
    __fastfail(3u);
  }
LABEL_42:
  KeSetEvent(v25 + 139, 0, 0);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Context + 610, 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(Context + 1208), 0, 0);
}
