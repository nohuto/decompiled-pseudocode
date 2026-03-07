__int64 sub_1400A1CFC(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        const wchar_t *a6,
        ...)
{
  const wchar_t *v6; // rbp
  __int64 v7; // r10
  __int64 v8; // rdi
  unsigned int v10; // r15d
  unsigned __int64 v11; // r9
  unsigned int v12; // r14d
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rdx
  const wchar_t *v16; // rcx
  bool v17; // zf
  int v19; // [rsp+20h] [rbp-88h]
  va_list va; // [rsp+E0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = L"NULL";
  v7 = a1;
  v8 = -1LL;
  v10 = a4;
  v11 = (unsigned __int64)a3 >> 16;
  v12 = a2;
  v13 = *((_DWORD *)&DeviceObject->Timer + 20 * v11 + ((unsigned __int16)(a3 - 1) >> 5) + 1);
  if ( _bittest(&v13, ((_WORD)a3 - 1) & 0x1F) )
  {
    if ( *((_BYTE *)&DeviceObject->Timer + 80 * v11 + 1) >= a2 )
    {
      if ( a6 )
      {
        v14 = -1LL;
        do
          ++v14;
        while ( a6[v14] );
        v15 = 2 * v14 + 2;
      }
      else
      {
        v15 = 10LL;
      }
      v16 = L"NULL";
      if ( a6 )
        v16 = a6;
      qword_1400DF3E8(*((_QWORD *)&DeviceObject->AttachedDevice + 10 * v11), 43LL, a5, v10, v16, v15, va, 4LL, 0LL);
    }
    v7 = a1;
  }
  v17 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v8;
    while ( a6[v8] );
    v17 = a6 == 0LL;
  }
  if ( !v17 )
    v6 = a6;
  LOWORD(v19) = v10;
  return WppAutoLogTrace(v7, v12, a3, a5, v19, v6);
}
