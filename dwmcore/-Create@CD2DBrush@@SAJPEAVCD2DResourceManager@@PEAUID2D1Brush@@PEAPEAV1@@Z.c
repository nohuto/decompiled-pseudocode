__int64 __fastcall CD2DBrush::Create(struct CD2DResourceManager *a1, struct ID2D1Brush *a2, struct CD2DBrush **a3)
{
  CD2DBrush *v6; // rax
  __int64 v7; // rcx
  CD2DBrush *v8; // rax
  struct CD2DBrush *v9; // rdi
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  CD2DBrush *v14; // [rsp+58h] [rbp+20h] BYREF

  v6 = (CD2DBrush *)DefaultHeap::Alloc(0x80uLL);
  if ( !v6 )
  {
    v14 = 0LL;
    goto LABEL_8;
  }
  v8 = CD2DBrush::CD2DBrush(v6, a1, a2);
  v14 = v8;
  v9 = v8;
  if ( !v8 )
  {
LABEL_8:
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0xEu, 0LL);
    goto LABEL_5;
  }
  (*(void (__fastcall **)(CD2DBrush *))(*(_QWORD *)v8 + 8LL))(v8);
  v10 = (*(__int64 (__fastcall **)(struct CD2DBrush *))(*(_QWORD *)v9 + 48LL))(v9);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x10u, 0LL);
  }
  else
  {
    v14 = 0LL;
    *a3 = v9;
  }
LABEL_5:
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v14);
  return v12;
}
