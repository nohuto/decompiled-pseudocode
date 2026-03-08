/*
 * XREFs of ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C02D0778
 * Callers:
 *     NtGdiIcmBrushInfo @ 0x1C02D1330 (NtGdiIcmBrushInfo.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     GreGetBitmapBitsSize @ 0x1C0091230 (GreGetBitmapBitsSize.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00E8C20 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00E8CA0 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     GreGetDIBitsInternal @ 0x1C02E044C (GreGetDIBitsInternal.c)
 */

__int64 __fastcall GreIcmQueryBrushBitmap(
        HDC a1,
        HBRUSH a2,
        struct tagBITMAPINFO *a3,
        __int64 a4,
        unsigned int *a5,
        unsigned int *a6,
        int *a7)
{
  unsigned int DIBitsInternal; // ebx
  unsigned int v8; // ebp
  int v9; // r12d
  int *v12; // rsi
  __int64 v13; // rcx
  BRUSH *v14; // rdi
  int v15; // r8d
  unsigned int BitmapBitsSize; // esi
  int v17; // r8d
  LONG biHeight; // r9d
  int v20; // [rsp+30h] [rbp-78h]
  int v21; // [rsp+30h] [rbp-78h]
  _QWORD v22[2]; // [rsp+50h] [rbp-58h] BYREF
  BRUSH *v23[9]; // [rsp+60h] [rbp-48h] BYREF
  int v24; // [rsp+B0h] [rbp+8h]

  v24 = (int)a1;
  DIBitsInternal = 0;
  v8 = 0;
  v9 = 0;
  if ( !a3 )
    return 0LL;
  if ( !a6 )
    return 0LL;
  v12 = a7;
  if ( !a7 || !a5 )
    return 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v22, a1);
  v13 = v22[0];
  if ( v22[0] && (*(_DWORD *)(v22[0] + 120LL) & 1) != 0 )
  {
    BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v23, a2);
    v14 = v23[0];
    if ( !v23[0] )
      goto LABEL_23;
    if ( (*((_DWORD *)v23[0] + 10) & 0x80u) == 0 )
      goto LABEL_23;
    v8 = *((_DWORD *)v23[0] + 21);
    if ( v8 )
      goto LABEL_23;
    if ( BRUSH::hFindIcmDIB(v23[0], *(void **)(*(_QWORD *)(v22[0] + 976LL) + 248LL)) )
    {
      v9 = 1;
LABEL_23:
      BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v23);
      v13 = v22[0];
      goto LABEL_24;
    }
    memset_0(&a3->bmiHeader.biWidth, 0, 0x424uLL);
    a3->bmiHeader.biSize = 44;
    DIBitsInternal = GreGetDIBitsInternal(v24, *((_QWORD *)v14 + 3), v15, 0, 0LL, a3, v20, 0, 1064);
    if ( !DIBitsInternal )
      goto LABEL_23;
    BitmapBitsSize = GreGetBitmapBitsSize((__int64)a3);
    if ( !BitmapBitsSize )
    {
      DIBitsInternal = 0;
LABEL_22:
      v12 = a7;
      goto LABEL_23;
    }
    if ( a4 )
    {
      if ( BitmapBitsSize > *a5 )
        goto LABEL_22;
      biHeight = -a3->bmiHeader.biHeight;
      if ( a3->bmiHeader.biHeight >= 0 )
        biHeight = a3->bmiHeader.biHeight;
      DIBitsInternal = GreGetDIBitsInternal(v24, *((_QWORD *)v14 + 3), v17, biHeight, a4, a3, v21, BitmapBitsSize, 1064);
    }
    else
    {
      DIBitsInternal = 1;
    }
    *a5 = BitmapBitsSize;
    goto LABEL_22;
  }
LABEL_24:
  *a6 = v8;
  *v12 = v9;
  if ( v13 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v22);
  return DIBitsInternal;
}
