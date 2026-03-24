/*
 * XREFs of WPP_RECORDER_SF_qLdqss @ 0x1C001D964
 * Callers:
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C0011F20 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C001BE00 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase2 @ 0x1C002ECE0 (ACPIDevicePowerProcessPhase1DeviceSubPhase2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qLdqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11)
{
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v16; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  const char *v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rdx
  const char *v23; // rax
  int v24; // [rsp+20h] [rbp-88h]

  v11 = (__int64)a11;
  v12 = -1LL;
  v13 = (__int64)a10;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a11 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a11[v18] );
      v19 = v18 + 1;
    }
    else
    {
      v19 = 5LL;
    }
    v20 = a11;
    if ( !a11 )
      v20 = "NULL";
    if ( a10 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a10[v21] );
      v22 = v21 + 1;
    }
    else
    {
      v22 = 5LL;
    }
    v23 = a10;
    if ( !a10 )
      v23 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, const ULONG_PTR *, _QWORD, char *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_095c070a05c4368bad966ca54a81e920_Traceguids,
      a4,
      &a6,
      8LL,
      &a7,
      4LL,
      &a8,
      4LL,
      &a9,
      8LL,
      v23,
      v22,
      v20,
      v19,
      0LL);
  }
  if ( v11 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *(_BYTE *)(v11 + v16) );
  }
  if ( v13 )
  {
    do
      ++v12;
    while ( *(_BYTE *)(v13 + v12) );
  }
  LOWORD(v24) = a4;
  return WppAutoLogTrace(a1, 4LL, 10LL, &WPP_095c070a05c4368bad966ca54a81e920_Traceguids, v24, &a6);
}
