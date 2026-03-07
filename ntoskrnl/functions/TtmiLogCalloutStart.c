char __fastcall TtmiLogCalloutStart(int a1, __int64 a2, int a3, int a4)
{
  _UNKNOWN **v4; // rax
  int ProcessSessionId; // eax
  int v10; // [rsp+38h] [rbp-59h] BYREF
  int v11; // [rsp+3Ch] [rbp-55h] BYREF
  int v12; // [rsp+40h] [rbp-51h] BYREF
  __int64 v13; // [rsp+48h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+58h] [rbp-39h] BYREF
  int *v15; // [rsp+78h] [rbp-19h]
  int v16; // [rsp+80h] [rbp-11h]
  int v17; // [rsp+84h] [rbp-Dh]
  int *v18; // [rsp+88h] [rbp-9h]
  int v19; // [rsp+90h] [rbp-1h]
  int v20; // [rsp+94h] [rbp+3h]
  __int64 *v21; // [rsp+98h] [rbp+7h]
  int v22; // [rsp+A0h] [rbp+Fh]
  int v23; // [rsp+A4h] [rbp+13h]
  _DWORD *v24; // [rsp+A8h] [rbp+17h]
  int v25; // [rsp+B0h] [rbp+1Fh]
  int v26; // [rsp+B4h] [rbp+23h]
  int *v27; // [rsp+B8h] [rbp+27h]
  _DWORD v28[2]; // [rsp+C0h] [rbp+2Fh] BYREF
  int *v29; // [rsp+C8h] [rbp+37h]
  int v30; // [rsp+D0h] [rbp+3Fh]
  int v31; // [rsp+D4h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+F0h] [rbp+5Fh] BYREF
  int v33; // [rsp+108h] [rbp+77h] BYREF

  v4 = &retaddr;
  v33 = a3;
  if ( (unsigned int)dword_140D53948 > 5 )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)&dword_140D53948, 1LL);
    if ( (_BYTE)v4 )
    {
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v28[1] = 0;
      v31 = 0;
      v10 = ProcessSessionId;
      v15 = &v10;
      v18 = &v11;
      v21 = &v13;
      v24 = v28;
      v27 = &v33;
      v29 = &v12;
      v16 = 4;
      v19 = 4;
      v22 = 8;
      v28[0] = 4;
      v30 = 4;
      v11 = a1;
      v13 = a2;
      v25 = 2;
      v12 = a4;
      LOBYTE(v4) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_140D53948,
                     (unsigned __int8 *)&word_140032D36,
                     0LL,
                     0LL,
                     8u,
                     &v14);
    }
  }
  return (char)v4;
}
