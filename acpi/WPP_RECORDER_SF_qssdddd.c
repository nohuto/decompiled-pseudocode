__int64 WPP_RECORDER_SF_qssdddd(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, ...)
{
  const char *v5; // rsi
  const char *v6; // rdi
  __int64 v7; // rbx
  __int64 v9; // r8
  __int64 v10; // rdx
  const char *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  int v16; // [rsp+20h] [rbp-98h]
  __int64 v17; // [rsp+E8h] [rbp+30h] BYREF
  va_list va; // [rsp+E8h] [rbp+30h]
  const char *v19; // [rsp+F0h] [rbp+38h]
  const char *v20; // [rsp+F8h] [rbp+40h]
  __int64 v21; // [rsp+100h] [rbp+48h] BYREF
  va_list va1; // [rsp+100h] [rbp+48h]
  va_list va2; // [rsp+108h] [rbp+50h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v17 = va_arg(va1, _QWORD);
  v19 = va_arg(va1, const char *);
  v20 = va_arg(va1, const char *);
  va_copy(va2, va1);
  v21 = va_arg(va2, _QWORD);
  v5 = v19;
  v6 = v20;
  v7 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( v20 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( v20[v9] );
    }
    if ( v19 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( v19[v10] );
    }
    v11 = v19;
    if ( !v19 )
      v11 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_93ea93d83ec03a4680542420a9c7ec01_Traceguids,
      18LL,
      (__int64 *)va,
      8LL,
      v11);
  }
  if ( v6 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v6[v12] );
    v13 = v12 + 1;
  }
  else
  {
    v13 = 5LL;
  }
  if ( !v6 )
    v6 = "NULL";
  if ( v5 )
  {
    do
      ++v7;
    while ( v5[v7] );
    v14 = v7 + 1;
  }
  else
  {
    v14 = 5LL;
  }
  if ( !v5 )
    v5 = "NULL";
  LOWORD(v16) = 18;
  return WppAutoLogTrace(
           a1,
           4LL,
           16LL,
           &WPP_93ea93d83ec03a4680542420a9c7ec01_Traceguids,
           v16,
           (__int64 *)va,
           8LL,
           v5,
           v14,
           v6,
           v13,
           (__int64 *)va1,
           4LL,
           va2);
}
