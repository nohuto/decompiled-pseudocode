/*
 * XREFs of UserDeleteW32Thread @ 0x1C0019A70
 * Callers:
 *     <none>
 * Callees:
 *     UnlockObjectAssignment @ 0x1C00199F0 (UnlockObjectAssignment.c)
 *     IsFreeMessageListSupported @ 0x1C0019A1C (IsFreeMessageListSupported.c)
 *     ?IsAnyThreadAttached@tagQ@@QEBA_NXZ @ 0x1C0019A48 (-IsAnyThreadAttached@tagQ@@QEBA_NXZ.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C001B500 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0029EE0 (EtwTraceReleaseUserCrit.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z @ 0x1C008AF34 (-FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall UserDeleteW32Thread(__int64 *a1)
{
  __int64 v1; // rsi
  void *ThreadWin32Thread; // rdi
  __int64 v4; // r8
  void *v5; // rcx
  void *v6; // rdx
  void *v7; // rdx
  __int64 v8; // rax
  tagQ *v9; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v10; // rcx
  int v11; // ebx
  int v12; // eax
  int v13; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  ThreadWin32Thread = 0LL;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v13);
  if ( *((_DWORD *)a1 + 2) )
    goto LABEL_30;
  v5 = (void *)a1[92];
  if ( v5 )
    ObfDereferenceObject(v5);
  v6 = (void *)a1[110];
  if ( v6 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v6);
  v7 = (void *)a1[62];
  if ( v7 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v7);
  v8 = a1[54];
  if ( v8 )
  {
    if ( !*(_DWORD *)(v8 + 392) )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v7, v4);
      v8 = a1[54];
    }
    --*(_DWORD *)(v8 + 392);
    v9 = (tagQ *)a1[54];
    if ( !*((_DWORD *)v9 + 98) && !tagQ::IsAnyThreadAttached(v9) )
    {
      if ( (int)IsFreeMessageListSupported() >= 0 && qword_1C029BE88 )
        qword_1C029BE88(a1[54] + 24);
      NSInstrumentation::CLeakTrackingAllocator::FreeToPagedLookasideList(v10, QLookaside, (void *)a1[54]);
    }
  }
  if ( a1[57] )
    UnlockObjectAssignment((void **)a1 + 57);
  ThreadWin32Thread = (void *)PsGetThreadWin32Thread(v1);
  NSInstrumentation::CLeakTrackingAllocator::Free(
    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
    a1);
  if ( !ThreadWin32Thread )
  {
LABEL_30:
    v12 = v13;
  }
  else
  {
    v11 = v13;
    if ( !v13 )
      EtwTraceReleaseUserCrit();
    PsSetThreadWin32Thread(v1, 0LL, ThreadWin32Thread);
    if ( !v11 )
      UserSessionSwitchLeaveCrit();
    v12 = 1;
  }
  if ( !v12 )
    UserSessionSwitchLeaveCrit();
  if ( ThreadWin32Thread )
    ExFreePoolWithTag(ThreadWin32Thread, 0);
}
