__int64 __fastcall Controller_GetQpcValueForFrameMicroFrameBoundary(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        char a6,
        __int64 a7,
        int a8,
        int a9,
        __int64 a10,
        unsigned __int64 a11,
        _DWORD *a12)
{
  unsigned int LowPart; // eax
  char v16; // r9
  int v17; // ecx
  __int64 v18; // rdx
  double v19; // xmm1_8
  double v20; // xmm0_8
  __int64 v21; // rdx
  int v22; // r8d
  double v23; // xmm0_8
  unsigned __int64 v24; // rax
  double v25; // xmm1_8
  union _LARGE_INTEGER v27; // [rsp+30h] [rbp+8h] BYREF

  v27.QuadPart = 0LL;
  LowPart = KeQueryPerformanceCounter(&v27).LowPart;
  v16 = a6;
  v17 = LowPart;
  if ( a6 )
  {
    v18 = (unsigned int)(a5 + 8 * (a4 - a8) - a9);
    if ( a12 )
      *a12 = 1;
  }
  else
  {
    v18 = (unsigned int)(a3 + 8 * (a2 - a4) - a5);
    if ( a12 )
      *a12 = 125;
  }
  if ( a10 && a11 )
  {
    if ( (a11 & 0x8000000000000000uLL) != 0LL )
      v19 = (double)(int)(a11 & 1 | (a11 >> 1)) + (double)(int)(a11 & 1 | (a11 >> 1));
    else
      v19 = (double)(int)a11;
    v20 = (double)(int)a10 / v19 * (double)(int)v18;
  }
  else
  {
    v21 = v27.QuadPart * v18;
    v22 = 125 * v21;
    if ( 125 * v21 < 0 )
    {
      v24 = v22 & 1 | ((unsigned __int64)(125 * v21) >> 1);
      v23 = (double)(int)v24 + (double)(int)v24;
    }
    else
    {
      v23 = (double)v22;
    }
    v20 = v23 / 1000000.0;
  }
  if ( v16 )
    v25 = (double)(int)a7 + v20;
  else
    v25 = (double)v17 - v20;
  return (unsigned int)(int)v25;
}
