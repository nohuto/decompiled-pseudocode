/*
 * XREFs of WPP_RECORDER_SF_qsdLqss @ 0x1C000A590
 * Callers:
 *     ACPIDockIrpQueryID @ 0x1C007B410 (ACPIDockIrpQueryID.c)
 *     ACPIBusIrpQueryId @ 0x1C0080330 (ACPIBusIrpQueryId.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qsdLqss(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        const char *a7,
        char a8,
        char a9,
        char a10,
        const char *a11,
        const char *a12)
{
  const char *v12; // rbp
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v16; // rdi
  unsigned int v17; // r15d
  unsigned int v18; // r12d
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r9
  const char *v22; // r11
  __int64 v23; // r8
  const char *v24; // r10
  __int64 v25; // rcx
  __int64 v26; // rcx
  const char *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rbx
  int v32; // [rsp+20h] [rbp-A8h]

  v12 = a7;
  v13 = -1LL;
  v14 = (__int64)a11;
  v16 = (__int64)a12;
  v17 = a2;
  v18 = a4;
  v19 = 5LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= a2 )
  {
    if ( a12 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( a12[v20] );
      v21 = v20 + 1;
    }
    else
    {
      v21 = 5LL;
    }
    v22 = a12;
    if ( !a12 )
      v22 = "NULL";
    if ( a11 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( a11[v23] );
      v19 = v23 + 1;
    }
    v24 = a11;
    if ( !a11 )
      v24 = "NULL";
    if ( a7 )
    {
      v25 = -1LL;
      do
        ++v25;
      while ( a7[v25] );
      v26 = v25 + 1;
    }
    else
    {
      v26 = 5LL;
    }
    v27 = a7;
    if ( !a7 )
      v27 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, __int64, _QWORD, char *, __int64, const char *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      a5,
      v18,
      &a6,
      8LL,
      v27,
      v26,
      &a8,
      4LL,
      &a9,
      4LL,
      &a10,
      8LL,
      v24,
      v19,
      v22,
      v21,
      0LL);
  }
  if ( v16 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( *(_BYTE *)(v16 + v28) );
  }
  if ( v14 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( *(_BYTE *)(v14 + v29) );
  }
  if ( v12 )
  {
    do
      ++v13;
    while ( v12[v13] );
    v30 = v13 + 1;
  }
  else
  {
    v30 = 5LL;
  }
  if ( !v12 )
    v12 = "NULL";
  LOWORD(v32) = v18;
  return WppAutoLogTrace(a1, v17, 5LL, a5, v32, &a6, 8LL, v12, v30, &a8, 4LL, &a9, 4LL, &a10);
}
