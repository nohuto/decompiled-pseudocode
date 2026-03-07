__int64 __fastcall CreatePhysicalMonitorWrap(struct _LUID *a1, unsigned int a2, void **a3)
{
  __int64 v6; // rax

  v6 = SGDGetSessionState(a1);
  return CMonitorAPI::CreatePhysicalMonitor(*(CMonitorAPI **)(*(_QWORD *)(v6 + 32) + 8728LL), a1, a2, a3);
}
