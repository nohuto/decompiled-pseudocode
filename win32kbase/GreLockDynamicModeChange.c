__int64 __fastcall GreLockDynamicModeChange(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v1 + 80));
  return EtwTraceGreLockAcquireSemaphoreExclusive(
           (__int64)L"GreBaseGlobals.hsemDynamicModeChange",
           *(_QWORD *)(v1 + 80),
           1);
}
