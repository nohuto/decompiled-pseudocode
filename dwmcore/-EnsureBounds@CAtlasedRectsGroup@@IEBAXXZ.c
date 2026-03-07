void __fastcall CAtlasedRectsGroup::EnsureBounds(CAtlasedRectsGroup *this)
{
  __int64 *v2; // rbp
  __int64 *i; // rsi
  __int64 v4; // rcx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_BYTE *)this + 120) )
  {
    *((_DWORD *)this + 29) = 0;
    *((_DWORD *)this + 28) = 0;
    *((_DWORD *)this + 27) = 0;
    *((_DWORD *)this + 26) = 0;
    v2 = (__int64 *)*((_QWORD *)this + 11);
    for ( i = (__int64 *)*((_QWORD *)this + 10); i != v2; ++i )
    {
      v4 = *i;
      v5 = 0LL;
      CAtlasedRectsMesh::GetBounds(v4, &v5);
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)this + 26, (float *)&v5);
    }
    *((_BYTE *)this + 120) = 0;
  }
}
