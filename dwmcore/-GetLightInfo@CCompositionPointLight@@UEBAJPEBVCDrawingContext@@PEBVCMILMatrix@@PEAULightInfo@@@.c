__int64 __fastcall CCompositionPointLight::GetLightInfo(
        CCompositionPointLight *this,
        const struct CDrawingContext *a2,
        const struct CMILMatrix *a3,
        struct LightInfo *a4)
{
  __int64 v5; // rcx
  float *v6; // rax
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // esi
  CCompositionLight *v12; // rcx
  _DWORD v14[6]; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)a4 = 2;
  v5 = this - a4;
  v6 = (float *)((char *)a4 + 4);
  v8 = 4LL;
  do
  {
    *v6 = *(float *)((char *)v6 + v5 + 260) * *((float *)this + 78);
    ++v6;
    --v8;
  }
  while ( v8 );
  v9 = CCompositionLight::CalcLocalToDeviceMatrix(
         (struct LightInfo *)((char *)a4 + 104),
         a2,
         a3,
         *((struct CVisual **)this + 32),
         (struct LightInfo *)((char *)a4 + 104),
         (struct LightInfo *)((char *)a4 + 172));
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x5Eu, 0LL);
  }
  else
  {
    *((_OWORD *)a4 + 5) = *(_OWORD *)CCompositionLight::CalcEyePointOrVector(v10, v14, *((_QWORD *)this + 32));
    *(_QWORD *)((char *)a4 + 36) = *(_QWORD *)((char *)this + 292);
    *((_DWORD *)a4 + 11) = *((_DWORD *)this + 75);
    CCompositionLight::TransformAttenuation(
      v12,
      (CCompositionPointLight *)((char *)this + 280),
      (CCompositionPointLight *)((char *)this + 304),
      a4);
  }
  return v11;
}
