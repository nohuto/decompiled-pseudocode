/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dds @ 0x1C02220B4
 * Callers:
 *     ?ResetArrangement@NotifyShell@@YAXPEBUMOVESIZEDATA@@W4ShellNotificationWindowKind@@@Z @ 0x1C02205FC (-ResetArrangement@NotifyShell@@YAXPEBUMOVESIZEDATA@@W4ShellNotificationWindowKind@@@Z.c)
 *     ?xxxArrangementInfoHandler@CallShell@@YA_NPEBUMOVESIZEDATA@@W4ShellNotificationWindowKind@@PEAU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x1C0220CBC (-xxxArrangementInfoHandler@CallShell@@YA_NPEBUMOVESIZEDATA@@W4ShellNotificationWindowKind@@PEAU_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WPP_RECORDER_AND_TRACE_SF_dds(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int16 a7,
        __int64 a8,
        char a9,
        char a10,
        const char *a11)
{
  const char *v11; // rdi
  __int64 v12; // rbx
  struct RECORDER_LOG__ *v13; // r14
  __int64 v16; // rax
  __int64 v17; // rax
  const char *v18; // rcx
  int v19; // [rsp+20h] [rbp-58h]

  v11 = a11;
  v12 = -1LL;
  v13 = gFullLog;
  if ( a2 )
  {
    if ( a11 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a11[v16] );
      v17 = v16 + 1;
    }
    else
    {
      v17 = 5LL;
    }
    v18 = a11;
    if ( !a11 )
      v18 = "NULL";
    ((void (__fastcall *)(__int64, __int64, void *, _QWORD, char *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      &WPP_d7b966a89d883197b9d56150dca2c288_Traceguids,
      a7,
      &a9,
      4LL,
      &a10,
      4LL,
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
      while ( v11[v12] );
    }
    LOWORD(v19) = a7;
    WppAutoLogTrace(v13, 4LL, 1LL, &WPP_d7b966a89d883197b9d56150dca2c288_Traceguids, v19, &a9, 4LL, &a10);
  }
}
