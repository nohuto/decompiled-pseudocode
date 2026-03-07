void __fastcall EnableDriverDiagnosticsTelemetryProviderImpl(unsigned int a1, int a2, char a3)
{
  __int64 v3; // rsi
  struct DXGGLOBAL *Global; // rax
  int v6; // ebx
  _DWORD v7[2]; // [rsp+50h] [rbp-28h] BYREF
  int v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+5Ch] [rbp-1Ch]

  v3 = a1;
  if ( a2 == 1 )
  {
    Global = DXGGLOBAL::GetGlobal();
    if ( !(_DWORD)v3 )
    {
      v6 = a3 & 3;
      v8 = -4;
LABEL_6:
      *((_DWORD *)Global + v3 + 76135) = v6;
      v9 = v3;
      v7[0] = 1 << v3;
      v7[1] = v6;
      DXGGLOBAL::IterateAdaptersWithCallback(
        (__int64)Global,
        (__int64 (__fastcall *)(_QWORD *, __int64))UpdateDiagnosticAdapterCallback,
        (__int64)v7,
        2);
      return;
    }
    if ( (_DWORD)v3 == 1 )
    {
      v6 = a3 & 1;
      v8 = -2;
      goto LABEL_6;
    }
    WdLogSingleEntry1(2LL, 378LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Unrecognized Driver Diagnostics Telemetry Provider.",
      378LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
