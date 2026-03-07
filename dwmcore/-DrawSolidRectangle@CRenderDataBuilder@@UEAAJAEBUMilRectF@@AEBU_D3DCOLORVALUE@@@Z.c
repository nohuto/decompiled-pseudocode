__int64 __fastcall CRenderDataBuilder::DrawSolidRectangle(
        CRenderDataBuilder *this,
        const struct MilRectF *a2,
        const struct _D3DCOLORVALUE *a3)
{
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx

  v6 = DynArrayImpl<0>::Grow((unsigned __int64)this + 16, 1u, 40, 0, 0LL);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x12Bu, 0LL);
  }
  else
  {
    v9 = *((unsigned int *)this + 10);
    v10 = *((_QWORD *)this + 2);
    *(_DWORD *)(v9 + v10) = 40;
    *(_QWORD *)(v9 + v10 + 8) = 0LL;
    *(_QWORD *)(v9 + v10 + 16) = 0LL;
    *(_QWORD *)(v9 + v10 + 24) = 0LL;
    *(_QWORD *)(v9 + v10 + 32) = 0LL;
    *(_DWORD *)(v9 + v10 + 4) = 449;
    *(_OWORD *)(v9 + v10 + 8) = *(_OWORD *)a2;
    *(struct _D3DCOLORVALUE *)(v9 + v10 + 24) = *(const struct _D3DCOLORVALUE *)&a3->r;
    *((_DWORD *)this + 10) += 40;
  }
  return v8;
}
