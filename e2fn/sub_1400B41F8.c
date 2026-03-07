__int64 __fastcall sub_1400B41F8(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        const wchar_t *a6,
        const wchar_t *a7,
        const wchar_t *a8)
{
  __int64 v8; // rsi
  __int64 v9; // r13
  unsigned __int64 v12; // rdi
  unsigned int v13; // edx
  int v14; // eax
  const wchar_t *v15; // r10
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // r10
  const wchar_t *v22; // rcx
  const wchar_t *v23; // r8
  const wchar_t *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  int v28; // [rsp+20h] [rbp-C8h]

  v8 = -1LL;
  v9 = (__int64)a6;
  v12 = (unsigned __int64)a3 >> 16;
  v13 = ((_BYTE)a3 - 1) & 0x1F;
  v14 = *((_DWORD *)&DeviceObject->Timer + 20 * v12 + ((unsigned __int16)(a3 - 1) >> 5) + 1);
  v15 = L"NULL";
  if ( _bittest(&v14, v13) )
  {
    v16 = 10 * v12;
    if ( *((_BYTE *)&DeviceObject->Timer + 8 * v16 + 1) >= a2 )
    {
      if ( a8 )
      {
        v17 = -1LL;
        do
          ++v17;
        while ( a8[v17] );
      }
      if ( a7 )
      {
        v18 = -1LL;
        do
          ++v18;
        while ( a7[v18] );
        v19 = 2 * v18 + 2;
      }
      else
      {
        v19 = 10LL;
      }
      if ( a6 )
      {
        v20 = -1LL;
        do
          ++v20;
        while ( a6[v20] );
        v21 = 2 * v20 + 2;
      }
      else
      {
        v21 = 10LL;
      }
      v22 = L"NULL";
      v23 = L"NULL";
      v24 = L"NULL";
      if ( a8 )
        v23 = a8;
      if ( a7 )
        v24 = a7;
      if ( a6 )
        v22 = a6;
      qword_1400DF3E8(*((_QWORD *)&DeviceObject->AttachedDevice + v16), 43LL, a5, a4, v22, v21, v24, v19, v23);
      v9 = (__int64)a6;
      v15 = L"NULL";
    }
  }
  if ( a8 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( a8[v25] );
  }
  if ( a7 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( a7[v26] );
  }
  if ( v9 )
  {
    do
      ++v8;
    while ( *(_WORD *)(v9 + 2 * v8) );
  }
  if ( v9 )
    v15 = (const wchar_t *)v9;
  LOWORD(v28) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v28, (__int64)v15);
}
