NTSTATUS __fastcall EtwTraceDpcProfilingStack(int a1, int a2)
{
  NTSTATUS result; // eax
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+40h] [rbp-38h] BYREF
  int *v4; // [rsp+50h] [rbp-28h]
  __int64 v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+80h] [rbp+8h] BYREF
  int v7; // [rsp+88h] [rbp+10h] BYREF

  v7 = a2;
  v6 = a1;
  if ( EtwCpuStarvationProvRegHandle )
  {
    *(_QWORD *)&v3.Size = 4LL;
    v3.Ptr = (ULONGLONG)&v6;
    v5 = 4LL;
    v4 = &v7;
    return EtwWriteEx(
             EtwCpuStarvationProvRegHandle,
             &CPU_STARVATION_EVENT_DPC_PROFILING_STACK,
             0LL,
             0,
             0LL,
             0LL,
             2u,
             &v3);
  }
  return result;
}
