__int64 __fastcall WPP_RECORDER_SF_sqss(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        const char *a6,
        char a7,
        const char *a8,
        const char *a9)
{
  const char *v9; // rbp
  const char *v10; // rsi
  __int64 v11; // r11
  const char *v12; // rdi
  unsigned int v13; // r13d
  unsigned int v14; // r12d
  __int64 v15; // rbx
  unsigned __int64 v16; // r9
  int v17; // eax
  __int64 v18; // r14
  __int64 v19; // r9
  __int64 v20; // r9
  const char *v21; // r11
  __int64 v22; // r8
  __int64 v23; // r8
  const char *v24; // r10
  __int64 v25; // rdx
  __int64 v26; // rdx
  const char *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rbx
  int v34; // [rsp+20h] [rbp-88h]
  unsigned int v36; // [rsp+C0h] [rbp+18h]

  v36 = a3;
  v9 = a6;
  v10 = a8;
  v11 = a1;
  v12 = a9;
  v13 = a4;
  v14 = a2;
  v15 = -1LL;
  v16 = (unsigned __int64)(unsigned int)a3 >> 16;
  v17 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v16 + (((unsigned int)(a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v17, (a3 - 1) & 0x1F) )
  {
    v18 = 10 * v16;
    if ( *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v16 + 1) >= a2 )
    {
      if ( a9 )
      {
        v19 = -1LL;
        do
          ++v19;
        while ( a9[v19] );
        v20 = v19 + 1;
      }
      else
      {
        v20 = 5LL;
      }
      v21 = a9;
      if ( !a9 )
        v21 = "NULL";
      if ( a8 )
      {
        v22 = -1LL;
        do
          ++v22;
        while ( a8[v22] );
        v23 = v22 + 1;
      }
      else
      {
        v23 = 5LL;
      }
      v24 = a8;
      if ( !a8 )
        v24 = "NULL";
      if ( a6 )
      {
        v25 = -1LL;
        do
          ++v25;
        while ( a6[v25] );
        v26 = v25 + 1;
      }
      else
      {
        v26 = 5LL;
      }
      v27 = a6;
      if ( !a6 )
        v27 = "NULL";
      ((void (__fastcall *)(_QWORD, __int64, const ULONG_PTR *, _QWORD, const char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
        *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + v18),
        43LL,
        &WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
        v13,
        v27,
        v26,
        &a7,
        8LL,
        v24,
        v23,
        v21,
        v20,
        0LL);
      a3 = v36;
      v11 = a1;
    }
  }
  if ( v12 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( v12[v28] );
    v29 = v28 + 1;
  }
  else
  {
    v29 = 5LL;
  }
  if ( !v12 )
    v12 = "NULL";
  if ( v10 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( v10[v30] );
    v31 = v30 + 1;
  }
  else
  {
    v31 = 5LL;
  }
  if ( !v10 )
    v10 = "NULL";
  if ( a6 )
  {
    do
      ++v15;
    while ( a6[v15] );
    v32 = v15 + 1;
  }
  else
  {
    v32 = 5LL;
  }
  if ( !a6 )
    v9 = "NULL";
  LOWORD(v34) = v13;
  return WppAutoLogTrace(
           v11,
           v14,
           a3,
           &WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
           v34,
           v9,
           v32,
           &a7,
           8LL,
           v10,
           v31,
           v12,
           v29,
           0LL);
}
