/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qqS @ 0x1C0095C04
 * Callers:
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0094CDC (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WPP_RECORDER_AND_TRACE_SF_qqS(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        char a10,
        const char *a11)
{
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  const char *v18; // rcx
  int v19; // [rsp+20h] [rbp-68h]

  v11 = (__int64)a11;
  v12 = -1LL;
  if ( a2 )
  {
    if ( a11 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( *(_WORD *)&a11[2 * v16] );
      v17 = 2 * v16 + 2;
    }
    else
    {
      v17 = 10LL;
    }
    v18 = a11;
    if ( !a11 )
      v18 = L"NULL";
    ((void (__fastcall *)(__int64, __int64, void *, __int64, char *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      &WPP_a5ab45ac81c5376cb65aab9e372e2957_Traceguids,
      17LL,
      &a9,
      8LL,
      &a10,
      8LL,
      v18,
      v17,
      0LL);
  }
  if ( a3 )
  {
    if ( v11 )
    {
      do
        ++v12;
      while ( *(_WORD *)(v11 + 2 * v12) );
    }
    LOWORD(v19) = 17;
    WppAutoLogTrace(a4, 4LL, 8LL, &WPP_a5ab45ac81c5376cb65aab9e372e2957_Traceguids, v19, &a9, 8LL, &a10);
  }
}
