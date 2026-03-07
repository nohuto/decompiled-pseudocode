bool __fastcall MOVESIZEDATA::RectInClipRegion(MOVESIZEDATA *this, const struct tagRECT *a2)
{
  __int64 v2; // r9
  __int64 v4; // r10
  int v5; // eax
  bool v6; // bl
  bool v7; // di
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+28h] [rbp-20h] BYREF

  v2 = *((_QWORD *)this + 2);
  v4 = *(_QWORD *)(v2 + 104);
  v9 = *(_QWORD *)(*(_QWORD *)(v4 + 40) + 168LL);
  if ( v9 )
  {
    v5 = TransformRegionBetweenCoordinateSpaces(v2, v4, &v9);
    v10 = (__int128)*a2;
    v6 = v5 != 0;
    v7 = (unsigned int)GreRectInRegion(v9, &v10) != 0;
    if ( v6 )
      GreDeleteObject(v9);
    return v7;
  }
  else
  {
    v10 = 0LL;
    return (unsigned int)IntersectRect(&v10, &a2->left, (int *)this + 22) != 0;
  }
}
