__int64 __fastcall DxgkDdiReadVirtualFunctionConfig(
        _QWORD *a1,
        int a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        int a6)
{
  __int64 v7; // rcx
  int v8; // esi
  unsigned int VirtualFunctionConfig; // ebx
  int v11; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+40h] [rbp-28h] BYREF
  int v15; // [rsp+48h] [rbp-20h]
  int v16; // [rsp+4Ch] [rbp-1Ch]
  int v17; // [rsp+50h] [rbp-18h]
  int v18; // [rsp+54h] [rbp-14h]

  v7 = a1[366];
  v18 = 0;
  v14 = a3;
  v8 = a4;
  v15 = a4;
  v16 = a5;
  v17 = a6;
  VirtualFunctionConfig = ADAPTER_RENDER::ReadVirtualFunctionConfig(v7, a2, (__int64)&v14);
  if ( bTracingEnabled )
  {
    v11 = v8;
    VgpuTraceFrequentRead(
      1,
      VirtualFunctionConfig,
      a1,
      L"DxgkDdiReadVirtualFunctionConfig",
      (wchar_t *)L"(VF, Offset, Length) %d %d %d",
      v11,
      a5,
      a6);
  }
  return VirtualFunctionConfig;
}
