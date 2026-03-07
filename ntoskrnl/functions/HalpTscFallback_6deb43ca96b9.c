__int64 __fastcall HalpTscFallback(ULONG_PTR Argument)
{
  int v2; // edi
  __int64 result; // rax
  signed __int32 v4[8]; // [rsp+0h] [rbp-28h] BYREF
  int v5; // [rsp+20h] [rbp-8h]
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(v6) = 0;
  _disable();
  v2 = v5 & 0x200;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Argument, 0xFFFFFFFF) == 1 )
  {
    *(LARGE_INTEGER *)(Argument + 8) = KeQueryPerformanceCounter(0LL);
    HalpTimerSelectFallbackPerformanceCounter();
    RtlSetSystemGlobalData(17, &v6, 1);
    _InterlockedDecrement((volatile signed __int32 *)Argument);
  }
  else
  {
    do
      _mm_pause();
    while ( *(_DWORD *)Argument != -1 );
    _InterlockedOr(v4, 0);
  }
  result = HalCalibratePerformanceCounter((volatile signed __int32 *)(Argument + 4), *(_QWORD *)(Argument + 8));
  if ( v2 )
    _enable();
  return result;
}
