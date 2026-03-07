__int64 __fastcall CVisual::HitTestContent(CVisual *this, char a2, const struct D2D_POINT_2F *a3, bool *a4)
{
  unsigned int v4; // ebx
  __int64 v9; // rdx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __m128i *TouchTargetBounds; // rax
  __m128i v15; // [rsp+30h] [rbp-48h] BYREF

  v4 = 0;
  *a4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)this + 272LL))(this) )
  {
    if ( a2 )
    {
      TouchTargetBounds = CVisual::GetTouchTargetBounds((__int64)this, &v15);
      *a4 = IsPointInRect(a3, (const struct MilRectF *)TouchTargetBounds);
    }
    if ( !*a4 )
    {
      v9 = *((_QWORD *)this + 32);
      if ( v9 )
      {
        v11 = v9 + 64 + *(int *)(*(_QWORD *)(v9 + 64) + 8LL);
        v12 = (*(__int64 (__fastcall **)(__int64, char *, const struct D2D_POINT_2F *, bool *))(*(_QWORD *)v11 + 24LL))(
                v11,
                (char *)this + 140,
                a3,
                a4);
        v4 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x136Du, 0LL);
      }
    }
  }
  return v4;
}
