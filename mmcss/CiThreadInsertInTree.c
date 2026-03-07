char __fastcall CiThreadInsertInTree(__int64 a1)
{
  _QWORD *v2; // rdx
  _QWORD *v3; // rax
  unsigned __int64 v4; // r8

  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
  v2 = *(_QWORD **)&WPP_MAIN_CB.DeviceQueue.Type;
  *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = KeGetCurrentThread();
  LOBYTE(v3) = 0;
  v4 = *(_QWORD *)(a1 + 96);
  if ( !*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type )
    goto LABEL_10;
  while ( 1 )
  {
    if ( v4 < v2[7] )
    {
      v3 = (_QWORD *)*v2;
      if ( !*v2 )
        goto LABEL_10;
      goto LABEL_5;
    }
    if ( v4 <= v2[7] )
    {
      *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc, 0);
      return 0;
    }
    v3 = (_QWORD *)v2[1];
    if ( !v3 )
      break;
LABEL_5:
    v2 = v3;
  }
  LOBYTE(v3) = 1;
LABEL_10:
  RtlRbInsertNodeEx(&WPP_MAIN_CB.DeviceQueue, v2, (unsigned __int8)v3, a1 + 40);
  *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc, 0);
  return 1;
}
