__int64 __fastcall CWindowBackgroundTreatment::AreWorldBoundsUnchangedForPreCompute(CWindowBackgroundTreatment *this)
{
  __int128 v3; // [rsp+20h] [rbp-48h] BYREF
  int v4; // [rsp+30h] [rbp-38h]
  int v5; // [rsp+34h] [rbp-34h]
  __int128 v6; // [rsp+38h] [rbp-30h] BYREF
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]

  v4 = 0;
  v5 = 0;
  v7 = 0;
  v8 = 0;
  v3 = 0LL;
  v6 = 0LL;
  CMILMatrix::Transform3DBoundsHelper<0>((CWindowBackgroundTreatment *)((char *)this + 232));
  CMILMatrix::Transform3DBoundsHelper<0>((CWindowBackgroundTreatment *)((char *)this + 160));
  return TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(&v6, &v3);
}
