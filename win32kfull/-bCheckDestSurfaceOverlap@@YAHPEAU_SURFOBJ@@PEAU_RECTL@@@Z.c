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
