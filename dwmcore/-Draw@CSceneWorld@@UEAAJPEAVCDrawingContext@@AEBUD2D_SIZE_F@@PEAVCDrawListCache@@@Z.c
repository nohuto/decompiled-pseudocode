__int64 __fastcall CSceneWorld::Draw(
        CSceneWorld *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  _QWORD *v4; // rsi
  _QWORD *i; // rbx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  _BYTE v13[64]; // [rsp+40h] [rbp-58h] BYREF
  int v14; // [rsp+80h] [rbp-18h]

  v4 = (_QWORD *)*((_QWORD *)this - 7);
  for ( i = (_QWORD *)*((_QWORD *)this - 8); i != v4; ++i )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 184LL))(*i);
  std::_Destroy_range<std::allocator<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>>(
    *((__int64 **)this - 8),
    *((__int64 **)this - 7));
  v8 = *((_QWORD *)this - 8);
  v14 = 0;
  *((_QWORD *)this - 7) = v8;
  CMILMatrix::SetScale((CMILMatrix *)v13, 1.0, -1.0, 1.0, 0.0, 0.0, 0.0);
  v9 = CDrawingContext::DrawScene3D(
         a2,
         *((struct ISpectreWorld **)this - 13),
         *((struct CCompositionEnvironmentLight **)this - 5),
         (const struct CMILMatrix *)v13);
  v11 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xF9u, 0LL);
  return v11;
}
