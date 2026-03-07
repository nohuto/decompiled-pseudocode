bool __fastcall CAtlasedRectsGroup::IsEmptyDrawing(CAtlasedRectsGroup *this)
{
  __int64 v1; // r10
  float *v2; // r11
  __int64 *v5; // r14
  __int64 *i; // rdi
  __int64 v7; // rsi
  float *v8; // rcx
  __int128 *v9; // r15
  __int128 *j; // rbp
  __int128 v11; // [rsp+20h] [rbp-48h] BYREF
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF

  v1 = 0LL;
  v2 = (float *)((char *)this + 104);
  if ( *((_BYTE *)this + 120) )
  {
    *((_QWORD *)this + 14) = 0LL;
    *(_QWORD *)v2 = 0LL;
    v5 = (__int64 *)*((_QWORD *)this + 11);
    for ( i = (__int64 *)*((_QWORD *)this + 10); i != v5; ++i )
    {
      v7 = *i;
      v8 = (float *)(*i + 120);
      if ( *(_BYTE *)(*i + 136) != (_BYTE)v1 )
      {
        *(_QWORD *)(*i + 128) = v1;
        *(_QWORD *)v8 = v1;
        v9 = *(__int128 **)(v7 + 104);
        for ( j = *(__int128 **)(v7 + 96); j != v9; ++j )
        {
          v11 = *j;
          TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v8, (float *)&v11);
        }
        *(_BYTE *)(v7 + 136) = v1;
      }
      v12 = *(_OWORD *)v8;
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v2, (float *)&v12);
    }
    *((_BYTE *)this + 120) = v1;
  }
  if ( v2[2] <= *v2 || v2[3] <= v2[1] || *((_QWORD *)this + 9) == v1 )
    LOBYTE(v1) = 1;
  return v1;
}
