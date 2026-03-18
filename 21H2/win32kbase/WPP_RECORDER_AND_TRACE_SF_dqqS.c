/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dqqS @ 0x1C01A15BC
 * Callers:
 *     rimOnPnpArrived @ 0x1C004A09C (rimOnPnpArrived.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
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
  struct RECORDER_LOG__ *v12; // r15
  __int64 v13; // rdi
  const wchar_t *v14; // rbx
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  const wchar_t *v20; // rcx
  bool v21; // zf
  int v22; // [rsp+20h] [rbp-78h]

  v12 = gRimLog;
  v13 = -1LL;
  v14 = a12;
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
    ((void (__fastcall *)(__int64, __int64, void *, _QWORD, char *, __int64, char *, __int64, char *, __int64, const wchar_t *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      &WPP_3100a0ce65ca3ababb0b99fd70935186_Traceguids,
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
    v21 = v14 == 0LL;
    if ( v14 )
    {
      do
        ++v13;
      while ( v14[v13] );
      v17 = 2 * v13 + 2;
      v21 = v14 == 0LL;
    }
    if ( v21 )
      v14 = L"NULL";
    LOWORD(v22) = a7;
    WppAutoLogTrace(
      v12,
      4LL,
      1LL,
      &WPP_3100a0ce65ca3ababb0b99fd70935186_Traceguids,
      v22,
      &a9,
      4LL,
      &a10,
      8LL,
      &a11,
      8LL,
      v14,
      v17,
      0LL);
  }
}
