/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qqS @ 0x1C019A458
 * Callers:
 *     rimOnPnpArrived @ 0x1C0076A78 (rimOnPnpArrived.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
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
  __int64 v11; // rbx
  __int64 v12; // rdi
  struct RECORDER_LOG__ *v13; // r15
  __int64 v16; // rax
  __int64 v17; // rax
  const wchar_t *v18; // rcx
  int v19; // [rsp+20h] [rbp-68h]

  v11 = (__int64)a11;
  v12 = -1LL;
  v13 = gRimLog;
  if ( a2 )
  {
    if ( a11 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a11[v16] );
      v17 = 2 * v16 + 2;
    }
    else
    {
      v17 = 10LL;
    }
    v18 = a11;
    if ( !a11 )
      v18 = L"NULL";
    ((void (__fastcall *)(__int64, __int64, void *, _QWORD, char *, __int64, char *, __int64, const wchar_t *, __int64, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
      a1,
      43LL,
      &WPP_772c79a03a0531bfc5b802d15a9024f9_Traceguids,
      a7,
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
    LOWORD(v19) = a7;
    WppAutoLogTrace(v13, 4LL, 1LL, &WPP_772c79a03a0531bfc5b802d15a9024f9_Traceguids, v19, &a9, 8LL, &a10);
  }
}
