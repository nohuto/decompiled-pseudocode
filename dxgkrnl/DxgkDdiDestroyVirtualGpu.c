__int64 __fastcall DxgkDdiDestroyVirtualGpu(_QWORD *a1, int a2, unsigned int *a3, char a4)
{
  __int64 v8; // rcx
  int v9; // ebx
  struct DXGPROCESS *Current; // rax
  __int64 v12; // [rsp+28h] [rbp-30h]

  if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 305188) )
  {
    WdLogSingleEntry1(2LL, 387LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Attempt to delete a vGPU while KSR prepared is not supported",
      387LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v9 = -1073741637;
  }
  else if ( !a4 || (Current = DXGPROCESS::GetCurrent(v8), (*((_DWORD *)Current + 106) & 0x40) != 0) )
  {
    v9 = ADAPTER_RENDER::DestroyVirtualGpu(a1[366], a2, a3, a4);
  }
  else
  {
    WdLogSingleEntry1(3LL, Current);
    v9 = -1073741811;
  }
  if ( bTracingEnabled )
  {
    LODWORD(v12) = *a3;
    VgpuTrace(1, v9, a1, L"DxgkDdiDestroyVirtualGpu", (wchar_t *)L"%d", v12);
    DxgkLogInternalTriageEvent((__int64)a1, 196609, *a3, (__int64)L"Destroying vGPU returns %1", v9, 0LL, 0LL, 0LL, 0LL);
  }
  return (unsigned int)v9;
}
