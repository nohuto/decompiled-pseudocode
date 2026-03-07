char __fastcall TtmiLogCalloutStop(int a1, int a2, unsigned __int64 a3, int a4, int a5, unsigned __int64 a6)
{
  _UNKNOWN **v6; // rax
  unsigned __int64 v7; // rdi
  __int16 *v11; // rdx
  int *v12; // rcx
  unsigned __int64 *v13; // rax
  int v15; // [rsp+38h] [rbp-99h] BYREF
  int v16; // [rsp+3Ch] [rbp-95h] BYREF
  int v17; // [rsp+40h] [rbp-91h] BYREF
  int ProcessSessionId; // [rsp+44h] [rbp-8Dh] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-89h] BYREF
  unsigned __int64 v20; // [rsp+50h] [rbp-81h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+58h] [rbp-79h] BYREF
  int *p_ProcessSessionId; // [rsp+78h] [rbp-59h]
  __int64 v23; // [rsp+80h] [rbp-51h]
  int *v24; // [rsp+88h] [rbp-49h]
  __int64 v25; // [rsp+90h] [rbp-41h]
  int *v26; // [rsp+98h] [rbp-39h]
  __int64 v27; // [rsp+A0h] [rbp-31h]
  unsigned __int64 *v28; // [rsp+A8h] [rbp-29h]
  __int64 v29; // [rsp+B0h] [rbp-21h]
  __int64 *v30; // [rsp+B8h] [rbp-19h]
  __int64 v31; // [rsp+C0h] [rbp-11h]
  int *v32; // [rsp+C8h] [rbp-9h]
  __int64 v33; // [rsp+D0h] [rbp-1h] BYREF
  int *v34; // [rsp+D8h] [rbp+7h]
  __int64 v35; // [rsp+E0h] [rbp+Fh]
  unsigned __int64 *v36; // [rsp+E8h] [rbp+17h]
  __int64 v37; // [rsp+F0h] [rbp+1Fh]
  _UNKNOWN *retaddr; // [rsp+120h] [rbp+4Fh] BYREF
  int v39; // [rsp+140h] [rbp+6Fh] BYREF

  v6 = &retaddr;
  v39 = a4;
  v7 = a6;
  if ( a6 > 0x1312D00 )
  {
    if ( (unsigned int)dword_140D53910 > 5 )
    {
      LOBYTE(v6) = tlgKeywordOn((__int64)&dword_140D53910, 0x400000000001LL);
      if ( (_BYTE)v6 )
      {
        ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        v11 = &word_140033466;
        v17 = a1;
        p_ProcessSessionId = &ProcessSessionId;
        v12 = &dword_140D53910;
        v16 = a2;
        v24 = &v17;
        v26 = &v16;
        v28 = &v20;
        v30 = &v33;
        v32 = &v39;
        v15 = a5;
        v34 = &v15;
        v13 = &v19;
        v20 = a3;
        v19 = v7;
        goto LABEL_8;
      }
    }
  }
  else if ( (unsigned int)dword_140D53948 > 5 )
  {
    LOBYTE(v6) = tlgKeywordOn((__int64)&dword_140D53948, 1LL);
    if ( (_BYTE)v6 )
    {
      v15 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v11 = &word_14003381E;
      v16 = a1;
      p_ProcessSessionId = &v15;
      v12 = &dword_140D53948;
      v17 = a2;
      v24 = &v16;
      v26 = &v17;
      v28 = &v19;
      v30 = &v33;
      v32 = &v39;
      ProcessSessionId = a5;
      v34 = &ProcessSessionId;
      v13 = &v20;
      v19 = a3;
      v20 = v7;
LABEL_8:
      v36 = v13;
      v25 = 4LL;
      v23 = 4LL;
      v27 = 4LL;
      v29 = 8LL;
      v31 = 2LL;
      v33 = 4LL;
      v35 = 4LL;
      v37 = 8LL;
      LOBYTE(v6) = tlgWriteTransfer_EtwWriteTransfer((__int64)v12, (unsigned __int8 *)v11, 0LL, 0LL, 0xAu, &v21);
    }
  }
  return (char)v6;
}
