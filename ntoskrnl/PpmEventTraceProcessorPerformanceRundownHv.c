/*
 * XREFs of PpmEventTraceProcessorPerformanceRundownHv @ 0x140996BCC
 * Callers:
 *     PpmEventTraceControlCallback @ 0x140860AA0 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall PpmEventTraceProcessorPerformanceRundownHv(__int64 *a1)
{
  _UNKNOWN **v1; // rax
  REGHANDLE v3; // rbx
  __int64 v4; // r8
  __int64 v5; // rdx
  bool v6; // zf
  BOOL v8; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v9; // [rsp+3Ch] [rbp-CCh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v11; // [rsp+58h] [rbp-B0h]
  __int64 v12; // [rsp+60h] [rbp-A8h]
  __int64 v13; // [rsp+68h] [rbp-A0h]
  __int64 v14; // [rsp+70h] [rbp-98h]
  __int64 v15; // [rsp+78h] [rbp-90h]
  __int64 v16; // [rsp+80h] [rbp-88h]
  __int64 v17; // [rsp+88h] [rbp-80h]
  __int64 v18; // [rsp+90h] [rbp-78h]
  __int64 v19; // [rsp+98h] [rbp-70h]
  __int64 v20; // [rsp+A0h] [rbp-68h]
  __int64 v21; // [rsp+A8h] [rbp-60h]
  __int64 v22; // [rsp+B0h] [rbp-58h]
  __int64 v23; // [rsp+B8h] [rbp-50h]
  __int64 v24; // [rsp+C0h] [rbp-48h]
  __int64 v25; // [rsp+C8h] [rbp-40h]
  __int64 v26; // [rsp+D0h] [rbp-38h]
  BOOL *v27; // [rsp+D8h] [rbp-30h]
  __int64 v28; // [rsp+E0h] [rbp-28h]
  __int64 v29; // [rsp+E8h] [rbp-20h]
  __int64 v30; // [rsp+F0h] [rbp-18h]
  __int64 v31; // [rsp+F8h] [rbp-10h]
  __int64 v32; // [rsp+100h] [rbp-8h]
  __int64 v33; // [rsp+108h] [rbp+0h]
  __int64 v34; // [rsp+110h] [rbp+8h]
  __int64 v35; // [rsp+118h] [rbp+10h]
  __int64 v36; // [rsp+120h] [rbp+18h]
  unsigned int *v37; // [rsp+128h] [rbp+20h]
  __int64 v38; // [rsp+130h] [rbp+28h]
  _UNKNOWN *retaddr; // [rsp+150h] [rbp+48h] BYREF

  v1 = &retaddr;
  if ( PpmEtwRegistered )
  {
    v3 = PpmEtwHandle;
    LOBYTE(v1) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_CURRENT_PERF_RUNDOWN_HV);
    if ( (_BYTE)v1 )
    {
      v4 = a1[1];
      v5 = *a1;
      *(_QWORD *)&UserData.Size = 4LL;
      v12 = 4LL;
      v14 = 4LL;
      UserData.Ptr = v4 + 20;
      v17 = v5 + 440;
      v11 = v4 + 24;
      v13 = v4 + 28;
      v15 = v4 + 72;
      v19 = v4 + 80;
      v21 = v4 + 84;
      v23 = v4 + 88;
      v25 = v4 + 120;
      v16 = 4LL;
      v18 = 4LL;
      v20 = 4LL;
      v22 = 4LL;
      v24 = 4LL;
      v26 = 4LL;
      v6 = *(_BYTE *)(v5 + 508) == 0;
      v28 = 4LL;
      v30 = 4LL;
      v8 = !v6;
      v27 = &v8;
      v29 = v4 + 92;
      v31 = v4 + 96;
      v33 = v5 + 480;
      v35 = v4 + 76;
      v32 = 4LL;
      v34 = 4LL;
      v36 = 4LL;
      LODWORD(v4) = *(_DWORD *)(v5 + 440) * *(_DWORD *)(v4 + 116);
      v38 = 4LL;
      v37 = &v9;
      v9 = (unsigned int)v4 / 0x64;
      LOBYTE(v1) = EtwWrite(v3, &PPM_ETW_CURRENT_PERF_RUNDOWN_HV, 0LL, 0xFu, &UserData);
    }
  }
  return (char)v1;
}
