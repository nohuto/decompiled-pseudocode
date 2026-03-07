__int64 __fastcall ExpInitializeTimeZoneInformation(PVOID DeferredContext, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = a2 + 448;
  KeInitializeDpc((PRKDPC)(a2 + 448), (PKDEFERRED_ROUTINE)ExpTimeZoneDpcRoutine, DeferredContext);
  *(_QWORD *)(v2 + 128) = 0LL;
  *(_QWORD *)(v2 + 144) = ExpTimeZoneWork;
  *(_QWORD *)(v2 + 152) = DeferredContext;
  KeInitializeTimerEx((PKTIMER)(v2 + 64), NotificationTimer);
  KeInitializeDpc((PRKDPC)(a2 + 768), (PKDEFERRED_ROUTINE)ExpNextYearDpcRoutine, DeferredContext);
  *(_QWORD *)(a2 + 896) = 0LL;
  *(_QWORD *)(a2 + 912) = ExpTimeZoneWork;
  *(_QWORD *)(a2 + 920) = DeferredContext;
  KeInitializeTimerEx((PKTIMER)(a2 + 832), NotificationTimer);
  KeInitializeDpc((PRKDPC)(a2 + 608), (PKDEFERRED_ROUTINE)ExpCenturyDpcRoutine, DeferredContext);
  *(_QWORD *)(a2 + 736) = 0LL;
  *(_QWORD *)(a2 + 752) = ExpTimeZoneWork;
  *(_QWORD *)(a2 + 760) = DeferredContext;
  KeInitializeTimerEx((PKTIMER)(a2 + 672), NotificationTimer);
  result = 1LL;
  *(_OWORD *)(a2 + 944) = 0LL;
  *(_OWORD *)(a2 + 968) = 0LL;
  *(_DWORD *)(a2 + 946) = 65537;
  *(_WORD *)(a2 + 956) = 1;
  *(_DWORD *)(a2 + 970) = 65537;
  *(_WORD *)(a2 + 980) = 1;
  return result;
}
