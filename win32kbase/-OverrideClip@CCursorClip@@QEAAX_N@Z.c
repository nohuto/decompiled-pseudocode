void __fastcall CCursorClip::OverrideClip(CCursorClip *this, unsigned __int8 a2)
{
  __int64 v2; // rdi
  int v3; // esi
  int v4; // eax
  bool v5; // sf

  v2 = *((_QWORD *)&WPP_MAIN_CB.Reserved + 1);
  v3 = a2;
  CPushLock::AcquireLockExclusive((CPushLock *)(*((_QWORD *)&WPP_MAIN_CB.Reserved + 1) + 32LL));
  v4 = 2 * v3 - 1;
  v5 = v4 + *(_DWORD *)(v2 + 256) < 0;
  *(_DWORD *)(v2 + 256) += v4;
  if ( v5 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 98);
  CPushLock::ReleaseLock((CPushLock *)(v2 + 32));
}
