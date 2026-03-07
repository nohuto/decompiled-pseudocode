void __fastcall CDropShadow::SetOcclusionRect(CDropShadow *this, __m128 *a2)
{
  __int64 v2; // r9
  struct D2D_RECT_F v3; // xmm6
  const struct D2D_RECT_F *v4; // rcx
  struct D2D_RECT_F *v5; // r8
  __int64 *v6; // r9
  __int64 v7; // rax
  struct D2D_RECT_F v8; // [rsp+20h] [rbp-28h] BYREF

  v8 = (struct D2D_RECT_F)_mm_sub_ps(*a2, (__m128)_xmm);
  if ( IsWellOrdered(&v8) )
  {
    v3 = v8;
  }
  else
  {
    v3 = 0LL;
    v8 = 0LL;
  }
  if ( !AreEqual((const struct D2D_RECT_F *)(v2 + 108), &v8) && (!IsEmpty(v4) || !IsEmpty(&v8)) )
  {
    v7 = *v6;
    *v5 = v3;
    (*(void (__fastcall **)(__int64 *, __int64))(v7 + 72))(v6, 5LL);
  }
}
