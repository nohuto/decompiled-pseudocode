/*
 * XREFs of WPP_RECORDER_SF_qdLqss @ 0x1C0017F78
 * Callers:
 *     ACPIBusIrpQueryCompatibleId @ 0x1C007EE84 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C007F574 (ACPIBusIrpQueryDeviceId.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1C007FC3C (ACPIBusIrpQueryHardwareId.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1C008060C (ACPIBusIrpQueryInstanceId.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qdLqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        int a6,
        int a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11)
{
  __int64 v11; // rbx
  const char *v12; // rsi
  __int64 v14; // rdi
  __int64 v16; // rdx
  __int64 v17; // rdx
  const char *v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rcx
  const char *v21; // rax
  __int64 v22; // rax
  int v24; // [rsp+20h] [rbp-98h]
  int v25; // [rsp+90h] [rbp-28h] BYREF
  __int64 v26; // [rsp+98h] [rbp-20h] BYREF

  v26 = 0LL;
  v11 = -1LL;
  v12 = a10;
  v14 = (__int64)a11;
  v25 = 2;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a11 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a11[v16] );
      v17 = v16 + 1;
    }
    else
    {
      v17 = 5LL;
    }
    v18 = a11;
    if ( !a11 )
      v18 = "NULL";
    if ( a10 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( a10[v19] );
      v20 = v19 + 1;
    }
    else
    {
      v20 = 5LL;
    }
    v21 = a10;
    if ( !a10 )
      v21 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, __int64 *, __int64, int *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_efe410a963c03a77fa130710cec25e42_Traceguids,
      a4,
      &v26,
      8LL,
      &v25,
      4LL,
      &a8,
      4LL,
      &a9,
      8LL,
      v21,
      v20,
      v18,
      v17,
      0LL);
  }
  if ( v14 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( *(_BYTE *)(v14 + v22) );
  }
  if ( v12 )
  {
    do
      ++v11;
    while ( v12[v11] );
  }
  if ( !v12 )
    v12 = "NULL";
  LOWORD(v24) = a4;
  return WppAutoLogTrace(
           a1,
           2LL,
           5LL,
           &WPP_efe410a963c03a77fa130710cec25e42_Traceguids,
           v24,
           &v26,
           8LL,
           &v25,
           4LL,
           &a8,
           4LL,
           &a9,
           8LL,
           v12);
}
