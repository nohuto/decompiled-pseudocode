char __fastcall TtmiLogDeviceArrivalNotified(int a1, __int64 a2, int a3, int a4, int a5)
{
  _UNKNOWN **v5; // rax
  int ProcessSessionId; // eax
  int v12; // [rsp+38h] [rbp-61h] BYREF
  int v13; // [rsp+3Ch] [rbp-5Dh] BYREF
  int v14; // [rsp+40h] [rbp-59h] BYREF
  int v15; // [rsp+44h] [rbp-55h] BYREF
  int v16; // [rsp+48h] [rbp-51h] BYREF
  __int64 v17; // [rsp+50h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+58h] [rbp-41h] BYREF
  int *v19; // [rsp+78h] [rbp-21h]
  int v20; // [rsp+80h] [rbp-19h]
  int v21; // [rsp+84h] [rbp-15h]
  int *v22; // [rsp+88h] [rbp-11h]
  int v23; // [rsp+90h] [rbp-9h]
  int v24; // [rsp+94h] [rbp-5h]
  __int64 *v25; // [rsp+98h] [rbp-1h]
  int v26; // [rsp+A0h] [rbp+7h]
  int v27; // [rsp+A4h] [rbp+Bh]
  int *v28; // [rsp+A8h] [rbp+Fh]
  int v29; // [rsp+B0h] [rbp+17h]
  int v30; // [rsp+B4h] [rbp+1Bh]
  int *v31; // [rsp+B8h] [rbp+1Fh]
  int v32; // [rsp+C0h] [rbp+27h]
  int v33; // [rsp+C4h] [rbp+2Bh]
  int *v34; // [rsp+C8h] [rbp+2Fh]
  int v35; // [rsp+D0h] [rbp+37h]
  int v36; // [rsp+D4h] [rbp+3Bh]
  _UNKNOWN *retaddr; // [rsp+F0h] [rbp+57h] BYREF

  v5 = &retaddr;
  if ( (unsigned int)dword_140D53948 > 5 )
  {
    LOBYTE(v5) = tlgKeywordOn((__int64)&dword_140D53948, 1LL);
    if ( (_BYTE)v5 )
    {
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v30 = 0;
      v33 = 0;
      v36 = 0;
      v12 = ProcessSessionId;
      v19 = &v12;
      v22 = &v13;
      v25 = &v17;
      v28 = &v14;
      v31 = &v15;
      v16 = a5;
      v34 = &v16;
      v20 = 4;
      v23 = 4;
      v26 = 8;
      v29 = 4;
      v32 = 4;
      v35 = 4;
      v13 = a1;
      v17 = a2;
      v14 = a3;
      v15 = a4;
      LOBYTE(v5) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_140D53948,
                     (unsigned __int8 *)byte_1400328C3,
                     0LL,
                     0LL,
                     8u,
                     &v18);
    }
  }
  return (char)v5;
}
