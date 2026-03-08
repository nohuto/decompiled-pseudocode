/*
 * XREFs of ACPIGetConvertToClassCode @ 0x1C00296FC
 * Callers:
 *     ACPIGetWorkerForInteger @ 0x1C002B5C0 (ACPIGetWorkerForInteger.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 */

__int64 __fastcall ACPIGetConvertToClassCode(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 *a5,
        _DWORD *a6)
{
  __int64 result; // rax
  _DWORD *v7; // rdx
  unsigned int v8; // r8d
  _WORD *v9; // r9
  _WORD *v10; // rdx
  unsigned __int64 v11; // rdx
  _WORD v12[2]; // [rsp+30h] [rbp-18h] BYREF
  __int16 v13; // [rsp+34h] [rbp-14h]

  result = (unsigned int)a2;
  if ( a2 >= 0 )
  {
    if ( a5 )
    {
      if ( *(_WORD *)(a3 + 2) == 1 )
      {
        v11 = *(_QWORD *)(a3 + 16);
      }
      else
      {
        if ( *(_WORD *)(a3 + 2) != 4 )
          KeBugCheckEx(0xA3u, 1uLL, 0x60248uLL, 0LL, 0LL);
        v7 = *(_DWORD **)(a3 + 32);
        if ( *v7 != 3 )
          KeBugCheckEx(0xA3u, 1uLL, 0x6022DuLL, 0LL, 0LL);
        v8 = 0;
        v9 = v12;
        v10 = v7 + 6;
        do
        {
          if ( *(v10 - 7) != 1 )
            KeBugCheckEx(0xA3u, 1uLL, 0x6023CuLL, 0LL, 0LL);
          ++v8;
          *v9 = *v10;
          v10 += 20;
          ++v9;
        }
        while ( v8 < 3 );
        v11 = ((unsigned __int8)v13 | ((v12[1] | ((unsigned __int64)v12[0] << 16)) << 8)) << 24;
      }
      result = 0LL;
      *a5 = v11;
      if ( a6 )
        *a6 = 8;
    }
    else
    {
      return 3222536207LL;
    }
  }
  return result;
}
