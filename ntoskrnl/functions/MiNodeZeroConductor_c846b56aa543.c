void __fastcall MiNodeZeroConductor(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // r14
  int v4; // eax
  ULONG v5; // ebp
  LARGE_INTEGER v6; // rbx
  const LARGE_INTEGER *v7; // rdi
  int started; // eax
  LARGE_INTEGER *Timeout; // rcx
  NTSTATUS v10; // eax
  LARGE_INTEGER v11; // rax
  LARGE_INTEGER v12; // rcx
  signed __int32 v13[8]; // [rsp+0h] [rbp-128h] BYREF
  PKWAIT_BLOCK WaitBlockArray; // [rsp+38h] [rbp-F0h]
  LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp-E8h] BYREF
  LARGE_INTEGER v16; // [rsp+48h] [rbp-E0h] BYREF
  PVOID Object[4]; // [rsp+50h] [rbp-D8h] BYREF
  struct _KWAIT_BLOCK v18; // [rsp+70h] [rbp-B8h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v3 = *(_QWORD *)(v1 + 16) + 25408LL * *(unsigned int *)(a1 + 56);
  *(_QWORD *)(v3 + 23152) = a1;
  *(_QWORD *)(a1 + 40) = a1 + 32;
  *(_QWORD *)(a1 + 32) = a1 + 32;
  KeInitializeEvent((PRKEVENT)a1, NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 64), SynchronizationEvent, 0);
  v4 = *(_DWORD *)(a1 + 88);
  v5 = 3;
  Object[1] = (PVOID)(a1 + 64);
  Object[2] = (PVOID)a1;
  *(_DWORD *)(a1 + 88) = v4 + 3;
  PerformanceFrequency.QuadPart = 0LL;
  Object[0] = (PVOID)(v1 + 104);
  v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
  if ( PerformanceFrequency.QuadPart != 10000000 )
    v6.QuadPart = 10000000 * v6.QuadPart / PerformanceFrequency.QuadPart;
  _InterlockedOr(v13, 0);
  while ( 1 )
  {
    v7 = &MiFiveSeconds;
    if ( (unsigned int)MiInitializeZeroEngines(a1) )
      v7 = 0LL;
    started = MiStartZeroEngineThreads(a1);
    Timeout = (LARGE_INTEGER *)&MiFiveSeconds;
    WaitBlockArray = &v18;
    if ( started )
      Timeout = (LARGE_INTEGER *)v7;
    v10 = KeWaitForMultipleObjects(v5, Object, WaitAny, WrFreePage, 0, 0, Timeout, WaitBlockArray);
    if ( !v10 )
      break;
    if ( v10 == 2 )
    {
      if ( *(_BYTE *)(a1 + 60) )
      {
        _InterlockedOr(v13, 0);
        v16.QuadPart = 0LL;
        v11 = KeQueryPerformanceCounter(&v16);
        if ( v16.QuadPart != 10000000 )
          v11.QuadPart = 10000000 * v11.QuadPart / v16.QuadPart;
        *(_BYTE *)(a1 + 60) = 0;
        v12 = v6;
        if ( v11.QuadPart >= (unsigned __int64)v6.QuadPart )
          v12 = v11;
        *(_QWORD *)(a1 + 24) = v12.QuadPart - v6.QuadPart;
        MiPreserveBootDecisions(v3, (_OWORD *)a1);
      }
      v5 = 2;
    }
  }
  MiZeroNodeExiting(a1);
}
