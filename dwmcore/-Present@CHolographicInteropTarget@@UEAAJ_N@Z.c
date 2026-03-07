__int64 __fastcall CHolographicInteropTarget::Present(LARGE_INTEGER *this)
{
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  ++this[-13].HighPart;
  QueryPerformanceCounter(&PerformanceCount);
  this[-12] = PerformanceCount;
  return 0LL;
}
