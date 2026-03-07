char __fastcall CRenderTargetBitmap::IsPrimaryResource(CRenderTargetBitmap *this)
{
  __int64 v1; // rdx
  char v2; // bl
  __int64 v3; // rcx

  v1 = *((_QWORD *)this - 7);
  v2 = 0;
  if ( v1 )
  {
    v3 = v1 + 8 + *(int *)(*(_QWORD *)(v1 + 8) + 8LL);
    return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3) != 0;
  }
  return v2;
}
