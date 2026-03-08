/*
 * XREFs of WPP_RECORDER_SF_DDDDqss @ 0x1C003ECEC
 * Callers:
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C003DAE0 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_DDDDqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        const char *a11,
        const char *a12)
{
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v16; // rdx
  __int64 v17; // rdx
  const char *v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rcx
  const char *v21; // rax
  __int64 v22; // rax
  int v24; // [rsp+20h] [rbp-98h]

  v12 = (__int64)a11;
  v13 = (__int64)a12;
  v14 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a12 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a12[v16] );
      v17 = v16 + 1;
    }
    else
    {
      v17 = 5LL;
    }
    v18 = a12;
    if ( !a12 )
      v18 = "NULL";
    if ( a11 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( a11[v19] );
      v20 = v19 + 1;
    }
    else
    {
      v20 = 5LL;
    }
    v21 = a11;
    if ( !a11 )
      v21 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_63048e4611d63d39c0d94317710a082a_Traceguids,
      12LL,
      &a6,
      4LL,
      &a7,
      4LL,
      &a8,
      4LL,
      &a9,
      4LL,
      &a10,
      8LL,
      v21,
      v20,
      v18,
      v17,
      0LL);
  }
  if ( v13 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( *(_BYTE *)(v13 + v22) );
  }
  if ( v12 )
  {
    do
      ++v14;
    while ( *(_BYTE *)(v12 + v14) );
  }
  LOWORD(v24) = 12;
  return WppAutoLogTrace(
           a1,
           4LL,
           15LL,
           &WPP_63048e4611d63d39c0d94317710a082a_Traceguids,
           v24,
           &a6,
           4LL,
           &a7,
           4LL,
           &a8,
           4LL,
           &a9,
           4LL,
           &a10);
}
