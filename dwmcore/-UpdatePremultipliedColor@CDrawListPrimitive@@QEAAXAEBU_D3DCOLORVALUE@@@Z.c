void __fastcall CDrawListPrimitive::UpdatePremultipliedColor(CDrawListPrimitive *this, const struct _D3DCOLORVALUE *a2)
{
  __int64 v3; // rdi
  int v4; // esi
  __int64 v5; // r14
  int v6; // ebp
  __m128 v7; // xmm2
  int v8; // eax
  int v9; // r10d
  __int64 v10; // r9
  __int64 v11; // r11
  int v12; // eax
  int v13; // r9d
  int v14; // r10d
  __int64 v15; // r11
  struct _D3DCOLORVALUE v16; // [rsp+30h] [rbp-18h] BYREF

  v3 = *((_QWORD *)this + 4);
  v4 = 8 * *((_DWORD *)this + 4) + 16;
  if ( *((_DWORD *)this + 3) )
  {
    v5 = *((_QWORD *)this + 5);
    if ( *((_DWORD *)this + 2) )
    {
      v6 = 0;
      do
      {
        v7 = (__m128)*(unsigned int *)(v6 + v5 + 12);
        *(struct _D3DCOLORVALUE *)&v16.r = (struct _D3DCOLORVALUE)_mm_mul_ps(
                                                                    *(__m128 *)&a2->r,
                                                                    _mm_shuffle_ps(v7, v7, 0));
        v8 = ColorDWFromStraightColorF(&v16);
        *(_DWORD *)(v10 + v3 + 12) = v8;
        v6 += v4;
      }
      while ( (unsigned int)(v9 + 1) < *(_DWORD *)(v11 + 8) );
    }
  }
  else if ( *((_DWORD *)this + 2) )
  {
    do
    {
      v12 = ColorDWFromStraightColorF(a2);
      *(_DWORD *)(v13 + v3 + 12) = v12;
    }
    while ( (unsigned int)(v14 + 1) < *(_DWORD *)(v15 + 8) );
  }
}
