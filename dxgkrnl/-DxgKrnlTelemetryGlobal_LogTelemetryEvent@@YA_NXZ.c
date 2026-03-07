bool DxgKrnlTelemetryGlobal_LogTelemetryEvent(void)
{
  bool v0; // di
  __int64 v1; // rbx
  unsigned int v2; // ecx
  unsigned int v3; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v0 = 0;
  v1 = MEMORY[0xFFFFF78000000014];
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_1C013BA68, &LockHandle);
  v2 = dword_1C013BA58;
  if ( v1 - g_DxgKrnlTelemetryProviderGlobal > 600000000 )
  {
    if ( !dword_1C013BA58 )
    {
LABEL_9:
      v0 = v2 < 0x3E8;
      goto LABEL_10;
    }
    v3 = 10000000 * ((v1 - g_DxgKrnlTelemetryProviderGlobal) / 60);
    if ( dword_1C013BA58 <= v3 )
      v2 = 0;
    else
      v2 = dword_1C013BA58 - v3;
LABEL_8:
    dword_1C013BA58 = v2;
    goto LABEL_9;
  }
  if ( (unsigned int)dword_1C013BA58 < 0x3E8 )
  {
    v2 = dword_1C013BA58 + 1;
    goto LABEL_8;
  }
LABEL_10:
  g_DxgKrnlTelemetryProviderGlobal = v1;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v0;
}
