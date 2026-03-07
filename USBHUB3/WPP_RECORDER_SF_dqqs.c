__int64 __fastcall WPP_RECORDER_SF_dqqs(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        const char *a9)
{
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  const char *v14; // rax
  int v16; // [rsp+20h] [rbp-58h]

  v9 = (__int64)a9;
  v10 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a9 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a9[v12] );
      v13 = v12 + 1;
    }
    else
    {
      v13 = 5LL;
    }
    v14 = "NULL";
    if ( a9 )
      v14 = a9;
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_f96a94952a6932bc87af489d3d93d325_Traceguids,
      85LL,
      &a6,
      4LL,
      &a7,
      8LL,
      &a8,
      8LL,
      v14,
      v13,
      0LL);
  }
  if ( v9 )
  {
    do
      ++v10;
    while ( *(_BYTE *)(v9 + v10) );
  }
  LOWORD(v16) = 85;
  return WppAutoLogTrace(a1, 2LL, 2LL, &WPP_f96a94952a6932bc87af489d3d93d325_Traceguids, v16, &a6);
}
