struct _LUID __fastcall CCompositionSurfaceBitmap::GetAdapterLuid(CCompositionSurfaceBitmap *this, struct _LUID *a2)
{
  __int64 v2; // rcx
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 13);
  *a2 = g_luidZero;
  if ( v2 )
    *a2 = *(struct _LUID *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v2 + 80LL))(v2, &v5);
  return (struct _LUID)a2;
}
