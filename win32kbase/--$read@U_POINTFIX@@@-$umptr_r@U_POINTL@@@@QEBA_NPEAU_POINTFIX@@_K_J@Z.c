char umptr_r<_POINTL>::read<_POINTFIX>(__int64 a1, void *a2, ...)
{
  unsigned __int64 offset; // rbx
  __int64 v4; // r11
  size_t bytecount; // r8
  __int64 v6; // r11
  __int64 v9[3]; // [rsp+20h] [rbp-18h] BYREF
  ULONGLONG v10; // [rsp+50h] [rbp+18h] BYREF
  va_list va; // [rsp+50h] [rbp+18h]
  unsigned __int64 v12; // [rsp+58h] [rbp+20h] BYREF
  va_list va1; // [rsp+58h] [rbp+20h]
  va_list va2; // [rsp+60h] [rbp+28h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v10 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v12 = va_arg(va2, _QWORD);
  v9[0] = 0LL;
  offset = umptr<_POINTL>::internal_get_offset(a1, v9);
  v12 = offset;
  bytecount = umptr<_POINTL>::internal_get_bytecount(v4, (ULONGLONG *)va, (unsigned __int64 *)va1);
  if ( *(_BYTE *)(v6 + 25) || *(_BYTE *)(v6 + 24) )
    return 0;
  memmove(a2, (const void *)(*(_QWORD *)v6 + 8 * offset), bytecount);
  return 1;
}
