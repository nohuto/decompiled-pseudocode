char __fastcall PopAdaptiveGetSessionStateUnsafe(unsigned int a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rax
  REGHANDLE v7; // rbx
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v10; // [rsp+38h] [rbp-C8h] BYREF
  int v11; // [rsp+40h] [rbp-C0h] BYREF
  int v12; // [rsp+48h] [rbp-B8h] BYREF
  int v13; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v14; // [rsp+58h] [rbp-A8h] BYREF
  int v15; // [rsp+60h] [rbp-A0h] BYREF
  int v16; // [rsp+68h] [rbp-98h] BYREF
  __int64 v17; // [rsp+70h] [rbp-90h] BYREF
  __int64 v18; // [rsp+78h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v20; // [rsp+90h] [rbp-70h]
  __int64 v21; // [rsp+98h] [rbp-68h]
  __int64 *v22; // [rsp+A0h] [rbp-60h]
  __int64 v23; // [rsp+A8h] [rbp-58h]
  int *v24; // [rsp+B0h] [rbp-50h]
  __int64 v25; // [rsp+B8h] [rbp-48h]
  int *v26; // [rsp+C0h] [rbp-40h]
  __int64 v27; // [rsp+C8h] [rbp-38h]
  int *v28; // [rsp+D0h] [rbp-30h]
  __int64 v29; // [rsp+D8h] [rbp-28h]
  int *v30; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  unsigned int *v32; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]
  int *v34; // [rsp+100h] [rbp+0h]
  __int64 v35; // [rsp+108h] [rbp+8h]
  int *v36; // [rsp+110h] [rbp+10h]
  __int64 v37; // [rsp+118h] [rbp+18h]

  v9 = 0;
  v10 = 0;
  if ( dword_140C398D8 != a1 || a1 == -1 )
    PopAdaptiveGetRemoteSessionState(a1, (_DWORD)a2, a3, (unsigned int)&v10, (__int64)&v9);
  else
    PopAdaptiveGetConsoleSessionState(a1, a2, a3, &v10, &v9);
  v16 = v9;
  v15 = *(_DWORD *)(a3 + 4);
  v14 = v10;
  v12 = *(_DWORD *)(a3 + 8);
  v11 = *(_DWORD *)a3;
  v18 = a2[2];
  v6 = *a2;
  v17 = *a2;
  v10 = a1;
  if ( PopDiagHandleRegistered )
  {
    v7 = PopDiagHandle;
    LOBYTE(v6) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_ADAPTIVE_SESSION_STATE);
    if ( (_BYTE)v6 )
    {
      v9 = *((_DWORD *)a2 + 6);
      v13 = *(unsigned __int8 *)(a3 + 12);
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&v10;
      v20 = &v17;
      v22 = &v18;
      v24 = &v9;
      v26 = &v11;
      v28 = &v12;
      v30 = &v13;
      v32 = &v14;
      v34 = &v15;
      v36 = &v16;
      v21 = 8LL;
      v23 = 8LL;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 4LL;
      v31 = 4LL;
      v33 = 4LL;
      v35 = 4LL;
      v37 = 4LL;
      LOBYTE(v6) = EtwWrite(v7, &POP_ETW_EVENT_ADAPTIVE_SESSION_STATE, 0LL, 0xAu, &UserData);
    }
  }
  return v6;
}
