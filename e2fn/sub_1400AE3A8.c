__int64 __fastcall sub_1400AE3A8(
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
  __int64 v9; // r15
  unsigned __int64 v12; // rdi
  unsigned int v13; // edx
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r11
  __int64 v19; // rax
  __int64 v20; // r9
  const wchar_t *v21; // r8
  const wchar_t *v22; // rdx
  const wchar_t *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  int v27; // [rsp+20h] [rbp-B8h]
  unsigned __int16 v31; // [rsp+F8h] [rbp+20h]

  v31 = a4;
  v8 = L"NULL";
  v9 = (__int64)a6;
  v12 = (unsigned __int64)a3 >> 16;
  v13 = ((_WORD)a3 - 1) & 0x1F;
  v14 = -1LL;
  v15 = *((_DWORD *)&DeviceObject->Timer + 20 * v12 + ((unsigned __int16)(a3 - 1) >> 5) + 1);
  if ( _bittest(&v15, v13) && *((_BYTE *)&DeviceObject->Timer + 80 * v12 + 1) >= a2 )
  {
    if ( a8 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a8[v16] );
    }
    if ( a7 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a7[v17] );
      v18 = 2 * v17 + 2;
    }
    else
    {
      v18 = 10LL;
    }
    if ( a6 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( a6[v19] );
      v20 = 2 * v19 + 2;
    }
    else
    {
      v20 = 10LL;
    }
    v21 = L"NULL";
    v22 = L"NULL";
    if ( a8 )
      v21 = a8;
    v23 = L"NULL";
    if ( a7 )
      v22 = a7;
    if ( a6 )
      v23 = a6;
    qword_1400DF3E8(*((_QWORD *)&DeviceObject->AttachedDevice + 10 * v12), 43LL, a5, v31, v23, v20, v22, v18, v21);
    a4 = v31;
    v9 = (__int64)a6;
  }
  if ( a8 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a8[v24] );
  }
  if ( a7 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( a7[v25] );
  }
  if ( v9 )
  {
    do
      ++v14;
    while ( *(_WORD *)(v9 + 2 * v14) );
  }
  if ( v9 )
    v8 = (const wchar_t *)v9;
  LOWORD(v27) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v27, (__int64)v8);
}
