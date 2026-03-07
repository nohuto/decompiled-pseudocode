__int64 __fastcall CShape::GetWidenedBounds(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v8)(__int64 *, _QWORD, __int64 *); // rbx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  float *v12; // rcx
  unsigned int v14; // [rsp+20h] [rbp-78h]
  __int64 v15; // [rsp+40h] [rbp-58h] BYREF
  __int128 v16; // [rsp+48h] [rbp-50h] BYREF

  v4 = *a1;
  v15 = 0LL;
  v8 = *(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v4 + 24);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v15);
  v9 = v8(a1, 0LL, &v15);
  v11 = v9;
  if ( v9 < 0 )
  {
    v14 = 1062;
    goto LABEL_10;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, _QWORD, _DWORD, __int128 *))(*(_QWORD *)v15 + 40LL))(
         v15,
         &v16,
         a4,
         0LL,
         LODWORD(FLOAT_0_25),
         &v16);
  v11 = v9;
  if ( v9 < 0 )
  {
    v14 = 1071;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, v14, 0LL);
    goto LABEL_6;
  }
  *(_OWORD *)a2 = v16;
  if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::HasValidValues() )
  {
    if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsWellOrdered(v12) )
    {
      *(_DWORD *)(a2 + 12) = 0;
      *(_DWORD *)(a2 + 8) = 0;
      *(_DWORD *)(a2 + 4) = 0;
      *(_DWORD *)a2 = 0;
    }
  }
  else
  {
    v11 = -2003304438;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v12, 0LL, 0, -2003304438, 0x435u, 0LL);
  }
LABEL_6:
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v15);
  return v11;
}
