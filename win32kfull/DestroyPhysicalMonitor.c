__int64 __fastcall DestroyPhysicalMonitor(void *a1)
{
  __int64 v2; // rax

  v2 = SGDGetSessionState(a1);
  return CMonitorAPI::DestroyPhysicalMonitor(*(CMonitorAPI **)(*(_QWORD *)(v2 + 32) + 8728LL), a1);
}
