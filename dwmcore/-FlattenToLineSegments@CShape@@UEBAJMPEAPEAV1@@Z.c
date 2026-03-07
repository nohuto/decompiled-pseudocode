__int64 __fastcall CShape::FlattenToLineSegments(CShape *this, float a2, struct CShape **a3)
{
  __int64 v3; // rax
  __int64 (__fastcall *v6)(CShape *, _QWORD, __int64 *); // rbx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  struct ID2D1Geometry *v10; // rbx
  __int64 (__fastcall *v11)(struct ID2D1Geometry *, __int64 *); // rdi
  CPolygonShape *v12; // rax
  __int64 v13; // rcx
  struct CShape *v14; // rax
  unsigned int v16; // [rsp+20h] [rbp-30h]
  __int64 v17[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+70h] [rbp+20h] BYREF
  struct ID2D1Geometry *v19; // [rsp+88h] [rbp+38h] BYREF

  v3 = *(_QWORD *)this;
  v17[0] = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  v6 = *(__int64 (__fastcall **)(CShape *, _QWORD, __int64 *))(v3 + 24);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(v17);
  v7 = v6(this, 0LL, v17);
  v9 = v7;
  if ( v7 < 0 )
  {
    v16 = 410;
    goto LABEL_16;
  }
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)&v19);
  v7 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1Geometry **))(*g_DeviceManager + 80LL))(g_DeviceManager, &v19);
  v9 = v7;
  if ( v7 < 0 )
  {
    v16 = 412;
    goto LABEL_16;
  }
  v10 = v19;
  v11 = *(__int64 (__fastcall **)(struct ID2D1Geometry *, __int64 *))(*(_QWORD *)v19 + 136LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
  v7 = v11(v10, &v18);
  v9 = v7;
  if ( v7 < 0 )
  {
    v16 = 413;
    goto LABEL_16;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17[0] + 72LL))(v17[0], 1LL);
  v9 = v7;
  if ( v7 < 0 )
  {
    v16 = 418;
    goto LABEL_16;
  }
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 72LL))(v18);
  v9 = v7;
  if ( v7 < 0 )
  {
    v16 = 419;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, v16, 0LL);
    goto LABEL_17;
  }
  v12 = (CPolygonShape *)operator new(0x18uLL);
  if ( !v12 )
  {
    *a3 = 0LL;
LABEL_10:
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0x1A6u, 0LL);
    goto LABEL_17;
  }
  v14 = CPolygonShape::CPolygonShape(v12, v19);
  *a3 = v14;
  if ( !v14 )
    goto LABEL_10;
LABEL_17:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)&v19);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(v17);
  return v9;
}
