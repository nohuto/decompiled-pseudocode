__int64 __fastcall sub_1400AABE0(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        const wchar_t *a6,
        const wchar_t *a7,
        const wchar_t *a8,
        const char *a9,
        char a10,
        char a11,
        const char *a12)
{
  __int16 v12; // ax
  const wchar_t *v13; // r12
  unsigned __int64 v14; // rdi
  unsigned int v16; // edx
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // r12
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // r11
  __int64 v23; // r11
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // r15
  __int64 v28; // rax
  __int64 v29; // rbp
  const char *v30; // r10
  const char *v31; // r8
  const wchar_t *v32; // rcx
  const wchar_t *v33; // r9
  const wchar_t *v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rax
  int v40; // [rsp+20h] [rbp-D8h]

  v12 = a3;
  v13 = L"NULL";
  v14 = (unsigned __int64)a3 >> 16;
  v16 = (v12 - 1) & 0x1F;
  v17 = -1LL;
  v18 = *((_DWORD *)&DeviceObject->Timer + 20 * v14 + ((unsigned __int16)(v12 - 1) >> 5) + 1);
  if ( _bittest(&v18, v16) )
  {
    v19 = 10 * v14;
    if ( *((_BYTE *)&DeviceObject->Timer + 80 * v14 + 1) >= a2 )
    {
      if ( a12 )
      {
        v20 = -1LL;
        do
          ++v20;
        while ( a12[v20] );
        v21 = v20 + 1;
      }
      else
      {
        v21 = 5LL;
      }
      if ( a9 )
      {
        v22 = -1LL;
        do
          ++v22;
        while ( a9[v22] );
        v23 = v22 + 1;
      }
      else
      {
        v23 = 5LL;
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
      v30 = "NULL";
      v31 = "NULL";
      if ( a12 )
        v31 = a12;
      v32 = L"NULL";
      if ( a9 )
        v30 = a9;
      v33 = L"NULL";
      v34 = L"NULL";
      if ( a8 )
        v33 = a8;
      if ( a7 )
        v34 = a7;
      if ( a6 )
        v32 = a6;
      ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, const wchar_t *, __int64, const wchar_t *, __int64, const wchar_t *, __int64, const char *, __int64, char *, __int64, char *, __int64, const char *, __int64, _QWORD))qword_1400DF3E8)(
        *((_QWORD *)&DeviceObject->AttachedDevice + v19),
        43LL,
        a5,
        a4,
        v32,
        v29,
        v34,
        v27,
        v33,
        v25,
        v30,
        v23,
        &a10,
        4LL,
        &a11,
        4LL,
        v31,
        v21,
        0LL);
    }
    v13 = L"NULL";
  }
  if ( a12 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( a12[v35] );
  }
  if ( a9 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( a9[v36] );
  }
  if ( a8 )
  {
    v37 = -1LL;
    do
      ++v37;
    while ( a8[v37] );
  }
  if ( a7 )
  {
    v38 = -1LL;
    do
      ++v38;
    while ( a7[v38] );
  }
  if ( a6 )
  {
    do
      ++v17;
    while ( a6[v17] );
  }
  if ( a6 )
    v13 = a6;
  LOWORD(v40) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v40, (__int64)v13);
}
