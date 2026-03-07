__int64 __fastcall bBrushPathN_8x8(
        struct SURFACE *a1,
        struct _PATHOBJ *a2,
        struct _RECTL *a3,
        struct _BRUSHOBJ *a4,
        struct _POINTL *a5,
        unsigned int a6,
        unsigned int a7)
{
  void (*v11)(struct _RECTL *, unsigned int, void *); // r9
  void (*v12)(int, struct _ROW *, unsigned int, void *); // rax
  _BYTE v14[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15; // [rsp+38h] [rbp-40h]
  __int64 v16; // [rsp+40h] [rbp-38h]
  int v17; // [rsp+48h] [rbp-30h]
  int v18; // [rsp+58h] [rbp-20h]
  int v19; // [rsp+5Ch] [rbp-1Ch]

  memset_0(v14, 0, 0x40uLL);
  v11 = (void (*)(struct _RECTL *, unsigned int, void *))vBrushPath8_8x8Enum;
  v15 = *((_QWORD *)a1 + 10);
  v17 = *((_DWORD *)a1 + 22);
  v16 = *((_QWORD *)a4[1].pvRbrush + 4);
  v18 = a5->x & 7;
  v19 = a5->y & 7;
  v12 = (void (*)(int, struct _ROW *, unsigned int, void *))vBrushPath8_8x8EnumRow;
  if ( a6 != 3 )
  {
    v12 = (void (*)(int, struct _ROW *, unsigned int, void *))vBrushPath4_8x8EnumRow;
    v11 = (void (*)(struct _RECTL *, unsigned int, void *))vBrushPath4_8x8Enum;
  }
  return bEngFastFillEnum((struct EPATHOBJ *)a2, a3, a7, v11, v12, v14);
}
