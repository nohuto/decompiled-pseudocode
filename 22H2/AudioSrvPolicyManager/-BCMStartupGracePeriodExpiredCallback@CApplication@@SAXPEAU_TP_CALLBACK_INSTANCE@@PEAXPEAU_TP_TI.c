/*
 * XREFs of ?BCMStartupGracePeriodExpiredCallback@CApplication@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180012CC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x1800050FC (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180005724 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??$QueueApplicationManagerWorkItem@UBCMStartupGracePeriodExpiredContext@@@@YAJP8CApplicationManager@@EAAJPEAUBCMStartupGracePeriodExpiredContext@@@Z0@Z @ 0x180018220 (--$QueueApplicationManagerWorkItem@UBCMStartupGracePeriodExpiredContext@@@@YAJP8CApplicationMana.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180039D98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall CApplication::BCMStartupGracePeriodExpiredCallback(
        PTP_CALLBACK_INSTANCE Instance,
        PVOID Context,
        PTP_TIMER Timer)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v5; // rax
  __int64 v6; // rcx
  void *v7; // rbx
  int v8; // edi

  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 8uLL);
  v7 = v5;
  if ( v5 )
    *v5 = Context;
  else
    v7 = 0LL;
  if ( v7 )
  {
    v8 = QueueApplicationManagerWorkItem<BCMStartupGracePeriodExpiredContext>(v6, v7);
    if ( v8 >= 0 )
      v7 = 0LL;
  }
  else
  {
    v8 = -2147024882;
  }
  operator delete(v7, (const struct std::nothrow_t *)8);
  if ( v8 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x22u, &WPP_8ab93343ef2e3d885d031f030701e2ed_Traceguids, v8);
    }
    AudPolicyLogError("CApplication::BCMStartupGracePeriodExpiredCallback", 2359, v8);
  }
}
