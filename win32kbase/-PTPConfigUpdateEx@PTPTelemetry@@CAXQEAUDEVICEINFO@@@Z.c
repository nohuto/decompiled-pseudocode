void __fastcall PTPTelemetry::PTPConfigUpdateEx(struct DEVICEINFO *const a1)
{
  unsigned int v1; // esi
  int IsEnabledDeviceUsage; // eax
  WCHAR *v4; // rcx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  WCHAR *v9; // rcx
  bool v10; // di
  bool v11; // r14
  _DWORD *v12; // rbx
  bool v13; // cf
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // r9
  int v18; // r8d
  int v19; // ecx
  int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 i; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  bool v28; // bl
  struct tagRECT v29; // xmm6
  struct tagRECT v30; // xmm7
  int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  bool v37[8]; // [rsp+58h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v38; // [rsp+60h] [rbp-A8h] BYREF
  struct _UNICODE_STRING v39; // [rsp+70h] [rbp-98h] BYREF
  struct tagRECT v40; // [rsp+88h] [rbp-80h] BYREF
  struct tagRECT v41; // [rsp+98h] [rbp-70h] BYREF
  int v42; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v43; // [rsp+ACh] [rbp-5Ch]
  unsigned int v44; // [rsp+B0h] [rbp-58h]
  int v45; // [rsp+B4h] [rbp-54h]
  int v46; // [rsp+B8h] [rbp-50h]
  int v47; // [rsp+BCh] [rbp-4Ch]
  int v48; // [rsp+C0h] [rbp-48h]
  int v49; // [rsp+C4h] [rbp-44h]
  int v50; // [rsp+C8h] [rbp-40h]
  int v51; // [rsp+CCh] [rbp-3Ch]
  int v52; // [rsp+D0h] [rbp-38h]
  int v53; // [rsp+D4h] [rbp-34h]
  int v54; // [rsp+D8h] [rbp-30h]
  int v55; // [rsp+DCh] [rbp-2Ch]
  int v56; // [rsp+E0h] [rbp-28h]
  char v57; // [rsp+E8h] [rbp-20h] BYREF
  char v58; // [rsp+F8h] [rbp-10h] BYREF

  *(_QWORD *)&v39.Length = 0x100000LL;
  *(_DWORD *)&v37[4] = 0;
  v1 = 0;
  IsEnabledDeviceUsage = Feature_PTPTraceStrInitFix__private_IsEnabledDeviceUsage();
  v4 = (WCHAR *)&v57;
  *(_QWORD *)&v38.Length = 0x100000LL;
  if ( IsEnabledDeviceUsage )
    v4 = 0LL;
  v39.Buffer = v4;
  v5 = Feature_PTPTraceStrInitFix__private_IsEnabledDeviceUsage();
  v9 = (WCHAR *)&v58;
  v37[0] = 1;
  v37[1] = 0;
  if ( v5 )
    v9 = 0LL;
  v37[2] = 0;
  v38.Buffer = v9;
  v10 = 0;
  v11 = 0;
  v40 = 0LL;
  v41 = 0LL;
  v12 = (_DWORD *)SGDGetUserSessionState(v9, v6, v7, v8);
  v13 = __CFSHR__(v12[4203], 4);
  v43 = -__CFSHR__(v12[4203], 3);
  v44 = -v13;
  v16 = SGDGetUserSessionState(v43, v44, v14, v15);
  v18 = v12[4205];
  v19 = *(_DWORD *)(v16 + 520);
  v45 = v12[4202];
  v42 = v19;
  v20 = v12[4203];
  v46 = -__CFSHR__(v20, 10);
  v21 = (unsigned int)-__CFSHR__(v18, 3);
  v47 = -__CFSHR__(v18, 3);
  v55 = v47;
  v48 = -__CFSHR__(v18, 5);
  v49 = v12[4204];
  v50 = -__CFSHR__(v20, 8);
  v51 = -__CFSHR__(v20, 9);
  v22 = (unsigned int)-__CFSHR__(v20, 11);
  v52 = v22;
  v53 = -(v18 & 1);
  v54 = -__CFSHR__(v18, 2);
  v23 = (unsigned int)-__CFSHR__(v18, 7);
  v56 = v23;
  if ( a1 )
  {
    v28 = 0;
    *(_BYTE *)(SGDGetUserSessionState(v22, v21, v23, v17) + 11810) = 1;
    v31 = *(_DWORD *)(*((_QWORD *)a1 + 59) + 952LL);
    switch ( v31 )
    {
      case 1:
        v1 = 1;
        break;
      case 2:
        v1 = 2;
        break;
      case 3:
        v1 = 3;
        break;
      case 0:
        *(_DWORD *)&v37[4] = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2148);
        break;
    }
    v32 = *((_QWORD *)a1 + 59);
    v29 = *(struct tagRECT *)(v32 + 124);
    v30 = *(struct tagRECT *)(v32 + 140);
    RimTelemetry::GetHidVidPidStrings(a1, &v39, &v38);
    v25 = *(_QWORD *)(SGDGetUserSessionState(v34, v33, v35, v36) + 16840);
    for ( i = **(_QWORD **)(v25 + 1328); i; i = *(_QWORD *)(i + 56) )
    {
      if ( (*(_DWORD *)(i + 200) & 0x80u) == 0 )
      {
        if ( !*(_BYTE *)(i + 48) && !*(_WORD *)(i + 880) )
          v10 = 1;
      }
      else
      {
        v25 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(i + 472) + 24LL) - 1);
        if ( (unsigned int)v25 <= 3 )
          v11 = 1;
      }
    }
  }
  else
  {
    PTPTelemetry::GetDeviceData(&v39, &v38, &v37[1], &v37[2], (unsigned int *)&v37[4], v37, &v40, &v41);
    v1 = *(_DWORD *)&v37[4];
    v28 = v37[0];
    v10 = v37[1];
    v11 = v37[2];
    v29 = v40;
    v30 = v41;
  }
  if ( *(_BYTE *)(SGDGetUserSessionState(v25, i, v26, v27) + 11810) )
  {
    v41 = v30;
    v40 = v29;
    TraceLoggingPTPSettingsConfigEvent(
      (struct tagTPSETTINGS *)&v42,
      v1,
      v28,
      v39.Buffer,
      v38.Buffer,
      v10,
      v11,
      &v40,
      &v41);
  }
}
