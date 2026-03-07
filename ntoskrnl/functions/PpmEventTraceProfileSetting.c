char __fastcall PpmEventTraceProfileSetting(
        char a1,
        __int64 a2,
        __int64 a3,
        char a4,
        __int64 a5,
        int a6,
        int a7,
        char a8)
{
  _UNKNOWN **v8; // rax
  const EVENT_DESCRIPTOR *v11; // rdx
  __int64 v12; // rax
  const EVENT_DESCRIPTOR *v13; // rdx
  BOOL v15; // [rsp+38h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-49h] BYREF
  __int64 v17; // [rsp+58h] [rbp-39h]
  int v18; // [rsp+60h] [rbp-31h]
  int v19; // [rsp+64h] [rbp-2Dh]
  BOOL *v20; // [rsp+68h] [rbp-29h]
  int v21; // [rsp+70h] [rbp-21h]
  int v22; // [rsp+74h] [rbp-1Dh]
  char *v23; // [rsp+78h] [rbp-19h]
  int v24; // [rsp+80h] [rbp-11h]
  int v25; // [rsp+84h] [rbp-Dh]
  __int64 v26; // [rsp+88h] [rbp-9h]
  int v27; // [rsp+90h] [rbp-1h]
  int v28; // [rsp+94h] [rbp+3h]
  int *v29; // [rsp+98h] [rbp+7h]
  int v30; // [rsp+A0h] [rbp+Fh]
  int v31; // [rsp+A4h] [rbp+13h]
  __int64 v32; // [rsp+A8h] [rbp+17h]
  int v33; // [rsp+B0h] [rbp+1Fh]
  int v34; // [rsp+B4h] [rbp+23h]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+3Fh] BYREF
  char v36; // [rsp+D8h] [rbp+47h] BYREF
  char v37; // [rsp+F0h] [rbp+5Fh] BYREF

  v8 = &retaddr;
  v37 = a4;
  v36 = a1;
  if ( PpmEtwRegistered )
  {
    v11 = &PPM_ETW_PROCESSOR_PROFILE_SETTING_CHANGE;
    if ( a8 )
      v11 = &PPM_ETW_PROCESSOR_PROFILE_SETTING_RUNDOWN;
    LOBYTE(v8) = EtwEventEnabled(PpmEtwHandle, v11);
    if ( (_BYTE)v8 )
    {
      v17 = a2;
      UserData.Size = 1;
      UserData.Reserved = 0;
      v15 = a7 != 0;
      UserData.Ptr = (ULONGLONG)&v36;
      v12 = -1LL;
      do
        ++v12;
      while ( *(_BYTE *)(a2 + v12) );
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v31 = 0;
      v34 = 0;
      v18 = v12 + 1;
      v20 = &v15;
      v23 = &v37;
      v29 = &a6;
      v32 = a5;
      v33 = a6;
      v21 = 4;
      v24 = 1;
      v13 = &PPM_ETW_PROCESSOR_PROFILE_SETTING_RUNDOWN;
      v30 = 4;
      v26 = a3;
      v27 = 16;
      if ( !a8 )
        v13 = &PPM_ETW_PROCESSOR_PROFILE_SETTING_CHANGE;
      LOBYTE(v8) = EtwWrite(PpmEtwHandle, v13, 0LL, 7u, &UserData);
    }
  }
  return (char)v8;
}
