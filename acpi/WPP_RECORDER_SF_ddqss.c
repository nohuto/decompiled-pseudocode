/*
 * XREFs of WPP_RECORDER_SF_dDqss @ 0x1C0027D7C
 * Callers:
 *     ACPIFanPrepareImpactZoneSupport @ 0x1C0084960 (ACPIFanPrepareImpactZoneSupport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_dDqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        const char *a9,
        const char *a10)
{
  const char *v10; // rsi
  __int64 v11; // rbx
  const char *v12; // rdi
  __int64 v15; // rdx
  __int64 v16; // rdx
  const char *v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rcx
  const char *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rbx
  int v24; // [rsp+20h] [rbp-78h]

  v10 = a9;
  v11 = -1LL;
  v12 = a10;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a10 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a10[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = a10;
    if ( !a10 )
      v17 = "NULL";
    if ( a9 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a9[v18] );
      v19 = v18 + 1;
    }
    else
    {
      v19 = 5LL;
    }
    v20 = a9;
    if ( !a9 )
      v20 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_851d451e9c8635d57712462b586962d1_Traceguids,
      a4,
      &a6,
      4LL,
      &a7,
      4LL,
      &a8,
      8LL,
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
    while ( v12[v21] );
  }
  if ( !v12 )
    v12 = "NULL";
  if ( v10 )
  {
    do
      ++v11;
    while ( v10[v11] );
    v22 = v11 + 1;
  }
  else
  {
    v22 = 5LL;
  }
  if ( !v10 )
    v10 = "NULL";
  LOWORD(v24) = a4;
  return WppAutoLogTrace(
           a1,
           2LL,
           16LL,
           &WPP_851d451e9c8635d57712462b586962d1_Traceguids,
           v24,
           &a6,
           4LL,
           &a7,
           4LL,
           &a8,
           8LL,
           v10,
           v22,
           v12);
}
