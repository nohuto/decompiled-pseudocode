__int64 __fastcall WPP_RECORDER_SF_qss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        const char *a7,
        const char *a8)
{
  const char *v8; // rsi
  const char *v10; // rdi
  __int64 v11; // rbx
  unsigned __int64 v13; // r14
  unsigned int v14; // ebp
  unsigned int v15; // r12d
  int v16; // eax
  unsigned __int8 v17; // cf
  __int64 v18; // r8
  __int64 v19; // r8
  const char *v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rdx
  const char *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbx
  int v28; // [rsp+20h] [rbp-68h]
  __int64 v29; // [rsp+60h] [rbp-28h]
  __int64 v30; // [rsp+68h] [rbp-20h]

  v8 = a7;
  v10 = a8;
  v11 = -1LL;
  v13 = (unsigned __int64)a3 >> 16;
  v14 = a2;
  v15 = a4;
  v16 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v13 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  v17 = _bittest(&v16, (a3 - 1) & 0x1F);
  v18 = 5LL;
  if ( v17 && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v13 + 1) >= a2 )
  {
    if ( a8 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( a8[v19] );
      v18 = v19 + 1;
    }
    v20 = a8;
    if ( !a8 )
      v20 = "NULL";
    if ( a7 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a7[v21] );
      v22 = v21 + 1;
    }
    else
    {
      v22 = 5LL;
    }
    v23 = a7;
    if ( !a7 )
      v23 = "NULL";
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v13),
      43LL,
      a5,
      v15,
      &a6,
      8LL,
      v23,
      v22,
      v20,
      v18,
      0LL);
  }
  if ( v10 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( v10[v24] );
    v25 = v24 + 1;
  }
  else
  {
    v25 = 5LL;
  }
  if ( !v10 )
    v10 = "NULL";
  if ( v8 )
  {
    do
      ++v11;
    while ( v8[v11] );
    v26 = v11 + 1;
  }
  else
  {
    v26 = 5LL;
  }
  if ( !v8 )
    v8 = "NULL";
  LOWORD(v28) = v15;
  return WppAutoLogTrace(a1, v14, a3, a5, v28, &a6, 8LL, v8, v26, v10, v25, 0LL, v29, v30);
}
