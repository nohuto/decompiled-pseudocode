__int64 __fastcall bBrushPath(
        struct SURFACE *a1,
        struct _PATHOBJ *a2,
        struct _RECTL *a3,
        struct _BRUSHOBJ *a4,
        struct _POINTL *a5,
        unsigned int a6,
        unsigned int a7)
{
  _QWORD *pvRbrush; // rcx
  __int64 v13; // rdi
  unsigned int v14; // r9d
  unsigned int v15; // r8d
  int v16; // r10d
  LONG y; // r11d
  __int64 v18; // rcx
  _QWORD v19[4]; // [rsp+30h] [rbp-50h] BYREF
  int v20; // [rsp+50h] [rbp-30h]
  int v21; // [rsp+54h] [rbp-2Ch]
  __int64 v22; // [rsp+58h] [rbp-28h]
  unsigned int v23; // [rsp+60h] [rbp-20h]
  unsigned int v24; // [rsp+64h] [rbp-1Ch]
  unsigned int v25; // [rsp+68h] [rbp-18h]
  unsigned int v26; // [rsp+6Ch] [rbp-14h]
  int v27; // [rsp+70h] [rbp-10h]
  int v28; // [rsp+74h] [rbp-Ch]

  if ( (unsigned int)(*((_DWORD *)a1 + 24) - 1) > 5 && (unsigned int)bUMPDSecurityGateEx() )
    return 0LL;
  pvRbrush = a4[1].pvRbrush;
  v22 = 0LL;
  v28 = 0;
  v13 = *((unsigned int *)a1 + 24);
  v19[2] = *((_QWORD *)a1 + 10);
  v20 = *((_DWORD *)a1 + 22);
  v27 = *((_DWORD *)&aulMulFormat + v13);
  v19[3] = pvRbrush[4];
  v21 = *((_DWORD *)pvRbrush + 7);
  v14 = *((_DWORD *)pvRbrush + 5) * v27;
  v25 = v14;
  v15 = *((_DWORD *)pvRbrush + 6);
  v26 = v15;
  v16 = a5->x * v27;
  y = a5->y;
  v24 = y;
  v23 = v16;
  if ( v16 < 0 )
    v23 = v14 - ~v16 % v14 - 1;
  if ( y < 0 )
    v24 = v15 - (-1 - y) % v15 - 1;
  v18 = a6 + 3 * v13;
  v19[0] = qword_1C030D460[v18];
  v19[1] = qword_1C030D3B0[v18];
  return bEngFastFillEnum(
           (struct EPATHOBJ *)a2,
           a3,
           a7,
           (void (*)(struct _RECTL *, unsigned int, void *))vBrushPathEnum,
           (void (*)(int, struct _ROW *, unsigned int, void *))vBrushPathEnumRow,
           v19);
}
