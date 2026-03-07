__int64 __fastcall DxEngLockShareSem(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v2 = *(_QWORD *)(v1 + 80);
  if ( v2 )
    ExEnterPriorityRegionAndAcquireResourceShared(v2);
  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"GreBaseGlobals.hsemDynamicModeChange", *(_QWORD *)(v1 + 80));
  return 1LL;
}
