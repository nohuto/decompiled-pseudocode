__int64 __fastcall CCompositionSurfaceBitmap::HasApprovedCustomDuration(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *((_QWORD *)this + 4);
  result = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 280LL))(v1);
  return result;
}
