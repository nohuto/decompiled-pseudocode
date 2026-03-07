_DWORD *__fastcall CDxHandleYUVBitmapRealization::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rax
  int v3; // r8d
  _DWORD *result; // rax

  v2 = *(_QWORD *)(a1 - 56);
  v3 = 3;
  if ( v2 )
    *a2 = *(_DWORD *)(v2 + 120);
  else
    *a2 = 0;
  if ( *(_DWORD *)(a1 - 336) )
    v3 = *(_DWORD *)(a1 - 336);
  a2[2] = *(_DWORD *)(a1 - 288);
  result = a2;
  a2[1] = v3;
  return result;
}
