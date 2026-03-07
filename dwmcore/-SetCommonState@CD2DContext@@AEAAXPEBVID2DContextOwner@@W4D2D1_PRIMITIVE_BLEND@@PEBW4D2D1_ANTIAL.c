void __fastcall CD2DContext::SetCommonState(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        enum D2D1_PRIMITIVE_BLEND a3,
        const enum D2D1_ANTIALIAS_MODE *a4,
        struct D2D_MATRIX_3X2_F *a5)
{
  unsigned int v8; // ebx
  __int64 v9; // xmm1_8
  __int128 v10; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11; // [rsp+30h] [rbp-38h]

  (*(void (__fastcall **)(const struct ID2DContextOwner *, __int128 *))(*(_QWORD *)a2 + 8LL))(a2, &v10);
  (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 25) + 240LL))(*((_QWORD *)this + 25), &v10);
  CD2DContext::SetPrimitiveBlend(this, a3);
  if ( a4 )
  {
    v8 = *a4;
    if ( *a4 != *((_DWORD *)this + 98) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 25) + 256LL))(*((_QWORD *)this + 25), v8);
      *((_DWORD *)this + 98) = v8;
    }
  }
  if ( a5 )
  {
    v9 = v11;
    *(_OWORD *)&a5->m11 = v10;
    *(_QWORD *)&a5->m[2][0] = v9;
  }
}
