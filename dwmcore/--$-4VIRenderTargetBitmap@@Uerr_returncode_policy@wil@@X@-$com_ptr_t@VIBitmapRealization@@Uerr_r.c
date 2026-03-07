__int64 *__fastcall wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::operator=<IRenderTargetBitmap,wil::err_returncode_policy,void>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = *a2;
  v3 = 0LL;
  *a2 = 0LL;
  if ( v2 )
    v3 = *(int *)(*(_QWORD *)(v2 + 8) + 16LL) + v2 + 8;
  wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::attach(a1, v3);
  return a1;
}
