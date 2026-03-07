bool __fastcall CBrushDrawListGenerator::CanUseWarpFastPath(
        CBrushDrawListGenerator *this,
        const struct CBrushDrawListGenerator::GenerateDrawListParameters *a2)
{
  __int64 v4; // rcx
  int v5; // xmm0_4
  int v6; // xmm1_4
  _DWORD v8[4]; // [rsp+20h] [rbp-29h] BYREF
  _BYTE v9[64]; // [rsp+30h] [rbp-19h] BYREF
  int v10; // [rsp+70h] [rbp+27h]
  __int128 v11; // [rsp+80h] [rbp+37h] BYREF

  if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 24) + 8LL))(*((_QWORD *)a2 + 24)) != 1
    || *(_DWORD *)(*(_QWORD *)this + 340LL) == 4
    || (*((_DWORD *)this + 4) & 0x200) != 0
    && (unsigned int)D2DInterpolationModeFromMilInterpolationMode(*(_DWORD *)(*(_QWORD *)this + 332LL)) == 3
    || CBrushDrawListGenerator::IsColorConversionRequired(this)
    || *((_DWORD *)a2 + 50) )
  {
    return 0;
  }
  v4 = *(_QWORD *)this;
  v10 = 0;
  CMatrixStack::Top((CMatrixStack *)(v4 + 400), (struct CMILMatrix *)v9);
  v5 = *((_DWORD *)this + 2);
  v6 = *((_DWORD *)this + 3);
  v8[0] = 0;
  v8[1] = 0;
  v8[2] = v5;
  v11 = 0LL;
  v8[3] = v6;
  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v9, (struct MilRectF *)v8, (float *)&v11);
  return CBrushDrawListGenerator::IsRatioWithinThresholdF(
           *((float *)&v11 + 2) - *(float *)&v11,
           *((float *)&v11 + 3) - *((float *)&v11 + 1));
}
