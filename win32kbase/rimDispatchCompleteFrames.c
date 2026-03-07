LARGE_INTEGER __fastcall rimDispatchCompleteFrames(
        struct RawInputManagerObject *a1,
        LARGE_INTEGER *a2,
        __int64 a3,
        LARGE_INTEGER *a4,
        unsigned int a5)
{
  __int64 v5; // rbp
  __int64 v6; // r15
  struct RawInputManagerObject *v8; // rdi
  unsigned __int64 v9; // r12
  LARGE_INTEGER *v10; // rsi
  LARGE_INTEGER *v11; // r14
  LARGE_INTEGER v12; // rax
  char *v13; // rdx
  LARGE_INTEGER result; // rax
  _QWORD v15[2]; // [rsp+30h] [rbp-78h] BYREF
  __int64 *v16[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 *v17[11]; // [rsp+50h] [rbp-58h] BYREF

  v5 = (__int64)a4;
  v15[0] = 0LL;
  v6 = a3;
  v15[1] = a5;
  v8 = a1;
  v9 = (unsigned __int64)a4 + a5;
  v10 = a4;
  if ( (unsigned __int64)a4 < v9 )
  {
    do
    {
      v11 = v10;
      v10 = (LARGE_INTEGER *)((char *)v10 + v10->LowPart);
      if ( (a2[23].LowPart & 0x2000) != 0 )
      {
        if ( !gbIgnoreStressedOutStuff )
        {
          v12 = v11[4];
          if ( v12.QuadPart != a2[3].QuadPart && v12.QuadPart != a2[43].QuadPart )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 601);
        }
        if ( !v11[24].LowPart )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 602);
      }
      v11[25].LowPart = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v11[26] = KeQueryPerformanceCounter(0LL);
    }
    while ( (unsigned __int64)v10 < v9 );
    v8 = a1;
    v5 = (__int64)a4;
    v6 = a3;
  }
  rimStackAttachAndProcessInput((__int64)v8, (__int64)a2, v5, (__int64)v15, 1);
  if ( !*((_QWORD *)v8 + 104) && !*((_BYTE *)v8 + 776) && a2[3].QuadPart )
  {
    v16[1] = (__int64 *)a2;
    v16[0] = (__int64 *)((char *)v8 + 48);
    HMAssignmentLock(v16, 0);
    v17[0] = (__int64 *)((char *)v8 + 56);
    v17[1] = (__int64 *)a2[59].QuadPart;
    HMAssignmentLock(v17, 0);
  }
  rimSignalReadComplete(v8, a2);
  v13 = *(char **)(a2[59].QuadPart + 1064);
  if ( v13 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v13);
  if ( *(_QWORD *)(v6 + 8) != v6 + 8 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 656);
  result = a2[59];
  *(_QWORD *)(result.QuadPart + 1064) = v6;
  return result;
}
