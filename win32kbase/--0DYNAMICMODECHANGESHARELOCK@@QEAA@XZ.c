DYNAMICMODECHANGESHARELOCK *__fastcall DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK(
        DYNAMICMODECHANGESHARELOCK *this)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rcx
  int v6; // r8d

  v2 = *(_QWORD *)(SGDGetSessionState(this) + 24);
  v3 = *(_QWORD *)(v2 + 80);
  if ( v3 )
    ExEnterPriorityRegionAndAcquireResourceShared(v3);
  v4 = *(_QWORD *)(v2 + 80);
  v5 = *(_QWORD *)(SGDGetSessionState(v3) + 24);
  if ( *(_DWORD *)(v5 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(
      v5,
      (unsigned int)&LockAcquireShared,
      v6,
      v4,
      (__int64)L"GreBaseGlobals.hsemDynamicModeChange");
  return this;
}
