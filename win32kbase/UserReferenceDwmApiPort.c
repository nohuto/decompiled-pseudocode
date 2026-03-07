PVOID __fastcall UserReferenceDwmApiPort(__int64 a1)
{
  int v1; // edi
  struct _ERESOURCE *v2; // rbx
  PVOID DeviceContext; // rbx

  v1 = 0;
  v2 = *(struct _ERESOURCE **)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 72LL);
  if ( !ExIsResourceAcquiredExclusiveLite(v2) && !ExIsResourceAcquiredSharedLite(v2) )
  {
    GreLockDwmState();
    v1 = 1;
  }
  DeviceContext = WPP_MAIN_CB.Queue.Wcb.DeviceContext;
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceContext )
    ObfReferenceObject(WPP_MAIN_CB.Queue.Wcb.DeviceContext);
  if ( v1 )
    GreUnlockDwmState();
  return DeviceContext;
}
