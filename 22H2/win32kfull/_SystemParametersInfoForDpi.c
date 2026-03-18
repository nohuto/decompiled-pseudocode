/*
 * XREFs of _SystemParametersInfoForDpi @ 0x1C00A033C
 * Callers:
 *     NtUserSystemParametersInfoForDpi @ 0x1C00A01C0 (NtUserSystemParametersInfoForDpi.c)
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     GetWindowNCMetricsForDpi @ 0x1C00F0B8C (GetWindowNCMetricsForDpi.c)
 *     GetDpiDependentMetric @ 0x1C00F0DA0 (GetDpiDependentMetric.c)
 *     GetScaledLogFontForDpi @ 0x1C00F0E0C (GetScaledLogFontForDpi.c)
 */

__int64 __fastcall SystemParametersInfoForDpi(int a1, __int64 a2, _DWORD *a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // ebx
  __int64 v7; // rdx

  v5 = 0;
  if ( a1 != 31 )
  {
    if ( a1 == 41 )
    {
      if ( *a3 == 504 )
        return (unsigned int)GetWindowNCMetricsForDpi(a3, a5);
    }
    else
    {
      if ( a1 != 45 )
        return v5;
      if ( *a3 == 108 )
      {
        a3[1] = GetDpiDependentMetric(18LL, a5);
        a3[2] = GetDpiDependentMetric(19LL, a5);
        v7 = a5;
        a3[3] = (gdwPUDFlags >> 21) & 1;
        return (unsigned int)GetScaledLogFontForDpi(0LL, v7);
      }
    }
    UserSetLastError(87LL);
    return v5;
  }
  v7 = a5;
  return (unsigned int)GetScaledLogFontForDpi(0LL, v7);
}
