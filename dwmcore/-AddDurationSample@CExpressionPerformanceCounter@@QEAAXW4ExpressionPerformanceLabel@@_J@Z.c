__int64 __fastcall CExpressionPerformanceCounter::AddDurationSample(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  result = a2;
  if ( (unsigned __int64)a2 < 6 )
  {
    ++*(_DWORD *)(a1 + 4LL * a2);
    *(_QWORD *)(a1 + 8LL * a2 + 24) += a3;
  }
  return result;
}
