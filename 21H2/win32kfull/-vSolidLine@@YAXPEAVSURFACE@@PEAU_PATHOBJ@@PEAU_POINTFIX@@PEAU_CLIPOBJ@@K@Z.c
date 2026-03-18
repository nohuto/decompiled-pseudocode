/*
 * XREFs of ?vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z @ 0x1C01339D0
 * Callers:
 *     EngStrokePath @ 0x1C0132A40 (EngStrokePath.c)
 *     EngLineTo @ 0x1C01338B0 (EngLineTo.c)
 * Callees:
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C0009AF4 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?vDrawLine@@YAXPEAU_POINTFIX@@0PEAEJKPEAU_RECTL@@KPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1C0133C2C (-vDrawLine@@YAXPEAU_POINTFIX@@0PEAEJKPEAU_RECTL@@KPEAU_W32KCDD_ENG_CALLBACKS@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

void __fastcall vSolidLine(
        struct SURFACE *a1,
        struct _PATHOBJ *a2,
        struct _POINTFIX *a3,
        struct _CLIPOBJ *a4,
        unsigned int a5)
{
  unsigned int v5; // edi
  unsigned __int8 *v6; // r10
  struct _W32KCDD_ENG_CALLBACKS *v8; // r9
  int v10; // r8d
  struct _PATHOBJ *v11; // r15
  struct _RECTL *v12; // r13
  unsigned int v13; // ebx
  unsigned int v14; // edi
  RECTL rclBounds; // xmm0
  int v16; // ecx
  LONG right; // eax
  LONG bottom; // eax
  struct _PATHOBJ v19; // rcx
  int v20; // r12d
  int v21; // eax
  int v22; // esi
  char v23; // r8
  struct _POINTFIX *v24; // rdx
  struct _POINTFIX *v25; // r14
  struct _POINTFIX *v26; // rcx
  unsigned __int8 *v27; // r12
  int v28; // ebx
  unsigned int v29; // ebx
  int v30; // [rsp+40h] [rbp-81h]
  struct _POINTFIX *v31[2]; // [rsp+48h] [rbp-79h] BYREF
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
  v6 = (unsigned __int8 *)*((_QWORD *)a1 + 10);
  v8 = (struct _W32KCDD_ENG_CALLBACKS *)*((_QWORD *)a1 + 79);
  v10 = *((_DWORD *)a1 + 22);
  v33 = v8;
  v11 = a2;
  v37 = a2;
  v12 = 0LL;
  v36 = 0LL;
  v35 = 0LL;
  v30 = v10;
  v34 = v6;
  *(_OWORD *)v31 = 0LL;
  switch ( v5 )
  {
    case 1u:
      v13 = -(a5 != 0);
      goto LABEL_8;
    case 2u:
      v29 = (16 * a5) | a5;
      goto LABEL_34;
    case 3u:
      v29 = a5;
LABEL_34:
      v28 = (v29 << 8) | v29;
      goto LABEL_35;
    case 4u:
      v28 = a5;
LABEL_35:
      v13 = (v28 << 16) | v28;
LABEL_8:
      if ( a4 && a4->iDComplexity == 1 )
      {
        v12 = &v38;
        rclBounds = a4->rclBounds;
        left = a4->rclBounds.left;
        v43 = left;
        v48 = left;
        v16 = 1 - a4->rclBounds.top;
        top = a4->rclBounds.top;
        right = a4->rclBounds.right;
        v46 = v16;
        v49 = v16;
        v42 = right;
        v45 = right;
        v50 = right;
        bottom = a4->rclBounds.bottom;
        v44 = 1 - bottom;
        v47 = 1 - bottom;
        v38 = rclBounds;
        v41 = bottom;
      }
      v14 = v5 - 1;
      if ( v11 )
      {
        v19 = v11[1];
        v11->fl &= ~8u;
        *(_QWORD *)(*(_QWORD *)&v19 + 72LL) = *(_QWORD *)(*(_QWORD *)&v19 + 32LL);
        do
        {
          v20 = EPATHOBJ::bEnum((EPATHOBJ *)v11, (struct _PATHDATA *)v31);
          v32 = v20;
          v21 = HIDWORD(v31[0]);
          v22 = HIDWORD(v31[0]);
          if ( !HIDWORD(v31[0]) )
            break;
          v23 = (char)v31[0];
          v24 = v31[1];
          if ( ((__int64)v31[0] & 1) != 0 )
          {
            v25 = v31[1] + 1;
            v36 = *v31[1];
            v22 = HIDWORD(v31[0]) - 1;
            v26 = v31[1];
          }
          else
          {
            v26 = &v35;
            v25 = v31[1];
          }
          if ( v22 )
          {
            v27 = v34;
            do
            {
              vDrawLine(v26, v25, v27, v30, v13, v12, v14, v33);
              v26 = v25++;
              --v22;
            }
            while ( v22 );
            v24 = v31[1];
            v21 = HIDWORD(v31[0]);
            v23 = (char)v31[0];
            v11 = v37;
            v20 = v32;
          }
          v35 = v24[v21 - 1];
          if ( (v23 & 8) != 0 )
            vDrawLine(&v35, &v36, v34, v30, v13, v12, v14, v33);
        }
        while ( v20 );
      }
      else
      {
        vDrawLine(a3, a3 + 1, v6, v10, v13, v12, v14, v8);
      }
      return;
  }
  if ( v5 > 4 && v5 <= 6 )
    goto LABEL_7;
  if ( !bUMPDSecurityGateEx() )
  {
    v10 = v30;
    v6 = v34;
    v8 = v33;
LABEL_7:
    v13 = a5;
    goto LABEL_8;
  }
  if ( gfUMPDDebug )
    DbgPrint("clientcore\\windows\\core\\ntgdi\\gre\\windows\\solline.cxx:%d:vSolidLine:Invalid surface format.\n", 178);
}
