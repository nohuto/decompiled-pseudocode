void __fastcall WPP_RECORDER_AND_TRACE_SF_s(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned int a6,
        unsigned __int16 a7,
        __int64 a8,
        const char *a9)
{
  const char *v9; // rdi
  __int64 v10; // rbx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  const char *v17; // rcx
  int v18; // [rsp+20h] [rbp-38h]

  v9 = a9;
  v10 = -1LL;
  if ( a2 )
  {
    if ( a9 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a9[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = a9;
    if ( !a9 )
      v17 = "NULL";
    ((void (__fastcall *)(__int64, __int64, __int64, _QWORD, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      a8,
      a7,
      v17,
      v16,
      0LL);
  }
  if ( a3 )
  {
    if ( a9 )
    {
      do
        ++v10;
      while ( a9[v10] );
      v14 = v10 + 1;
    }
    else
    {
      v14 = 5LL;
    }
    if ( !a9 )
      v9 = "NULL";
    LOWORD(v18) = a7;
    WppAutoLogTrace(a4, a5, a6, a8, v18, v9, v14, 0LL);
  }
}
