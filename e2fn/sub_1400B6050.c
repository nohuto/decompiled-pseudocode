__int64 __fastcall sub_1400B6050(
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
        const char *a12,
        const char *a13,
        const char *a14,
        const char *a15)
{
  __int64 v15; // r14
  unsigned __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // r13
  __int64 v25; // r12
  __int64 v26; // r12
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  const char *v30; // rbp
  const char *v31; // rsi
  const char *v32; // rdi
  const char *v33; // rbx
  const wchar_t *v34; // rcx
  const char *v35; // r11
  const wchar_t *v36; // rdx
  const char *v37; // r9
  const char *v38; // r10
  const wchar_t *v39; // r8
  __int64 v40; // rax
  __int64 v41; // r13
  __int64 v42; // r12
  __int64 v43; // rbp
  __int64 v44; // rsi
  __int64 v45; // rdi
  __int64 v46; // r15
  __int64 v47; // rax
  __int64 v48; // rax
  const wchar_t *v49; // rbx
  int v51; // [rsp+20h] [rbp-158h]
  __int64 v52; // [rsp+D8h] [rbp-A0h]
  __int64 v53; // [rsp+E0h] [rbp-98h]
  __int64 v54; // [rsp+E8h] [rbp-90h]
  __int64 v55; // [rsp+F0h] [rbp-88h]
  __int64 v56; // [rsp+F8h] [rbp-80h]
  __int64 v57; // [rsp+100h] [rbp-78h]
  __int64 v58; // [rsp+108h] [rbp-70h]
  __int64 v59; // [rsp+110h] [rbp-68h]
  __int64 v60; // [rsp+120h] [rbp-58h]

  v15 = -1LL;
  v16 = (unsigned __int64)a3 >> 16;
  v17 = *((_DWORD *)&DeviceObject->Timer + 20 * v16 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v17, (a3 - 1) & 0x1F) )
  {
    v60 = 80 * v16;
    if ( *((_BYTE *)&DeviceObject->Timer + 80 * v16 + 1) >= a2 )
    {
      if ( a15 )
      {
        v18 = -1LL;
        do
          ++v18;
        while ( a15[v18] );
        v52 = v18 + 1;
      }
      else
      {
        v52 = 5LL;
      }
      if ( a14 )
      {
        v19 = -1LL;
        do
          ++v19;
        while ( a14[v19] );
        v53 = v19 + 1;
      }
      else
      {
        v53 = 5LL;
      }
      if ( a13 )
      {
        v20 = -1LL;
        do
          ++v20;
        while ( a13[v20] );
        v54 = v20 + 1;
      }
      else
      {
        v54 = 5LL;
      }
      if ( a12 )
      {
        v21 = -1LL;
        do
          ++v21;
        while ( a12[v21] );
        v55 = v21 + 1;
      }
      else
      {
        v55 = 5LL;
      }
      if ( a11 )
      {
        v22 = -1LL;
        do
          ++v22;
        while ( a11[v22] );
        v56 = v22 + 1;
      }
      else
      {
        v56 = 5LL;
      }
      if ( a10 )
      {
        v23 = -1LL;
        do
          ++v23;
        while ( a10[v23] );
        v24 = v23 + 1;
      }
      else
      {
        v24 = 5LL;
      }
      if ( a9 )
      {
        v25 = -1LL;
        do
          ++v25;
        while ( a9[v25] );
        v26 = v25 + 1;
      }
      else
      {
        v26 = 5LL;
      }
      if ( a8 )
      {
        v27 = -1LL;
        do
          ++v27;
        while ( a8[v27] );
        v57 = 2 * v27 + 2;
      }
      else
      {
        v57 = 10LL;
      }
      if ( a7 )
      {
        v28 = -1LL;
        do
          ++v28;
        while ( a7[v28] );
        v58 = 2 * v28 + 2;
      }
      else
      {
        v58 = 10LL;
      }
      if ( a6 )
      {
        v29 = -1LL;
        do
          ++v29;
        while ( a6[v29] );
        v59 = 2 * v29 + 2;
      }
      else
      {
        v59 = 10LL;
      }
      v30 = "NULL";
      v31 = "NULL";
      v32 = "NULL";
      if ( a15 )
        v30 = a15;
      v33 = "NULL";
      v34 = L"NULL";
      v35 = "NULL";
      if ( a14 )
        v31 = a14;
      v36 = L"NULL";
      if ( a13 )
        v32 = a13;
      v37 = "NULL";
      if ( a12 )
        v33 = a12;
      v38 = "NULL";
      v39 = L"NULL";
      if ( a11 )
        v35 = a11;
      if ( a10 )
        v38 = a10;
      if ( a9 )
        v37 = a9;
      if ( a8 )
        v39 = a8;
      if ( a7 )
        v36 = a7;
      if ( a6 )
        v34 = a6;
      ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, const wchar_t *, __int64, const wchar_t *, __int64, const wchar_t *, __int64, const char *, __int64, const char *, __int64, const char *, __int64, const char *, __int64, const char *, __int64, const char *, __int64, const char *, __int64, _QWORD))qword_1400DF3E8)(
        *(struct _DEVICE_OBJECT **)((char *)&DeviceObject->AttachedDevice + v60),
        43LL,
        a5,
        a4,
        v34,
        v59,
        v36,
        v58,
        v39,
        v57,
        v37,
        v26,
        v38,
        v24,
        v35,
        v56,
        v33,
        v55,
        v32,
        v54,
        v31,
        v53,
        v30,
        v52,
        0LL);
    }
  }
  if ( a15 )
  {
    v40 = -1LL;
    do
      ++v40;
    while ( a15[v40] );
  }
  if ( a14 )
  {
    v41 = -1LL;
    do
      ++v41;
    while ( a14[v41] );
  }
  if ( a13 )
  {
    v42 = -1LL;
    do
      ++v42;
    while ( a13[v42] );
  }
  if ( a12 )
  {
    v43 = -1LL;
    do
      ++v43;
    while ( a12[v43] );
  }
  if ( a11 )
  {
    v44 = -1LL;
    do
      ++v44;
    while ( a11[v44] );
  }
  if ( a10 )
  {
    v45 = -1LL;
    do
      ++v45;
    while ( a10[v45] );
  }
  if ( a9 )
  {
    v46 = -1LL;
    do
      ++v46;
    while ( a9[v46] );
  }
  if ( a8 )
  {
    v47 = -1LL;
    do
      ++v47;
    while ( a8[v47] );
  }
  if ( a7 )
  {
    v48 = -1LL;
    do
      ++v48;
    while ( a7[v48] );
  }
  if ( a6 )
  {
    do
      ++v15;
    while ( a6[v15] );
  }
  v49 = L"NULL";
  if ( a6 )
    v49 = a6;
  LOWORD(v51) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v51, (__int64)v49);
}
