CVisualDepthGeometry *__fastcall CVisualDepthGeometry::CVisualDepthGeometry(
        CVisualDepthGeometry *this,
        struct CVisual *a2,
        const struct CMILMatrix *a3)
{
  int v5; // xmm1_4
  int v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+34h] [rbp+Ch]

  *(_QWORD *)this = a2;
  `vector constructor iterator'((char *)this + 84, 0x10uLL, 4uLL, (void *(*)(void *))CMilPoint2F::CMilPoint2F);
  v5 = *(_DWORD *)(*(_QWORD *)this + 144LL);
  v7 = *(_DWORD *)(*(_QWORD *)this + 140LL);
  v8 = v5;
  CVisualDepthGeometry::Init(this, (const struct Windows::Foundation::Numerics::float2 *)&v7, a3);
  return this;
}
