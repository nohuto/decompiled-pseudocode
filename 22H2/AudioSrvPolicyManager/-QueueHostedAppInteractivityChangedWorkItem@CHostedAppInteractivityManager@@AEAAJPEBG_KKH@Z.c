/*
 * XREFs of ?QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z @ 0x180022174
 * Callers:
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z @ 0x180021E3C (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x1800050FC (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180005724 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??$QueueApplicationManagerWorkItem@VHostedAppStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAVHostedAppStateChangedContext@@@Z0@Z @ 0x18002239C (--$QueueApplicationManagerWorkItem@VHostedAppStateChangedContext@@@@YAJP8CApplicationManager@@EA.c)
 *     ?CreateInstance@HostedAppStateChangedContext@@SAJPEBG_KKHPEAPEAV1@@Z @ 0x18002CECC (-CreateInstance@HostedAppStateChangedContext@@SAJPEBG_KKHPEAPEAV1@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180039D98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CHostedAppInteractivityManager::QueueHostedAppInteractivityChangedWorkItem(
        CHostedAppInteractivityManager *this,
        const unsigned __int16 *a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5)
{
  int v5; // edi
  int v6; // eax
  __int64 v7; // rcx
  struct HostedAppStateChangedContext *v8; // rbx
  struct HostedAppStateChangedContext *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  v5 = 0;
  if ( g_ApplicationManager )
  {
    v6 = HostedAppStateChangedContext::CreateInstance(a2, a3, a4, a5, &v10);
    v8 = v10;
    v5 = v6;
    if ( v6 >= 0 )
    {
      v5 = QueueApplicationManagerWorkItem<HostedAppStateChangedContext>(v7, v10);
      if ( v5 >= 0 )
        v8 = 0LL;
    }
    if ( v8 )
    {
      if ( *(_QWORD *)v8 )
      {
        CoTaskMemFree(*(LPVOID *)v8);
        *(_QWORD *)v8 = 0LL;
      }
      operator delete(v8, (const struct std::nothrow_t *)0x18);
    }
    if ( v5 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x12u, &WPP_8b174e4b3d6138c7fcfc76c86feeee8f_Traceguids, v5);
      }
      AudPolicyLogError("CHostedAppInteractivityManager::QueueHostedAppInteractivityChangedWorkItem", 516, v5);
    }
  }
  return (unsigned int)v5;
}
