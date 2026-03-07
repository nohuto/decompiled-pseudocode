__int64 __fastcall CBasePTPEngine::SendWarpbackTelemetry(__int64 a1, int a2, __int64 a3, __int64 a4, int a5)
{
  _BYTE v10[20]; // [rsp+20h] [rbp-40h] BYREF
  int v11; // [rsp+34h] [rbp-2Ch]
  __int128 v12; // [rsp+40h] [rbp-20h] BYREF
  __int64 v13; // [rsp+50h] [rbp-10h]

  *(_OWORD *)v10 = 0LL;
  *(_DWORD *)v10 = a2;
  v12 = *(_OWORD *)v10;
  v13 = 0LL;
  CBasePTPEngine::SendTelemetryOutput(a1, 4, (__int64)&v12);
  v11 = a5;
  *(_DWORD *)v10 = a2;
  *(_QWORD *)&v10[4] = a3;
  *(_QWORD *)&v10[12] = a4;
  return CBasePTPEngine::SendTelemetryOutput(a1, 7, (__int64)v10);
}
