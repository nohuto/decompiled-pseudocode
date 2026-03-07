__int64 __fastcall wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::attach(__int64 *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 result; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
  {
    v3 = v2 + 8 + *(int *)(*(_QWORD *)(v2 + 8) + 4LL);
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
