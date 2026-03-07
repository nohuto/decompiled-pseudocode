char __fastcall TtmiLogDeviceFromTerminalRemoved(int a1, int a2, __int64 a3, int a4)
{
  _UNKNOWN **v4; // rax
  int ProcessSessionId; // eax
  int v11; // [rsp+38h] [rbp-49h] BYREF
  int v12; // [rsp+3Ch] [rbp-45h] BYREF
  int v13; // [rsp+40h] [rbp-41h] BYREF
  int v14; // [rsp+44h] [rbp-3Dh] BYREF
  __int64 v15; // [rsp+48h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+58h] [rbp-29h] BYREF
  int *v17; // [rsp+78h] [rbp-9h]
  int v18; // [rsp+80h] [rbp-1h]
  int v19; // [rsp+84h] [rbp+3h]
  int *v20; // [rsp+88h] [rbp+7h]
  int v21; // [rsp+90h] [rbp+Fh]
  int v22; // [rsp+94h] [rbp+13h]
  int *v23; // [rsp+98h] [rbp+17h]
  int v24; // [rsp+A0h] [rbp+1Fh]
  int v25; // [rsp+A4h] [rbp+23h]
  __int64 *v26; // [rsp+A8h] [rbp+27h]
  int v27; // [rsp+B0h] [rbp+2Fh]
  int v28; // [rsp+B4h] [rbp+33h]
  int *v29; // [rsp+B8h] [rbp+37h]
  int v30; // [rsp+C0h] [rbp+3Fh]
  int v31; // [rsp+C4h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+5Fh] BYREF

  v4 = &retaddr;
  if ( (unsigned int)dword_140D53948 > 5 )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)&dword_140D53948, 1LL);
    if ( (_BYTE)v4 )
    {
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v31 = 0;
      v11 = ProcessSessionId;
      v17 = &v11;
      v20 = &v12;
      v23 = &v13;
      v26 = &v15;
      v29 = &v14;
      v18 = 4;
      v21 = 4;
      v24 = 4;
      v30 = 4;
      v12 = a1;
      v13 = a2;
      v15 = a3;
      v27 = 8;
      v14 = a4;
      LOBYTE(v4) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_140D53948,
                     (unsigned __int8 *)&byte_140032FAF,
                     0LL,
                     0LL,
                     7u,
                     &v16);
    }
  }
  return (char)v4;
}
