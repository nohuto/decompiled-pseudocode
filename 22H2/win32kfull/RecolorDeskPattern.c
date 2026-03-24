/*
 * XREFs of RecolorDeskPattern @ 0x1C01369E0
 * Callers:
 *     SetDesktopPattern @ 0x1C0026030 (SetDesktopPattern.c)
 * Callees:
 *     GreMarkDeletableBrush @ 0x1C00261A4 (GreMarkDeletableBrush.c)
 *     GreSetTextColor @ 0x1C0044578 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0044600 (GreSetBkColor.c)
 *     NtGdiBitBltInternal @ 0x1C0088600 (NtGdiBitBltInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C00AADE8 (GreCreateCompatibleBitmapInternal.c)
 *     GreCreateDIBitmapReal @ 0x1C00ABE5C (GreCreateDIBitmapReal.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

__int64 RecolorDeskPattern()
{
  unsigned int v0; // ebx
  __int64 v2; // r14
  __int64 CompatibleBitmapInternal; // rax
  __int64 v4; // rsi
  __int64 v5; // r15
  __int64 PatternBrush; // rdi
  HBRUSH v7; // rcx
  unsigned int v8[3]; // [rsp+78h] [rbp+7h] BYREF
  __int64 v9; // [rsp+84h] [rbp+13h]
  __int64 v10; // [rsp+8Ch] [rbp+1Bh]
  int v11; // [rsp+94h] [rbp+23h]
  int v12; // [rsp+98h] [rbp+27h]
  int v13; // [rsp+9Ch] [rbp+2Bh]
  char v14; // [rsp+A0h] [rbp+2Fh]
  char v15; // [rsp+A1h] [rbp+30h]
  char v16; // [rsp+A2h] [rbp+31h]
  char v17; // [rsp+A4h] [rbp+33h]
  char v18; // [rsp+A5h] [rbp+34h]
  char v19; // [rsp+A6h] [rbp+35h]

  v0 = 0;
  if ( g_hbmDesktopPattern )
  {
    v2 = GreSelectBitmap(*(_QWORD *)ghdcMem, g_hbmDesktopPattern);
    if ( *(_DWORD *)(gpsi + 2220LL) )
    {
      CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(*(HDC *)(gpDispInfo + 64LL), 8u, 8u, 0, 0LL, 0LL);
    }
    else
    {
      v8[0] = 40;
      v12 = 2;
      v13 = 2;
      v8[1] = 8;
      v8[2] = 8;
      v9 = 65537LL;
      v10 = 0LL;
      v11 = 0;
      v14 = *(_BYTE *)(gpsi + 4574LL);
      v15 = BYTE1(*(_DWORD *)(gpsi + 4572LL));
      v16 = *(_BYTE *)(gpsi + 4572LL);
      v17 = *(_BYTE *)(gpsi + 4602LL);
      v18 = BYTE1(*(_DWORD *)(gpsi + 4600LL));
      v19 = *(_BYTE *)(gpsi + 4600LL);
      CompatibleBitmapInternal = GreCreateDIBitmapReal(
                                   *(HDC *)(gpDispInfo + 64LL),
                                   0,
                                   0LL,
                                   v8,
                                   0,
                                   0x30u,
                                   0,
                                   0LL,
                                   0,
                                   0LL,
                                   0,
                                   0LL,
                                   0LL);
    }
    v4 = CompatibleBitmapInternal;
    if ( CompatibleBitmapInternal )
    {
      v5 = GreSelectBitmap(*(_QWORD *)ghdcMem2, CompatibleBitmapInternal);
      GreSetTextColor(*(HDC *)ghdcMem2, *(_DWORD *)(gpsi + 4572LL));
      GreSetBkColor(*(HDC *)ghdcMem2, *(_DWORD *)(gpsi + 4600LL));
      NtGdiBitBltInternal(*(HDC *)ghdcMem2, 0, 0, 8, 8, *(HDC *)ghdcMem, 0, 0, 13369376, 0, 0);
      PatternBrush = GreCreatePatternBrush(v4);
      if ( PatternBrush )
      {
        v7 = *(HBRUSH *)(gpsi + 4704LL);
        if ( v7 )
        {
          GreMarkDeletableBrush(v7);
          GreDeleteObject(*(_QWORD *)(gpsi + 4704LL));
        }
        GreMarkUndeletableBrush(PatternBrush);
        GreSetBrushOwner(PatternBrush, 0LL);
        v0 = 1;
        *(_QWORD *)(gpsi + 4704LL) = PatternBrush;
      }
      GreSelectBitmap(*(_QWORD *)ghdcMem2, v5);
      GreDeleteObject(v4);
    }
    GreSelectBitmap(*(_QWORD *)ghdcMem, v2);
  }
  return v0;
}
