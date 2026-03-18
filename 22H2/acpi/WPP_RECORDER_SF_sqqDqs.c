/*
 * XREFs of WPP_RECORDER_SF_sqqDqs @ 0x1C0015A0C
 * Callers:
 *     ACPIBuildDiscoverPowerNodeCompletion @ 0x1C000CE10 (ACPIBuildDiscoverPowerNodeCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_sqqDqs(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        char a8,
        char a9,
        char a10,
        const char *a11)
{
  const char *v11; // rdi
  __int64 v12; // rbx
  __int64 v14; // rcx
  __int64 v15; // rcx
  const char *v16; // rax
  int v18; // [rsp+20h] [rbp-78h]

  v11 = a11;
  v12 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a11 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a11[v14] );
      v15 = v14 + 1;
    }
    else
    {
      v15 = 5LL;
    }
    v16 = a11;
    if ( !a11 )
      v16 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, const ULONG_PTR *, __int64, const char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
      91LL,
      "ACPIBuildDiscoverPowerNodeCompletion",
      37LL,
      &a7,
      8LL,
      &a8,
      8LL,
      &a9,
      4LL,
      &a10,
      8LL,
      v16,
      v15,
      0LL);
  }
  if ( v11 )
  {
    do
      ++v12;
    while ( v11[v12] );
  }
  LOWORD(v18) = 91;
  return WppAutoLogTrace(
           a1,
           4LL,
           10LL,
           &WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
           v18,
           "ACPIBuildDiscoverPowerNodeCompletion",
           37LL,
           &a7,
           8LL,
           &a8,
           8LL,
           &a9,
           4LL,
           &a10);
}
