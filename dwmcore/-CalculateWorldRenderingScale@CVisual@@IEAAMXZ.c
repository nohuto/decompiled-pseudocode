float __fastcall CVisual::CalculateWorldRenderingScale(CVisual *this)
{
  struct D2D_VECTOR_3F v2; // [rsp+20h] [rbp-28h] BYREF
  struct D2D_VECTOR_3F v3; // [rsp+30h] [rbp-18h] BYREF

  v2.x = 0.70710677;
  v2.z = 0.0;
  v2.y = 0.70710677;
  CMILMatrix::Transform3DVector((CVisual *)((char *)this + 624), &v3, &v2);
  return sqrtf_0((float)((float)(v3.y * v3.y) + (float)(v3.x * v3.x)) + (float)(v3.z * v3.z));
}
