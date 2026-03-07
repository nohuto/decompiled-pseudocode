void __fastcall UserDeleteW32Thread(__int64 *a1)
{
  __int64 v1; // rsi
  void *v3; // rcx
  void *v4; // rdx
  void *v5; // rdx
  __int64 v6; // rax
  tagQ *v7; // rcx
  _QWORD *ThreadWin32Thread; // rax
  NSInstrumentation::CLeakTrackingAllocator *v9; // rcx
  void *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // [rsp+40h] [rbp+8h] BYREF
  int v16; // [rsp+48h] [rbp+10h]

  v1 = *a1;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v15);
  if ( *((_DWORD *)a1 + 2) )
  {
    v16 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2119LL);
  }
  else
  {
    v3 = (void *)a1[92];
    if ( v3 )
      ObfDereferenceObject(v3);
    v4 = (void *)a1[111];
    if ( v4 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v4);
    v5 = (void *)a1[62];
    if ( v5 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v5);
    a1[92] = MmUserProbeAddress;
    a1[111] = MmUserProbeAddress;
    a1[62] = MmUserProbeAddress;
    v6 = a1[54];
    if ( v6 )
    {
      if ( !*(_DWORD *)(v6 + 400) )
      {
        v16 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2067LL);
      }
      --*(_DWORD *)(a1[54] + 400);
      v7 = (tagQ *)a1[54];
      if ( !*((_DWORD *)v7 + 100) && !tagQ::IsAnyThreadAttached(v7) )
      {
        if ( (int)IsFreeMessageListSupported() >= 0 && qword_1C02D6730 )
          qword_1C02D6730(a1[54] + 24);
        FreeQueue((void *)a1[54]);
      }
    }
    if ( a1[57] )
      UnlockObjectAssignment();
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(v1);
    v9 = gpLeakTrackingAllocator;
    v10 = ThreadWin32Thread;
    *ThreadWin32Thread = 0LL;
    NSInstrumentation::CLeakTrackingAllocator::Free(v9, a1);
    PsSetThreadWin32Thread(v1, 0LL, v10);
    ExFreePoolWithTag(v10, 0);
  }
  if ( !v15 )
    UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
}
