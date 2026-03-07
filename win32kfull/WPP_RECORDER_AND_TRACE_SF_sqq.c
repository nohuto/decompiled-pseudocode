void WPP_RECORDER_AND_TRACE_SF_sqq(
        __int64 a1,
        char a2,
        char a3,
        _DWORD a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        const char *a9,
        ...)
{
  const char *v9; // rdi
  struct RECORDER_LOG__ *v10; // rbp
  __int64 v11; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  const char *v16; // rcx
  __int64 v17; // rbx
  int v18; // [rsp+20h] [rbp-58h]
  __int64 v19; // [rsp+C8h] [rbp+50h] BYREF
  va_list va; // [rsp+C8h] [rbp+50h]
  va_list va1; // [rsp+D0h] [rbp+58h] BYREF

  va_start(va1, a9);
  va_start(va, a9);
  v19 = va_arg(va1, _QWORD);
  v9 = a9;
  v10 = gFullLog;
  v11 = -1LL;
  if ( a2 )
  {
    if ( a9 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a9[v14] );
      v15 = v14 + 1;
    }
    else
    {
      v15 = 5LL;
    }
    v16 = a9;
    if ( !a9 )
      v16 = "NULL";
    ((void (__fastcall *)(__int64, __int64, void *, __int64, const char *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      &WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids,
      57LL,
      v16,
      v15,
      (__int64 *)va,
      8LL,
      va1,
      8LL,
      0LL);
  }
  if ( a3 )
  {
    if ( a9 )
    {
      do
        ++v11;
      while ( a9[v11] );
      v17 = v11 + 1;
    }
    else
    {
      v17 = 5LL;
    }
    if ( !a9 )
      v9 = "NULL";
    LOWORD(v18) = 57;
    WppAutoLogTrace(v10, 4LL, 14LL, &WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids, v18, v9, v17, (__int64 *)va);
  }
}
