__int64 __fastcall CShape::GetSimplifiedPathDataInternal(CShape *this, struct CPathData **a2)
{
  __int64 v2; // rax
  __int64 (__fastcall *v5)(CShape *, _QWORD, __int64 *); // rbx
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // rbx
  void (__fastcall *v10)(__int64, __int64 *); // rdi
  LPVOID v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  CPathData *v14; // rsi
  __int64 v15; // r8
  struct ID2D1SimplifiedGeometrySink *v16; // rbx
  unsigned int v18; // [rsp+20h] [rbp-30h]
  __int64 v19[2]; // [rsp+30h] [rbp-20h] BYREF
  __int128 v20; // [rsp+40h] [rbp-10h] BYREF
  __int64 v21; // [rsp+80h] [rbp+30h] BYREF
  struct ID2D1SimplifiedGeometrySink *v22; // [rsp+90h] [rbp+40h] BYREF
  CPathData *v23; // [rsp+98h] [rbp+48h] BYREF

  v2 = *(_QWORD *)this;
  v21 = 0LL;
  v19[0] = 0LL;
  v23 = 0LL;
  v5 = *(__int64 (__fastcall **)(CShape *, _QWORD, __int64 *))(v2 + 24);
  v22 = 0LL;
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v21);
  v6 = v5(this, 0LL, &v21);
  v8 = v6;
  if ( v6 < 0 )
  {
    v18 = 1133;
    goto LABEL_15;
  }
  v9 = v21;
  v10 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 24LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v19);
  v10(v9, v19);
  v11 = DefaultHeap::Alloc(0x50uLL);
  if ( v11 )
  {
    v20 = 0uLL;
    v12 = CPathData::CPathData((__int64)v11, v19[0], &v20);
  }
  else
  {
    v12 = 0LL;
  }
  Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)&v23, v12);
  v14 = v23;
  if ( v23 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
    v6 = CPathData::Open(v14, &v22);
    v8 = v6;
    if ( v6 < 0 )
    {
      v18 = 1139;
    }
    else
    {
      v16 = v22;
      v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, struct ID2D1SimplifiedGeometrySink *))(*(_QWORD *)v21 + 96LL))(
             v21,
             0LL,
             v15,
             v22);
      v8 = v6;
      if ( v6 < 0 )
      {
        v18 = 1142;
      }
      else
      {
        v6 = (*(__int64 (__fastcall **)(struct ID2D1SimplifiedGeometrySink *))(*(_QWORD *)v16 + 72LL))(v16);
        v8 = v6;
        if ( v6 >= 0 )
        {
          v23 = 0LL;
          *a2 = v14;
          goto LABEL_16;
        }
        v18 = 1143;
      }
    }
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, v18, 0LL);
    goto LABEL_16;
  }
  v8 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0x471u, 0LL);
LABEL_16:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)&v23);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v19);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v21);
  return v8;
}
