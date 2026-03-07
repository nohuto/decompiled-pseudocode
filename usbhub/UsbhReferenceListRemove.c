void __fastcall UsbhReferenceListRemove(__int64 a1, __int64 a2)
{
  KIRQL v4; // r14
  __int64 v5; // rsi
  _QWORD *v6; // rdi
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // r8
  _QWORD *v10; // rdx
  _DWORD *v11; // rcx
  int v12; // eax

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  v5 = FdoExt(a1);
  v6 = (_QWORD *)(v5 + 2512);
  v7 = *(_QWORD **)(v5 + 2512);
  if ( v7 != (_QWORD *)(v5 + 2512) && v7 )
  {
    while ( v7 != v6 )
    {
      v8 = v7 - 3;
      if ( v7 == (_QWORD *)24 || *(_DWORD *)v8 != 1397515890 )
LABEL_15:
        UsbhTrapFatal_Dbg(a1, a1);
      if ( v8[2] == a2 )
      {
        v9 = *v7;
        if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v10 = (_QWORD *)v7[1], (_QWORD *)*v10 != v7) )
          __fastfail(3u);
        *v10 = v9;
        *(_QWORD *)(v9 + 8) = v10;
        ExFreePoolWithTag(v7 - 3, 0);
        v11 = (_DWORD *)(v5 + 2528);
        goto LABEL_12;
      }
      v7 = (_QWORD *)*v7;
      if ( !v7 )
        goto LABEL_15;
    }
  }
  v11 = (_DWORD *)(v5 + 2528);
  v12 = *(_DWORD *)(v5 + 2528);
  if ( v12 )
    *v11 = v12 - 1;
LABEL_12:
  if ( (_QWORD *)*v6 == v6 && !*v11 )
    KeSetEvent((PRKEVENT)(v5 + 2488), 0, 0);
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v4);
}
