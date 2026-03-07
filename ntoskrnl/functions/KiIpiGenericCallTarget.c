__int64 __fastcall KiIpiGenericCallTarget(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64),
        __int64 a3,
        volatile signed __int32 *a4)
{
  LARGE_INTEGER v7; // rax
  ULONG_PTR v8; // r9
  signed __int32 v10[8]; // [rsp+0h] [rbp-48h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+68h] [rbp+20h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  v12 = 0;
  _InterlockedDecrement(a4);
  while ( *a4 )
  {
    if ( !KiBarrierWait && (HvlEnlightenments & 0x20) == 0 )
    {
      v7 = KeQueryPerformanceCounter(&PerformanceFrequency);
      _InterlockedOr(v10, 0);
      v8 = MEMORY[0xFFFFF78000000350];
      if ( v7.QuadPart > (unsigned __int64)(MEMORY[0xFFFFF78000000350] + 300 * PerformanceFrequency.QuadPart) )
      {
        _InterlockedOr(v10, 0);
        if ( *a4 )
          KeBugCheckEx(0x1DBu, PerformanceFrequency.QuadPart, v7.QuadPart, v8, 0LL);
      }
    }
    KeYieldProcessorEx(&v12);
  }
  return a2(a3);
}
