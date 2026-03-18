/*
 * XREFs of ?vDrawLine@@YAXPEAU_POINTFIX@@0PEAEJKPEAU_RECTL@@KPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1C0133C2C
 * Callers:
 *     ?vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z @ 0x1C01339D0 (-vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z.c)
 * Callees:
 *     ?bGIQtoIntegerLine@@YAHPEAU_POINTFIX@@0PEAU_RECTL@@PEAU_DDALINE@@@Z @ 0x1C014C90C (-bGIQtoIntegerLine@@YAHPEAU_POINTFIX@@0PEAU_RECTL@@PEAU_DDALINE@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vDrawLine(
        struct _POINTFIX *a1,
        struct _POINTFIX *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5,
        struct _RECTL *a6,
        unsigned int a7,
        struct _POINTFIX *a8)
{
  unsigned __int8 *v9; // rsi
  unsigned int v12; // ebx
  unsigned int v13; // ecx
  FIX y; // ecx
  FIX v15; // r14d
  FIX x; // r10d
  FIX v17; // r9d
  int v18; // r14d
  int v19; // r10d
  int v20; // ecx
  int v21; // edx
  LONG v22; // r15d
  LONG v23; // r11d
  int v24; // r8d
  int v25; // r9d
  void (* near *v26)(unsigned __int8 *, int, int, unsigned int); // r11
  struct _POINTFIX **v27; // rsi
  int v28; // edx
  __int64 v29; // r8
  unsigned int v30; // ecx
  int v31; // ecx
  bool v32; // zf
  int v33; // edx
  LONG left; // eax
  LONG right; // r9d
  int v36; // edx
  int v37; // eax
  LONG v38; // eax
  unsigned int v39; // [rsp+30h] [rbp-98h]
  LONG bottom; // [rsp+34h] [rbp-94h]
  __int64 v41; // [rsp+38h] [rbp-90h] BYREF
  __int128 v42; // [rsp+40h] [rbp-88h]
  __int64 v43; // [rsp+50h] [rbp-78h]
  struct _POINTFIX *v44; // [rsp+58h] [rbp-70h]
  LONG top; // [rsp+60h] [rbp-68h]
  unsigned __int8 *v46; // [rsp+68h] [rbp-60h]
  struct _POINTFIX *v47; // [rsp+70h] [rbp-58h]
  struct _POINTFIX *v48[2]; // [rsp+78h] [rbp-50h] BYREF

  v9 = a3;
  v46 = a3;
  v47 = a2;
  v48[0] = a1;
  v12 = a4;
  v42 = 0LL;
  v43 = 0LL;
  v41 = 0LL;
  v44 = a8;
  v13 = 6;
  if ( !a8 )
    v13 = a7;
  v39 = v13;
  y = a2->y;
  v15 = a1->y;
  x = a2->x;
  if ( (((unsigned __int8)a1->x | (unsigned __int8)(v15 | a2->x | y)) & 0xF) != 0 )
    goto LABEL_38;
  v17 = a1->x >> 4;
  v18 = v15 >> 4;
  v19 = x >> 4;
  v20 = y >> 4;
  HIDWORD(v41) = v17;
  LODWORD(v42) = v18;
  v21 = 0;
  if ( v19 < v17 )
    v21 = 4;
  LODWORD(v41) = v21;
  v22 = v17;
  if ( v19 >= v17 )
  {
    v22 = v19;
    v19 = v17;
  }
  if ( v20 < v18 )
  {
    v21 |= 2u;
    LODWORD(v41) = v21;
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
    v9 = v46;
    if ( v20 >= bottom )
      return;
    if ( v22 >= right || v19 < left || v23 >= bottom || v20 < top )
    {
LABEL_38:
      if ( !(unsigned int)bGIQtoIntegerLine(v48[0], v47, a6, (struct _DDALINE *)&v41) || SDWORD1(v42) <= 0 )
        return;
      if ( (v41 & 2) != 0 )
        v12 = -a4;
LABEL_29:
      ((void (__fastcall *)(__int64 *, unsigned __int8 *, _QWORD, _QWORD))(&gapfnOctant)[8 * v39 + (v41 & 7)])(
        &v41,
        &v9[(int)(v42 * a4)],
        v12,
        a5);
      return;
    }
  }
  v24 = v22 - v19;
  v25 = v23 - v20;
  if ( v22 - v19 >= v23 - v20 )
  {
    if ( !v25 )
    {
      v26 = (&gapfnHorizontal)[v39];
      v27 = (struct _POINTFIX **)&v9[v18 * a4];
      *(_OWORD *)v48 = 0LL;
      if ( a8 )
      {
        LODWORD(v48[0]) = v18;
        v48[1] = a8;
        v27 = v48;
      }
      v28 = v21 & 4;
      v29 = (unsigned int)(v22 + 1);
      if ( !v28 )
        v29 = (unsigned int)v22;
      v30 = v19 + 1;
      if ( !v28 )
        v30 = v19;
      ((void (__fastcall *)(struct _POINTFIX **, _QWORD, __int64, _QWORD))v26)(v27, v30, v29, a5);
      return;
    }
    if ( !v24 )
      return;
    v33 = v21 & 2;
    DWORD1(v42) = v22 - v19;
    DWORD2(v42) = 2 * v24;
    HIDWORD(v42) = 2 * v25;
    v31 = (v33 != 0) - 1 - v24;
    v12 = -a4;
    v32 = v33 == 0;
    goto LABEL_27;
  }
  if ( !v25 )
    return;
  if ( v24 || !a8 )
  {
    LODWORD(v41) = v21 | 1;
    HIDWORD(v43) = 1;
    DWORD1(v42) = v23 - v20;
    DWORD2(v42) = 2 * v25;
    HIDWORD(v42) = 2 * v24;
    v31 = ((v21 & 4) != 0) - 1 - v25;
    v12 = -a4;
    v32 = (v21 & 2) == 0;
LABEL_27:
    LODWORD(v43) = v31;
    if ( v32 )
      v12 = a4;
    goto LABEL_29;
  }
  v36 = v21 & 2;
  LODWORD(v48[0]) = v19;
  v37 = v20 + 1;
  if ( !v36 )
    v37 = v20;
  HIDWORD(v48[0]) = v37;
  LODWORD(v48[1]) = v19 + 1;
  v38 = v23 + 1;
  if ( (v36 & 2) == 0 )
    v38 = v23;
  HIDWORD(v48[1]) = v38;
  ((void (__fastcall *)(struct _POINTFIX *, _QWORD, struct _POINTFIX **))a8[1])(a8, a5, v48);
}
