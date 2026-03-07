__int64 __fastcall CShape::GetOutline(CShape *this, struct ID2D1GeometrySink *a2)
{
  char IsAxisAlignedRectangle; // al
  __int64 v5; // r9
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  void (__fastcall *v16)(struct ID2D1GeometrySink *, unsigned __int64, _QWORD); // rax
  __int128 v17; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v18; // [rsp+40h] [rbp-30h]
  int v19; // [rsp+48h] [rbp-28h] BYREF
  __int64 v20; // [rsp+4Ch] [rbp-24h]
  int v21; // [rsp+54h] [rbp-1Ch]
  int v22; // [rsp+58h] [rbp-18h]
  int v23; // [rsp+5Ch] [rbp-14h]

  IsAxisAlignedRectangle = CShape::IsAxisAlignedRectangle(this);
  v5 = *(_QWORD *)this;
  if ( IsAxisAlignedRectangle )
  {
    v17 = 0LL;
    v13 = (*(__int64 (__fastcall **)(CShape *, __int128 *, _QWORD))(v5 + 48))(this, &v17, 0LL);
    v9 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x173u, 0LL);
    }
    else
    {
      v15 = *(_QWORD *)a2;
      v19 = DWORD2(v17);
      v20 = *(_QWORD *)((char *)&v17 + 4);
      v21 = HIDWORD(v17);
      v22 = v17;
      v23 = HIDWORD(v17);
      v16 = *(void (__fastcall **)(struct ID2D1GeometrySink *, unsigned __int64, _QWORD))(v15 + 40);
      v18 = _mm_unpacklo_ps((__m128)(unsigned int)v17, (__m128)DWORD1(v17)).m128_u64[0];
      v16(a2, v18, 0LL);
      (*(void (__fastcall **)(struct ID2D1GeometrySink *, int *, __int64))(*(_QWORD *)a2 + 48LL))(a2, &v19, 3LL);
      (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)a2 + 64LL))(a2, 1LL);
    }
  }
  else
  {
    *(_QWORD *)&v17 = 0LL;
    v6 = (*(__int64 (__fastcall **)(CShape *, _QWORD, __int128 *))(v5 + 24))(this, 0LL, &v17);
    v9 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x184u, 0LL);
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, struct ID2D1GeometrySink *))(*(_QWORD *)v17 + 96LL))(
              v17,
              0LL,
              v8,
              a2);
      v9 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x186u, 0LL);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
  }
  return v9;
}
