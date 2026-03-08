/*
 * XREFs of HalpSetPCIData @ 0x1403701C4
 * Callers:
 *     HalSetBusDataByOffset @ 0x140370180 (HalSetBusDataByOffset.c)
 * Callees:
 *     HalpWritePCIConfig @ 0x1403702A0 (HalpWritePCIConfig.c)
 *     HalpReadPCIConfig @ 0x1403704C4 (HalpReadPCIConfig.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

__int64 __fastcall HalpSetPCIData(__int64 a1, __int64 a2, __int64 a3, const void *a4, unsigned int a5, size_t Size)
{
  unsigned int v6; // r12d
  unsigned int v7; // r14d
  int v8; // ebx
  char v9; // di
  unsigned int v10; // r15d
  unsigned __int16 v11; // r13
  int v12; // edx
  unsigned int v13; // eax
  int v15; // edx
  char v16; // [rsp+30h] [rbp-99h]
  _OWORD v18[4]; // [rsp+40h] [rbp-89h] BYREF
  _OWORD v19[4]; // [rsp+80h] [rbp-49h] BYREF

  v6 = a5;
  v7 = 4096;
  v8 = a3;
  v9 = a2;
  if ( (unsigned int)Size <= 0x1000 )
    v7 = Size;
  v10 = 0;
  v16 = a2;
  v11 = a1;
  if ( a5 < 0x40 )
  {
    HalpReadPCIConfig(a1, a2, a3, v18, 0, 64);
    if ( LOWORD(v18[0]) != 0xFFFF && (BYTE14(v18[0]) & 0x7F) == 0 )
    {
      v10 = 64 - a5;
      v19[0] = v18[0];
      if ( 64 - a5 > v7 )
        v10 = v7;
      v19[1] = v18[1];
      v19[2] = v18[2];
      v19[3] = v18[3];
      memmove((char *)v19 + a5, a4, v10);
      v9 = v16;
      LOBYTE(v15) = v16;
      HalpWritePCIConfig(v11, v15, v8, (unsigned int)v19 + a5, a5, v10);
      v6 = v10 + a5;
      v13 = v10 + (_DWORD)a4;
      v7 -= v10;
      goto LABEL_6;
    }
    return 0LL;
  }
  HalpReadPCIConfig(a1, a2, a3, v18, 0, 4);
  if ( LOWORD(v18[0]) == 0xFFFF )
    return 0LL;
  v13 = (unsigned int)a4;
LABEL_6:
  if ( v7 )
  {
    if ( v6 >= 0x40 )
    {
      LOBYTE(v12) = v9;
      HalpWritePCIConfig(v11, v12, v8, v13, v6, v7);
      v10 += v7;
    }
  }
  return v10;
}
