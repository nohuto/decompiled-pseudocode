__int64 WPP_RECORDER_AND_TRACE_SF_qssss(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        ...)
{
  const char *v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // r10
  __int64 result; // rax
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  va_list v23; // [rsp+20h] [rbp-98h]
  __int64 v25; // [rsp+100h] [rbp+48h] BYREF
  va_list va; // [rsp+100h] [rbp+48h]
  const char *v27; // [rsp+108h] [rbp+50h]
  __int64 v28; // [rsp+110h] [rbp+58h]
  __int64 v29; // [rsp+118h] [rbp+60h]
  __int64 v30; // [rsp+120h] [rbp+68h]
  va_list va1; // [rsp+128h] [rbp+70h] BYREF

  va_start(va1, a8);
  va_start(va, a8);
  v25 = va_arg(va1, _QWORD);
  v27 = va_arg(va1, const char *);
  v28 = va_arg(va1, _QWORD);
  v29 = va_arg(va1, _QWORD);
  v30 = va_arg(va1, _QWORD);
  v8 = v27;
  v9 = -1LL;
  v10 = v28;
  v12 = v29;
  v13 = v30;
  v14 = a4;
  result = 5LL;
  if ( a2 )
  {
    if ( v30 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( *(_BYTE *)(v30 + v16) );
    }
    if ( v29 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( *(_BYTE *)(v29 + v17) );
    }
    if ( v28 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( *(_BYTE *)(v18 + v28) );
    }
    if ( v27 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( v27[v19] );
    }
    va_copy(v23, va);
    ((void (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
      a1,
      43LL,
      &WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids);
    v14 = a4;
    result = 5LL;
  }
  if ( a3 )
  {
    if ( v13 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( *(_BYTE *)(v13 + v20) );
    }
    if ( v12 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( *(_BYTE *)(v12 + v21) );
    }
    if ( v10 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( *(_BYTE *)(v22 + v10) );
    }
    if ( v8 )
    {
      do
        ++v9;
      while ( v8[v9] );
    }
    if ( !v8 )
      v8 = "NULL";
    LOWORD(v23) = 25;
    return WppAutoLogTrace(
             v14,
             3LL,
             23LL,
             &WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
             (_DWORD)v23,
             (__int64 *)va,
             8LL,
             v8);
  }
  return result;
}
