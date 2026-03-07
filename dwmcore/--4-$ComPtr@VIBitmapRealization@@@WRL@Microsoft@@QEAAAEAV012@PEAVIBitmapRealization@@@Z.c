__int64 *__fastcall Microsoft::WRL::ComPtr<IBitmapRealization>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    if ( a2 )
    {
      v4 = *(int *)(*(_QWORD *)(a2 + 8) + 4LL) + a2 + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    }
    v6 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v6);
  }
  return a1;
}
