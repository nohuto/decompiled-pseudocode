/*
 * XREFs of ?bEllipse@@YAHAEAVEPATHOBJ@@AEAVEBOX@@@Z @ 0x1C02C7F14
 * Callers:
 *     NtGdiCreateEllipticRgn @ 0x1C02AB1E0 (NtGdiCreateEllipticRgn.c)
 *     NtGdiEllipse @ 0x1C02AF970 (NtGdiEllipse.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z @ 0x1C014D8B8 (-bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z.c)
 *     ?bPolyBezierTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C014DF96 (-bPolyBezierTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z.c)
 */

__int64 __fastcall bEllipse(struct EPATHOBJ *this, struct _POINTL *a2)
{
  __int64 x; // rcx
  __int64 v5; // rdi
  __int64 v6; // r14
  __int64 y; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rsi
  struct _POINTL v11; // rax
  LONG v12; // r9d
  LONG v13; // ecx
  LONG v14; // r8d
  LONG v15; // edx
  struct _POINTL v16; // rax
  struct _POINTL v17; // rax
  struct _POINTL v18; // rax
  unsigned int v19; // ebx
  struct _POINTL v21; // [rsp+20h] [rbp-49h] BYREF
  struct _POINTL v22; // [rsp+30h] [rbp-39h] BYREF
  int v23; // [rsp+38h] [rbp-31h]
  int v24; // [rsp+3Ch] [rbp-2Dh]
  struct _POINTL v25; // [rsp+40h] [rbp-29h]
  int v26; // [rsp+48h] [rbp-21h]
  int v27; // [rsp+4Ch] [rbp-1Dh]
  int v28; // [rsp+50h] [rbp-19h]
  int v29; // [rsp+54h] [rbp-15h]
  struct _POINTL v30; // [rsp+58h] [rbp-11h]
  int v31; // [rsp+60h] [rbp-9h]
  int v32; // [rsp+64h] [rbp-5h]
  int v33; // [rsp+68h] [rbp-1h]
  int v34; // [rsp+6Ch] [rbp+3h]
  struct _POINTL v35; // [rsp+70h] [rbp+7h]
  int v36; // [rsp+78h] [rbp+Fh]
  int v37; // [rsp+7Ch] [rbp+13h]
  int v38; // [rsp+80h] [rbp+17h]
  int v39; // [rsp+84h] [rbp+1Bh]
  int v40; // [rsp+88h] [rbp+1Fh]
  int v41; // [rsp+8Ch] [rbp+23h]

  x = a2[7].x;
  v5 = 1922922357 * x;
  v6 = 1922922357LL * a2[6].x;
  LODWORD(x) = a2[4].x + x;
  y = a2[6].y;
  v8 = a2[7].y;
  v21.x = x;
  v6 >>= 32;
  v21.y = v8 + a2[4].y;
  v9 = (1922922357 * v8) >> 32;
  v5 >>= 32;
  v10 = (1922922357 * y) >> 32;
  EPATHOBJ::bMoveTo(this, 0LL, &v21);
  v12 = a2[6].x;
  v13 = a2[6].y;
  v14 = a2[7].x;
  v15 = a2[7].y;
  v22 = a2[1];
  v11 = v22;
  v22.x -= v5;
  v22.y -= v9;
  v23 = v11.x - v6;
  v24 = v11.y - v10;
  v25 = v11;
  v16 = a2[2];
  v25.x -= v12;
  v25.y -= v13;
  v26 = v6 + v16.x;
  v27 = v10 + v16.y;
  v28 = v16.x - v5;
  v29 = v16.y - v9;
  v30 = v16;
  v17 = a2[3];
  v30.x -= v14;
  v30.y -= v15;
  v31 = v5 + v17.x;
  v32 = v9 + v17.y;
  v33 = v6 + v17.x;
  v34 = v10 + v17.y;
  v35 = v17;
  v18 = a2[4];
  v35.x += v12;
  v35.y += v13;
  v40 = v14 + v18.x;
  v41 = v15 + v18.y;
  v36 = v18.x - v6;
  v37 = v18.y - v10;
  v38 = v5 + v18.x;
  v39 = v9 + v18.y;
  v19 = 0;
  if ( (unsigned int)EPATHOBJ::bPolyBezierTo(this, 0LL, &v22, 0xCu) )
    return EPATHOBJ::bCloseFigure(this) != 0;
  return v19;
}
