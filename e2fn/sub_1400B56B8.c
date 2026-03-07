__int64 __fastcall sub_1400B56B8(
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
        const char *a11,
        const char *a12)
{
  __int64 v12; // rdi
  unsigned __int64 v13; // r14
  __int64 v14; // r13
  int v15; // eax
  __int64 v16; // r12
  __int64 v17; // r12
  __int64 v18; // r15
  __int64 v19; // r15
  __int64 v20; // r14
  __int64 v21; // r14
  __int64 v22; // rbp
  __int64 v23; // rbp
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  const char *v27; // rbx
  const char *v28; // r11
  const char *v29; // r10
  const wchar_t *v30; // rcx
  const char *v31; // r9
  const wchar_t *v32; // rdx
  const wchar_t *v33; // r8
  __int64 v34; // rbx
  __int64 v35; // r11
  __int64 v36; // r9
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rax
  const wchar_t *v40; // r15
  int v42; // [rsp+20h] [rbp-E8h]
  __int64 v43; // [rsp+A0h] [rbp-68h]
  __int64 v44; // [rsp+A8h] [rbp-60h]
  __int64 v45; // [rsp+B0h] [rbp-58h]

  v12 = -1LL;
  v13 = (unsigned __int64)a3 >> 16;
  v14 = 10LL;
  v15 = *((_DWORD *)&DeviceObject->Timer + 20 * v13 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v15, (a3 - 1) & 0x1F) )
  {
    v45 = 80 * v13;
    if ( *((_BYTE *)&DeviceObject->Timer + 80 * v13 + 1) >= a2 )
    {
      if ( a12 )
      {
        v16 = -1LL;
        do
          ++v16;
        while ( a12[v16] );
        v17 = v16 + 1;
      }
      else
      {
        v17 = 5LL;
      }
      if ( a11 )
      {
        v18 = -1LL;
        do
          ++v18;
        while ( a11[v18] );
        v19 = v18 + 1;
      }
      else
      {
        v19 = 5LL;
      }
      if ( a10 )
      {
        v20 = -1LL;
        do
          ++v20;
        while ( a10[v20] );
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
        v43 = 2 * v24 + 2;
      }
      else
      {
        v43 = 10LL;
      }
      if ( a7 )
      {
        v25 = -1LL;
        do
          ++v25;
        while ( a7[v25] );
        v44 = 2 * v25 + 2;
      }
      else
      {
        v44 = 10LL;
      }
      if ( a6 )
      {
        v26 = -1LL;
        do
          ++v26;
        while ( a6[v26] );
        v14 = 2 * v26 + 2;
      }
      v27 = "NULL";
      v28 = "NULL";
      if ( a12 )
        v27 = a12;
      v29 = "NULL";
      v30 = L"NULL";
      v31 = "NULL";
      if ( a11 )
        v28 = a11;
      v32 = L"NULL";
      if ( a10 )
        v29 = a10;
      v33 = L"NULL";
      if ( a9 )
        v31 = a9;
      if ( a8 )
        v33 = a8;
      if ( a7 )
        v32 = a7;
      if ( a6 )
        v30 = a6;
      ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, const wchar_t *, __int64, const wchar_t *, __int64, const wchar_t *, __int64, const char *, __int64, const char *, __int64, const char *, __int64, const char *, __int64, _QWORD))qword_1400DF3E8)(
        *(struct _DEVICE_OBJECT **)((char *)&DeviceObject->AttachedDevice + v45),
        43LL,
        a5,
        a4,
        v30,
        v14,
        v32,
        v44,
        v33,
        v43,
        v31,
        v23,
        v29,
        v21,
        v28,
        v19,
        v27,
        v17,
        0LL);
    }
  }
  if ( a12 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( a12[v34] );
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
      ++v12;
    while ( a6[v12] );
  }
  v40 = L"NULL";
  if ( a6 )
    v40 = a6;
  LOWORD(v42) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v42, (__int64)v40);
}
