/*
 * XREFs of FadeDesktop @ 0x1C01E3E90
 * Callers:
 *     xxxSwitchDesktopWithFade @ 0x1C01137BC (xxxSwitchDesktopWithFade.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER __fastcall FadeDesktop(unsigned int a1, unsigned int *a2, DWORD a3, int a4)
{
  LARGE_INTEGER result; // rax
  LARGE_INTEGER v9; // rbx
  unsigned int v10; // r15d
  DWORD v11; // esi
  unsigned int v12; // r9d
  DWORD v13; // r10d
  __int64 v14; // rcx
  _WORD *v15; // r8
  __int64 v16; // rdi
  unsigned int *v17; // r11
  __int64 v18; // r13
  int v19; // ecx
  unsigned int v20; // eax
  int v21; // ecx
  unsigned int v22; // eax
  int v23; // ecx
  unsigned int v24; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  __int128 v26; // rtt
  DWORD v27; // esi
  union _LARGE_INTEGER v28; // [rsp+20h] [rbp-38h] BYREF
  LARGE_INTEGER v29; // [rsp+28h] [rbp-30h]
  DWORD LowPart; // [rsp+68h] [rbp+10h]

  v28.QuadPart = 0LL;
  result = KeQueryPerformanceCounter(&v28);
  v9 = result;
  v29 = result;
  if ( v28.QuadPart )
  {
    result.QuadPart = 0x3E8 / a1;
    LowPart = result.LowPart;
    v10 = 0x3E8 / a1;
    if ( result.LowPart <= a3 )
    {
      if ( result.LowPart )
      {
        v11 = 0;
        while ( 1 )
        {
          v12 = 0;
          if ( *a2 )
          {
            v13 = a3 - v11;
            do
            {
              v14 = 386LL * v12;
              v15 = a2 + 129;
              v16 = 256LL;
              v17 = &a2[v14 + 644];
              v18 = v14 * 4 - 4;
              do
              {
                v19 = *(unsigned __int16 *)((char *)v15 + v18 + 1040);
                if ( a4 )
                  v20 = v11 * v19;
                else
                  v20 = v19 * v13;
                *(v15 - 256) = v20 / a3;
                v21 = *((unsigned __int16 *)v17 - 256);
                if ( a4 )
                  v22 = v11 * v21;
                else
                  v22 = v21 * v13;
                *v15 = v22 / a3;
                v23 = *(unsigned __int16 *)v17;
                if ( a4 )
                  v24 = v11 * v23;
                else
                  v24 = v23 * v13;
                result.QuadPart = v24 / a3;
                v17 = (unsigned int *)((char *)v17 + 2);
                v15[256] = result.LowPart;
                ++v15;
                --v16;
              }
              while ( v16 );
              ++v12;
            }
            while ( v12 < *a2 );
            v9 = v29;
            v10 = LowPart;
          }
          if ( v11 == a3 )
            break;
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          v26 = 1000LL * (PerformanceCounter.LowPart - v9.LowPart);
          result.QuadPart = ((PerformanceCounter.QuadPart - v9.QuadPart) & 0xFFFFFFFF00000000uLL) / v28.QuadPart;
          v27 = 1000 * result.LowPart + v26 / v28.QuadPart;
          if ( v27 < a3 )
          {
            result.QuadPart = UserSleep(v27 % v10);
            v11 = v27 % v10 + v27;
            if ( v11 < a3 )
              continue;
          }
          v11 = a3;
        }
      }
    }
  }
  return result;
}
