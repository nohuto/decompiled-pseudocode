__int64 __fastcall _ValidateInjectionQpcCount(__int64 a1, __int64 a2, unsigned __int64 a3, int a4, int a5)
{
  unsigned int v5; // ebx

  v5 = 0;
  if ( a4 && !a1 || !a2 && !a1 )
    return 1LL;
  if ( !a4 && (!a2 && a1 && !a5 || a1 == a2 || a1 - a2 > a3) )
    return 0LL;
  LOBYTE(v5) = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - a1 <= (unsigned __int64)gullTouchInjectionMaxTimeOffset;
  return v5;
}
