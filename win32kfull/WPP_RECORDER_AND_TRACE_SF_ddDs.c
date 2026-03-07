void __fastcall WPP_RECORDER_AND_TRACE_SF_ddds(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        char a10,
        char a11,
        const char *a12)
{
  __int64 v12; // rdi
  struct RECORDER_LOG__ *v13; // rbp
  __int64 v14; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  const char *v19; // rcx
  int v20; // [rsp+20h] [rbp-68h]

  v12 = (__int64)a12;
  v13 = gFullLog;
  v14 = -1LL;
  if ( a2 )
  {
    if ( a12 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a12[v17] );
      v18 = v17 + 1;
    }
    else
    {
      v18 = 5LL;
    }
    v19 = a12;
    if ( !a12 )
      v19 = "NULL";
    ((void (__fastcall *)(__int64, __int64, void *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      &WPP_ef419e50bb4b3068d691848aa4bd044d_Traceguids,
      14LL,
      &a9,
      4LL,
      &a10,
      4LL,
      &a11,
      4LL,
      v19,
      v18,
      0LL);
  }
  if ( a3 )
  {
    if ( v12 )
    {
      do
        ++v14;
      while ( *(_BYTE *)(v12 + v14) );
    }
    LOWORD(v20) = 14;
    WppAutoLogTrace(v13, 5LL, 27LL, &WPP_ef419e50bb4b3068d691848aa4bd044d_Traceguids, v20, &a9, 4LL, &a10);
  }
}
