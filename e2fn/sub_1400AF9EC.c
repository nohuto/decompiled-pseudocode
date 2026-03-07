__int64 sub_1400AF9EC(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        const wchar_t *a6,
        ...)
{
  const wchar_t *v6; // r15
  __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  unsigned int v10; // r12d
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rdx
  const wchar_t *v14; // rcx
  bool v15; // zf
  int v17; // [rsp+20h] [rbp-A8h]
  __int64 v18; // [rsp+D0h] [rbp+8h]
  unsigned __int16 v19; // [rsp+E8h] [rbp+20h]
  __int64 v20; // [rsp+100h] [rbp+38h] BYREF
  va_list va; // [rsp+100h] [rbp+38h]
  va_list va1; // [rsp+108h] [rbp+40h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v20 = va_arg(va1, _QWORD);
  v19 = a4;
  v18 = a1;
  v6 = L"NULL";
  v8 = -1LL;
  v9 = (unsigned __int64)a3 >> 16;
  v10 = a2;
  v11 = *((_DWORD *)&DeviceObject->Timer + 20 * v9 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v11, (a3 - 1) & 0x1F) && *((_BYTE *)&DeviceObject->Timer + 80 * v9 + 1) >= a2 )
  {
    if ( a6 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a6[v12] );
      v13 = 2 * v12 + 2;
    }
    else
    {
      v13 = 10LL;
    }
    v14 = L"NULL";
    if ( a6 )
      v14 = a6;
    qword_1400DF3E8(
      *((_QWORD *)&DeviceObject->AttachedDevice + 10 * v9),
      43LL,
      a5,
      a4,
      v14,
      v13,
      (__int64 *)va,
      4LL,
      va1);
    a4 = v19;
    a1 = v18;
  }
  v15 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v8;
    while ( a6[v8] );
    v15 = a6 == 0LL;
  }
  if ( !v15 )
    v6 = a6;
  LOWORD(v17) = a4;
  return WppAutoLogTrace(a1, v10, a3, a5, v17, (__int64)v6);
}
