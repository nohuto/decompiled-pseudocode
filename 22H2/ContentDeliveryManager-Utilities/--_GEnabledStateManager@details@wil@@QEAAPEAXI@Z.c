/*
 * XREFs of ??_GEnabledStateManager@details@wil@@QEAAPEAXI@Z @ 0x18001769C
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x1800DAD50 (wil--details--_dynamic_atexit_destructor_for__g_enabledStateManager__.c)
 * Callees:
 *     ?WilApi_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x18000C2A4 (-WilApi_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSC.c)
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x18000C6FC (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x180017D7C (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 */

wil::details::EnabledStateManager *__fastcall wil::details::EnabledStateManager::`scalar deleting destructor'(
        wil::details::EnabledStateManager *this)
{
  struct _TP_TIMER *v2; // rsi
  DWORD LastError; // ebx
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v4; // rdx
  void *v5; // rbx
  HANDLE ProcessHeap; // rax
  void *v7; // rbx
  HANDLE v8; // rax
  wil::details *v9; // rcx
  wil::details *v10; // rcx
  struct _TP_TIMER *v11; // rcx

  *(_BYTE *)this = 0;
  v2 = (struct _TP_TIMER *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    LastError = GetLastError();
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v2);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 2) = 0LL;
  *(_BYTE *)this = 0;
  wil::details::EnabledStateManager::RecordCachedUsageUnderLock(this);
  v5 = (void *)*((_QWORD *)this + 13);
  *((_QWORD *)this + 13) = 0LL;
  if ( v5 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v5);
  }
  v7 = (void *)*((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = 0LL;
  if ( v7 )
  {
    v8 = GetProcessHeap();
    HeapFree(v8, 0, v7);
  }
  v9 = (wil::details *)*((_QWORD *)this + 5);
  if ( v9 )
    wil::details::WilApi_UnsubscribeFeatureStateChangeNotification(v9, v4);
  v10 = (wil::details *)*((_QWORD *)this + 4);
  if ( v10 )
    wil::details::WilApi_UnsubscribeFeatureStateChangeNotification(v10, v4);
  v11 = (struct _TP_TIMER *)*((_QWORD *)this + 2);
  if ( v11 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v11);
  return this;
}
