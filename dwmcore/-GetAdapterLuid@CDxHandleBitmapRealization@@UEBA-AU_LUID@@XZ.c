struct _LUID __fastcall CDxHandleBitmapRealization::GetAdapterLuid(CDxHandleBitmapRealization *this, _QWORD *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  v3 = *((_QWORD *)this - 14);
  if ( v3 )
  {
    v4 = v3 + 16 + *(int *)(*(_QWORD *)(v3 + 16) + 8LL);
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v4 + 32LL))(v4, a2);
  }
  else
  {
    *a2 = *((_QWORD *)this - 29);
  }
  return (struct _LUID)a2;
}
