NTSTATUS __fastcall EtwpEventWriteTemplateSession(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3)
{
  ULONG v3; // r9d
  int v5; // [rsp+30h] [rbp-D0h] BYREF
  int v6; // [rsp+34h] [rbp-CCh] BYREF
  int v7; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v9; // [rsp+50h] [rbp-B0h]
  __int64 v10; // [rsp+58h] [rbp-A8h]
  __int64 v11; // [rsp+60h] [rbp-A0h]
  int v12; // [rsp+68h] [rbp-98h]
  int v13; // [rsp+6Ch] [rbp-94h]
  __int64 *v14; // [rsp+70h] [rbp-90h]
  __int64 v15; // [rsp+78h] [rbp-88h]
  __int64 v16; // [rsp+80h] [rbp-80h]
  int v17; // [rsp+88h] [rbp-78h]
  int v18; // [rsp+8Ch] [rbp-74h]
  __int64 *v19; // [rsp+90h] [rbp-70h]
  __int64 v20; // [rsp+98h] [rbp-68h]
  __int64 v21; // [rsp+A0h] [rbp-60h]
  __int64 v22; // [rsp+A8h] [rbp-58h]
  __int64 v23; // [rsp+B0h] [rbp-50h]
  __int64 v24; // [rsp+B8h] [rbp-48h]
  __int64 v25; // [rsp+C0h] [rbp-40h]
  __int64 v26; // [rsp+C8h] [rbp-38h]
  int *v27; // [rsp+D0h] [rbp-30h]
  __int64 v28; // [rsp+D8h] [rbp-28h]
  int *v29; // [rsp+E0h] [rbp-20h]
  __int64 v30; // [rsp+E8h] [rbp-18h]
  __int64 v31; // [rsp+F0h] [rbp-10h]
  __int64 v32; // [rsp+F8h] [rbp-8h]
  int *v33; // [rsp+100h] [rbp+0h]
  __int64 v34; // [rsp+108h] [rbp+8h]
  __int64 v35; // [rsp+110h] [rbp+10h]
  __int64 v36; // [rsp+118h] [rbp+18h]
  __int64 v37; // [rsp+120h] [rbp+20h]
  __int64 v38; // [rsp+128h] [rbp+28h]
  __int64 v39; // [rsp+130h] [rbp+30h]
  __int64 v40; // [rsp+138h] [rbp+38h]

  v14 = &EtwpNull;
  v19 = &EtwpNull;
  UserData.Ptr = a3 + 276;
  v6 = 0;
  v9 = a3 + 12;
  v3 = 6;
  v11 = *(_QWORD *)(a3 + 144);
  v12 = *(unsigned __int16 *)(a3 + 136);
  v16 = *(_QWORD *)(a3 + 160);
  v17 = *(unsigned __int16 *)(a3 + 152);
  v7 = 0;
  v5 = 0;
  *(_QWORD *)&UserData.Size = 16LL;
  v10 = 4LL;
  v13 = 0;
  v15 = 2LL;
  v18 = 0;
  v20 = 2LL;
  if ( a2 == &ETW_EVENT_START_TRACE
    || a2 == &ETW_EVENT_STOP_TRACE
    || a2 == (const EVENT_DESCRIPTOR *)ETW_EVENT_SESSION_INFO )
  {
    v22 = 4LL;
    v21 = a3 + 224;
    v23 = a3 + 236;
    v25 = a3 + 4;
    v3 = 12;
    v5 = *(_DWORD *)(a3 + 244);
    v6 = *(_DWORD *)(a3 + 232);
    v27 = &v5;
    v29 = &v6;
    v31 = a3 + 212;
    v24 = 4LL;
    v26 = 4LL;
    v28 = 4LL;
    v30 = 4LL;
    v32 = 4LL;
    if ( a2 != &ETW_EVENT_START_TRACE )
    {
      v3 = 16;
      v7 = *(_DWORD *)(a3 + 240);
      v33 = &v7;
      v35 = a3 + 252;
      v37 = a3 + 260;
      v34 = 4LL;
      v36 = 4LL;
      v38 = 4LL;
      v39 = a3;
      v40 = 4LL;
    }
  }
  return EtwWrite(EtwpEventTracingProvRegHandle, a2, 0LL, v3, &UserData);
}
