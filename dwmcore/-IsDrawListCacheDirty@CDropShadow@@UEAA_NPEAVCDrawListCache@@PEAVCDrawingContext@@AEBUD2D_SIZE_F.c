char __fastcall CDropShadow::IsDrawListCacheDirty(
        CDropShadow *this,
        struct CDrawListCache *a2,
        struct CDrawingContext *a3,
        const struct D2D_SIZE_F *a4,
        const struct CMILMatrix *a5)
{
  struct CVisual *v9; // rax
  unsigned __int64 v10; // rdx

  v9 = (struct CVisual *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a3 + 3) + 32LL))((char *)a3 + 24);
  v10 = *(_QWORD *)CDropShadow::GetEffectiveShadowIntermediates(this, v9);
  if ( v10 && v10 <= *((_QWORD *)a2 + 4) )
    return CContent::IsDrawListCacheDirty(this, (__int64)a2, a3, a4, a5);
  else
    return 1;
}
