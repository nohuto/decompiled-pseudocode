char __fastcall PpmEventParkingCountSelection(
        char a1,
        char a2,
        char a3,
        char a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11)
{
  _UNKNOWN **v11; // rax
  REGHANDLE v12; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-B1h] BYREF
  char *v15; // [rsp+58h] [rbp-A1h]
  __int64 v16; // [rsp+60h] [rbp-99h]
  char *v17; // [rsp+68h] [rbp-91h]
  __int64 v18; // [rsp+70h] [rbp-89h]
  char *v19; // [rsp+78h] [rbp-81h]
  __int64 v20; // [rsp+80h] [rbp-79h]
  char *v21; // [rsp+88h] [rbp-71h]
  __int64 v22; // [rsp+90h] [rbp-69h]
  char *v23; // [rsp+98h] [rbp-61h]
  __int64 v24; // [rsp+A0h] [rbp-59h]
  char *v25; // [rsp+A8h] [rbp-51h]
  __int64 v26; // [rsp+B0h] [rbp-49h]
  char *v27; // [rsp+B8h] [rbp-41h]
  __int64 v28; // [rsp+C0h] [rbp-39h]
  char *v29; // [rsp+C8h] [rbp-31h]
  __int64 v30; // [rsp+D0h] [rbp-29h]
  char *v31; // [rsp+D8h] [rbp-21h]
  __int64 v32; // [rsp+E0h] [rbp-19h]
  char *v33; // [rsp+E8h] [rbp-11h]
  __int64 v34; // [rsp+F0h] [rbp-9h]
  _UNKNOWN *retaddr; // [rsp+120h] [rbp+27h] BYREF
  char v36; // [rsp+128h] [rbp+2Fh] BYREF
  char v37; // [rsp+130h] [rbp+37h] BYREF
  char v38; // [rsp+138h] [rbp+3Fh] BYREF
  char v39; // [rsp+140h] [rbp+47h] BYREF

  v11 = &retaddr;
  v39 = a4;
  v38 = a3;
  v37 = a2;
  v36 = a1;
  if ( PpmEtwRegistered )
  {
    v12 = PpmEtwHandle;
    LOBYTE(v11) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PARKING_COUNT_SELECTION);
    if ( (_BYTE)v11 )
    {
      *(_QWORD *)&UserData.Size = 1LL;
      UserData.Ptr = (ULONGLONG)&v36;
      v16 = 1LL;
      v15 = &v37;
      v18 = 1LL;
      v17 = &v38;
      v20 = 1LL;
      v19 = &v39;
      v22 = 1LL;
      v21 = &a5;
      v23 = &a6;
      v25 = &a7;
      v27 = &a8;
      v29 = &a9;
      v31 = &a10;
      v33 = &a11;
      v24 = 4LL;
      v26 = 1LL;
      v28 = 1LL;
      v30 = 4LL;
      v32 = 4LL;
      v34 = 4LL;
      LOBYTE(v11) = EtwWriteEx(v12, &PPM_ETW_PARKING_COUNT_SELECTION, 0LL, 0, 0LL, 0LL, 0xBu, &UserData);
    }
  }
  return (char)v11;
}
