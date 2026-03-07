__int64 __fastcall DxgkDdiSetVirtualGpuVmBus(_QWORD *a1, int a2, struct _LUID *a3, int *a4)
{
  struct DXGK_VIRTUAL_GPU *VirtualGpuByLuid; // rax
  int v7; // ebx
  __int64 v9; // [rsp+28h] [rbp-30h]

  VirtualGpuByLuid = ADAPTER_RENDER::FindVirtualGpuByLuid(a1[366], a2, a3);
  if ( VirtualGpuByLuid )
  {
    v7 = (*(__int64 (__fastcall **)(struct DXGK_VIRTUAL_GPU *, int *))(*(_QWORD *)VirtualGpuByLuid + 24LL))(
           VirtualGpuByLuid,
           a4);
  }
  else
  {
    WdLogSingleEntry1(2LL, 1763LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find vGPU by LUID", 1763LL, 0LL, 0LL, 0LL, 0LL);
    v7 = -1073741811;
  }
  if ( bTracingEnabled )
  {
    LODWORD(v9) = *a4;
    VgpuTrace(1, v7, a1, L"DxgkDdiSetVirtualGpuVmBus", (wchar_t *)L"%d", v9);
    DxgkLogInternalTriageEvent(
      (__int64)a1,
      196613,
      *a4,
      (__int64)L"VM initialization is configuring assignment of vGPU, returning %1",
      v7,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v7;
}
