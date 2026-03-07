__int64 __fastcall OffLineTo(
        __int64 (__fastcall *a1)(SURFOBJ *, struct _CLIPOBJ *, BRUSHOBJ *, _QWORD, int, int, int, RECTL *, MIX),
        LONG *a2,
        SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        BRUSHOBJ *a5,
        int a6,
        int a7,
        int a8,
        LONG a9,
        RECTL *a10,
        MIX mix)
{
  LONG v11; // edi
  LONG v14; // ebx
  RECTL *prclBounds; // rsi
  int v16; // edx
  unsigned int v17; // r15d
  unsigned int v18; // ebp
  __int128 v22; // [rsp+68h] [rbp-60h] BYREF
  LONG y2; // [rsp+110h] [rbp+48h]

  v11 = a2[1];
  v14 = *a2;
  prclBounds = a10;
  CLIPOBJ_vOffset(a4, *a2, v11);
  v16 = v11 + a9;
  v17 = v14 + a6;
  y2 = v11 + a9;
  v22 = 0LL;
  if ( a10 )
  {
    LODWORD(v22) = v14 + a10->left;
    DWORD2(v22) = v14 + a10->right;
    DWORD1(v22) = v11 + a10->top;
    prclBounds = (RECTL *)&v22;
    HIDWORD(v22) = v11 + a10->bottom;
  }
  v18 = a1(a3, a4, a5, v17, v11 + a7, v14 + a8, v16, prclBounds, mix);
  if ( !v18 )
    v18 = EngLineTo(a3, a4, a5, v17, v11 + a7, v14 + a8, y2, prclBounds, mix);
  CLIPOBJ_vOffset(a4, -v14, -v11);
  return v18;
}
