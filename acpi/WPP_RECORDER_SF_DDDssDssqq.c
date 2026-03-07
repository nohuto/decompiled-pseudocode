__int64 WPP_RECORDER_SF_DDDssDssqq(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  const char *v5; // r15
  const char *v6; // r14
  __int64 v7; // rsi
  __int64 v8; // r10
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r9
  const char *v14; // r13
  __int64 v15; // r8
  const char *v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rdx
  const char *v19; // r11
  __int64 v20; // rcx
  __int64 v21; // rcx
  const char *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rbx
  int v28; // [rsp+28h] [rbp-A9h]
  __int64 v30; // [rsp+130h] [rbp+5Fh] BYREF
  va_list va; // [rsp+130h] [rbp+5Fh]
  __int64 v32; // [rsp+138h] [rbp+67h] BYREF
  va_list va1; // [rsp+138h] [rbp+67h]
  __int64 v34; // [rsp+140h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+140h] [rbp+6Fh]
  const char *v36; // [rsp+148h] [rbp+77h]
  const char *v37; // [rsp+150h] [rbp+7Fh]
  __int64 v38; // [rsp+158h] [rbp+87h] BYREF
  va_list va3; // [rsp+158h] [rbp+87h]
  const char *v40; // [rsp+160h] [rbp+8Fh]
  const char *v41; // [rsp+168h] [rbp+97h]
  __int64 v42; // [rsp+170h] [rbp+9Fh] BYREF
  va_list va4; // [rsp+170h] [rbp+9Fh]
  va_list va5; // [rsp+178h] [rbp+A7h] BYREF

  va_start(va5, a5);
  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v30 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v32 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v34 = va_arg(va3, _QWORD);
  v36 = va_arg(va3, const char *);
  v37 = va_arg(va3, const char *);
  va_copy(va4, va3);
  v38 = va_arg(va4, _QWORD);
  v40 = va_arg(va4, const char *);
  v41 = va_arg(va4, const char *);
  va_copy(va5, va4);
  v42 = va_arg(va5, _QWORD);
  v5 = v36;
  v6 = v37;
  v7 = (__int64)v40;
  v8 = a1;
  v9 = (__int64)v41;
  v10 = -1LL;
  v11 = 5LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( v41 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( v41[v12] );
      v13 = v12 + 1;
    }
    else
    {
      v13 = 5LL;
    }
    v14 = v41;
    if ( !v41 )
      v14 = "NULL";
    if ( v40 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( v40[v15] );
      v11 = v15 + 1;
    }
    v16 = v40;
    if ( !v40 )
      v16 = "NULL";
    if ( v37 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( v37[v17] );
      v18 = v17 + 1;
    }
    else
    {
      v18 = 5LL;
    }
    v19 = v37;
    if ( !v37 )
      v19 = "NULL";
    if ( v36 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( v36[v20] );
      v21 = v20 + 1;
    }
    else
    {
      v21 = 5LL;
    }
    v22 = v36;
    if ( !v36 )
      v22 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, const char *, __int64, const char *, __int64, __int64 *, __int64, const char *, __int64, const char *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_939ab7ce094a3f0c5044c61116540ed5_Traceguids,
      16LL,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      4LL,
      v22,
      v21,
      v19,
      v18,
      (__int64 *)va3,
      4LL,
      v16,
      v11,
      v14,
      v13,
      (__int64 *)va4,
      8LL,
      va5,
      8LL,
      0LL);
    v8 = a1;
    v5 = v36;
  }
  if ( v9 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( *(_BYTE *)(v9 + v23) );
  }
  if ( v7 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( *(_BYTE *)(v7 + v24) );
  }
  if ( v6 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( v6[v25] );
  }
  if ( !v6 )
    v6 = "NULL";
  if ( v5 )
  {
    do
      ++v10;
    while ( v5[v10] );
    v26 = v10 + 1;
  }
  else
  {
    v26 = 5LL;
  }
  if ( !v5 )
    v5 = "NULL";
  LOWORD(v28) = 16;
  return WppAutoLogTrace(
           v8,
           4LL,
           20LL,
           &WPP_939ab7ce094a3f0c5044c61116540ed5_Traceguids,
           v28,
           (__int64 *)va,
           4LL,
           (__int64 *)va1,
           4LL,
           (__int64 *)va2,
           4LL,
           v5,
           v26,
           v6);
}
