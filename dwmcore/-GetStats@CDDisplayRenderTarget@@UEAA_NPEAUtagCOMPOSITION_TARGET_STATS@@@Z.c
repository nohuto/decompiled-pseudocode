char __fastcall CDDisplayRenderTarget::GetStats(
        struct IOverlaySwapChain **this,
        struct tagCOMPOSITION_TARGET_STATS *a2)
{
  char v2; // al
  CTargetStats *v3; // rsi
  struct tagCOMPOSITION_STATS *v6; // r8
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (CTargetStats *)(this - 30);
  if ( *(this - 2317) )
  {
    QueryPerformanceCounter(&PerformanceCount);
    v2 = CTargetStats::Update(v3, PerformanceCount.QuadPart, *(this - 2317));
  }
  if ( v2 )
  {
    *(_DWORD *)a2 = *((_DWORD *)this - 59);
    *((_QWORD *)a2 + 1) = CTargetStats::GetPresentTime(v3);
    *((_QWORD *)a2 + 2) = *((_QWORD *)*(this - 2317) + 61);
    CTargetStats::GetPresentStats(v3, *(this - 2317), v6);
  }
  else
  {
    *(_DWORD *)a2 = 0;
    *((_QWORD *)a2 + 1) = 0LL;
    *((_QWORD *)a2 + 2) = 0LL;
    *((_DWORD *)a2 + 6) = 0;
    *((_DWORD *)a2 + 7) = 0;
    *((_DWORD *)a2 + 8) = 0;
    *((_QWORD *)a2 + 5) = 0LL;
  }
  *((_DWORD *)a2 + 12) = *((_DWORD *)this - 52);
  *((_DWORD *)a2 + 13) = *((_DWORD *)this - 51);
  *((_DWORD *)a2 + 14) = *((_DWORD *)this - 57);
  *((_QWORD *)a2 + 8) = *(this - 25);
  return 1;
}
