char __fastcall COverlayContext::IsIntelWorkaroundNeeded(
        COverlayContext *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  char v4; // bl
  float v7; // xmm6_4
  float v8; // xmm2_4
  float v9; // xmm1_4
  struct tagRECT rcDst; // [rsp+20h] [rbp-48h] BYREF

  v4 = 0;
  if ( *((_BYTE *)this + 11298) && !*((_BYTE *)this + 11297) )
  {
    rcDst = 0LL;
    IntersectRect(&rcDst, a3, a4);
    v7 = (float)(rcDst.bottom - rcDst.top) / (float)(a3->bottom - a3->top);
    v8 = (float)((float)(rcDst.right - rcDst.left) / (float)(a3->right - a3->left)) * (float)(a2->right - a2->left);
    if ( COERCE_FLOAT(LODWORD(v8) & _xmm) < 8388608.0 )
      v8 = (float)(int)floorf_0(v8);
    v9 = (float)(a2->bottom - a2->top) * v7;
    if ( COERCE_FLOAT(LODWORD(v9) & _xmm) < 8388608.0 )
      v9 = (float)(int)floorf_0(v9);
    if ( (unsigned int)((int)v8 - 129) > 0xF7D || (unsigned int)((int)v9 - 1) > 0xFFE )
      return 1;
  }
  return v4;
}
