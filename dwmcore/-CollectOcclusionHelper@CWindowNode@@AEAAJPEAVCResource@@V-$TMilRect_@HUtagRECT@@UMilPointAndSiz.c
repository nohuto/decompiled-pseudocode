__int64 __fastcall CWindowNode::CollectOcclusionHelper(
        __int64 a1,
        struct IUnknown *a2,
        int *a3,
        COcclusionContext *a4,
        __int64 a5,
        char a6)
{
  unsigned int v10; // ebx
  __int64 v11; // r8
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm3_4
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  float v20[4]; // [rsp+30h] [rbp-58h] BYREF

  v10 = 0;
  if ( !AreAllMarginsZero((const struct _MARGINS *)(a1 + 836)) )
    CWindowNode::IntersectWithAlphaMargins(a1, v11);
  CWindowNode::IntersectWithMaximizedClip(a1, a3);
  v12 = (float)a3[1];
  v13 = (float)a3[2];
  v14 = (float)a3[3];
  v20[0] = (float)*a3;
  v20[1] = v12;
  v20[2] = v13;
  v20[3] = v14;
  if ( a6 )
  {
    v15 = COcclusionContext::DrawImage(a4, a2, (int)v20, *(_DWORD *)(a1 + 852));
    v10 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x420u, 0LL);
  }
  else if ( a5 )
  {
    v17 = COcclusionContext::DrawClippedImage((_DWORD)a4, (_DWORD)a2, (unsigned int)v20, a5, *(_DWORD *)(a1 + 852));
    v10 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x427u, 0LL);
  }
  return v10;
}
