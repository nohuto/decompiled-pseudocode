/*
 * XREFs of KiConfigureHeteroMultiCoreProcessors @ 0x140970054
 * Callers:
 *     KeConfigureHeteroProcessors @ 0x14096F978 (KeConfigureHeteroProcessors.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiPrepareUpdateCoresHeteroMask @ 0x140970358 (KiPrepareUpdateCoresHeteroMask.c)
 */

__int64 __fastcall KiConfigureHeteroMultiCoreProcessors(int a1, __int64 a2, int a3, char a4)
{
  int v8; // esi
  int *v9; // rdi
  int i; // ebx
  int v11; // ecx
  int v12; // ecx
  __int64 result; // rax
  _DWORD v14[68]; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v15[68]; // [rsp+180h] [rbp+80h] BYREF
  _DWORD v16[68]; // [rsp+290h] [rbp+190h] BYREF
  _DWORD v17[68]; // [rsp+3A0h] [rbp+2A0h] BYREF
  _DWORD v18[68]; // [rsp+4B0h] [rbp+3B0h] BYREF
  _DWORD v19[68]; // [rsp+5C0h] [rbp+4C0h] BYREF

  v19[0] = 2097153;
  memset(&v19[1], 0, 0x104uLL);
  v18[0] = 2097153;
  memset(&v18[1], 0, 0x104uLL);
  v15[0] = 2097153;
  memset(&v15[1], 0, 0x104uLL);
  v14[0] = 2097153;
  memset(&v14[1], 0, 0x104uLL);
  v17[0] = 2097153;
  memset(&v17[1], 0, 0x104uLL);
  v16[0] = 2097153;
  memset(&v16[1], 0, 0x104uLL);
  v8 = 0;
  v9 = KiDynamicHeteroCpuPolicy;
  do
  {
    for ( i = 0; i < 2; ++i )
    {
      memset(&v19[2], 0, 8LL * LOWORD(v19[0]));
      LOWORD(v19[0]) = 1;
      memset(&v18[2], 0, 8LL * LOWORD(v18[0]));
      LOWORD(v18[0]) = 1;
      memset(&v15[2], 0, 8LL * LOWORD(v15[0]));
      LOWORD(v15[0]) = 1;
      memset(&v14[2], 0, 8LL * LOWORD(v14[0]));
      LOWORD(v14[0]) = 1;
      memset(&v17[2], 0, 8LL * LOWORD(v17[0]));
      LOWORD(v17[0]) = 1;
      memset(&v16[2], 0, 8LL * LOWORD(v16[0]));
      v11 = *v9;
      LOWORD(v16[0]) = 1;
      v12 = v11 - 1;
      if ( v12 && (--v12, v12) )
      {
        if ( (unsigned int)(v12 - 1) > 1 )
          goto LABEL_9;
        v12 = 0;
      }
      else
      {
        LOBYTE(v12) = 1;
      }
      KiPrepareUpdateCoresHeteroMask(
        v12,
        a1,
        i,
        v8,
        a3,
        a2,
        a4,
        (__int64)v19,
        (__int64)v18,
        (__int64)v17,
        (__int64)v16,
        (__int64)v15,
        (__int64)v14);
LABEL_9:
      result = 1LL;
      ++v9;
    }
    ++v8;
  }
  while ( v8 < 7 );
  return result;
}
