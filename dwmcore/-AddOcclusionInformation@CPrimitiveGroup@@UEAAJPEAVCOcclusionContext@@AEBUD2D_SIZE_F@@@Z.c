__int64 __fastcall CPrimitiveGroup::AddOcclusionInformation(
        CPrimitiveGroup *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  int v4; // r9d
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0LL;
  if ( (unsigned __int8)CPrimitiveGroup::GetLargestOpaqueRect((char *)this - 680, &v5, a3, a2)
    && (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsWellOrdered(&v5) )
  {
    COcclusionContext::CollectRectangleForOcclusion(v4, (unsigned int)&v5, 0, v4, 0LL);
  }
  return 0LL;
}
