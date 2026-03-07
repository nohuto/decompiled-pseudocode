struct CD3DDevice *__fastcall CDxHandleBitmapRealization::GetDevice(CDxHandleBitmapRealization *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  v1 = *((_QWORD *)this - 14);
  if ( !v1 )
    return 0LL;
  v2 = v1 + 16 + *(int *)(*(_QWORD *)(v1 + 16) + 8LL);
  return (struct CD3DDevice *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
}
