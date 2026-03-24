/*
 * XREFs of ?GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x1C02B67A4
 * Callers:
 *     NtGdiIcmBrushInfo @ 0x1C02B7320 (NtGdiIcmBrushInfo.c)
 * Callees:
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00266C0 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C002674C (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     GreCreateDIBitmapReal @ 0x1C00AC12C (GreCreateDIBitmapReal.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2BF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreIcmSetBrushBitmap(HDC a1, HBRUSH a2, struct tagBITMAPINFO *a3, void *a4)
{
  unsigned int v8; // ebx
  BRUSH *v9; // rdi
  HBITMAP DIBitmapReal; // r8
  _QWORD v12[6]; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v13[6]; // [rsp+A0h] [rbp-38h] BYREF

  v8 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v12, a1);
  if ( v12[0] && (*(_DWORD *)(v12[0] + 120LL) & 1) != 0 )
  {
    BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v13, a2);
    v9 = (BRUSH *)v13[0];
    if ( v13[0] )
    {
      if ( (*(_DWORD *)(v13[0] + 40LL) & 0x80u) != 0 )
      {
        DIBitmapReal = (HBITMAP)GreCreateDIBitmapReal(
                                  a1,
                                  6,
                                  a4,
                                  &a3->bmiHeader.biSize,
                                  0,
                                  0x428u,
                                  0x7FFFFFu,
                                  0LL,
                                  0,
                                  0LL,
                                  1,
                                  0LL,
                                  0LL);
        if ( DIBitmapReal )
          v8 = BRUSH::bAddIcmDIB(v9, *(void **)(*(_QWORD *)(v12[0] + 976LL) + 248LL), DIBitmapReal);
      }
    }
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v13);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v12);
  return v8;
}
