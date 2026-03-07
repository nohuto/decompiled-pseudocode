void __fastcall WPP_RECORDER_AND_TRACE_SF_qqDdS(
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
        char a12,
        const wchar_t *a13)
{
  const wchar_t *v13; // rbx
  __int64 v14; // rdi
  struct RECORDER_LOG__ *v15; // r14
  __int64 v18; // rsi
  bool v19; // zf
  __int64 v20; // rax
  __int64 v21; // rcx
  const wchar_t *v22; // rax
  int v23; // [rsp+20h] [rbp-88h]

  v13 = a13;
  v14 = -1LL;
  v15 = gRimLog;
  v18 = 10LL;
  if ( a2 )
  {
    if ( a13 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( a13[v20] );
      v21 = 2 * v20 + 2;
    }
    else
    {
      v21 = 10LL;
    }
    v22 = a13;
    if ( !a13 )
      v22 = L"NULL";
    ((void (__fastcall *)(__int64, __int64, void *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, const wchar_t *, __int64, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
      a1,
      43LL,
      &WPP_4c0e77e510263a15499569c040c0d872_Traceguids,
      71LL,
      &a9,
      8LL,
      &a10,
      8LL,
      &a11,
      4LL,
      &a12,
      4LL,
      v22,
      v21,
      0LL);
  }
  if ( a3 )
  {
    v19 = v13 == 0LL;
    if ( v13 )
    {
      do
        ++v14;
      while ( v13[v14] );
      v18 = 2 * v14 + 2;
      v19 = v13 == 0LL;
    }
    if ( v19 )
      v13 = L"NULL";
    LOWORD(v23) = 71;
    WppAutoLogTrace(
      v15,
      4LL,
      1LL,
      &WPP_4c0e77e510263a15499569c040c0d872_Traceguids,
      v23,
      &a9,
      8LL,
      &a10,
      8LL,
      &a11,
      4LL,
      &a12,
      4LL,
      v13,
      v18,
      0LL);
  }
}
