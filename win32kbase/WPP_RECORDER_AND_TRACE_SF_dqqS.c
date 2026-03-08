/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dqqS @ 0x1C01C7E6C
 * Callers:
 *     rimOnPnpArrived @ 0x1C00889C0 (rimOnPnpArrived.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WPP_RECORDER_AND_TRACE_SF_dqqS(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        unsigned __int16 a7,
        int a8,
        char a9,
        char a10,
        char a11,
        const wchar_t *a12)
{
  const wchar_t *v12; // rbx
  __int64 v13; // rdi
  struct RECORDER_LOG__ *v14; // r15
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  const wchar_t *v20; // rcx
  bool v21; // zf
  int v22; // [rsp+20h] [rbp-78h]
  __int64 v23; // [rsp+70h] [rbp-28h]
  __int64 v24; // [rsp+78h] [rbp-20h]

  v12 = a12;
  v13 = -1LL;
  v14 = gRimLog;
  v17 = 10LL;
  if ( a2 )
  {
    if ( a12 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a12[v18] );
      v19 = 2 * v18 + 2;
    }
    else
    {
      v19 = 10LL;
    }
    v20 = a12;
    if ( !a12 )
      v20 = L"NULL";
    ((void (__fastcall *)(__int64, __int64, void *, _QWORD, char *, __int64, char *, __int64, char *, __int64, const wchar_t *, __int64, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
      a1,
      43LL,
      &WPP_89c3e44078983ba1070baf237427a4e9_Traceguids,
      a7,
      &a9,
      4LL,
      &a10,
      8LL,
      &a11,
      8LL,
      v20,
      v19,
      0LL);
  }
  if ( a3 )
  {
    v21 = v12 == 0LL;
    if ( v12 )
    {
      do
        ++v13;
      while ( v12[v13] );
      v17 = 2 * v13 + 2;
      v21 = v12 == 0LL;
    }
    if ( v21 )
      v12 = L"NULL";
    LOWORD(v22) = a7;
    WppAutoLogTrace(
      v14,
      4LL,
      1LL,
      &WPP_89c3e44078983ba1070baf237427a4e9_Traceguids,
      v22,
      &a9,
      4LL,
      &a10,
      8LL,
      &a11,
      8LL,
      v12,
      v17,
      0LL,
      v23,
      v24);
  }
}
