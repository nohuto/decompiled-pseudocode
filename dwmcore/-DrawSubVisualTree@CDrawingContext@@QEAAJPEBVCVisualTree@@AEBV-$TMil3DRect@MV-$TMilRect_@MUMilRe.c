__int64 __fastcall CDrawingContext::DrawSubVisualTree(__int64 a1, __int64 a2, __int64 a3, CMILMatrix *a4)
{
  CMILMatrix *TopByReference; // rsi
  __int64 v8; // rdi
  COcclusionContext *v9; // rbx
  gsl::details *v10; // rcx
  __int64 v11; // rax
  bool IsCurrent; // al
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // edi
  COcclusionContext *v18; // rax
  _QWORD v19[2]; // [rsp+38h] [rbp-49h] BYREF
  _QWORD v20[4]; // [rsp+48h] [rbp-39h] BYREF
  __int128 v21; // [rsp+68h] [rbp-19h]
  int v22; // [rsp+78h] [rbp-9h]
  __int64 v23; // [rsp+80h] [rbp-1h]
  __int64 v24; // [rsp+88h] [rbp+7h]
  int v25; // [rsp+90h] [rbp+Fh]
  __int64 v26; // [rsp+98h] [rbp+17h]
  int v27; // [rsp+A0h] [rbp+1Fh]
  char v28; // [rsp+A8h] [rbp+27h]

  TopByReference = a4;
  v8 = 0LL;
  v9 = 0LL;
  if ( !a4 )
    TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(a1 + 400));
  if ( CMILMatrix::Is2DAxisAlignedPreserving(TopByReference) )
  {
    v19[0] = 1LL;
    v19[1] = a3;
    if ( !a3 )
    {
      gsl::details::terminate(v10);
      JUMPOUT(0x1800211D8LL);
    }
    if ( *(_QWORD *)(a1 + 200)
      || (v11 = gsl::span<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> const,-1>::operator[](
                  v19,
                  0LL),
          !(unsigned __int8)CDirtyRegion::DoesContain(a2 + 104, v11)) )
    {
      v18 = (COcclusionContext *)operator new(0x610uLL);
      if ( v18 )
        v9 = COcclusionContext::COcclusionContext(v18);
      *((_QWORD *)v9 + 177) = *(_QWORD *)(a1 + 200);
      if ( (*(int (__fastcall **)(__int64, _QWORD *, COcclusionContext *))(*(_QWORD *)a2 + 200LL))(a2, v19, v9) >= 0 )
        v8 = (__int64)v9;
    }
    else if ( (int)CDirtyRegion::CalcOcclusion((CDirtyRegion *)(a2 + 104)) >= 0 )
    {
      IsCurrent = COcclusionContext::IsCurrent((COcclusionContext *)(a2 + 120));
      v8 = v13 & -(__int64)IsCurrent;
    }
  }
  v20[0] = a1;
  v21 = 0LL;
  memset(&v20[1], 0, 24);
  v23 = 0LL;
  v26 = 0LL;
  v22 = 0;
  v24 = 0LL;
  v25 = 0;
  v27 = 16843008;
  v28 = 0;
  v14 = CSubDrawingContext::DrawVisualTree((CSubDrawingContext *)v20, v8);
  v16 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xBAAu, 0LL);
  CSubDrawingContext::~CSubDrawingContext((CSubDrawingContext *)v20);
  if ( v9 )
  {
    COcclusionContext::~COcclusionContext(v9);
    operator delete(v9, 0x610uLL);
  }
  return v16;
}
