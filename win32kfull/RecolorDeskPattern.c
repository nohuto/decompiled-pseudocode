/*
 * XREFs of RecolorDeskPattern @ 0x1C00F5B00
 * Callers:
 *     SetDesktopPattern @ 0x1C010AAFC (SetDesktopPattern.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C005E110 (NtGdiBitBltInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C007BB00 (GreCreateCompatibleBitmapInternal.c)
 *     GreMarkDeletableBrush @ 0x1C00E8890 (GreMarkDeletableBrush.c)
 *     GreSetBkColor @ 0x1C0113964 (GreSetBkColor.c)
 *     GreSetTextColor @ 0x1C0113D94 (GreSetTextColor.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     GreCreateDIBitmapReal @ 0x1C02E02CC (GreCreateDIBitmapReal.c)
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
  _DWORD v8[3]; // [rsp+78h] [rbp+7h] BYREF
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
    v2 = GreSelectBitmap(ghdcMem, g_hbmDesktopPattern);
    if ( *(_DWORD *)(gpsi + 2220LL) )
    {
      CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(*(_QWORD *)(gpDispInfo + 64LL), 8, 8u, 0, 0LL, 0LL);
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
                                   *(_QWORD *)(gpDispInfo + 64LL),
                                   0,
                                   0,
                                   (unsigned int)v8,
                                   0,
                                   48,
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
      v5 = GreSelectBitmap(ghdcMem2, CompatibleBitmapInternal);
      GreSetTextColor(ghdcMem2, *(unsigned int *)(gpsi + 4572LL));
      GreSetBkColor(ghdcMem2);
      NtGdiBitBltInternal(ghdcMem2, 0, 0, 8, 8, ghdcMem, 0, 0, 13369376, 0, 0);
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
      GreSelectBitmap(ghdcMem2, v5);
      GreDeleteObject(v4);
    }
    GreSelectBitmap(ghdcMem, v2);
  }
  return v0;
}
