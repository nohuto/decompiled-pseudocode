/*
 * XREFs of WPP_RECORDER_SF_qsdqss @ 0x1C000A844
 * Callers:
 *     ACPIDockIrpQueryDeviceRelations @ 0x1C007B010 (ACPIDockIrpQueryDeviceRelations.c)
 *     ACPIDockIrpQueryID @ 0x1C007B410 (ACPIDockIrpQueryID.c)
 *     ACPIBusIrpQueryDeviceRelations @ 0x1C007F9F0 (ACPIBusIrpQueryDeviceRelations.c)
 *     ACPIBusIrpQueryId @ 0x1C0080330 (ACPIBusIrpQueryId.c)
 *     ACPIInternalDeviceQueryDeviceRelations @ 0x1C0087190 (ACPIInternalDeviceQueryDeviceRelations.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qsdqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        const char *a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11)
{
  const char *v11; // rbp
  __int64 v12; // rbx
  const char *v13; // rsi
  __int64 v15; // rdi
  unsigned int v16; // r14d
  __int64 v17; // r9
  __int64 v18; // r9
  const char *v19; // r11
  __int64 v20; // r8
  __int64 v21; // r8
  const char *v22; // r10
  __int64 v23; // rdx
  __int64 v24; // rdx
  const char *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rbx
  int v30; // [rsp+20h] [rbp-88h]

  v11 = a7;
  v12 = -1LL;
  v13 = a10;
  v15 = (__int64)a11;
  v16 = a4;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a11 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a11[v17] );
      v18 = v17 + 1;
    }
    else
    {
      v18 = 5LL;
    }
    v19 = a11;
    if ( !a11 )
      v19 = "NULL";
    if ( a10 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( a10[v20] );
      v21 = v20 + 1;
    }
    else
    {
      v21 = 5LL;
    }
    v22 = a10;
    if ( !a10 )
      v22 = "NULL";
    if ( a7 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( a7[v23] );
      v24 = v23 + 1;
    }
    else
    {
      v24 = 5LL;
    }
    v25 = a7;
    if ( !a7 )
      v25 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, __int64, _QWORD, char *, __int64, const char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      a5,
      v16,
      &a6,
      8LL,
      v25,
      v24,
      &a8,
      4LL,
      &a9,
      8LL,
      v22,
      v21,
      v19,
      v18,
      0LL);
  }
  if ( v15 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( *(_BYTE *)(v15 + v26) );
  }
  if ( v13 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( v13[v27] );
  }
  if ( !v13 )
    v13 = "NULL";
  if ( v11 )
  {
    do
      ++v12;
    while ( v11[v12] );
    v28 = v12 + 1;
  }
  else
  {
    v28 = 5LL;
  }
  if ( !v11 )
    v11 = "NULL";
  LOWORD(v30) = v16;
  return WppAutoLogTrace(a1, 2LL, 5LL, a5, v30, &a6, 8LL, v11, v28, &a8, 4LL, &a9, 8LL, v13);
}
