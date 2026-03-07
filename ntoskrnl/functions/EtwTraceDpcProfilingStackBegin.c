NTSTATUS __fastcall EtwTraceDpcProfilingStackBegin(__int64 a1, int a2, int a3, char a4)
{
  int v4; // ecx
  NTSTATUS result; // eax
  char v6; // [rsp+40h] [rbp-19h] BYREF
  int v7; // [rsp+44h] [rbp-15h] BYREF
  int v8; // [rsp+48h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-9h] BYREF
  int *v10; // [rsp+60h] [rbp+7h]
  __int64 v11; // [rsp+68h] [rbp+Fh]
  int *v12; // [rsp+70h] [rbp+17h]
  __int64 v13; // [rsp+78h] [rbp+1Fh]
  int *v14; // [rsp+80h] [rbp+27h]
  __int64 v15; // [rsp+88h] [rbp+2Fh]
  char *v16; // [rsp+90h] [rbp+37h]
  __int64 v17; // [rsp+98h] [rbp+3Fh]
  int v18; // [rsp+C8h] [rbp+6Fh] BYREF
  int v19; // [rsp+D0h] [rbp+77h] BYREF

  v19 = a3;
  v18 = a2;
  if ( EtwCpuStarvationProvRegHandle )
  {
    v8 = *(_DWORD *)(a1 + 36);
    v4 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1232LL);
    UserData.Ptr = (ULONGLONG)&v7;
    v10 = &v8;
    v12 = &v18;
    v14 = &v19;
    v16 = &v6;
    v7 = v4;
    v6 = a4;
    *(_QWORD *)&UserData.Size = 4LL;
    v11 = 4LL;
    v13 = 4LL;
    v15 = 4LL;
    v17 = 1LL;
    return EtwWriteEx(
             EtwCpuStarvationProvRegHandle,
             &CPU_STARVATION_EVENT_DPC_PROFILING_STACK_BEGIN,
             0LL,
             0,
             0LL,
             0LL,
             5u,
             &UserData);
  }
  return result;
}
