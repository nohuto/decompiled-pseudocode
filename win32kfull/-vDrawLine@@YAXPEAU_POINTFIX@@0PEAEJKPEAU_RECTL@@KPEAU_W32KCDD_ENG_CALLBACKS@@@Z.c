void __fastcall vDrawLine(
        struct _POINTFIX *a1,
        struct _POINTFIX *a2,
        unsigned __int8 *a3,
        int a4,
        unsigned int a5,
        struct _RECTL *a6,
        unsigned int a7,
        struct _POINTFIX *a8)
{
  unsigned __int8 *v9; // rsi
  int v12; // ebx
  unsigned int v13; // ecx
  FIX y; // ecx
  FIX v15; // r14d
  FIX x; // r10d
  FIX v17; // r9d
  int v18; // r14d
  int v19; // r10d
  int v20; // ecx
  int v21; // edx
  LONG v22; // r13d
  LONG v23; // r11d
  LONG left; // eax
  LONG right; // r9d
  int v26; // r8d
  int v27; // r9d
  void (__fastcall *v28)(unsigned __int8 *, int, int, unsigned int); // r11
  struct _POINTFIX **v29; // rsi
  int v30; // edx
  __int64 v31; // r8
  int v32; // ecx
  int v33; // edx
  int v34; // ecx
  bool v35; // zf
  int v36; // eax
  LONG v37; // eax
  unsigned int v38; // [rsp+30h] [rbp-98h]
  LONG bottom; // [rsp+34h] [rbp-94h]
  __int64 v40; // [rsp+38h] [rbp-90h] BYREF
  __int128 v41; // [rsp+40h] [rbp-88h]
  __int64 v42; // [rsp+50h] [rbp-78h]
  struct _POINTFIX *v43; // [rsp+58h] [rbp-70h]
  LONG top; // [rsp+60h] [rbp-68h]
  unsigned __int8 *v45; // [rsp+68h] [rbp-60h]
  struct _POINTFIX *v46; // [rsp+70h] [rbp-58h]
  struct _POINTFIX *v47[2]; // [rsp+78h] [rbp-50h] BYREF

  v9 = a3;
  v45 = a3;
  v46 = a2;
  v47[0] = a1;
  v12 = a4;
  v41 = 0LL;
  v42 = 0LL;
  v40 = 0LL;
  v43 = a8;
  v13 = 6;
  if ( !a8 )
    v13 = a7;
  v38 = v13;
  y = a2->y;
  v15 = a1->y;
  x = a2->x;
  if ( (((unsigned __int8)x | (unsigned __int8)(v15 | a1->x | y)) & 0xF) != 0 )
    goto LABEL_45;
  v17 = a1->x >> 4;
  v18 = v15 >> 4;
  v19 = x >> 4;
  v20 = y >> 4;
  HIDWORD(v40) = v17;
  LODWORD(v41) = v18;
  v21 = 0;
  if ( v19 < v17 )
    v21 = 4;
  LODWORD(v40) = v21;
  v22 = v17;
  if ( v19 >= v17 )
  {
    v22 = v19;
    v19 = v17;
  }
  if ( v20 < v18 )
  {
    v21 |= 2u;
    LODWORD(v40) = v21;
  }
  v23 = v18;
  if ( v20 >= v18 )
  {
    v23 = v20;
    v20 = v18;
  }
  if ( a6 )
  {
    left = a6->left;
    if ( v22 < a6->left )
      return;
    right = a6->right;
    if ( v19 >= right )
      return;
    top = a6->top;
    if ( v23 < top )
      return;
    bottom = a6->bottom;
    v9 = v45;
    if ( v20 >= bottom )
      return;
    if ( v19 < left || v22 >= right || v20 < top || v23 >= bottom )
    {
LABEL_45:
      if ( !(unsigned int)bGIQtoIntegerLine(v47[0], v46, a6, (struct _DDALINE *)&v40) || SDWORD1(v41) <= 0 )
        return;
      if ( (v40 & 2) != 0 )
        v12 = -v12;
LABEL_48:
      (*(&off_1C030D510[8 * v38] + (v40 & 7)))((struct _DDALINE *)&v40, &v9[(int)v41 * a4], v12, a5);
      return;
    }
  }
  v26 = v22 - v19;
  v27 = v23 - v20;
  if ( v22 - v19 >= v23 - v20 )
  {
    if ( !v27 )
    {
      v28 = off_1C030D6D0[v38];
      v29 = (struct _POINTFIX **)&v9[v18 * a4];
      *(_OWORD *)v47 = 0LL;
      if ( a8 )
      {
        LODWORD(v47[0]) = v18;
        v47[1] = a8;
        v29 = v47;
      }
      v30 = v21 & 4;
      v31 = (unsigned int)(v22 + 1);
      if ( !v30 )
        v31 = (unsigned int)v22;
      v32 = v19 + 1;
      if ( !v30 )
        v32 = v19;
      v28((unsigned __int8 *)v29, v32, v31, a5);
      return;
    }
    if ( !v26 )
      return;
    v33 = v21 & 2;
    DWORD1(v41) = v22 - v19;
    DWORD2(v41) = 2 * v26;
    HIDWORD(v41) = 2 * v27;
    v34 = (v33 != 0) - 1 - v26;
    v12 = -v12;
    v35 = v33 == 0;
    goto LABEL_41;
  }
  if ( !v27 )
    return;
  if ( v26 || !a8 )
  {
    LODWORD(v40) = v21 | 1;
    HIDWORD(v42) = 1;
    DWORD1(v41) = v23 - v20;
    DWORD2(v41) = 2 * v27;
    HIDWORD(v41) = 2 * v26;
    v34 = ((v21 & 4) != 0) - 1 - v27;
    v12 = -v12;
    v35 = (v21 & 2) == 0;
LABEL_41:
    LODWORD(v42) = v34;
    if ( v35 )
      v12 = a4;
    goto LABEL_48;
  }
  LODWORD(v47[0]) = v19;
  v36 = v20 + 1;
  if ( (v21 & 2) == 0 )
    v36 = v20;
  HIDWORD(v47[0]) = v36;
  LODWORD(v47[1]) = v19 + 1;
  v37 = v23 + 1;
  if ( (v21 & 2) == 0 )
    v37 = v23;
  HIDWORD(v47[1]) = v37;
  ((void (__fastcall *)(struct _POINTFIX *, _QWORD, struct _POINTFIX **))a8[1])(a8, a5, v47);
}
