void __fastcall vSolidLine(
        struct SURFACE *a1,
        struct _PATHOBJ *a2,
        struct _POINTFIX *a3,
        struct _CLIPOBJ *a4,
        unsigned int a5)
{
  int v5; // r14d
  struct _RECTL *v7; // r13
  unsigned __int8 *v8; // r10
  struct _W32KCDD_ENG_CALLBACKS *v10; // r9
  int v11; // r8d
  struct _PATHOBJ *v12; // r15
  unsigned int v13; // ebx
  int v14; // ebx
  unsigned int v15; // ebx
  RECTL rclBounds; // xmm0
  int v17; // ecx
  LONG right; // eax
  LONG bottom; // eax
  unsigned int v20; // r14d
  struct _PATHOBJ v21; // rcx
  int v22; // r12d
  ULONG count; // eax
  ULONG v24; // edi
  char flags; // r8
  POINTFIX *pptfx; // rdx
  POINTFIX *v27; // rsi
  POINTFIX *v28; // rcx
  unsigned __int8 *v29; // r12
  int v30; // [rsp+40h] [rbp-81h]
  struct _PATHDATA v31; // [rsp+48h] [rbp-79h] BYREF
  int v32; // [rsp+58h] [rbp-69h]
  struct _W32KCDD_ENG_CALLBACKS *v33; // [rsp+60h] [rbp-61h]
  unsigned __int8 *v34; // [rsp+68h] [rbp-59h]
  struct _POINTFIX v35; // [rsp+70h] [rbp-51h] BYREF
  struct _POINTFIX v36; // [rsp+78h] [rbp-49h] BYREF
  struct _PATHOBJ *v37; // [rsp+80h] [rbp-41h]
  RECTL v38; // [rsp+90h] [rbp-31h] BYREF
  LONG top; // [rsp+A0h] [rbp-21h]
  LONG left; // [rsp+A4h] [rbp-1Dh]
  LONG v41; // [rsp+A8h] [rbp-19h]
  LONG v42; // [rsp+ACh] [rbp-15h]
  LONG v43; // [rsp+B0h] [rbp-11h]
  int v44; // [rsp+B4h] [rbp-Dh]
  LONG v45; // [rsp+B8h] [rbp-9h]
  int v46; // [rsp+BCh] [rbp-5h]
  int v47; // [rsp+C0h] [rbp-1h]
  LONG v48; // [rsp+C4h] [rbp+3h]
  int v49; // [rsp+C8h] [rbp+7h]
  LONG v50; // [rsp+CCh] [rbp+Bh]

  v5 = *((_DWORD *)a1 + 24);
  v36 = 0LL;
  v35 = 0LL;
  v7 = 0LL;
  v8 = (unsigned __int8 *)*((_QWORD *)a1 + 10);
  v10 = (struct _W32KCDD_ENG_CALLBACKS *)*((_QWORD *)a1 + 79);
  v11 = *((_DWORD *)a1 + 22);
  v12 = a2;
  v37 = a2;
  v30 = v11;
  v34 = v8;
  v33 = v10;
  v31 = 0LL;
  switch ( v5 )
  {
    case 1:
      v13 = -(a5 != 0);
      goto LABEL_15;
    case 2:
      v15 = (16 * a5) | a5;
      goto LABEL_12;
    case 3:
      v15 = a5;
LABEL_12:
      v14 = (v15 << 8) | v15;
      goto LABEL_13;
    case 4:
      v14 = a5;
LABEL_13:
      v13 = (v14 << 16) | v14;
      goto LABEL_15;
  }
  if ( (unsigned int)(v5 - 5) >= 2 )
  {
    if ( (unsigned int)bUMPDSecurityGateEx() )
      return;
    v11 = v30;
    v8 = v34;
    v10 = v33;
  }
  v13 = a5;
LABEL_15:
  if ( a4 && a4->iDComplexity == 1 )
  {
    v7 = &v38;
    rclBounds = a4->rclBounds;
    left = a4->rclBounds.left;
    v43 = left;
    v48 = left;
    v17 = 1 - a4->rclBounds.top;
    top = a4->rclBounds.top;
    right = a4->rclBounds.right;
    v46 = v17;
    v49 = v17;
    v42 = right;
    v45 = right;
    v50 = right;
    bottom = a4->rclBounds.bottom;
    v44 = 1 - bottom;
    v47 = 1 - bottom;
    v38 = rclBounds;
    v41 = bottom;
  }
  v20 = v5 - 1;
  if ( v12 )
  {
    v21 = v12[1];
    v12->fl &= ~8u;
    *(_QWORD *)(*(_QWORD *)&v21 + 72LL) = *(_QWORD *)(*(_QWORD *)&v21 + 32LL);
    do
    {
      v22 = EPATHOBJ::bEnum((EPATHOBJ *)v12, &v31);
      v32 = v22;
      count = v31.count;
      v24 = v31.count;
      if ( !v31.count )
        break;
      flags = v31.flags;
      pptfx = v31.pptfx;
      if ( (v31.flags & 1) != 0 )
      {
        v27 = v31.pptfx + 1;
        v36 = *v31.pptfx;
        v24 = v31.count - 1;
        v28 = v31.pptfx;
      }
      else
      {
        v28 = &v35;
        v27 = v31.pptfx;
      }
      if ( v24 )
      {
        v29 = v34;
        do
        {
          vDrawLine(v28, v27, v29, v30, v13, v7, v20, (struct _POINTFIX *)v33);
          v28 = v27++;
          --v24;
        }
        while ( v24 );
        pptfx = v31.pptfx;
        count = v31.count;
        flags = v31.flags;
        v12 = v37;
        v22 = v32;
      }
      v35 = pptfx[count - 1];
      if ( (flags & 8) != 0 )
        vDrawLine(&v35, &v36, v34, v30, v13, v7, v20, (struct _POINTFIX *)v33);
    }
    while ( v22 );
  }
  else
  {
    vDrawLine(a3, a3 + 1, v8, v11, v13, v7, v20, (struct _POINTFIX *)v10);
  }
}
