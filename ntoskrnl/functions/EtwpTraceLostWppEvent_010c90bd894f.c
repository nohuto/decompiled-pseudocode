NTSTATUS __fastcall EtwpTraceLostWppEvent(ULONGLONG a1, __int16 a2, unsigned __int16 *a3, int a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+48h] [rbp-9h] BYREF
  __int16 *v6; // [rsp+58h] [rbp+7h]
  __int64 v7; // [rsp+60h] [rbp+Fh]
  int *v8; // [rsp+68h] [rbp+17h]
  __int64 v9; // [rsp+70h] [rbp+1Fh]
  __int64 v10; // [rsp+78h] [rbp+27h]
  int v11; // [rsp+80h] [rbp+2Fh]
  int v12; // [rsp+84h] [rbp+33h]
  __int64 *v13; // [rsp+88h] [rbp+37h]
  __int64 v14; // [rsp+90h] [rbp+3Fh]
  __int16 v15; // [rsp+C0h] [rbp+6Fh] BYREF
  int v16; // [rsp+D0h] [rbp+7Fh] BYREF

  v16 = a4;
  v15 = a2;
  v5.Ptr = a1;
  v6 = &v15;
  v8 = &v16;
  v10 = *((_QWORD *)a3 + 1);
  v11 = *a3;
  v13 = &EtwpNull;
  v12 = 0;
  *(_QWORD *)&v5.Size = 16LL;
  v7 = 2LL;
  v9 = 4LL;
  v14 = 2LL;
  return EtwWriteEx(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_WPP_EVENT, 0LL, 1u, 0LL, 0LL, 5u, &v5);
}
