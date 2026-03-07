__int64 __fastcall BcdFlushStore(__int64 a1)
{
  char IsOfflineHandle; // di
  NTSTATUS v3; // eax
  unsigned int v4; // r8d
  void *v6; // rax
  unsigned int v7; // ebx

  IsOfflineHandle = BiIsOfflineHandle(a1);
  v3 = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( v3 >= 0 )
  {
    v6 = (void *)BiSanitizeHandle(a1);
    v7 = ZwFlushKey(v6);
    BiReleaseBcdSyncMutant(IsOfflineHandle);
    return v7;
  }
  else
  {
    BiLogMessage(4LL, L"BcdFlushStore: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v3);
    return v4;
  }
}
