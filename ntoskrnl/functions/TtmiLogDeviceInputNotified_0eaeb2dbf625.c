char __fastcall TtmiLogDeviceInputNotified(int a1, __int64 a2, int a3, char a4, char a5, char a6)
{
  _UNKNOWN **v6; // rax
  int ProcessSessionId; // eax
  char v13; // [rsp+38h] [rbp-79h] BYREF
  char v14; // [rsp+39h] [rbp-78h] BYREF
  char v15; // [rsp+3Ah] [rbp-77h] BYREF
  int v16; // [rsp+3Ch] [rbp-75h] BYREF
  int v17; // [rsp+40h] [rbp-71h] BYREF
  int v18; // [rsp+44h] [rbp-6Dh] BYREF
  __int64 v19; // [rsp+48h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+58h] [rbp-59h] BYREF
  int *v21; // [rsp+78h] [rbp-39h]
  int v22; // [rsp+80h] [rbp-31h]
  int v23; // [rsp+84h] [rbp-2Dh]
  int *v24; // [rsp+88h] [rbp-29h]
  int v25; // [rsp+90h] [rbp-21h]
  int v26; // [rsp+94h] [rbp-1Dh]
  __int64 *v27; // [rsp+98h] [rbp-19h]
  int v28; // [rsp+A0h] [rbp-11h]
  int v29; // [rsp+A4h] [rbp-Dh]
  int *v30; // [rsp+A8h] [rbp-9h]
  int v31; // [rsp+B0h] [rbp-1h]
  int v32; // [rsp+B4h] [rbp+3h]
  char *v33; // [rsp+B8h] [rbp+7h]
  int v34; // [rsp+C0h] [rbp+Fh]
  int v35; // [rsp+C4h] [rbp+13h]
  char *v36; // [rsp+C8h] [rbp+17h]
  int v37; // [rsp+D0h] [rbp+1Fh]
  int v38; // [rsp+D4h] [rbp+23h]
  char *v39; // [rsp+D8h] [rbp+27h]
  int v40; // [rsp+E0h] [rbp+2Fh]
  int v41; // [rsp+E4h] [rbp+33h]
  _UNKNOWN *retaddr; // [rsp+100h] [rbp+4Fh] BYREF

  v6 = &retaddr;
  if ( (unsigned int)dword_140D53948 > 5 )
  {
    LOBYTE(v6) = tlgKeywordOn((__int64)&dword_140D53948, 1LL);
    if ( (_BYTE)v6 )
    {
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v23 = 0;
      v26 = 0;
      v29 = 0;
      v32 = 0;
      v35 = 0;
      v38 = 0;
      v41 = 0;
      v16 = ProcessSessionId;
      v21 = &v16;
      v24 = &v17;
      v27 = &v19;
      v30 = &v18;
      v33 = &v13;
      v14 = a5;
      v36 = &v14;
      v15 = a6;
      v39 = &v15;
      v22 = 4;
      v25 = 4;
      v31 = 4;
      v17 = a1;
      v19 = a2;
      v28 = 8;
      v18 = a3;
      v13 = a4;
      v34 = 1;
      v37 = 1;
      v40 = 1;
      LOBYTE(v6) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_140D53948,
                     (unsigned __int8 *)&byte_14003388F,
                     0LL,
                     0LL,
                     9u,
                     &v20);
    }
  }
  return (char)v6;
}
