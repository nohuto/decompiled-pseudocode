char IopLiveDumpTraceBufferAllocation()
{
  char result; // al
  __int64 v1; // rcx
  __int64 v2; // [rsp+40h] [rbp-49h] BYREF
  __int64 v3; // [rsp+48h] [rbp-41h] BYREF
  __int64 v4; // [rsp+50h] [rbp-39h] BYREF
  __int64 v5; // [rsp+58h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-29h] BYREF
  __int64 *v7; // [rsp+70h] [rbp-19h]
  __int64 v8; // [rsp+78h] [rbp-11h]
  __int64 *v9; // [rsp+80h] [rbp-9h]
  __int64 v10; // [rsp+88h] [rbp-1h]
  __int64 *v11; // [rsp+90h] [rbp+7h]
  __int64 v12; // [rsp+98h] [rbp+Fh]
  __int64 v13; // [rsp+A0h] [rbp+17h]
  __int64 v14; // [rsp+A8h] [rbp+1Fh]
  __int64 v15; // [rsp+B0h] [rbp+27h]
  __int64 v16; // [rsp+B8h] [rbp+2Fh]
  __int64 v17; // [rsp+C0h] [rbp+37h]
  __int64 v18; // [rsp+C8h] [rbp+3Fh]

  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    v2 = *(_QWORD *)(v1 + 688) << 12;
    v3 = *(_QWORD *)(v1 + 696) << 12;
    v5 = *(_QWORD *)(v1 + 704) << 12;
    v4 = *(unsigned int *)(v1 + 152);
    UserData.Ptr = (ULONGLONG)&v2;
    v7 = &v3;
    v9 = &v4;
    v11 = &v5;
    v13 = v1 + 768;
    v15 = v1 + 776;
    v17 = v1 + 296;
    *(_QWORD *)&UserData.Size = 8LL;
    v8 = 8LL;
    v10 = 8LL;
    v12 = 8LL;
    v14 = 8LL;
    v16 = 8LL;
    v18 = 8LL;
    return EtwWriteEx(
             IopLiveDumpEtwRegHandle,
             &LIVEDUMP_EVENT_SIZING_WORKFLOW_BUFFER_ALLOCATION,
             0LL,
             0,
             0LL,
             0LL,
             7u,
             &UserData);
  }
  return result;
}
