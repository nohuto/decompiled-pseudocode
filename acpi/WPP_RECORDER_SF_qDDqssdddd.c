__int64 __fastcall WPP_RECORDER_SF_qDDqssdddd(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        char a7,
        char a8,
        char a9,
        const char *a10,
        __int64 a11)
{
  const char *v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  char *v19; // [rsp+28h] [rbp-A9h]

  v11 = a10;
  v12 = a11;
  v13 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a11 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( *(_BYTE *)(a11 + v15) );
    }
    if ( a10 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a10[v16] );
    }
    v19 = &a6;
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_93ea93d83ec03a4680542420a9c7ec01_Traceguids);
  }
  if ( v12 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( *(_BYTE *)(v12 + v17) );
  }
  if ( v11 )
  {
    do
      ++v13;
    while ( v11[v13] );
  }
  if ( !v11 )
    v11 = "NULL";
  LOWORD(v19) = 12;
  return WppAutoLogTrace(
           a1,
           4LL,
           16LL,
           &WPP_93ea93d83ec03a4680542420a9c7ec01_Traceguids,
           (_DWORD)v19,
           &a6,
           8LL,
           &a7,
           4LL,
           &a8,
           4LL,
           &a9,
           8LL,
           v11);
}
