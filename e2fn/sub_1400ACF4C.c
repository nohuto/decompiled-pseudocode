__int64 __fastcall sub_1400ACF4C(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        const wchar_t *a6,
        const wchar_t *a7,
        const wchar_t *a8,
        const wchar_t *a9,
        const wchar_t *a10)
{
  __int64 v12; // r13
  char v13; // bl
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r10
  const wchar_t *v16; // r8
  unsigned int v17; // edx
  __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // r11
  const wchar_t *v30; // r10
  const wchar_t *v31; // r9
  const wchar_t *v32; // rcx
  const wchar_t *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  const wchar_t *v38; // rbx
  int v40; // [rsp+20h] [rbp-B8h]
  __int64 v45; // [rsp+128h] [rbp+50h]

  v12 = (__int64)a9;
  v13 = a3 - 1;
  v14 = (unsigned __int64)a3 >> 16;
  v15 = (unsigned __int64)(a3 - 1) >> 5;
  v16 = L"NULL";
  v17 = v13 & 0x1F;
  v18 = -1LL;
  v19 = *((_DWORD *)&DeviceObject->Timer + 20 * v14 + (v15 & 0x7FF) + 1);
  if ( _bittest(&v19, v17) )
  {
    v20 = 10 * v14;
    if ( *((_BYTE *)&DeviceObject->Timer + 80 * v14 + 1) >= a2 )
    {
      if ( a10 )
      {
        v21 = -1LL;
        do
          ++v21;
        while ( a10[v21] );
        v45 = 2 * v21 + 2;
      }
      else
      {
        v45 = 10LL;
      }
      if ( a9 )
      {
        v22 = -1LL;
        do
          ++v22;
        while ( a9[v22] );
        v23 = 2 * v22 + 2;
      }
      else
      {
        v23 = 10LL;
      }
      if ( a8 )
      {
        v24 = -1LL;
        do
          ++v24;
        while ( a8[v24] );
        v25 = 2 * v24 + 2;
      }
      else
      {
        v25 = 10LL;
      }
      if ( a7 )
      {
        v26 = -1LL;
        do
          ++v26;
        while ( a7[v26] );
        v27 = 2 * v26 + 2;
      }
      else
      {
        v27 = 10LL;
      }
      if ( a6 )
      {
        v28 = -1LL;
        do
          ++v28;
        while ( a6[v28] );
        v29 = 2 * v28 + 2;
      }
      else
      {
        v29 = 10LL;
      }
      v30 = L"NULL";
      v31 = L"NULL";
      if ( a10 )
        v30 = a10;
      if ( a9 )
        v31 = a9;
      if ( a8 )
        v16 = a8;
      v32 = L"NULL";
      v33 = L"NULL";
      if ( a7 )
        v33 = a7;
      if ( a6 )
        v32 = a6;
      ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, const wchar_t *, __int64, const wchar_t *, __int64, const wchar_t *, __int64, const wchar_t *, __int64, const wchar_t *, __int64, _QWORD))qword_1400DF3E8)(
        *((_QWORD *)&DeviceObject->AttachedDevice + v20),
        43LL,
        a5,
        a4,
        v32,
        v29,
        v33,
        v27,
        v16,
        v25,
        v31,
        v23,
        v30,
        v45,
        0LL);
      v12 = (__int64)a9;
    }
  }
  if ( a10 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( a10[v34] );
  }
  if ( v12 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( *(_WORD *)(v12 + 2 * v35) );
  }
  if ( a8 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( a8[v36] );
  }
  if ( a7 )
  {
    v37 = -1LL;
    do
      ++v37;
    while ( a7[v37] );
  }
  if ( a6 )
  {
    do
      ++v18;
    while ( a6[v18] );
  }
  v38 = L"NULL";
  if ( a6 )
    v38 = a6;
  LOWORD(v40) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v40, (__int64)v38);
}
