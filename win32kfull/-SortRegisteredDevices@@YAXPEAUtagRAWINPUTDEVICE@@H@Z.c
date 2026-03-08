/*
 * XREFs of ?SortRegisteredDevices@@YAXPEAUtagRAWINPUTDEVICE@@H@Z @ 0x1C01AADC8
 * Callers:
 *     _GetRegisteredRawInputDevices @ 0x1C01AB428 (_GetRegisteredRawInputDevices.c)
 * Callees:
 *     <none>
 */

void __fastcall SortRegisteredDevices(struct tagRAWINPUTDEVICE *a1, int a2)
{
  __int64 v2; // r9
  int v3; // r8d
  signed int v4; // edx
  __int64 v5; // r14
  __int64 v6; // rdx
  int v7; // r11d
  __m128i *v8; // r9
  __m128i v9; // xmm1
  int v10; // edi
  __int64 v11; // r10
  unsigned int v12; // r15d
  __int128 v13; // xmm0
  __int64 v14; // rax

  if ( a2 > 0 )
  {
    v2 = a2;
    v3 = 1;
    v4 = a2 / 9u;
    if ( v4 <= 1 )
      goto LABEL_5;
    do
      v3 = 3 * v3 + 1;
    while ( v3 < v4 );
    if ( v3 > 0 )
    {
LABEL_5:
      v5 = v2;
      do
      {
        v6 = v3;
        v7 = v3;
        if ( v3 < v5 )
        {
          v8 = (__m128i *)((char *)a1 + 16 * v3);
          do
          {
            v9 = *v8;
            v10 = v7 - v3;
            v11 = v6 - v3;
            if ( v11 >= 0 )
            {
              v12 = (unsigned __int16)_mm_extract_epi16(v9, 1) | ((unsigned __int16)_mm_cvtsi128_si32(v9) << 16);
              do
              {
                if ( ((*((unsigned __int16 *)a1 + 8 * v11) << 16) | (unsigned int)*((unsigned __int16 *)a1 + 8 * v11 + 1)) <= v12 )
                  break;
                v13 = *((_OWORD *)a1 + v11);
                v10 -= v3;
                v14 = 2 * (v3 + v11);
                v11 -= v3;
                *(_OWORD *)((char *)a1 + 8 * v14) = v13;
              }
              while ( v11 >= 0 );
            }
            if ( v7 != v10 + v3 )
              *((__m128i *)a1 + v3 + v11) = v9;
            ++v7;
            ++v6;
            ++v8;
          }
          while ( v6 < v5 );
        }
        v3 /= 3;
      }
      while ( v3 > 0 );
    }
  }
}
