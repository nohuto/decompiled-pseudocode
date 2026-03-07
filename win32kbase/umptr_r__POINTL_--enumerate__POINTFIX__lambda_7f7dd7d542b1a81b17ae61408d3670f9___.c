char umptr_r__POINTL_::enumerate__POINTFIX__lambda_7f7dd7d542b1a81b17ae61408d3670f9___(__int64 a1, __int64 a2, ...)
{
  ULONGLONG v2; // r14
  unsigned __int64 v7; // rdi
  int v8; // r15d
  __int64 v9; // rbx
  unsigned __int64 offset; // rax
  int v11; // r11d
  __int64 v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+28h] [rbp-40h] BYREF
  __int64 v14[7]; // [rsp+30h] [rbp-38h] BYREF
  ULONGLONG v15; // [rsp+80h] [rbp+18h] BYREF
  va_list va; // [rsp+80h] [rbp+18h]
  __int64 v17; // [rsp+88h] [rbp+20h]
  va_list va1; // [rsp+90h] [rbp+28h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v15 = va_arg(va1, _QWORD);
  v17 = va_arg(va1, _QWORD);
  v2 = v15;
  v13 = *(_QWORD *)(a1 + 16);
  umptr<_POINTL>::internal_get_bytecount(a1, (ULONGLONG *)va, &v13);
  if ( *(_BYTE *)(a1 + 25) || *(_BYTE *)(a1 + 24) )
    return 0;
  v7 = 0LL;
  v8 = HIDWORD(v17);
  while ( 1 )
  {
    v14[1] = v7;
    if ( v7 >= v2 )
      break;
    v9 = *(_QWORD *)a1;
    v14[0] = 0LL;
    offset = umptr<_POINTL>::internal_get_offset(a1, v14);
    LODWORD(v12) = v11 + *(_DWORD *)(v9 + 8 * (v7 + offset));
    HIDWORD(v12) = v8 + *(_DWORD *)(v9 + 8 * (v7 + offset) + 4);
    *(_QWORD *)(a2 + 8 * v7++) = v12;
  }
  return 1;
}
