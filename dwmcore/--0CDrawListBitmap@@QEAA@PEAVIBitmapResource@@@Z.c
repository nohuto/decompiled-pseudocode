CDrawListBitmap *__fastcall CDrawListBitmap::CDrawListBitmap(CDrawListBitmap *this, struct IBitmapResource *a2)
{
  __int64 *v2; // rsi
  char v5; // al
  __int64 v6; // r8
  bool v7; // zf
  __int64 v8; // rax
  bool v9; // bp
  void (__fastcall *v10)(struct IBitmapResource *, __int64 *); // r14
  CDrawListBitmap *result; // rax
  __int64 v12; // rcx

  v2 = (__int64 *)((char *)this + 8);
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_BYTE *)this + 16) = 0;
  v5 = (*(__int64 (__fastcall **)(struct IBitmapResource *))(*(_QWORD *)a2 + 16LL))(a2);
  v6 = *v2;
  v7 = v5 == 0;
  v8 = *(_QWORD *)a2;
  v9 = !v7;
  *v2 = 0LL;
  v10 = *(void (__fastcall **)(struct IBitmapResource *, __int64 *))(v8 + 64);
  if ( v6 )
  {
    v12 = v6 + 8 + *(int *)(*(_QWORD *)(v6 + 8) + 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v10(a2, v2);
  wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::operator=(this, a2);
  result = this;
  *((_BYTE *)this + 16) = v9;
  return result;
}
