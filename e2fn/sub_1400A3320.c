__int64 __fastcall sub_1400A3320(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        const wchar_t *a6,
        const wchar_t *a7,
        const wchar_t *a8)
{
  const wchar_t *v8; // r13
  unsigned __int64 v11; // rdi
  unsigned int v12; // edx
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r11
  __int64 v18; // rax
  __int64 v19; // r9
  const wchar_t *v20; // r8
  const wchar_t *v21; // rdx
  const wchar_t *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  int v26; // [rsp+20h] [rbp-88h]
  unsigned __int16 v30; // [rsp+C8h] [rbp+20h]

  v30 = a4;
  v8 = L"NULL";
  v11 = (unsigned __int64)a3 >> 16;
  v12 = ((_WORD)a3 - 1) & 0x1F;
  v13 = -1LL;
  v14 = *((_DWORD *)&DeviceObject->Timer + 20 * v11 + ((unsigned __int16)(a3 - 1) >> 5) + 1);
  if ( _bittest(&v14, v12) && *((_BYTE *)&DeviceObject->Timer + 80 * v11 + 1) >= a2 )
  {
    if ( a8 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a8[v15] );
    }
    if ( a7 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a7[v16] );
      v17 = 2 * v16 + 2;
    }
    else
    {
      v17 = 10LL;
    }
    if ( a6 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a6[v18] );
      v19 = 2 * v18 + 2;
    }
    else
    {
      v19 = 10LL;
    }
    v20 = L"NULL";
    v21 = L"NULL";
    if ( a8 )
      v20 = a8;
    v22 = L"NULL";
    if ( a7 )
      v21 = a7;
    if ( a6 )
      v22 = a6;
    qword_1400DF3E8(*((_QWORD *)&DeviceObject->AttachedDevice + 10 * v11), 43LL, a5, v30, v22, v19, v21, v17, v20);
    a4 = v30;
  }
  if ( a8 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( a8[v23] );
  }
  if ( a7 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a7[v24] );
  }
  if ( a6 )
  {
    do
      ++v13;
    while ( a6[v13] );
  }
  if ( a6 )
    v8 = a6;
  LOWORD(v26) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v26, (__int64)v8);
}
