/*
 * XREFs of ?bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02CA010
 * Callers:
 *     NtGdiEngStretchBlt @ 0x1C02CD010 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C02CD470 (NtGdiEngStretchBltROP.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0083D50 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C008D3C0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

_BOOL8 __fastcall bCheckDestSurfaceOverlap(struct _SURFOBJ *a1, struct _RECTL *a2)
{
  LONG top; // r9d
  LONG bottom; // r10d
  LONG left; // eax
  LONG right; // r8d
  LONG cy; // eax
  __int64 v8; // [rsp+20h] [rbp-30h] BYREF
  LONG cx; // [rsp+28h] [rbp-28h]
  LONG v10; // [rsp+2Ch] [rbp-24h]
  LONG v11; // [rsp+30h] [rbp-20h] BYREF
  LONG v12; // [rsp+34h] [rbp-1Ch]
  LONG v13; // [rsp+38h] [rbp-18h]
  LONG v14; // [rsp+3Ch] [rbp-14h]

  top = a2->top;
  bottom = a2->bottom;
  left = a2->left;
  right = a2->right;
  v11 = a2->left;
  v12 = top;
  v13 = right;
  v14 = bottom;
  if ( bottom < top )
  {
    v12 = bottom;
    v14 = top;
  }
  if ( right < left )
  {
    v11 = right;
    v13 = left;
  }
  cx = a1->sizlBitmap.cx;
  cy = a1->sizlBitmap.cy;
  v8 = 0LL;
  v10 = cy;
  ERECTL::operator*=(&v11, (int *)&v8);
  return !ERECTL::bEmpty((ERECTL *)&v11);
}
