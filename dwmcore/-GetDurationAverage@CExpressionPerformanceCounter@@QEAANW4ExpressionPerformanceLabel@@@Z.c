double __fastcall CExpressionPerformanceCounter::GetDurationAverage(__int64 a1, int a2)
{
  double result; // xmm0_8
  int v3; // eax

  result = 0.0;
  if ( (unsigned __int64)a2 < 6 )
  {
    v3 = *(_DWORD *)(a1 + 4LL * a2);
    if ( (double)v3 > 0.0 )
      return (double)(int)*(_QWORD *)(a1 + 8LL * a2 + 24) / (double)v3;
  }
  return result;
}
