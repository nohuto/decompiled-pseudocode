char __fastcall TryFillRenderState(CDrawingContext *this, unsigned __int8 a2, char a3, __int64 a4)
{
  int v4; // esi
  __int64 v7; // rdx
  char result; // al
  int v9; // xmm1_4
  int v10; // xmm2_4
  int v11; // xmm3_4
  int v12; // xmm4_4
  int v13; // xmm5_4
  int v14; // eax
  int v15; // xmm0_4
  int v16; // xmm1_4
  BOOL IsHDRTarget; // ecx
  _DWORD v18[12]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v19; // [rsp+50h] [rbp-28h]
  int v20; // [rsp+60h] [rbp-18h]

  v4 = a2;
  *(_OWORD *)a4 = 0LL;
  v19 = 0LL;
  *(_OWORD *)(a4 + 16) = 0LL;
  *(_OWORD *)(a4 + 32) = 0LL;
  *(_QWORD *)(a4 + 48) = v19;
  if ( !a3 )
  {
    v20 = 0;
    CMatrixStack::Top((CDrawingContext *)((char *)this + 400), (struct CMILMatrix *)v18);
    LOBYTE(v7) = 1;
    result = CMILMatrix::Is2DAffine<1>((__int64)v18, v7);
    if ( !result )
      return result;
    v9 = v18[1];
    v10 = v18[4];
    v11 = v18[5];
    v12 = v19;
    v13 = HIDWORD(v19);
    *(_DWORD *)a4 = v18[0];
    *(_DWORD *)(a4 + 4) = v9;
    *(_DWORD *)(a4 + 8) = v10;
    *(_DWORD *)(a4 + 12) = v11;
    *(_DWORD *)(a4 + 16) = v12;
    *(_DWORD *)(a4 + 20) = v13;
  }
  v14 = *((_DWORD *)this + 812);
  v15 = (int)FLOAT_1_0;
  if ( v14 )
    v16 = *(_DWORD *)(*((_QWORD *)this + 408) + 4LL * (unsigned int)(v14 - 1));
  else
    v16 = (int)FLOAT_1_0;
  *(_DWORD *)(a4 + 24) = v16;
  if ( *((float *)this + 18) != 0.0 )
    v15 = *((_DWORD *)this + 18);
  *(_DWORD *)(a4 + 44) = v15;
  IsHDRTarget = CDrawingContext::IsHDRTarget(this);
  result = 1;
  *(_DWORD *)(a4 + 48) = IsHDRTarget;
  *(_DWORD *)(a4 + 52) = v4;
  return result;
}
