__int64 GreSfmDwmShutdown()
{
  __int64 v0; // rbx
  __int64 result; // rax
  struct _ERESOURCE *v2; // rcx

  v0 = *(_QWORD *)(SGDGetSessionState() + 24);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v0 + 72));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *(_QWORD *)(v0 + 72), 7LL);
  SfmTokenArray::DeInitialize(*(SfmTokenArray **)(v0 + 6472));
  if ( qword_1C02D5FA8 && (int)qword_1C02D5FA8() >= 0 && qword_1C02D5FB0 )
    qword_1C02D5FB0();
  result = EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState", *(_QWORD *)(v0 + 72));
  v2 = *(struct _ERESOURCE **)(v0 + 72);
  if ( v2 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v2);
    return PsLeavePriorityRegion();
  }
  return result;
}
