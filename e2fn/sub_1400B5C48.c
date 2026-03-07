__int64 __fastcall sub_1400B5C48(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        const wchar_t *a6,
        const wchar_t *a7,
        const wchar_t *a8,
        const char *a9,
        const char *a10,
        const char *a11)
{
  unsigned __int64 v13; // rdi
  unsigned int v14; // edx
  __int64 v15; // rbx
  int v16; // eax
  const char *v17; // r10
  __int64 v18; // r15
  __int64 v19; // r14
  __int64 v20; // r14
  __int64 v21; // rbp
  __int64 v22; // rbp
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // r13
  __int64 v27; // rax
  __int64 v28; // r12
  __int64 v29; // rax
  const char *v30; // r9
  const char *v31; // r11
  const wchar_t *v32; // rcx
  const wchar_t *v33; // rdx
  const wchar_t *v34; // r8
  __int64 v35; // r10
  __int64 v36; // r9
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rax
  const wchar_t *v40; // rbp
  int v42; // [rsp+20h] [rbp-C8h]
  __int64 v43; // [rsp+90h] [rbp-58h]

  v13 = (unsigned __int64)a3 >> 16;
  v14 = ((_BYTE)a3 - 1) & 0x1F;
  v15 = -1LL;
  v16 = *((_DWORD *)&DeviceObject->Timer + 20 * v13 + ((unsigned __int16)(a3 - 1) >> 5) + 1);
  v17 = "NULL";
  v18 = 10LL;
  if ( _bittest(&v16, v14) )
  {
    v43 = 80 * v13;
    if ( *((_BYTE *)&DeviceObject->Timer + 80 * v13 + 1) >= a2 )
    {
      if ( a11 )
      {
        v19 = -1LL;
        do
          ++v19;
        while ( a11[v19] );
        v20 = v19 + 1;
      }
      else
      {
        v20 = 5LL;
      }
      if ( a10 )
      {
        v21 = -1LL;
        do
          ++v21;
        while ( a10[v21] );
        v22 = v21 + 1;
      }
      else
      {
        v22 = 5LL;
      }
      if ( a9 )
      {
        v23 = -1LL;
        do
          ++v23;
        while ( a9[v23] );
        v24 = v23 + 1;
      }
      else
      {
        v24 = 5LL;
      }
      if ( a8 )
      {
        v25 = -1LL;
        do
          ++v25;
        while ( a8[v25] );
        v26 = 2 * v25 + 2;
      }
      else
      {
        v26 = 10LL;
      }
      if ( a7 )
      {
        v27 = -1LL;
        do
          ++v27;
        while ( a7[v27] );
        v28 = 2 * v27 + 2;
      }
      else
      {
        v28 = 10LL;
      }
      if ( a6 )
      {
        v29 = -1LL;
        do
          ++v29;
        while ( a6[v29] );
        v18 = 2 * v29 + 2;
      }
      v30 = "NULL";
      v31 = "NULL";
      if ( a11 )
        v31 = a11;
      v32 = L"NULL";
      if ( a10 )
        v17 = a10;
      v33 = L"NULL";
      if ( a9 )
        v30 = a9;
      v34 = L"NULL";
      if ( a8 )
        v34 = a8;
      if ( a7 )
        v33 = a7;
      if ( a6 )
        v32 = a6;
      ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, const wchar_t *, __int64, const wchar_t *, __int64, const wchar_t *, __int64, const char *, __int64, const char *, __int64, const char *, __int64, _QWORD))qword_1400DF3E8)(
        *(struct _DEVICE_OBJECT **)((char *)&DeviceObject->AttachedDevice + v43),
        43LL,
        a5,
        a4,
        v32,
        v18,
        v33,
        v28,
        v34,
        v26,
        v30,
        v24,
        v17,
        v22,
        v31,
        v20,
        0LL);
    }
  }
  if ( a11 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( a11[v35] );
  }
  if ( a10 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( a10[v36] );
  }
  if ( a9 )
  {
    v37 = -1LL;
    do
      ++v37;
    while ( a9[v37] );
  }
  if ( a8 )
  {
    v38 = -1LL;
    do
      ++v38;
    while ( a8[v38] );
  }
  if ( a7 )
  {
    v39 = -1LL;
    do
      ++v39;
    while ( a7[v39] );
  }
  if ( a6 )
  {
    do
      ++v15;
    while ( a6[v15] );
  }
  v40 = L"NULL";
  if ( a6 )
    v40 = a6;
  LOWORD(v42) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v42, (__int64)v40);
}
