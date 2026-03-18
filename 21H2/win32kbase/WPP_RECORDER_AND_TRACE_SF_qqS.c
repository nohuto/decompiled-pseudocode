/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qqS @ 0x1C01A1768
 * Callers:
 *     rimOnPnpArrived @ 0x1C004A09C (rimOnPnpArrived.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WPP_RECORDER_AND_TRACE_SF_qqS(
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
        const wchar_t *a11)
{
  struct RECORDER_LOG__ *v11; // r15
  __int64 v12; // rdi
  const wchar_t *v13; // rbx
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  const wchar_t *v19; // rcx
  bool v20; // zf
  int v21; // [rsp+20h] [rbp-68h]
  __int64 v22; // [rsp+60h] [rbp-28h]
  __int64 v23; // [rsp+68h] [rbp-20h]

  v11 = gRimLog;
  v12 = -1LL;
  v13 = a11;
  v16 = 10LL;
  if ( a2 )
  {
    if ( a11 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a11[v17] );
      v18 = 2 * v17 + 2;
    }
    else
    {
      v18 = 10LL;
    }
    v19 = a11;
    if ( !a11 )
      v19 = L"NULL";
    ((void (__fastcall *)(__int64, __int64, void *, _QWORD, char *, __int64, char *, __int64, const wchar_t *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      &WPP_3100a0ce65ca3ababb0b99fd70935186_Traceguids,
      a7,
      &a9,
      8LL,
      &a10,
      8LL,
      v19,
      v18,
      0LL);
  }
  if ( a3 )
  {
    v20 = v13 == 0LL;
    if ( v13 )
    {
      do
        ++v12;
      while ( v13[v12] );
      v16 = 2 * v12 + 2;
      v20 = v13 == 0LL;
    }
    if ( v20 )
      v13 = L"NULL";
    LOWORD(v21) = a7;
    WppAutoLogTrace(
      v11,
      4LL,
      1LL,
      &WPP_3100a0ce65ca3ababb0b99fd70935186_Traceguids,
      v21,
      &a9,
      8LL,
      &a10,
      8LL,
      v13,
      v16,
      0LL,
      v22,
      v23);
  }
}
