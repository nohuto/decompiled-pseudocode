void __fastcall CCommonRenderingEffect::UpdateInterpolationMode(CCommonRenderingEffect *this, unsigned int a2)
{
  char v2; // al
  __int64 v3; // r8
  _BYTE *v4; // r8
  __int64 v5; // rcx

  v2 = InterpolationMode::FromD2D1InterpolationMode(a2);
  v4 = (_BYTE *)(v3 + 64);
  v5 = 2LL;
  do
  {
    *v4 = v2;
    v4 += 3;
    --v5;
  }
  while ( v5 );
}
