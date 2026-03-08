/*
 * XREFs of WPP_RECORDER_SF_ssssssqss @ 0x1C00181BC
 * Callers:
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C007DF10 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_ssssssqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const char *a6,
        const char *a7,
        const char *a8,
        const char *a9,
        const char *a10,
        __int64 a11,
        char a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // rbx
  __int64 v15; // r13
  __int64 v16; // r15
  __int64 v17; // rbp
  __int64 v18; // rsi
  __int64 v19; // r11
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // rdx
  const char *v23; // rcx
  __int64 v24; // r11
  __int64 v25; // r10
  __int64 v26; // r9
  const char *v27; // r14
  bool v28; // zf
  __int64 v29; // r8
  const char *v30; // r15
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rax
  const char *v34; // r12
  __int64 v35; // rcx
  __int64 v36; // rcx
  const char *v37; // r13
  bool v38; // zf
  __int64 v39; // rax
  const char *v40; // rdi
  __int64 v41; // rbx
  int v43; // [rsp+20h] [rbp-E8h]

  v14 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a14 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( *(_BYTE *)(a14 + v15) );
    }
    if ( a13 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( *(_BYTE *)(a13 + v16) );
    }
    if ( a11 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( *(_BYTE *)(a11 + v17) );
    }
    if ( a10 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a10[v18] );
    }
    if ( a9 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( a9[v19] );
    }
    if ( a8 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( a8[v20] );
    }
    if ( a7 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a7[v21] );
    }
    if ( a6 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( a6[v22] );
    }
    WORD1(v23) = WORD1(a6);
    if ( !a6 )
      v23 = "NULL";
    HIWORD(v43) = WORD1(v23);
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_efe410a963c03a77fa130710cec25e42_Traceguids);
  }
  if ( a14 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( *(_BYTE *)(a14 + v24) );
  }
  if ( a13 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( *(_BYTE *)(a13 + v25) );
  }
  if ( a11 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( *(_BYTE *)(v26 + a11) );
  }
  v27 = a10;
  v28 = a10 == 0LL;
  if ( a10 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( a10[v29] );
    v28 = a10 == 0LL;
  }
  v30 = a9;
  if ( v28 )
    v27 = "NULL";
  if ( a9 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( a9[v31] );
    v32 = v31 + 1;
    v33 = 5LL;
  }
  else
  {
    v33 = 5LL;
    v32 = 5LL;
  }
  if ( !a9 )
    v30 = "NULL";
  v34 = a8;
  if ( a8 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( a8[v35] );
    v36 = v35 + 1;
  }
  else
  {
    v36 = 5LL;
  }
  v37 = a7;
  if ( !a8 )
    v34 = "NULL";
  v38 = a7 == 0LL;
  if ( a7 )
  {
    v39 = -1LL;
    do
      ++v39;
    while ( a7[v39] );
    v33 = v39 + 1;
    v38 = a7 == 0LL;
  }
  if ( v38 )
    v37 = "NULL";
  v40 = a6;
  if ( a6 )
  {
    do
      ++v14;
    while ( a6[v14] );
    v41 = v14 + 1;
  }
  else
  {
    v41 = 5LL;
  }
  if ( !a6 )
    v40 = "NULL";
  LOWORD(v43) = 22;
  return WppAutoLogTrace(
           a1,
           4LL,
           9LL,
           &WPP_efe410a963c03a77fa130710cec25e42_Traceguids,
           v43,
           v40,
           v41,
           v37,
           v33,
           v34,
           v36,
           v30,
           v32,
           v27);
}
