/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qS @ 0x1C009C60C
 * Callers:
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C009C3C0 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_qS(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9,
        const char *a10)
{
  _UNKNOWN **result; // rax
  const char *v11; // rbx
  __int64 v12; // rdi
  bool v16; // zf
  __int64 v17; // rax
  __int64 v18; // rax
  const char *v19; // rcx
  int v20; // [rsp+20h] [rbp-48h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = &retaddr;
  v11 = a10;
  v12 = -1LL;
  if ( a2 )
  {
    if ( a10 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( *(_WORD *)&a10[2 * v17] );
      v18 = 2 * v17 + 2;
    }
    else
    {
      v18 = 10LL;
    }
    v19 = a10;
    if ( !a10 )
      v19 = L"NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_580b03b5f0a135a81a235548571d0f77_Traceguids,
                            23LL,
                            &a9,
                            8LL,
                            v19,
                            v18,
                            0LL);
  }
  if ( a3 )
  {
    v16 = v11 == 0LL;
    if ( v11 )
    {
      do
        ++v12;
      while ( *(_WORD *)&v11[2 * v12] );
      v16 = v11 == 0LL;
    }
    if ( v16 )
      v11 = L"NULL";
    LOWORD(v20) = 23;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          8LL,
                          &WPP_580b03b5f0a135a81a235548571d0f77_Traceguids,
                          v20,
                          &a9,
                          8LL,
                          v11);
  }
  return result;
}
