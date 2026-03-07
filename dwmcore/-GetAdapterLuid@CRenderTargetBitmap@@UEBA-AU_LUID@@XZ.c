struct _LUID __fastcall CRenderTargetBitmap::GetAdapterLuid(CRenderTargetBitmap *this, struct _LUID *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  v3 = *((_QWORD *)this - 7);
  if ( v3 )
  {
    v4 = v3 + 8 + *(int *)(*(_QWORD *)(v3 + 8) + 8LL);
    (*(void (__fastcall **)(__int64, struct _LUID *))(*(_QWORD *)v4 + 32LL))(v4, a2);
  }
  else
  {
    *a2 = g_luidZero;
  }
  return (struct _LUID)a2;
}
