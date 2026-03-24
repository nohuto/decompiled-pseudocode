/*
 * XREFs of WPP_RECORDER_SF_sqss @ 0x1C002C784
 * Callers:
 *     ACPIBuildDevicePowerNodes @ 0x1C0015E24 (ACPIBuildDevicePowerNodes.c)
 *     ACPIBuildProcessSynchronizationList @ 0x1C0019B44 (ACPIBuildProcessSynchronizationList.c)
 *     ACPIBuildDeviceResetPowerNode @ 0x1C004B128 (ACPIBuildDeviceResetPowerNode.c)
 *     ACPIBuildWakeEventDeviceContext @ 0x1C004C584 (ACPIBuildWakeEventDeviceContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_sqss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        const char *a6,
        char a7,
        const char *a8,
        const char *a9)
{
  const char *v9; // rdi
  const char *v10; // rsi
  const char *v11; // rbp
  unsigned __int64 v13; // r14
  unsigned int v14; // r12d
  __int64 v15; // rbx
  int v16; // eax
  unsigned __int8 v17; // cf
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v22; // r11
  __int64 v23; // r9
  __int64 v24; // r9
  const char *v25; // r14
  __int64 v26; // r8
  const char *v27; // r10
  __int64 v28; // rdx
  __int64 v29; // rdx
  const char *v30; // rcx
  int v31; // [rsp+20h] [rbp-88h]
  unsigned __int16 v33; // [rsp+C8h] [rbp+20h]

  v33 = a4;
  v9 = a9;
  v10 = a8;
  v11 = a6;
  v13 = (unsigned __int64)a3 >> 16;
  v14 = a2;
  v15 = -1LL;
  v16 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v13 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  v17 = _bittest(&v16, ((_BYTE)a3 - 1) & 0x1F);
  v18 = 5LL;
  if ( v17 )
  {
    v22 = 10 * v13;
    if ( *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v13 + 1) >= a2 )
    {
      if ( a9 )
      {
        v23 = -1LL;
        do
          ++v23;
        while ( a9[v23] );
        v24 = v23 + 1;
      }
      else
      {
        v24 = 5LL;
      }
      v25 = a9;
      if ( !a9 )
        v25 = "NULL";
      if ( a8 )
      {
        v26 = -1LL;
        do
          ++v26;
        while ( a8[v26] );
        v18 = v26 + 1;
      }
      v27 = a8;
      if ( !a8 )
        v27 = "NULL";
      if ( a6 )
      {
        v28 = -1LL;
        do
          ++v28;
        while ( a6[v28] );
        v29 = v28 + 1;
      }
      else
      {
        v29 = 5LL;
      }
      v30 = a6;
      if ( !a6 )
        v30 = "NULL";
      ((void (__fastcall *)(_QWORD, __int64, const ULONG_PTR *, _QWORD, const char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
        *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + v22),
        43LL,
        &WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids,
        v33,
        v30,
        v29,
        &a7,
        8LL,
        v27,
        v18,
        v25,
        v24,
        0LL);
      a4 = v33;
    }
  }
  if ( v9 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( v9[v19] );
  }
  if ( v10 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( v10[v20] );
  }
  if ( a6 )
  {
    do
      ++v15;
    while ( a6[v15] );
  }
  if ( !a6 )
    v11 = "NULL";
  LOWORD(v31) = a4;
  return WppAutoLogTrace(a1, v14, a3, &WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids, v31, v11);
}
