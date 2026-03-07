char __fastcall PpmEventParkNodeClassRecordedStats(
        __int16 a1,
        __int64 a2,
        char a3,
        char a4,
        char a5,
        __int64 a6,
        char a7)
{
  _UNKNOWN **v7; // rax
  REGHANDLE v8; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-61h] BYREF
  __int64 *v11; // [rsp+58h] [rbp-51h]
  int v12; // [rsp+60h] [rbp-49h]
  int v13; // [rsp+64h] [rbp-45h]
  char *v14; // [rsp+68h] [rbp-41h]
  int v15; // [rsp+70h] [rbp-39h]
  int v16; // [rsp+74h] [rbp-35h]
  char *v17; // [rsp+78h] [rbp-31h]
  int v18; // [rsp+80h] [rbp-29h]
  int v19; // [rsp+84h] [rbp-25h]
  __int64 v20; // [rsp+88h] [rbp-21h]
  int v21; // [rsp+90h] [rbp-19h]
  int v22; // [rsp+94h] [rbp-15h]
  __int64 v23; // [rsp+98h] [rbp-11h]
  int v24; // [rsp+A0h] [rbp-9h]
  int v25; // [rsp+A4h] [rbp-5h]
  char *v26; // [rsp+A8h] [rbp-1h]
  int v27; // [rsp+B0h] [rbp+7h]
  int v28; // [rsp+B4h] [rbp+Bh]
  char *v29; // [rsp+B8h] [rbp+Fh]
  int v30; // [rsp+C0h] [rbp+17h]
  int v31; // [rsp+C4h] [rbp+1Bh]
  _UNKNOWN *retaddr; // [rsp+F0h] [rbp+47h] BYREF
  __int16 v33; // [rsp+F8h] [rbp+4Fh] BYREF
  __int64 v34; // [rsp+100h] [rbp+57h] BYREF
  char v35; // [rsp+108h] [rbp+5Fh] BYREF
  char v36; // [rsp+110h] [rbp+67h] BYREF

  v7 = &retaddr;
  v36 = a4;
  v35 = a3;
  v34 = a2;
  v33 = a1;
  if ( PpmEtwRegistered )
  {
    v8 = PpmEtwHandle;
    LOBYTE(v7) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PARK_NODE_CLASS_STATS);
    if ( (_BYTE)v7 )
    {
      UserData.Reserved = 0;
      v13 = 0;
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v31 = 0;
      UserData.Ptr = (ULONGLONG)&v33;
      v11 = &v34;
      v14 = &v35;
      v17 = &a7;
      v12 = 8;
      v15 = 1;
      v18 = 1;
      v27 = 1;
      v23 = *(_QWORD *)(a6 + 8);
      v24 = 8 * *(_DWORD *)(a6 + 48);
      v26 = &v36;
      v29 = &a5;
      v20 = a6 + 48;
      v30 = 1;
      UserData.Size = 2;
      v21 = 4;
      LOBYTE(v7) = EtwWriteEx(v8, &PPM_ETW_PARK_NODE_CLASS_STATS, 0LL, 0, 0LL, 0LL, 8u, &UserData);
    }
  }
  return (char)v7;
}
