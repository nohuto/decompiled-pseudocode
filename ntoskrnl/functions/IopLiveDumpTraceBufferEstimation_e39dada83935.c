char IopLiveDumpTraceBufferEstimation()
{
  char result; // al
  _QWORD *v1; // rcx
  __int64 v2; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v3; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v4; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v5; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v6; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v8; // [rsp+80h] [rbp-80h]
  __int64 v9; // [rsp+88h] [rbp-78h]
  __int64 *v10; // [rsp+90h] [rbp-70h]
  __int64 v11; // [rsp+98h] [rbp-68h]
  __int64 *v12; // [rsp+A0h] [rbp-60h]
  __int64 v13; // [rsp+A8h] [rbp-58h]
  __int64 *v14; // [rsp+B0h] [rbp-50h]
  __int64 v15; // [rsp+B8h] [rbp-48h]
  _QWORD *v16; // [rsp+C0h] [rbp-40h]
  __int64 v17; // [rsp+C8h] [rbp-38h]
  _QWORD *v18; // [rsp+D0h] [rbp-30h]
  __int64 v19; // [rsp+D8h] [rbp-28h]
  _QWORD *v20; // [rsp+E0h] [rbp-20h]
  __int64 v21; // [rsp+E8h] [rbp-18h]
  _QWORD *v22; // [rsp+F0h] [rbp-10h]
  __int64 v23; // [rsp+F8h] [rbp-8h]
  _QWORD *v24; // [rsp+100h] [rbp+0h]
  __int64 v25; // [rsp+108h] [rbp+8h]
  _QWORD *v26; // [rsp+110h] [rbp+10h]
  __int64 v27; // [rsp+118h] [rbp+18h]

  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    v2 = v1[13] << 12;
    v3 = v1[12] << 12;
    v4 = v1[15] << 12;
    v6 = v1[16] << 12;
    v5 = v1[17] << 12;
    UserData.Ptr = (ULONGLONG)&v2;
    v8 = &v3;
    v10 = &v4;
    v12 = &v5;
    v14 = &v6;
    v16 = v1 + 55;
    v18 = v1 + 56;
    v20 = v1 + 57;
    v22 = v1 + 58;
    v24 = v1 + 59;
    v26 = v1 + 36;
    *(_QWORD *)&UserData.Size = 8LL;
    v9 = 8LL;
    v11 = 8LL;
    v13 = 8LL;
    v15 = 8LL;
    v17 = 8LL;
    v19 = 8LL;
    v21 = 8LL;
    v23 = 8LL;
    v25 = 8LL;
    v27 = 8LL;
    return EtwWriteEx(
             IopLiveDumpEtwRegHandle,
             &LIVEDUMP_EVENT_SIZING_WORKFLOW_BUFFER_ESTIMATION,
             0LL,
             0,
             0LL,
             0LL,
             0xBu,
             &UserData);
  }
  return result;
}
