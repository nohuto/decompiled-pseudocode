__int64 __fastcall CWindowNode::GetEffectiveBounds(_DWORD *a1, CShape *a2, _DWORD *a3, bool *a4)
{
  unsigned int v4; // ebx
  bool IsAxisAlignedRectangle; // si
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // ecx
  __int128 v13; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v14[16]; // [rsp+40h] [rbp-48h] BYREF

  v4 = 0;
  *a3 = 0;
  a3[1] = 0;
  IsAxisAlignedRectangle = 1;
  a3[2] = a1[192] - a1[190];
  a3[3] = a1[193] - a1[191];
  if ( a2 )
  {
    v9 = *(_QWORD *)a2;
    v13 = 0LL;
    v10 = (*(__int64 (__fastcall **)(CShape *, __int128 *, _QWORD))(v9 + 48))(a2, &v13, 0LL);
    v4 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x358u, 0LL);
      return v4;
    }
    PixelAlign(v14, &v13);
    TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(a3, v14);
    IsAxisAlignedRectangle = CShape::IsAxisAlignedRectangle(a2);
  }
  if ( a4 )
    *a4 = IsAxisAlignedRectangle;
  return v4;
}
