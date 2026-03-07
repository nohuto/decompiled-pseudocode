__int64 __fastcall DpiSriovEventComplete(__int64 a1, int a2, __int64 a3, unsigned int a4)
{
  void *v4; // rdi
  unsigned int v5; // ebx
  __int64 v9; // rdx

  v4 = *(void **)(a1 + 64);
  v5 = 0;
  if ( bTracingEnabled )
    VgpuTrace(1, 0, v4, L"DpiSriovEventComplete", 0LL);
  if ( a4 >= 4 && a3 )
  {
    if ( *((_BYTE *)v4 + (a2 != 0 ? 0x20 : 0) + 5388) )
      goto LABEL_9;
    v5 = -1073741811;
    v9 = -1073741811LL;
  }
  else
  {
    v9 = -1073741789LL;
    v5 = -1073741789;
  }
  WdLogSingleEntry1(2LL, v9);
LABEL_9:
  if ( bTracingEnabled )
    VgpuTrace(0, v5, v4, L"DpiSriovEventComplete", 0LL);
  return v5;
}
