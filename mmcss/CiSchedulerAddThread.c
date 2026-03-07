void __fastcall CiSchedulerAddThread(__int64 a1, __int64 a2)
{
  _QWORD *v4; // r8
  _QWORD *SystemArgument2; // rdx
  PVOID **v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rcx

  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  v4 = (_QWORD *)(a1 + 32);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
  if ( (_QWORD *)*v4 == v4 )
  {
    SystemArgument2 = WPP_MAIN_CB.Dpc.SystemArgument2;
    v6 = (PVOID **)(a1 + 16);
    if ( *(struct _DEVICE_OBJECT **)WPP_MAIN_CB.Dpc.SystemArgument2 != (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Dpc.SystemArgument1 )
      goto LABEL_5;
    *v6 = &WPP_MAIN_CB.Dpc.SystemArgument1;
    *(_QWORD *)(a1 + 24) = SystemArgument2;
    *SystemArgument2 = v6;
    WPP_MAIN_CB.Dpc.SystemArgument2 = (PVOID)(a1 + 16);
  }
  *(_BYTE *)(a2 + 107) = -1;
  v7 = (_QWORD *)(a2 + 80);
  v8 = *(_QWORD **)(a1 + 40);
  if ( (_QWORD *)*v8 != v4 )
LABEL_5:
    __fastfail(3u);
  *(_QWORD *)(a2 + 88) = v8;
  *v7 = v4;
  *v8 = v7;
  *(_QWORD *)(a1 + 40) = v7;
  CiSchedulerSetPriority(a2);
  CiSystemUpdateThreadTag(a2, *(unsigned int *)(a1 + 188));
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
}
