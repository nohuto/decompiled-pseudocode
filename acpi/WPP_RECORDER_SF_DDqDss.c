/*
 * XREFs of WPP_RECORDER_SF_DDqDss @ 0x1C005E1C8
 * Callers:
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1C009B1A8 (ProcessorpFindAffinitizedIdtEntries.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_DDqDss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11)
{
  const char *v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v15; // rdx
  __int64 v16; // rdx
  const char *v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rcx
  const char *v20; // rax
  __int64 v21; // rax
  int v23; // [rsp+20h] [rbp-88h]

  v11 = a10;
  v12 = (__int64)a11;
  v13 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a11 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a11[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = a11;
    if ( !a11 )
      v17 = "NULL";
    if ( a10 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a10[v18] );
      v19 = v18 + 1;
    }
    else
    {
      v19 = 5LL;
    }
    v20 = a10;
    if ( !a10 )
      v20 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_8676c2cce616384aea43def24ed881e9_Traceguids,
      11LL,
      &a6,
      4LL,
      &a7,
      4LL,
      &a8,
      8LL,
      &a9,
      4LL,
      v20,
      v19,
      v17,
      v16,
      0LL);
  }
  if ( v12 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( *(_BYTE *)(v12 + v21) );
  }
  if ( v11 )
  {
    do
      ++v13;
    while ( v11[v13] );
  }
  if ( !v11 )
    v11 = "NULL";
  LOWORD(v23) = 11;
  return WppAutoLogTrace(
           a1,
           4LL,
           20LL,
           &WPP_8676c2cce616384aea43def24ed881e9_Traceguids,
           v23,
           &a6,
           4LL,
           &a7,
           4LL,
           &a8,
           8LL,
           &a9,
           4LL,
           v11);
}
