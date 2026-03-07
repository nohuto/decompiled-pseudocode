__int64 __fastcall CDrawListEntryBuilder::PartitionPrimitive(
        __int64 a1,
        int a2,
        const struct D2D_RECT_F *a3,
        __int64 a4)
{
  unsigned int v8; // edi
  int v9; // eax
  int v10; // r15d
  __int64 v11; // rcx
  CCpuClip *v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  struct CShape *v15; // rbx
  struct CShape *v17; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v18[64]; // [rsp+40h] [rbp-B8h] BYREF
  int v19; // [rsp+80h] [rbp-78h]
  _BYTE v20[80]; // [rsp+90h] [rbp-68h] BYREF

  v8 = 0;
  detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::clear(a4);
  v9 = 1;
  if ( a2 )
    v9 = a2;
  v10 = v9;
  if ( Area(a3) >= (float)v9 )
  {
    v11 = *(_QWORD *)(a1 + 16);
    if ( (*(_QWORD *)v11 || *(_QWORD *)(v11 + 80)) && !CCpuClip::IsAxisAlignedRectangle((CShape **)v11) )
    {
      v12 = *(CCpuClip **)(a1 + 16);
      v19 = 0;
      v13 = CCpuClip::ResolveClip(v12, &v17, (struct CMILMatrix *)v18);
      v8 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x72Eu, 0LL);
      }
      else
      {
        if ( *(_BYTE *)(a1 + 4473) )
        {
          CMILMatrix::CMILMatrix((CMILMatrix *)v20, (const struct D2D_MATRIX_3X2_F *)(a1 + 32));
          CMILMatrix::Multiply((CMILMatrix *)v18, (const struct CMILMatrix *)v20);
        }
        v15 = v17;
        if ( !(*(unsigned int (__fastcall **)(struct CShape *))(*(_QWORD *)v17 + 8LL))(v17) )
          CDrawListEntryBuilder::PartitionPrimitiveWithRoundedRectangleClip(
            v10,
            (int)a3,
            (__int64)v15,
            (__int64)v18,
            a4);
      }
    }
  }
  return v8;
}
