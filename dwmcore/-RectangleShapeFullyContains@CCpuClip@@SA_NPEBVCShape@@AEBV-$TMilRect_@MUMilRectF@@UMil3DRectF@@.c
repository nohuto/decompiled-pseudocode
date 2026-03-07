char __fastcall CCpuClip::RectangleShapeFullyContains(__int64 *a1, struct MilRectF *a2, CMILMatrix *a3)
{
  __int64 v3; // rax
  char v6; // bl
  __int128 v8; // [rsp+20h] [rbp-48h] BYREF
  __int128 v9; // [rsp+30h] [rbp-38h] BYREF

  v3 = *a1;
  v8 = 0LL;
  v6 = 0;
  (*(void (__fastcall **)(__int64 *, __int128 *, _QWORD))(v3 + 48))(a1, &v8, 0LL);
  if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(&v8) )
  {
    TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate(&v8);
    v9 = 0LL;
    if ( a3 )
      CMILMatrix::Transform2DBoundsHelper<0>(a3, a2);
    else
      v9 = *(_OWORD *)a2;
    return TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesContain(&v8, &v9);
  }
  return v6;
}
