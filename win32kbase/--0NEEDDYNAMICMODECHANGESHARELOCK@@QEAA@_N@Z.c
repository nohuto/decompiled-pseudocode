NEEDDYNAMICMODECHANGESHARELOCK *__fastcall NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
        NEEDDYNAMICMODECHANGESHARELOCK *this,
        char a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx

  *(_BYTE *)this = a2;
  if ( a2 )
  {
    v3 = *(_QWORD *)(SGDGetSessionState(this) + 24);
    v4 = *(_QWORD *)(v3 + 80);
    if ( v4 )
      ExEnterPriorityRegionAndAcquireResourceShared(v4);
    EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDynamicModeChange", *(_QWORD *)(v3 + 80));
  }
  return this;
}
