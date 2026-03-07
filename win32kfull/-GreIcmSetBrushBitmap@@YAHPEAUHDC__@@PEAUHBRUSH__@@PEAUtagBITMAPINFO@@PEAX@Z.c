__int64 __fastcall GreIcmSetBrushBitmap(HDC a1, HBRUSH a2, struct tagBITMAPINFO *a3, void *a4)
{
  int v5; // esi
  int v6; // ebp
  int v7; // r14d
  unsigned int v8; // edi
  __int64 v9; // r10
  BRUSH *v10; // rbx
  HBITMAP DIBitmapReal; // r8
  _QWORD v13[2]; // [rsp+70h] [rbp-28h] BYREF
  _QWORD v14[2]; // [rsp+80h] [rbp-18h] BYREF

  v5 = (int)a1;
  v6 = (int)a4;
  v7 = (int)a3;
  v8 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  v9 = v13[0];
  if ( v13[0] )
  {
    if ( (*(_DWORD *)(v13[0] + 120LL) & 1) != 0 )
    {
      BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v14, a2);
      v10 = (BRUSH *)v14[0];
      if ( v14[0] )
      {
        if ( (*(_DWORD *)(v14[0] + 40LL) & 0x80u) != 0 )
        {
          DIBitmapReal = (HBITMAP)GreCreateDIBitmapReal(v5, 6, v6, v7, 0, 1064, 0x7FFFFF, 0LL, 0, 0LL, 1, 0LL, 0LL);
          if ( DIBitmapReal )
            v8 = BRUSH::bAddIcmDIB(v10, *(void **)(*(_QWORD *)(v13[0] + 976LL) + 248LL), DIBitmapReal);
        }
      }
      BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v14);
      v9 = v13[0];
    }
    if ( v9 )
      XDCOBJ::vUnlockFast((XDCOBJ *)v13);
  }
  return v8;
}
