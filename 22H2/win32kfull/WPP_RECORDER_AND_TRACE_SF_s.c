/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_S @ 0x1C006E8A8
 * Callers:
 *     xxxSwitchDesktop @ 0x1C006BB2C (xxxSwitchDesktop.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WPP_RECORDER_AND_TRACE_SF_S(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        const char *a9)
{
  const char *v9; // rbx
  struct RECORDER_LOG__ *v10; // r14
  __int64 v11; // rdi
  __int64 v14; // rsi
  bool v15; // zf
  __int64 v16; // rax
  __int64 v17; // rax
  const char *v18; // rcx
  int v19; // [rsp+20h] [rbp-48h]

  v9 = a9;
  v10 = gFullLog;
  v11 = -1LL;
  v14 = 10LL;
  if ( a2 )
  {
    if ( a9 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( *(_WORD *)&a9[2 * v16] );
      v17 = 2 * v16 + 2;
    }
    else
    {
      v17 = 10LL;
    }
    v18 = a9;
    if ( !a9 )
      v18 = L"NULL";
    ((void (__fastcall *)(__int64, __int64, void *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      &WPP_580b03b5f0a135a81a235548571d0f77_Traceguids,
      25LL,
      v18,
      v17,
      0LL);
  }
  if ( a3 )
  {
    v15 = a9 == 0LL;
    if ( a9 )
    {
      do
        ++v11;
      while ( *(_WORD *)&a9[2 * v11] );
      v14 = 2 * v11 + 2;
      v15 = a9 == 0LL;
    }
    if ( v15 )
      v9 = L"NULL";
    LOWORD(v19) = 25;
    WppAutoLogTrace(v10, 4LL, 3LL, &WPP_580b03b5f0a135a81a235548571d0f77_Traceguids, v19, v9, v14, 0LL);
  }
}
