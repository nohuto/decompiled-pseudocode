void __fastcall xxxProcessTSFEvent(struct tagNOTIFY *a1)
{
  __int64 v2; // rcx
  struct tagTHREADINFO *v3; // rax
  int v4; // r9d
  int v5; // eax
  __int64 v6; // r10
  int v7; // r8d

  if ( !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainWinEventLock) )
    __int2c();
  v3 = PtiCurrentShared(v2);
  v4 = *((_DWORD *)a1 + 7);
  *((_QWORD *)a1 + 8) = v3;
  v5 = TSFRangeFromEvent(v4, 0);
  if ( (*(_DWORD *)(*(_QWORD *)(v6 + 448) + 24LL) & (v7 | v5) & 0x1703) != 0 )
    xxxCallTSFNotifyHook(a1);
  *((_QWORD *)a1 + 8) = 0LL;
  if ( !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainWinEventLock) )
    __int2c();
  RemoveNotify((struct tagNOTIFY ***)a1);
}
