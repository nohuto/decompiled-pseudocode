__int64 __fastcall CShapeDrawingContext::ApplyTransformToDrawingContext(
        CShapeDrawingContext *this,
        const struct D2D_MATRIX_3X2_F *a2)
{
  unsigned int v2; // edi
  const struct D2D_MATRIX_3X2_F *v3; // r8
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  unsigned int v11; // ecx
  __int128 v13; // [rsp+30h] [rbp-68h]
  _BYTE v14[88]; // [rsp+40h] [rbp-58h] BYREF

  v2 = 0;
  v3 = a2;
  if ( a2 )
  {
    if ( *((_BYTE *)this + 528) && *((_BYTE *)this + 530) )
    {
      v5 = *((_QWORD *)this + 41);
      v6 = *(_DWORD *)(v5 + 368);
      if ( v6 )
      {
        v7 = (unsigned int)(v6 - 1);
        *(_DWORD *)(v5 + 368) = v7;
        v13 = *(_OWORD *)(*(_QWORD *)(v5 + 384) + 16 * v7);
      }
      if ( *((_QWORD *)&v13 + 1) )
        CWatermarkStack<unsigned int,64,2,10>::Pop(v5 + 464);
      v8 = *(_DWORD *)(v5 + 400);
      if ( v8 )
        *(_DWORD *)(v5 + 400) = v8 - 1;
      v9 = *(_DWORD *)(v5 + 432);
      if ( v9 )
        *(_DWORD *)(v5 + 432) = v9 - 1;
      *((_BYTE *)this + 530) = 0;
    }
    if ( !*((_BYTE *)this + 530) )
    {
      CMILMatrix::CMILMatrix((CMILMatrix *)v14, v3);
      v10 = CDrawingContext::PushTransformInternal(
              *((CDrawingContext **)this + 41),
              0LL,
              (const struct CMILMatrix *)v14,
              1,
              1);
      v2 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x186u, 0LL);
      }
      else
      {
        *((_BYTE *)this + 528) = 0;
        *((_BYTE *)this + 530) = 1;
      }
    }
  }
  else if ( *((_BYTE *)this + 530) )
  {
    CDrawingContext::PopTransformInternal(*((CDrawingContext **)this + 41), 1);
    *((_BYTE *)this + 530) = 0;
  }
  return v2;
}
