void __fastcall DelayZonePalmRejection::Uninitialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void **v4; // rbx
  __int64 *v5; // rcx
  DelayZoneTelemetry *v6; // rcx
  void *v7; // rdx
  _QWORD **v8; // rdi
  _QWORD *v9; // rsi
  __int64 v10; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // rcx

  v4 = (void **)(SGDGetUserSessionState(a1, a2, a3, a4) + 17344);
  if ( *v4 )
  {
    v5 = (__int64 *)((char *)*v4 + 24);
    if ( *v5 )
      HMAssignmentUnlockWorker(v5);
    CInpLockGuard::Uninitialize((CInpLockGuard *)((char *)*v4 + 112));
    v6 = (DelayZoneTelemetry *)*((_QWORD *)*v4 + 16);
    if ( v6 )
    {
      DelayZoneTelemetry::ClearInputPanelRects(v6);
      v7 = (void *)*((_QWORD *)*v4 + 16);
      if ( v7 )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v7);
      *((_QWORD *)*v4 + 16) = 0LL;
    }
    v8 = (_QWORD **)((char *)*v4 + 72);
    v9 = *v8;
    while ( v9 != v8 )
    {
      v10 = *v9;
      v11 = v9;
      v9 = (_QWORD *)v10;
      v12 = (_QWORD *)v11[1];
      if ( *(_QWORD **)(v10 + 8) != v11 || (_QWORD *)*v12 != v11 )
        __fastfail(3u);
      *v12 = v10;
      *(_QWORD *)(v10 + 8) = v12;
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v11);
    }
    if ( *v4 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *v4);
    *v4 = 0LL;
  }
}
