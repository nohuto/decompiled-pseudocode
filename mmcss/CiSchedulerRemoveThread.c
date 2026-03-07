void __fastcall CiSchedulerRemoveThread(__int64 a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rbx
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // r8
  __int64 v7; // rax
  _QWORD *v8; // rdx

  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
  CiSystemUpdateThreadTag(a1, 0LL);
  v2 = *(_QWORD *)(a1 + 72);
  v3 = (_QWORD *)(a1 + 80);
  v4 = (_QWORD *)*v3;
  v5 = (_QWORD *)v3[1];
  if ( *(_QWORD **)(*v3 + 8LL) != v3 || (_QWORD *)*v5 != v3 )
    goto LABEL_8;
  *v5 = v4;
  v4[1] = v5;
  if ( v5 == v4 )
  {
    v6 = *(_QWORD *)(v2 + 16);
    v7 = v2 + 16;
    if ( *(_QWORD *)(v6 + 8) == v2 + 16 )
    {
      v8 = *(_QWORD **)(v2 + 24);
      if ( *v8 == v7 )
      {
        *v8 = v6;
        *(_QWORD *)(v6 + 8) = v8;
        goto LABEL_7;
      }
    }
LABEL_8:
    __fastfail(3u);
  }
LABEL_7:
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
}
