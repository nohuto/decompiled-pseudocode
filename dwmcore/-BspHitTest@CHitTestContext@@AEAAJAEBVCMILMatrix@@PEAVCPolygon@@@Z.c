__int64 __fastcall CHitTestContext::BspHitTest(
        const struct D2D_POINT_2F *this,
        const struct CMILMatrix *a2,
        struct CPolygon *a3)
{
  unsigned int v3; // ebx
  struct D2D_POINT_2F v7; // rsi
  const enum MilBackfaceVisibility::Enum *TopByReference; // rax
  const struct CMILMatrix *v9; // r8
  int v10; // eax
  __int64 v11; // rcx
  bool v13; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  if ( !*(_QWORD *)&this[14] )
  {
    v7 = (struct D2D_POINT_2F)*((_QWORD *)a3 + 27);
    if ( (*(unsigned __int8 (__fastcall **)(struct D2D_POINT_2F))(**(_QWORD **)&v7 + 248LL))(v7) )
    {
      v13 = 0;
      TopByReference = (const enum MilBackfaceVisibility::Enum *)CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference((__int64)&this[22]);
      v10 = CPolygon::HitTestWithTransformation(a3, this + 11, v9, a2, TopByReference, &v13);
      v3 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x1A4u, 0LL);
      }
      else if ( v13 )
      {
        this[14] = v7;
      }
    }
  }
  return v3;
}
