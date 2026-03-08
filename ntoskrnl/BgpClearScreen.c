/*
 * XREFs of BgpClearScreen @ 0x14066F510
 * Callers:
 *     BgpDisplaySafeToPowerOffScreen @ 0x140670864 (BgpDisplaySafeToPowerOffScreen.c)
 *     BgpFwDisplayBugCheckScreen @ 0x140670AE4 (BgpFwDisplayBugCheckScreen.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140AE90B8 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwDisplayFade @ 0x140AE99E8 (AnFwDisplayFade.c)
 *     BgpConsoleClearScreenEx @ 0x140AEE428 (BgpConsoleClearScreenEx.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140AEF1E0 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     BgpGxDrawRectangle @ 0x1403817FC (BgpGxDrawRectangle.c)
 *     BgpGetBitsPerPixel @ 0x140381AB0 (BgpGetBitsPerPixel.c)
 *     BgpGxInitializeRectangle @ 0x140383D4C (BgpGxInitializeRectangle.c)
 *     BgpGxFillRectangle @ 0x1403842E4 (BgpGxFillRectangle.c)
 */

__int64 __fastcall BgpClearScreen(unsigned int a1)
{
  __int64 result; // rax
  unsigned int v3; // esi
  unsigned int v4; // r14d
  unsigned int v5; // r8d
  unsigned int v6; // r9d
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  unsigned int v9; // edi
  unsigned int v10; // eax
  int BitsPerPixel; // eax
  unsigned int v12; // ecx
  unsigned int v13; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v14; // [rsp+24h] [rbp-Ch]
  unsigned int v15; // [rsp+28h] [rbp-8h]
  unsigned int v16; // [rsp+58h] [rbp+28h] BYREF
  unsigned int i; // [rsp+5Ch] [rbp+2Ch]

  if ( (dword_140C0E3B0 & 1) == 0 )
    return 3221225473LL;
  v3 = DWORD2(BgInternal);
  v4 = DWORD1(BgInternal);
  v13 = DWORD2(BgInternal);
  v6 = (unsigned int)BgpGetBitsPerPixel() >> 3;
  v7 = 8120;
  v15 = v5;
  v8 = v4;
  v9 = v13;
  v14 = v4;
  v10 = v6 * v4 * v13;
  if ( v10 < 0x1FB8 )
    v7 = v6 * v4 * v13;
  if ( v10 > v7 )
  {
    do
    {
      v9 >>= 1;
      v8 >>= 1;
      v5 >>= 1;
    }
    while ( v6 * v8 * v9 > v7 );
    v14 = v8;
    v13 = v9;
    v15 = v5;
  }
  BitsPerPixel = BgpGetBitsPerPixel();
  result = BgpGxInitializeRectangle((int *)&v13, BitsPerPixel, (__int64)byte_140D18E40, 0x2000u);
  if ( (int)result >= 0 )
  {
    BgpGxFillRectangle((__int64)byte_140D18E40, a1);
    v12 = 0;
    for ( i = 0; v12 < v4; i = v12 )
    {
      v16 = 0;
      if ( v3 )
      {
        do
        {
          BgpGxDrawRectangle(byte_140D18E40, (__int64)&v16);
          if ( (byte_140D18E50 & 0x10) != 0 )
            BgpGxFillRectangle((__int64)byte_140D18E40, a1);
          v16 += v9;
        }
        while ( v16 < v3 );
        v12 = i;
      }
      v12 += v8;
    }
    dword_140C0E3B0 |= 0x2000u;
    return 0LL;
  }
  return result;
}
