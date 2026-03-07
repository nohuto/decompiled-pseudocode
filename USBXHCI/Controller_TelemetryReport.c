_UNKNOWN **__fastcall Controller_TelemetryReport(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, unsigned int a5)
{
  __int64 v6; // r8
  _UNKNOWN **result; // rax
  __int64 v10; // rax
  bool v11; // zf
  int v12; // edx
  int v13; // ecx
  __int64 Report; // rax
  int v15; // edx
  void *v16; // rbx
  unsigned int i; // r15d
  __int64 v18; // r14
  int v19; // eax
  int v20; // edx
  unsigned int v21; // [rsp+30h] [rbp-61h] BYREF
  unsigned int v22; // [rsp+34h] [rbp-5Dh] BYREF
  __int64 v23; // [rsp+38h] [rbp-59h] BYREF
  __int64 v24; // [rsp+40h] [rbp-51h] BYREF
  char pszDest[8]; // [rsp+50h] [rbp-41h] BYREF
  char v26[8]; // [rsp+58h] [rbp-39h] BYREF
  __int128 v27; // [rsp+60h] [rbp-31h]
  __int64 v28; // [rsp+70h] [rbp-21h]
  __int64 v29; // [rsp+78h] [rbp-19h]
  __int64 v30; // [rsp+80h] [rbp-11h]
  __int64 v31; // [rsp+88h] [rbp-9h]
  __int128 v32; // [rsp+90h] [rbp-1h] BYREF

  v24 = 0LL;
  v6 = *(unsigned int *)(a3 + 16);
  v22 = 0;
  v23 = 0LL;
  v21 = 0;
  v32 = 0LL;
  result = (_UNKNOWN **)Controller_TelemetryOkToGenerateReport(a1, a2, v6);
  if ( (_BYTE)result )
  {
    v10 = *(_QWORD *)(a3 + 40);
    *(_QWORD *)pszDest = 0LL;
    *(_QWORD *)v26 = 0LL;
    v11 = *(_DWORD *)(a1 + 244) == 1;
    v29 = v10;
    v30 = *(_QWORD *)(a3 + 48);
    v31 = *(_QWORD *)(a3 + 56);
    v27 = 0LL;
    v28 = a1;
    if ( v11 )
    {
      RtlStringCchPrintfA(pszDest, 5uLL, "%04X", *(unsigned __int16 *)(a1 + 248));
      RtlStringCchPrintfA(&pszDest[5], 5uLL, "%04X", *(unsigned __int16 *)(a1 + 252));
      RtlStringCchPrintfA(&v26[2], 5uLL, "%02X", *(unsigned __int8 *)(a1 + 256));
    }
    else
    {
      RtlStringCchPrintfA(pszDest, 5uLL, "%s", (const char *)(a1 + 304));
      RtlStringCchPrintfA(&pszDest[5], 5uLL, "%s", (const char *)(a1 + 309));
      RtlStringCchPrintfA(&v26[2], 5uLL, "%s", (const char *)(a1 + 314));
    }
    RtlStringCchPrintfA(&v26[7], 0x11uLL, "%I64X", *(_QWORD *)(a1 + 328));
    Report = TelemetryData_CreateReport(
               v13,
               v12,
               *(_DWORD *)(a3 + 16),
               (unsigned int)pszDest,
               *(_QWORD *)(a3 + 24),
               *(_QWORD *)(a3 + 32));
    v16 = (void *)Report;
    if ( Report )
    {
      if ( (int)TelemetryData_InsertTriageDataBlock(Report, pszDest, 64LL) >= 0
        && (int)TelemetryData_InsertTriageDataBlock(v16, &WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, 8LL) >= 0
        && (!*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
         || (int)TelemetryData_InsertTriageDataBlock(v16, *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, 336LL) >= 0) )
      {
        Controller_TelemetryAddControllerData(a1, v16);
        if ( (int)TelemetryData_InsertTriageDataBlock(v16, &WPP_GLOBAL_Control, 8LL) >= 0
          && (!WPP_GLOBAL_Control || (int)TelemetryData_InsertTriageDataBlock(v16, WPP_GLOBAL_Control, 80LL) >= 0)
          && (int)imp_WppRecorderDumpLiveDriverData(WPP_GLOBAL_Control, &v23, &v21, &v32) >= 0
          && (!v23 || (int)TelemetryData_InsertTriageDataBlock(v16, v23, v21) >= 0) )
        {
          for ( i = 0; i < a5; ++a4 )
          {
            if ( (int)TelemetryData_InsertTriageDataBlock(v16, *a4, 336LL) < 0 )
              break;
            v18 = *(_QWORD *)(*a4 + 64LL);
            if ( v18 )
            {
              if ( *(_QWORD *)(v18 + 8) == a1
                && ((int)TelemetryData_InsertTriageDataBlock(v16, *(_QWORD *)(*a4 + 64LL), 104LL) < 0
                 || (int)imp_WppRecorderLogDumpLiveData(WPP_GLOBAL_Control, *(_QWORD *)(v18 + 16), &v24, &v22, &v32) < 0
                 || (int)TelemetryData_InsertTriageDataBlock(v16, v24, v22) < 0) )
              {
                break;
              }
            }
            ++i;
          }
          v19 = TelemetryData_SubmitReport(v16);
          if ( v19 >= 0 )
          {
            Controller_TelemetryUpdateSubmitReportSuccess(a1, *(unsigned int *)(a3 + 16));
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v20) = 2;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(a1 + 72),
              v20,
              4,
              226,
              (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
              v19);
          }
        }
      }
      return (_UNKNOWN **)TelemetryData_CloseHandle(v16);
    }
    else
    {
      result = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = 2;
        return (_UNKNOWN **)WPP_RECORDER_SF_(
                              *(_QWORD *)(a1 + 72),
                              v15,
                              4,
                              225,
                              (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
      }
    }
  }
  return result;
}
