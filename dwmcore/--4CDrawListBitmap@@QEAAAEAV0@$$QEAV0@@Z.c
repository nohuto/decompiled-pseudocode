__int64 *__fastcall CDrawListBitmap::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v8; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v5 = *a1;
  *a1 = v2;
  if ( v5 )
  {
    v8 = *(int *)(*(_QWORD *)(v5 + 8) + 4LL) + v5 + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v6 = a2[1];
  a2[1] = 0LL;
  wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::attach(a1 + 1, v6);
  *((_BYTE *)a1 + 16) = *((_BYTE *)a2 + 16);
  return a1;
}
