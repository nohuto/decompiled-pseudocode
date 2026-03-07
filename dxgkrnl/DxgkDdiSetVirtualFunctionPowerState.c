__int64 __fastcall DxgkDdiSetVirtualFunctionPowerState(
        _QWORD *a1,
        int a2,
        unsigned __int16 a3,
        signed int a4,
        unsigned __int8 a5)
{
  int v5; // ebp
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rbx
  int v11; // [rsp+28h] [rbp-70h]
  int v12; // [rsp+30h] [rbp-68h]
  unsigned int v13[4]; // [rsp+50h] [rbp-48h] BYREF

  v5 = a3;
  v7 = a1[366];
  v8 = a4;
  v13[0] = a3;
  v13[1] = a4;
  v13[2] = a5;
  v9 = (int)ADAPTER_RENDER::SetVirtualFunctionPowerState(v7, a2, v13);
  if ( bTracingEnabled )
  {
    v12 = v8;
    v11 = v5;
    VgpuTrace(1, v9, a1, L"DxgkDdiSetVirtualFunctionPowerState", (wchar_t *)L"%d %d", v11, v12);
    DxgkLogInternalTriageEvent(
      (__int64)a1,
      196611,
      v5,
      (__int64)L"SetVirtualFunctionPowerState called for power state %1 and wake set %2, returning %3",
      v8,
      a5,
      v9,
      0LL,
      0LL);
  }
  return (unsigned int)v9;
}
