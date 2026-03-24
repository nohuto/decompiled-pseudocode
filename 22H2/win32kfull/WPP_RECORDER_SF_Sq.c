/*
 * XREFs of WPP_RECORDER_SF_Sq @ 0x1C00DA210
 * Callers:
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00D84E8 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_Sq(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, const char *a6, ...)
{
  struct RECORDER_LOG__ *v6; // r14
  __int64 v7; // rdi
  const char *v8; // rbx
  __int64 v10; // rsi
  bool v11; // zf
  __int64 v13; // rax
  __int64 v14; // rdx
  const char *v15; // rcx
  int v16; // [rsp+20h] [rbp-48h]
  va_list va; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = gFullLog;
  v7 = -1LL;
  v8 = a6;
  v10 = 10LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a6 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( *(_WORD *)&a6[2 * v13] );
      v14 = 2 * v13 + 2;
    }
    else
    {
      v14 = 10LL;
    }
    v15 = a6;
    if ( !a6 )
      v15 = L"NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_4cc55f0eccd63a8558931143e45fab5e_Traceguids,
      a4,
      v15,
      v14,
      va,
      8LL,
      0LL);
  }
  v11 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( *(_WORD *)&a6[2 * v7] );
    v10 = 2 * v7 + 2;
    v11 = a6 == 0LL;
  }
  if ( v11 )
    v8 = L"NULL";
  LOWORD(v16) = a4;
  return WppAutoLogTrace(v6, 4LL, 8LL, &WPP_4cc55f0eccd63a8558931143e45fab5e_Traceguids, v16, v8, v10, va, 8LL, 0LL);
}
