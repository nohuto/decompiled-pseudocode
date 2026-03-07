__int64 WPP_RECORDER_SF_sdqD(__int64 a1, _DWORD a2, _DWORD a3, unsigned __int16 a4, __int64 a5, const char *a6, ...)
{
  const char *v6; // rdi
  __int64 v7; // rbx
  __int64 v10; // rdx
  __int64 v11; // rdx
  const char *v12; // rcx
  __int64 v13; // rbx
  int v15; // [rsp+20h] [rbp-58h]
  __int64 v16; // [rsp+B0h] [rbp+38h] BYREF
  va_list va; // [rsp+B0h] [rbp+38h]
  __int64 v18; // [rsp+B8h] [rbp+40h] BYREF
  va_list va1; // [rsp+B8h] [rbp+40h]
  va_list va2; // [rsp+C0h] [rbp+48h] BYREF

  va_start(va2, a6);
  va_start(va1, a6);
  va_start(va, a6);
  v16 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v18 = va_arg(va2, _QWORD);
  v6 = a6;
  v7 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a6 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( a6[v10] );
      v11 = v10 + 1;
    }
    else
    {
      v11 = 5LL;
    }
    v12 = a6;
    if ( !a6 )
      v12 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_46f050f87a9c3f86e1bf3d4ff5286087_Traceguids,
      a4,
      v12,
      v11,
      (__int64 *)va);
  }
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v13 = v7 + 1;
  }
  else
  {
    v13 = 5LL;
  }
  if ( !a6 )
    v6 = "NULL";
  LOWORD(v15) = a4;
  return WppAutoLogTrace(
           a1,
           2LL,
           21LL,
           &WPP_46f050f87a9c3f86e1bf3d4ff5286087_Traceguids,
           v15,
           v6,
           v13,
           (__int64 *)va,
           4LL,
           (__int64 *)va1,
           8LL,
           va2,
           4LL,
           0LL);
}
