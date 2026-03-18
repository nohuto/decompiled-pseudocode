/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dqqS @ 0x1C019A2AC
 * Callers:
 *     rimOnPnpArrived @ 0x1C0076A78 (rimOnPnpArrived.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
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
  __int64 v12; // rbx
  __int64 v13; // rdi
  struct RECORDER_LOG__ *v14; // r15
  __int64 v17; // rax
  __int64 v18; // rax
  const wchar_t *v19; // rcx
  int v20; // [rsp+20h] [rbp-78h]

  v12 = (__int64)a12;
  v13 = -1LL;
  v14 = gRimLog;
  if ( a2 )
  {
    if ( a12 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a12[v17] );
      v18 = 2 * v17 + 2;
    }
    else
    {
      v18 = 10LL;
    }
    v19 = a12;
    if ( !a12 )
      v19 = L"NULL";
    ((void (__fastcall *)(__int64, __int64, void *, _QWORD, char *, __int64, char *, __int64, char *, __int64, const wchar_t *, __int64, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
      a1,
      43LL,
      &WPP_772c79a03a0531bfc5b802d15a9024f9_Traceguids,
      a7,
      &a9,
      4LL,
      &a10,
      8LL,
      &a11,
      8LL,
      v19,
      v18,
      0LL);
  }
  if ( a3 )
  {
    if ( v12 )
    {
      do
        ++v13;
      while ( *(_WORD *)(v12 + 2 * v13) );
    }
    LOWORD(v20) = a7;
    WppAutoLogTrace(v14, 4LL, 1LL, &WPP_772c79a03a0531bfc5b802d15a9024f9_Traceguids, v20, &a9, 4LL, &a10);
  }
}
